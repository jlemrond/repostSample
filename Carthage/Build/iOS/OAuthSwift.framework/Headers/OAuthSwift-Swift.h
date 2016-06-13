// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import Foundation.NSURLSession;
@import UIKit;
@import SafariServices;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSData (SWIFT_EXTENSION(OAuthSwift))
@end


@interface NSDate (SWIFT_EXTENSION(OAuthSwift))
@end


@interface NSMutableData (SWIFT_EXTENSION(OAuthSwift))
@end


@interface NSMutableData (SWIFT_EXTENSION(OAuthSwift))
@end


@interface NSURL (SWIFT_EXTENSION(OAuthSwift))
@end

@class OAuthSwiftClient;
@protocol OAuthSwiftURLHandlerType;

SWIFT_CLASS("_TtC10OAuthSwift10OAuthSwift")
@interface OAuthSwift : NSObject
@property (nonatomic, strong) OAuthSwiftClient * _Nonnull client;
@property (nonatomic, strong) id <OAuthSwiftURLHandlerType> _Nonnull authorize_url_handler;
+ (void)handleOpenURL:(NSURL * _Nonnull)url;
- (void)removeCallbackNotificationObserver;
@end

@class OAuthSwiftCredential;
@class NSURLResponse;
@class NSError;

SWIFT_CLASS("_TtC10OAuthSwift11OAuth1Swift")
@interface OAuth1Swift : OAuthSwift
@property (nonatomic) BOOL allowMissingOauthVerifier;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret requestTokenUrl:(NSString * _Nonnull)requestTokenUrl authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nonnull parameters;
- (void)authorizeWithCallbackURL:(NSURL * _Nonnull)callbackURL success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull, NSURLResponse * _Nullable, NSDictionary<NSString *, NSString *> * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
+ (void)handleOpenURL:(NSURL * _Nonnull)url;
@end


SWIFT_CLASS("_TtC10OAuthSwift11OAuth2Swift")
@interface OAuth2Swift : OAuthSwift
@property (nonatomic) BOOL accessTokenBasicAuthentification;
@property (nonatomic) BOOL allowMissingStateCheck;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl responseType:(NSString * _Nonnull)responseType;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl responseType:(NSString * _Nonnull)responseType contentType:(NSString * _Nonnull)contentType;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl responseType:(NSString * _Nonnull)responseType OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nonnull parameters;
- (void)authorizeWithCallbackURL:(NSURL * _Nonnull)callbackURL scope:(NSString * _Nonnull)scope state:(NSString * _Nonnull)state params:(NSDictionary<NSString *, NSString *> * _Nonnull)params success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull, NSURLResponse * _Nullable, NSDictionary<NSString *, NSString *> * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
+ (void)handleOpenURL:(NSURL * _Nonnull)url;
@end


enum ParamsLocation : NSInteger;
@class NSHTTPURLResponse;
@class NSURLRequest;
@class OAuthSwiftHTTPRequest;

SWIFT_CLASS("_TtC10OAuthSwift16OAuthSwiftClient")
@interface OAuthSwiftClient : NSObject
@property (nonatomic, readonly, strong) OAuthSwiftCredential * _Nonnull credential;
@property (nonatomic) enum ParamsLocation paramsLocation;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret accessToken:(NSString * _Nonnull)accessToken accessTokenSecret:(NSString * _Nonnull)accessTokenSecret OBJC_DESIGNATED_INITIALIZER;
- (void)get:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (void)post:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (void)put:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (void)delete:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (void)patch:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (OAuthSwiftHTTPRequest * _Nonnull)makeRequest:(NSURLRequest * _Nonnull)request;
- (OAuthSwiftHTTPRequest * _Nonnull)makeOAuthSwiftHTTPRequest:(OAuthSwiftHTTPRequest * _Nonnull)request;
- (void)postImage:(NSString * _Nonnull)urlString parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters image:(NSData * _Nonnull)image success:(void (^ _Nullable)(NSData * _Nonnull, NSHTTPURLResponse * _Nonnull))success failure:(void (^ _Nullable)(NSError * _Nonnull))failure;
- (NSData * _Nonnull)multiPartBodyFromParams:(NSDictionary<NSString *, id> * _Nonnull)parameters boundary:(NSString * _Nonnull)boundary;
@end

@class NSCoder;

SWIFT_CLASS("_TtC10OAuthSwift20OAuthSwiftCredential")
@interface OAuthSwiftCredential : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull oauth_token;
@property (nonatomic, copy) NSString * _Nonnull oauth_refresh_token;
@property (nonatomic, copy) NSString * _Nonnull oauth_token_secret;
@property (nonatomic, strong) NSDate * _Nullable oauth_token_expires_at;
@property (nonatomic, readonly, copy) NSString * _Nonnull oauth_verifier;
- (nonnull instancetype)initWithConsumer_key:(NSString * _Nonnull)consumer_key consumer_secret:(NSString * _Nonnull)consumer_secret OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithOauth_token:(NSString * _Nonnull)oauth_token oauth_token_secret:(NSString * _Nonnull)oauth_token_secret OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
+ (NSString * _Nonnull)generateNonce;
- (NSDictionary<NSString *, id> * _Nonnull)authorizationParameters:(NSData * _Nullable)body timestamp:(NSString * _Nonnull)timestamp nonce:(NSString * _Nonnull)nonce;
- (BOOL)isTokenExpired;
@end

@class NSMutableURLRequest;

SWIFT_CLASS("_TtC10OAuthSwift21OAuthSwiftHTTPRequest")
@interface OAuthSwiftHTTPRequest : NSObject <NSURLSessionDelegate>
+ (void (^ _Nonnull)(void (^ _Nonnull)(void)))executionContext;
+ (void)setExecutionContext:(void (^ _Nonnull)(void (^ _Nonnull)(void)))value;
- (void)cancel;
- (NSMutableURLRequest * _Nullable)makeRequestAndReturnError:(NSError * _Nullable * _Null_unspecified)error;
+ (NSMutableURLRequest * _Nullable)setupRequestForOAuth:(NSMutableURLRequest * _Nonnull)request headers:(NSDictionary<NSString *, NSString *> * _Nonnull)headers parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters dataEncoding:(NSUInteger)dataEncoding body:(NSData * _Nullable)body paramsLocation:(enum ParamsLocation)paramsLocation error:(NSError * _Nullable * _Null_unspecified)error;
@end

typedef SWIFT_ENUM(NSInteger, ParamsLocation) {
  ParamsLocationAuthorizationHeader = 0,
  ParamsLocationRequestURIQuery = 1,
};


SWIFT_PROTOCOL("_TtP10OAuthSwift24OAuthSwiftURLHandlerType_")
@protocol OAuthSwiftURLHandlerType
- (void)handle:(NSURL * _Nonnull)url;
@end

@class NSBundle;

SWIFT_CLASS("_TtC10OAuthSwift22OAuthWebViewController")
@interface OAuthWebViewController : UIViewController <OAuthSwiftURLHandlerType>
- (void)handle:(NSURL * _Nonnull)url;
- (void)doHandle:(NSURL * _Nonnull)url;
- (void)dismissWebViewController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class SFSafariViewController;
@class UIActivity;

SWIFT_CLASS("_TtC10OAuthSwift16SafariURLHandler")
@interface SafariURLHandler : NSObject <SFSafariViewControllerDelegate, OAuthSwiftURLHandlerType>
@property (nonatomic, readonly, strong) UIViewController * _Nonnull viewController;
@property (nonatomic) BOOL animated;
@property (nonatomic, copy) SFSafariViewController * _Nonnull (^ _Nonnull factory)(NSURL * _Nonnull);
@property (nonatomic, strong) id <SFSafariViewControllerDelegate> _Nullable delegate;
@property (nonatomic, copy) void (^ _Nullable presentCompletion)(void);
@property (nonatomic, copy) void (^ _Nullable dismissCompletion)(void);
- (nonnull instancetype)initWithViewController:(UIViewController * _Nonnull)viewController OBJC_DESIGNATED_INITIALIZER;
- (void)handle:(NSURL * _Nonnull)url;
- (NSArray<UIActivity *> * _Nonnull)safariViewController:(SFSafariViewController * _Nonnull)controller activityItemsForURL:(NSURL * _Nonnull)URL title:(NSString * _Nullable)title;
- (void)safariViewControllerDidFinish:(SFSafariViewController * _Nonnull)controller;
- (void)safariViewController:(SFSafariViewController * _Nonnull)controller didCompleteInitialLoad:(BOOL)didLoadSuccessfully;
@end


@interface UIApplication (SWIFT_EXTENSION(OAuthSwift))
@end


@interface UIViewController (SWIFT_EXTENSION(OAuthSwift))
@end

#pragma clang diagnostic pop
