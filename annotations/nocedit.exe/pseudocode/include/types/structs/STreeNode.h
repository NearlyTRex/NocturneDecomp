#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/unions/UTreeNodeData.h"

// Structure: STreeNode
// Ghidra size: 0x1c (28 bytes)
typedef struct STreeNode {
    struct STreeNode* left_child; // 0x0
    struct STreeNode* right_child; // 0x4
    int node_type; // 0x8
    UTreeNodeData data1; // 0xc
    UTreeNodeData data2; // 0x10
    UTreeNodeData data3; // 0x14
    UTreeNodeData data4; // 0x18
} STreeNode;

