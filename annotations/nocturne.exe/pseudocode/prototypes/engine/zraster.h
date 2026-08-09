#pragma once

// Function prototypes for engine/zraster.cpp
// Generated from Ghidra function signatures

// Original: engine_zraster.c_addRasterizerEdge_FUN_00562620
// Address: 00562620
void __cdecl addRasterizerEdge(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_zraster.c_addRasterizerEdgeWithDepth_FUN_00562740
// Address: 00562740
void __cdecl addRasterizerEdgeWithDepth(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_zraster.c_findRasterizerEdge_FUN_00562880
// Address: 00562880
SSoftwareEdge * __cdecl findRasterizerEdge(int y_start,SSoftwareEdge *exclude_edge);

// Original: engine_zraster.c_rasterizeTriangle_FUN_005628c0
// Address: 005628c0
void __cdecl rasterizeTriangle(SRenderVertex *vertex_buffer,int vertex_count);

// Original: engine_zraster.c_rasterizePolygonCustom_FUN_00562de0
// Address: 00562de0
void __cdecl rasterizePolygonCustom(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer);
