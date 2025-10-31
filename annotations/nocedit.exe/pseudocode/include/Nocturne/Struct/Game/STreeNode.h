#pragma once

// Structure: STreeNode
// Ghidra size: 0x1c (28 bytes)
typedef struct STreeNode {
    STreeNode* left_child; // 0x0
    STreeNode* right_child; // 0x4
    int node_type; // 0x8
    float data1; // 0xc
    float data2; // 0x10
    float data3; // 0x14
    float data4; // 0x18
} STreeNode;

