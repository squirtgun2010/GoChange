//
//  Change.swift
//  GoChange
//
//  Created by Nick Short on 26/02/2016.
//  Copyright © 2016 Nick Short. All rights reserved.
//

import Foundation
import CoreData


class Change:NSManagedObject{
    
    struct Keys{
        static let changeName = "changeName"
        static let changeDescription = "changeDescription"
        static let owner = "owner"
        static let firebaseLocation = "firebaseLocation"
        static let changeID = "changeID"
    }
    
    
    @NSManaged var changeName:String
    @NSManaged var changeDescription:String
    @NSManaged var owner:NSNumber
    @NSManaged var firebaseLocation:String
    @NSManaged var changeID:String
    
    @NSManaged var changeNeedingSolution:[Solution]
    
    
    
    override init(entity: NSEntityDescription, insertIntoManagedObjectContext context: NSManagedObjectContext?) {
        super.init(entity: entity, insertIntoManagedObjectContext: context)
    }
    
    
    init(dictionary:[String:AnyObject],context:NSManagedObjectContext){
        let entity = NSEntityDescription.entityForName("Change", inManagedObjectContext: context)!
        
        super.init(entity: entity, insertIntoManagedObjectContext: context)
        
        changeName = dictionary[Change.Keys.changeName] as! String
        changeDescription = dictionary[Change.Keys.changeDescription] as! String
        firebaseLocation = dictionary[Change.Keys.firebaseLocation] as! String
        changeID = dictionary[Change.Keys.changeID] as! String
        
        let boolValue = dictionary[Change.Keys.owner] as! Bool
        owner = NSNumber(bool: boolValue)
        
    }
    
    
    
    
}