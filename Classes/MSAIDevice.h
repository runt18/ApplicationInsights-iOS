#import "MSAIObject.h"

@interface MSAIDevice : MSAIObject <NSCoding>

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) NSString *oemName;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *roleInstance;
@property (nonatomic, copy) NSString *roleName;
@property (nonatomic, copy) NSString *screenResolution;
@property (nonatomic, copy) NSString *type;

- (instancetype)initWithCoder:(NSCoder *)coder;

- (void)encodeWithCoder:(NSCoder *)coder;

@property (nonatomic, copy) NSString *machineName;

@end
