//
//  AddIdeaViewController.swift
//  GoChange
//
//  Created by Nick Short on 06/02/2016.
//  Copyright © 2016 Nick Short. All rights reserved.
//

import UIKit

class AddIdeaViewController: UIViewController, UITextFieldDelegate, UITextViewDelegate,UITableViewDelegate {
    
    
    
    
    @IBOutlet weak var nameTextField: UITextField!
    @IBOutlet weak var detailTextView: UITextView!
    @IBOutlet weak var addNameButton: UIButton!
    @IBOutlet weak var addDetailButton: UIButton!
    
    @IBOutlet weak var addSolution: UIButton!
    
    @IBOutlet weak var petitionButton: UIButton!
    
    @IBOutlet weak var petitionTextField: UITextField!
    
    
    var currentNameData:String!
    var currentDetailData:String!
    
    
    var viewControllerStatus:String!
    
    
    var change:Change!
    //var changeID:String!
    //var solutionID:String!
    //var solutionCount:Int!
    //var index:Int!
    
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        self.navigationController?.title = "Add Solution"
        addNameButton.hidden = true
        addDetailButton.hidden = true
        
        addSolution.enabled = false
        addSolution.alpha = 0.5
        
        nameTextField.delegate = self
        detailTextView.delegate = self
        
        petitionTextField.enabled = false
        
                
    }
    
    override func viewWillAppear(animated: Bool) {
        
       //clear newSolutionArrays ready for new input
        TempChange.sharedInstance().newSolutionNameArray = []
        TempChange.sharedInstance().newSolutionDetailArray = []
        
    }
    
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    @IBAction func doneAddingIdea(sender: UIButton) {
        
        if(viewControllerStatus == "addingSolutionToExistingChange"){
            
            if(nameTextField.text != "" && detailTextView.text != ""){
            
                
                //Add data to existing arrays ready for going back to ViewFollowing to display in table and for firebase solutionCount / SaveNewChange
                TempChange.sharedInstance().solutionNameArray.addObject(nameTextField.text!)
                TempChange.sharedInstance().solutionDetailArray.addObject(detailTextView.text!)
                TempChange.sharedInstance().solutionVoteArray.addObject(0)
                TempChange.sharedInstance().solutionIDArray.addObject("newSolution")
                
                
                //Save data to newSolutionArrays ready for posting of SaveNewSoltion
                TempChange.sharedInstance().newSolutionNameArray.addObject(nameTextField.text!)
                TempChange.sharedInstance().newSolutionDetailArray.addObject(detailTextView.text!)
                
                _ = SaveNewSolution(change: self.change){
                    (result) in
                    
                }
                
                // dismiss view controller from navigation stack
                self.navigationController?.popViewControllerAnimated(true)
            }
        }else if(viewControllerStatus == "addingSolutionToNewChange"){
            
            if(nameTextField.text != "" && detailTextView.text != ""){
                
                TempChange.sharedInstance().solutionNameArray.addObject(nameTextField.text!)
                TempChange.sharedInstance().solutionDetailArray.addObject(detailTextView.text!)
                TempChange.sharedInstance().solutionVoteArray.addObject(0)
                TempChange.sharedInstance().solutionIDArray.addObject("newSolution")
                
                self.navigationController?.popViewControllerAnimated(true)
            }
        }
        
    }
    
    
    
    
    @IBAction func addNameClick(sender: AnyObject) {
        
        nameTextField.resignFirstResponder()
        addNameButton.hidden = true
        currentNameData = nameTextField.text
        
        if(nameTextField.text != "" && detailTextView.text != ""){
            addSolution.enabled = true
            addSolution.alpha = 1
        }
        
    }
    
    @IBAction func addDetailClick(sender: UIButton) {
        
        detailTextView.resignFirstResponder()
        addDetailButton.hidden = true
        currentDetailData = detailTextView.text
        
        //TODO: add check for "placeholder" text
        if(nameTextField.text != "" && detailTextView.text != ""){
            addSolution.enabled = true
            addSolution.alpha = 1
        }
    }
    
    
    
    //-------------textfield methods ---------------
    
    
    func textFieldDidBeginEditing(textField: UITextField) {
        addNameButton.hidden = false
    }
    
    
    
    //---------------------textView methods------------
    func textViewDidBeginEditing(textView: UITextView) {
        
        if(textView.text == "Please enter details of the solution you have..."){
            textView.text = ""
        }
        textView.textColor = UIColor.blackColor()
        addDetailButton.hidden = false
        addNameButton.hidden = true
        
    }
    
    
    
    
    
    
    //---------------petition methods--------------------
    
    @IBAction func addPetition(sender: UIButton) {
        
        //open web browser to go to change.org
        
        var controller:WebViewController
        controller = storyboard?.instantiateViewControllerWithIdentifier("WebViewController") as! WebViewController
        
        controller.urlString = GoChangeClient.Constants.basePetitionURL
        
        self.navigationController?.pushViewController(controller, animated: true)
        
        
    }
    
    
    
    
        
}


