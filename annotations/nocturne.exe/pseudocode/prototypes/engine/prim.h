#pragma once

// Function prototypes for engine/prim.cpp
// Generated from Ghidra function signatures

// Original: engine_prim.c_FUN_004f942e
// Address: 004f942e
void FUN_004f942e(void);

// Original: engine_prim.c_FUN_004f9440
// Address: 004f9440
void FUN_004f9440(void);

// Original: engine_prim.c_setCullingMode_FUN_004f9450
// Address: 004f9450
void __cdecl setCullingMode(undefined4 param_1);

// Original: engine_prim.c_FUN_004f9460
// Address: 004f9460
void FUN_004f9460(int param_1,int param_2);

// Original: engine_prim.c_FUN_004f9620
// Address: 004f9620
void FUN_004f9620(int param_1,int param_2);

// Original: engine_prim.c_findEdgeInBuffer_FUN_004f9830
// Address: 004f9830
int * __cdecl findEdgeInBuffer(int param_1,int *param_2);

// Original: engine_prim.c_prepareDepthBuffer_FUN_004f9870
// Address: 004f9870
void __cdecl prepareDepthBuffer(int param_1,int param_2);

// Original: engine_prim.c_normalizeTextureCoords_FUN_004f98e0
// Address: 004f98e0
void __cdecl normalizeTextureCoords(int param_1,int param_2);

// Original: engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
// Address: 004f9960
void __cdecl adjustNearPlaneTextureCoords(int param_1,int param_2);

// Original: engine_prim.c_replaceWWithDepth_FUN_004f99d0
// Address: 004f99d0
void __cdecl replaceWWithDepth(int param_1,int param_2);

// Original: engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
// Address: 004f9a10
bool __cdecl calculateTriangleWindingOrder(int param_1,int param_2,int param_3);

// Original: engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0
// Address: 004f9ad0
bool __cdecl getTriangleWindingFromIndices1(int param_1);

// Original: engine_prim.c_FUN_004f9bc0
// Address: 004f9bc0
bool FUN_004f9bc0(int param_1);

// Original: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
// Address: 004f9cb0
bool __cdecl getTriangleWindingFromPackedIndices(ushort *param_1);

// Original: engine_prim.c_FUN_004f9dd0
// Address: 004f9dd0
void FUN_004f9dd0(int *param_1,int param_2);

// Original: engine_prim.c_FUN_004fa2e0
// Address: 004fa2e0
void FUN_004fa2e0(int *param_1,int param_2);

// Original: engine_prim.c_FUN_004fa800
// Address: 004fa800
void FUN_004fa800(int param_1,int param_2);

// Original: engine_prim.c_setupColoredSoftwareEdge_FUN_004faa20
// Address: 004faa20
void setupColoredSoftwareEdge(int param_1,int param_2);

// Original: engine_prim.c_FUN_004faca0
// Address: 004faca0
int * FUN_004faca0(void);

// Original: engine_prim.c_renderScanlinePolygon_FUN_004fad00
// Address: 004fad00
void __cdecl renderScanlinePolygon(int *param_1,int param_2);

// Original: engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
// Address: 004fb390
void __cdecl renderIndexedPolygonAdvanced(int *param_1,int param_2);
