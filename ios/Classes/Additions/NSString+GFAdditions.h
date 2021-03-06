@import Foundation;

/**
 *  提供`NSString`的通用扩展方法
 */
@interface NSString (GFAdditions)

/**
 * ---------------------------------------------------------------------------
 * @name 消息摘要
 * ---------------------------------------------------------------------------
 */

/**
 *  生成MD5信息摘要
 *
 *  @return 返回MD5信息摘要
 */
- (NSString *)jm_MD5Digest;

@end