//
//  OAMutableURLRequest.h
//  OAuthConsumer
//
//  Created by Jon Crosby on 10/19/07.
//  Copyright 2007 Kaboomerang LLC. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#import <Foundation/Foundation.h>
#import "RD_OAConsumer.h"
#import "RD_OAToken.h"
#import "RD_OAHMAC_SHA1SignatureProvider.h"
#import "RD_OASignatureProviding.h"
#import "NSMutableURLRequest+Parameters.h"
#import "NSURL+Base.h"


@interface RD_OAMutableURLRequest : NSMutableURLRequest {
@protected
    RD_OAConsumer *consumer;
    RD_OAToken *token;
    NSString *realm;
    NSString *__unsafe_unretained signature;
    id<RD_OASignatureProviding> signatureProvider;
    NSString *nonce;
    NSString *timestamp;
}
@property(unsafe_unretained, readonly) NSString *signature;
@property(readonly) NSString *nonce;
@property(nonatomic, readwrite, strong) NSArray *parameters;

- (id)initWithURL:(NSURL *)aUrl
		 consumer:(RD_OAConsumer *)aConsumer
			token:(RD_OAToken *)aToken
            realm:(NSString *)aRealm
signatureProvider:(id<RD_OASignatureProviding, NSObject>)aProvider;

- (id)initWithURL:(NSURL *)aUrl
		 consumer:(RD_OAConsumer *)aConsumer
			token:(RD_OAToken *)aToken
            realm:(NSString *)aRealm
signatureProvider:(id<RD_OASignatureProviding, NSObject>)aProvider
            nonce:(NSString *)aNonce
        timestamp:(NSString *)aTimestamp;

- (void)prepare;


- (void)_generateTimestamp;
- (void)_generateNonce;
- (NSString *)_signatureBaseString;

- (NSString *)URLStringWithoutQueryFromURL: (NSURL *) url;
- (NSString *) URLEncodedString: (NSString *) string;
@end
