// part2.h by Petter Wahlman, http://www.twitter.com/badeip
// Solution to Part 2 of http://www.canyoucrackit.co.uk
// This is the missing pice to get level 1 http://pastebin.com/cqzbkw4H to compile
//
// The information contained in the following array was located as base64 encoded data in the png header
//
// Note: The program must be executed on a 32-bit Linux distro to reveal the decrypted URL for part3

#ifndef PART2_H
#define PART2_H

// base64 encoded data in the png header
static char part2[] = {
    0x42, 0x42, 0x42, 0x42, 0x32, 0x00, 0x00, 0x00,   0x91, 0xd8, 0xf1, 0x6d, 0x70, 0x20, 0x3a, 0xab,
    0x67, 0x9a, 0x0b, 0xc4, 0x91, 0xfb, 0xc7, 0x66,   0x0f, 0xfc, 0xcd, 0xcc, 0xb4, 0x02, 0xfa, 0xd7,
    0x77, 0xb4, 0x54, 0x38, 0xab, 0x1f, 0x0e, 0xe3,   0x8e, 0xd3, 0x0d, 0xeb, 0x99, 0xc3, 0x93, 0xfe,
    0xd1, 0x2b, 0x1b, 0x11, 0xc6, 0x11, 0xef, 0xc8,   0xca, 0x2f,
};

#endif
