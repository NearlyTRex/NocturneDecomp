#pragma once

// Function prototypes for engine/zraster.cpp
// Generated from Ghidra function signatures

// Original: engine_zraster.c_assignInt_FUN_005fcd10
// Address: 005fcd10
int * __cdecl assignInt(int *dest,int *src);

// Original: engine_zraster.c_addRasterizerEdge_FUN_005fcd20
// Address: 005fcd20
void __cdecl addRasterizerEdge(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_zraster.c_addRasterizerEdgeWithDepth_FUN_005fce40
// Address: 005fce40
void __cdecl addRasterizerEdgeWithDepth(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_zraster.c_findRasterizerEdge_FUN_005fcf80
// Address: 005fcf80
SSoftwareEdge * __cdecl findRasterizerEdge(int y_start,SSoftwareEdge *exclude_edge);

// Original: engine_zraster.c_rasterizeTriangle_FUN_005fcfc0
// Address: 005fcfc0
void __cdecl rasterizeTriangle(SRenderVertex *vertex_buffer,int vertex_count);

// Original: engine_zraster.c_rasterizePolygonCustom_FUN_005fd4e0
// Address: 005fd4e0
void __cdecl rasterizePolygonCustom(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer);
