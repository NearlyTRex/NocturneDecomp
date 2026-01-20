#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E60000
// =============================================================================

// STreeNode*
STreeNode* g_SpatialTreeRoot = {};

// int
int g_CurrentPartIndex = {};
int g_VertexDisplayEnabled = {};
int g_WireframeMode = {};

// int[20000]
int g_PolygonIndices[20000] = {};

