//
//  LoginViewController.swift
//  ChatsApp
//
//  Created by Admin on 6/27/22.
//


import FirebaseAuth
import FirebaseCore
import UIKit


class LoginViewController: UIViewController {

       
    @IBOutlet weak var EmailTextField: UITextField!
    
    @IBOutlet weak var PasswordTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.

    }


    @IBAction func LoginPressed(_ sender: UIButton) {
        if let email = EmailTextField.text, let password = PasswordTextField.text{
            
            Auth.auth().signIn(withEmail: email, password: password) { authResult, error in
                if let e = error{
                    print(e.localizedDescription)
                }else{
                    self.performSegue(withIdentifier: Constants.loginSegue, sender: self)
                }
             
            }
            
        }
    }
    
}
