//
//  TitleLayer.h
//  MojaPiyoTataki
//
//  Created by Sei Takayuki on 13/09/03.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <GameKit/GameKit.h>
#import "cocos2d.h"

@interface TitleLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    
}
+(CCScene *) scene;

@end
