//
//  AKMidiInput.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 7/21/15.
//  Copyright (c) 2015 AudioKit. All rights reserved.
//

#import "AKParameter+Operation.h"

@interface AKMidiInput : AKParameter

- (instancetype)initWithNoteNumber:(AKParameter *)noteNumber
                          Velocity:(AKParameter *)velocity;
@end
