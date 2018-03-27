//
//  ViewController.h
//  QRCodeReader
//
//  Created by jason turner on 25/03/2018.
//  Copyright © 2018 jason turner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *bbitemStart;
- (IBAction)startStopReading:(id)sender;

@end

