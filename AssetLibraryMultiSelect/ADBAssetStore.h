//
//  AssetLibraryMultiSelect
//
//  Copyright (c) 2013 Alexander Belliotti. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kNotificationSendAssetsUpdated;
extern NSString *const kKeyNewToSendAssetsCount;
extern NSString *const kKeyTouchedItem;

@class ADBAssetItem;
@class ADBGroupItem;
@class ADBAssetReader;

@interface ADBAssetStore : NSObject

+ (ADBAssetStore *)instance;

- (NSArray *)assetItems;
- (NSUInteger)count;
- (NSUInteger)countForSelectedAssetsInGroup:(ADBGroupItem *)groupItem;

- (void)addAssetItem:(ADBAssetItem *)asset;
- (void)removeAssetItem:(ADBAssetItem *)asset;
- (void)removeAllItems;

- (ADBAssetItem *)itemAtIndex:(NSUInteger)index;

- (BOOL)containsAssetItem:(ADBAssetItem *)asset;
- (BOOL)assetItemIsSelected:(ADBAssetItem *)asset;

//useful for subclasses
- (BOOL)canAddAsset;
- (NSString *)selectedTitleString;

@end
