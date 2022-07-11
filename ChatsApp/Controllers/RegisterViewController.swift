//
//  WelcomeViewController.swift
//  ChatsApp
//
//  Created by Admin on 6/27/22.
//

import UIKit
import FirebaseCore
import FirebaseAuth

class RegisterViewController: UIViewController {

   
    
    @IBOutlet weak var EmailTextField2: UITextField!

    @IBOutlet weak var PasswordTextField2: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
       

    }


    @IBAction func registerPressed(_ sender: UIButton) {
        if let email = EmailTextField2.text,let password = PasswordTextField2.text{
            
            Auth.auth().createUser(withEmail: email, password: password) { authResult, error in
                
                if let e = error{
                    print(e)
                }else{
                    // navigate to chat screen
                    self.performSegue(withIdentifier: Constants.registerSegue, sender: self)
                }
        
            }
        }
    }
    
}
