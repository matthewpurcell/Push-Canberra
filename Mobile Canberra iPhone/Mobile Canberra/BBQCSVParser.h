// ************************************************************************************
//
//  BBQCSVParser.h
//  BBQKing
//
// ************************************************************************************

@interface BBQCSVParser : NSObject

// ************************************************************************************

// Create an array from a CSV NSData object
- (NSArray *)arrayFromCSVData:(NSData *)_csvData headerRow:(Boolean)_headerRow;
    
// ************************************************************************************

@end