//
//  ViewController.swift
//  ChatsApp
//
//  Created by Admin on 6/27/22.
//

import UIKit
import CLTypingLabel

class WelcomeViewController: UIViewController {

   
    @IBOutlet weak var titleLabel: CLTypingLabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        titleLabel.text = Constants.appName

    }


}

