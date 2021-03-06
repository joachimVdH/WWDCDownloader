//
//  DOMIteration.h
//  WWDCDownloader
//
//  Created by zach on 6/14/13.
//

#import <WebKit/WebKit.h>

@interface DOMNodeList (Additions)
- (void) enumerateObjectsUsingBlock:(void (^)(DOMObject *obj, unsigned idx, BOOL *stop)) block;
@end

@interface DOMHTMLCollection (Additions)
- (void) enumerateObjectsUsingBlock:(void (^)(DOMHTMLElement *obj, unsigned idx, BOOL *stop)) block;
@end
