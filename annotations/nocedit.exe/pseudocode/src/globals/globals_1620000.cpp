#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1620000
// =============================================================================

// SVertexData[20000]
SVertexData g_LoadedVertices[20000] = {};

// char[80]
char g_TempTextureName[80] = {};

// int
int g_ZoomLevel = {};
int g_StoredWorldYCoordinate = {};
int g_EditorColorIndex = {};
int g_ModelCount = {};
int g_CurrentModelIndex = {};
int g_VertexCount = {};

// int[8]
int g_EditorBackgroundColors[8] = {};
int g_EditorColorIndices[8] = {};

