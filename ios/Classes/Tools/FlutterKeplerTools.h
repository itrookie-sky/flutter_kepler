//
//  FlutterAlibcTools.h
//  flutter_alibc
//
//  Created by 吴兴 on 2019/8/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlutterKeplerTools : NSObject
//判断String是否为空
+ (BOOL)isNil:(NSString *)string;
//Json转Dic
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
//判断是不是null，是就转nil
+ (id)nullToNil:(id)obj;
//改变类型
+(id)changeType:(id)myObj;
// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;

@end

NS_ASSUME_NONNULL_END
