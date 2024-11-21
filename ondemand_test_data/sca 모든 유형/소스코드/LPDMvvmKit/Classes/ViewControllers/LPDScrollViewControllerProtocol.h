//
//  LPDScrollViewControllerProtocol.h
//  LPDMvvmKit
//
//  Created by foxsofter on 16/9/1.
//  Copyright © 2016年 eleme. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LPDViewControllerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LPDScrollViewControllerProtocol <LPDViewControllerProtocol>

/**
 *  @brief  设置下拉刷新当前页面上的数据，生效当且仅当scrollView被有效赋值
 *          当赋值为YES，可以出现下拉刷新控件，为NO时不出现，默认为NO
 */
@property (nonatomic, assign) BOOL needLoadingHeader;

/**
 *  @brief  设置列表中上滑加载更多数据，生效当且仅当loadingView被有效赋值
 *          当赋值为YES，可以出现上拉加载更多控件，为NO时不出现，默认为NO
 */
@property (nonatomic, assign) BOOL needLoadingFooter;

/**
 *  @brief  scrollView，可以是UIScrollView，
 *          UITableView，UICollectionView，UIWebView等
 *          loadingView赋值后，可以设置needLoading和needLoadingMore
 */
@property (nullable, nonatomic, weak) __kindof UIScrollView *scrollView;

@optional
/**
 *  @brief 初始化下拉刷新Header
 */
- (MJRefreshHeader *)customLoadingHeader:(MJRefreshComponentRefreshingBlock)refreshingBlock;

/**
 *  @brief 初始化上拉加载Footer
 */
- (MJRefreshFooter *)customLoadingFooter:(MJRefreshComponentRefreshingBlock)refreshingBlock;

@end

NS_ASSUME_NONNULL_END
