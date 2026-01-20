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
extern int INT_016263c4;
extern int INT_016263c8;
extern int INT_016263cc;
extern int INT_016263d0;
extern int INT_016263d4;
extern int INT_016263d8;
extern int INT_016263dc;
extern int INT_016263e4;
extern int INT_016263e8;
extern int INT_016263ec;
extern int INT_016263f0;
extern int INT_016263f4;
extern int INT_016263f8;
extern int INT_016263fc;
extern int g_ModelCount;
extern int g_CurrentModelIndex;
extern int g_VertexCount;

// int*
extern int* g_EditorBackgroundColors;
extern int* g_EditorColorIndices;

