#pragma once

// Function prototypes for engine/clipper.cpp
// Generated from Ghidra function signatures

// Original: engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
// Address: 00431530
void interpolateVertexLeftClip(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexRightClip_FUN_00431630
// Address: 00431630
void interpolateVertexRightClip(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
// Address: 00431730
void interpolateVertexBottomClip(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexTopClip_FUN_00431830
// Address: 00431830
void interpolateVertexTopClip(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexNearClip_FUN_00431930
// Address: 00431930
void __cdecl interpolateVertexNearClip(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_normalizeClippedVertices_FUN_00432150
// Address: 00432150
void normalizeClippedVertices(void);

// Original: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
// Address: 004337a0
void __cdecl interpolateVertexLeftClipAdvanced(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
// Address: 004338d0
void __cdecl interpolateVertexRightClipAdvanced(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
// Address: 00433a00
void __cdecl interpolateVertexBottomClipAdvanced(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
// Address: 00433b30
void __cdecl interpolateVertexTopClipAdvanced(int *param_1,int *param_2,int *param_3);

// Original: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
// Address: 004349a0
int * __cdecl clipPolygonToViewport(uint param_1,int *param_2);
