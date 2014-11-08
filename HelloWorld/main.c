//
//  main.c
//  HelloWorld
//
//  Created by Innocenzo Tremamondo on 12/05/13.
//  Copyright (c) 2013 Innocenzo Tremamondo. All rights reserved.
//

#import <stdio.h>
#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    NSAutoreleasePool * pool= [[NSAutoreleasePool alloc] init]];
    
    NSDictionary *stati=
    [NSDictionary dictionaryWithObjectAndKeys:
     @"Arizona", @"AZ",
     @"California", @"CA",
     @"Nevada", @"NE",
     @"Hawaii", @"HI",
     nil];
    
    NSString qualcheStato= @"CA";
    
    NSlog(@" %@ is for %@", qualcheStato, [stati objectForKey: qualcheStato]):
    
    [pool drain];
    return 0;
    
}

