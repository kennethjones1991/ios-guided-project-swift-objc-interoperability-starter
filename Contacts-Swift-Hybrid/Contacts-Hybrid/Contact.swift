//
//  Contact.swift
//  Contacts-Hybrid
//
//  Created by Kenneth Jones on 12/2/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

import Foundation

@objcMembers
@objc(LSIContact)
class Contact: NSObject {
    var name: String
    var relationship: String?
    
    init(name: String, relationship: String? = nil) {
        self.name = name
        self.relationship = relationship
    }
}
