//
//  AssetLibraryMultiSelect
//
//  Copyright (c) 2013 Alexander Belliotti. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ADBCollectionView.h"

@interface ADBCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, ADBCollectionViewDelegate>

- (UICollectionViewFlowLayout *)layout;

+ (Class)cellClass;
+ (NSString *)reuseIDString;

@end
