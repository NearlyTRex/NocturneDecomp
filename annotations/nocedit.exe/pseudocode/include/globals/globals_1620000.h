#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SVertexData.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1620000
// =============================================================================

// SVertexData[20000]
extern SVertexData g_LoadedVertices[20000];

// char[80]
extern char g_TempTextureName[80];

// int
extern int g_ZoomLevel;
extern int g_StoredWorldYCoordinate;
extern int g_EditorColorIndex;
extern int g_ModelCount;
extern int g_CurrentModelIndex;
extern int g_VertexCount;

// int[8]
extern int g_EditorBackgroundColors[8];
extern int g_EditorColorIndices[8];

