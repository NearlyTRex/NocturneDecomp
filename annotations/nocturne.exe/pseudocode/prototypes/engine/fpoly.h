#pragma once

// Function prototypes for engine/fpoly.cpp
// Generated from Ghidra function signatures

// Original: engine_fpoly.c_addPolygonEdge_FUN_004940e0
// Address: 004940e0
void __cdecl addPolygonEdge(SRenderVertex *vertex1,SRenderVertex *vertex2);

// Original: engine_fpoly.c_findHardwareEdgeByYMin_FUN_00494220
// Address: 00494220
SHardwareEdge * __cdecl findHardwareEdgeByYMin(int y_min,SHardwareEdge *exclude_edge);

// Original: engine_fpoly.c_rasterizePolygonHardware_FUN_00494260
// Address: 00494260
void __cdecl rasterizePolygonHardware(SRenderVertex **vertices,int vertex_count);
