#pragma once

// Function prototypes for engine/prim.cpp
// Generated from Ghidra function signatures

// Original: engine_prim.c_setMaxViewportScanline1200_FUN_004f9430
// Address: 004f9430
void __cdecl setMaxViewportScanline1200(void);

// Original: engine_prim.c_setMaxViewportScanline_FUN_004f9440
// Address: 004f9440
void __cdecl setMaxViewportScanline(int max);

// Original: engine_prim.c_setCullingMode_FUN_004f9450
// Address: 004f9450
void __cdecl setCullingMode(int culling_mode);

// Original: engine_prim.c_setupBasicSoftwareEdge_FUN_004f9460
// Address: 004f9460
void __cdecl setupBasicSoftwareEdge(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_004f9620
// Address: 004f9620
void __cdecl setupSoftwareEdgeWithZMode(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_findEdgeInBuffer_FUN_004f9830
// Address: 004f9830
SSoftwareEdge * __cdecl findEdgeInBuffer(int y_value,SSoftwareEdge *edge_ptr);

// Original: engine_prim.c_prepareDepthBuffer_FUN_004f9870
// Address: 004f9870
void __cdecl prepareDepthBuffer(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_normalizeTextureCoords_FUN_004f98e0
// Address: 004f98e0
void __cdecl normalizeTextureCoords(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_adjustNearPlaneTextureCoords_FUN_004f9960
// Address: 004f9960
void __cdecl adjustNearPlaneTextureCoords(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_replaceWWithDepth_FUN_004f99d0
// Address: 004f99d0
void __cdecl replaceWWithDepth(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
// Address: 004f9a10
int __cdecl calculateTriangleWindingOrder(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2);

// Original: engine_prim.c_getTriangleWindingFromIndices1_FUN_004f9ad0
// Address: 004f9ad0
int __cdecl getTriangleWindingFromIndices1(SMRGLPrimitiveTriangle *triangle);

// Original: engine_prim.c_getTriangleWindingFromIndices2_FUN_004f9bc0
// Address: 004f9bc0
int __cdecl getTriangleWindingFromIndices2(SMRGLPrimitiveTriangle *triangle_indices);

// Original: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
// Address: 004f9cb0
int __cdecl getTriangleWindingFromPackedIndices(STrianglePackedIndices *triangle);

// Original: engine_prim.c_renderPolygonSoftware_FUN_004f9dd0
// Address: 004f9dd0
void __cdecl renderPolygonSoftware(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0
// Address: 004fa2e0
void __cdecl renderIndexedPolygonSoftware(int *vertex_indices,int vertex_count);

// Original: engine_prim.c_setupAdvancedSoftwareEdge_FUN_004fa800
// Address: 004fa800
void __cdecl setupAdvancedSoftwareEdge(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_setupColoredSoftwareEdge_FUN_004faa20
// Address: 004faa20
void __cdecl setupColoredSoftwareEdge(SRenderVertex *vertex0,SRenderVertex *vertex1);

// Original: engine_prim.c_findEdgeInTable_FUN_004faca0
// Address: 004faca0
SSoftwareEdge * __cdecl findEdgeInTable(int scanline,SSoftwareEdge *target_edge);

// Original: engine_prim.c_renderScanlinePolygon_FUN_004fad00
// Address: 004fad00
void __cdecl renderScanlinePolygon(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
// Address: 004fb390
void __cdecl renderIndexedPolygonAdvanced(int *vertex_indices,int vertex_count);
