//
//  CTMediator+Author.h
//  FFAuthorKit_Category
//
//  Created by Liu on 2019/1/30.
//

#import <CTMediator/CTMediator.h>
#import <FFAPIsKit/APIRequest.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Author)
- (UIViewController*)authorDetailViewController;
- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;
- (NSDictionary *)authorReformer;
- (APIRequest*)authorAPIRequest;
@end

NS_ASSUME_NONNULL_END
