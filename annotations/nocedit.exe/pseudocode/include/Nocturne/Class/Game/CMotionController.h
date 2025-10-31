#pragma once

// Structure: CMotionController
// Ghidra size: 0x54 (84 bytes)
typedef struct CMotionController {
    CMotionList* motionListPtr; // 0x0
    int motionListSize; // 0x4
    float curFrameNumber; // 0x8
    int tweenType; // 0xc
    char padding_0x10[24]; // 0x10
    int stateIndex; // 0x28
    char padding_0x2c[4]; // 0x2c
    char currentMotionName[4]; // 0x30
    char field_52[32]; // 0x34
} CMotionController;

