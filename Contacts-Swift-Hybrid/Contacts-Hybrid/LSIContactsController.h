//
//  ContactsController.h
//  Contacts-Hybrid
//
//  Created by Kenneth Jones on 12/2/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LSIContact;

NS_SWIFT_NAME(ContactsController)
@interface LSIContactsController : NSObject

@property (nonatomic, readonly, copy, nonnull) NSArray<LSIContact *> *contacts;

- (nonnull LSIContact *)contactAtIndex:(NSInteger)index;

@property (nonatomic, readonly) NSInteger contactCount;

@end
