// Copyright 2019 Google
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FIRHeartbeatInfo : NSObject

// TODO: Remove this class in future PRs (it will be replaced by `FIRHeartbeatLogger`).

// Enum representing the different heartbeat codes.
typedef NS_ENUM(NSInteger, FIRHeartbeatInfoCode) {
  FIRHeartbeatInfoCodeNone = 0,
  FIRHeartbeatInfoCodeSDK = 1,
  FIRHeartbeatInfoCodeGlobal = 2,
  FIRHeartbeatInfoCodeCombined = 3,
};

/**
 * Get heartbeat code required for the sdk.
 * @param heartbeatTag String representing the sdk heartbeat tag.
 * @return Heartbeat code indicating whether or not an sdk/global heartbeat
 * needs to be sent
 */
+ (FIRHeartbeatInfoCode)heartbeatCodeForTag:(NSString *)heartbeatTag;

@end

NS_ASSUME_NONNULL_END
