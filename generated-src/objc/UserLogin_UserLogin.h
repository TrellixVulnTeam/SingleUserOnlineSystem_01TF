// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from UserLogin.djinni

#import <Foundation/Foundation.h>
@class UserLogin_LoginStatusCallback;


@interface UserLogin_UserLogin : NSObject

- (int32_t)signUp:(nonnull NSString *)userName
              pwd:(nonnull NSString *)pwd
         callback:(nullable UserLogin_LoginStatusCallback *)callback;

- (int32_t)login:(nonnull NSString *)userName
             pwd:(nonnull NSString *)pwd
        callback:(nullable UserLogin_LoginStatusCallback *)callback;

@end
