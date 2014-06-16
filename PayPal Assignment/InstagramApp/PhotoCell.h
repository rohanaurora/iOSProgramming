//
//  PhotoCell.h
//  InstagramApp
//
//  Created by Rohan Aurora on 6/14/14.
//  Copyright (c) 2014 Rohan Aurora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) NSDictionary *photo;

@end
