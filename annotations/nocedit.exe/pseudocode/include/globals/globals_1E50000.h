#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SModelPartName.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1E50000
// =============================================================================

// SModelPartName[500]
extern SModelPartName g_ModelPartNames[500];

// int
extern int g_PartsCount;
extern int g_VertexOptimizationPasses;
extern int g_PolygonOptimizationPasses;
extern int g_SelectionBlinkTimer;
extern int g_PointEditorMode;
extern int g_SelectedPointIndex;
extern int g_SelectedPolygonIndex;
extern int g_SecondaryPolygonIndex;
extern int g_GouraudShadingEnabled;
extern int g_AntiAliasingEnabled;
extern int g_EditorTextureMode;

// int[20000]
extern int g_VertexDepthSortedIndices[20000];

