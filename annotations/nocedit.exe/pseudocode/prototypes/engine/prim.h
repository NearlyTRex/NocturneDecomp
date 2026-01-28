#pragma once

// Function prototypes for engine/prim.cpp
// Generated from Ghidra function signatures

// Original: engine_prim.c_setMaxViewportScanline1200_FUN_00551b70
// Address: 00551b70
void __cdecl setMaxViewportScanline1200(void);

// Original: engine_prim.c_setMaxViewportScanline_FUN_00551b80
// Address: 00551b80
void __cdecl setMaxViewportScanline(int max);

// Original: engine_prim.c_setCullingMode_FUN_00551b90
// Address: 00551b90
void __cdecl setCullingMode(int culling_mode);

// Original: engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0
// Address: 00551ba0
void __cdecl setupBasicSoftwareEdge(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
// Address: 00551d60
void __cdecl setupSoftwareEdgeWithZMode(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_findEdgeInBuffer_FUN_00551f70
// Address: 00551f70
SSoftwareEdge * __cdecl findEdgeInBuffer(int y_value,SSoftwareEdge *edge_ptr);

// Original: engine_prim.c_prepareDepthBuffer_FUN_00551fb0
// Address: 00551fb0
void __cdecl prepareDepthBuffer(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_normalizeTextureCoords_FUN_00552020
// Address: 00552020
void __cdecl normalizeTextureCoords(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
// Address: 005520a0
void __cdecl adjustNearPlaneTextureCoords(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_replaceWWithDepth_FUN_00552110
// Address: 00552110
void __cdecl replaceWWithDepth(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
// Address: 00552150
int __cdecl calculateTriangleWindingOrder(SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2);

// Original: engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
// Address: 00552210
int __cdecl getTriangleWindingFromIndices(STriangleIndices *triangle);

// Original: engine_prim.c_getTriangleWindingFromIndices_FUN_00552300
// Address: 00552300
int __cdecl getTriangleWindingFromIndices(STriangleIndices *triangle_indices);

// Original: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
// Address: 005523f0
int __cdecl getTriangleWindingFromPackedIndices(STrianglePackedIndices *triangle);

// Original: engine_prim.c_renderPolygonSoftware_FUN_00552510
// Address: 00552510
void __cdecl renderPolygonSoftware(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
// Address: 00552a40
void __cdecl renderIndexedPolygonSoftware(int *vertex_indices,int vertex_count);

// Original: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
// Address: 00552f70
void __cdecl setupAdvancedSoftwareEdge(SRenderVertex *start_vertex,SRenderVertex *end_vertex);

// Original: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
// Address: 00553190
void __cdecl setupColoredSoftwareEdge(SRenderVertex *vertex0,SRenderVertex *vertex1);

// Original: engine_prim.c_findEdgeInTable_FUN_00553410
// Address: 00553410
SSoftwareEdge * __cdecl findEdgeInTable(int scanline,SSoftwareEdge *target_edge);

// Original: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
void __cdecl renderScanlinePolygon(SRenderVertex *vertices,int vertex_count);

// Original: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
// Address: 00553b10
void __cdecl renderIndexedPolygonAdvanced(int *vertex_indices,int vertex_count);
