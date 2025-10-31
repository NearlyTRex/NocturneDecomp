#pragma once

// Structure: CMotionList
// Ghidra size: 0x96c (2412 bytes)
typedef struct CMotionList {
    int stateCount; // 0x0
    char stateName1[30]; // 0x4
    char stateName2[30]; // 0x22
    char stateName3[30]; // 0x40
    char padding_0x5e[2310]; // 0x5e
    int motionListCount; // 0x964
    char motionNamesStart[4]; // 0x968
} CMotionList;

