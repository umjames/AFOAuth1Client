//
//  AFOAuth1ClientDelegate.h
//  
//
//  Created by Michael James on 2/25/14.
//
//

#import <Foundation/Foundation.h>

@class AFOAuth1Client;

@protocol AFOAuth1ClientDelegate <NSObject>

@optional
- (void)AFOAuth1Client: (AFOAuth1Client*)client presentUserAuthorizationURLRequest: (NSURLRequest*)userAuthorizationURLRequest;

@end
