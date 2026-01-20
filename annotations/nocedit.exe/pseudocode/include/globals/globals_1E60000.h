#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/STreeNode.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1E60000
// =============================================================================

// STreeNode*
extern STreeNode* g_SpatialTreeRoot;

// int
extern int g_CurrentPartIndex;
extern int g_VertexDisplayEnabled;
extern int g_WireframeMode;

// int[20000]
extern int g_PolygonIndices[20000];

