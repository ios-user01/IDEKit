//
//  IDEKit_SrcEditViewExtensions.h
//  IDEKit
//
//  Created by Glenn Andreas on Tue Aug 19 2003.
//  Copyright (c) 2003, 2004 by Glenn Andreas
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Library General Public
//  License as published by the Free Software Foundation; either
//  version 2 of the License, or (at your option) any later version.
//  
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Library General Public License for more details.
//  
//  You should have received a copy of the GNU Library General Public
//  License along with this library; if not, write to the Free
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#import <Foundation/Foundation.h>
#import "IDEKit_SrcEditView.h"

@interface IDEKit_SrcEditView(MovementExtensions)
- (IBAction) transposeParameters: (id) sender;
- (IBAction) selectStatement: (id) sender;
- (IBAction) selectRoutine: (id) sender;
- (IBAction) selectParameter: (id) sender;
- (IBAction) moveToStartOfParmeter: (id) sender;
- (IBAction) moveToEndOfParameter: (id) sender;
- (IBAction) selectNextParameter: (id) sender;
- (IBAction) selectPreviousParameter: (id) sender;
- (IBAction) moveToStartOfStatement: (id) sender;
- (IBAction) moveToEndOfStatement: (id) sender;
- (IBAction) moveToStartOfRoutine: (id) sender;
- (IBAction) moveToEndOfRoutine: (id) sender;

- (IBAction) commentOutSelection: (id) sender;
- (IBAction) uncommentOutSelection: (id) sender;

- (IBAction) closeUnbalancedOpens: (id) sender;

- (IBAction) gotoLine: (id) sender;
- (IBAction) prefixSuffix: (id) sender;
- (IBAction) wordCount: (id) sender;

- (NSArray *) findIncludedFiles: (NSString *)partialPath flags: (NSInteger) flags;
@end

