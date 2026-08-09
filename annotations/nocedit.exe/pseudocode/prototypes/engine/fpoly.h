#pragma once

// Function prototypes for engine/fpoly.cpp
// Generated from Ghidra function signatures

// Original: engine_fpoly.c_addPolygonEdge_FUN_004d11c0
// Address: 004d11c0
void __cdecl addPolygonEdge(SRenderVertex *vertex1,SRenderVertex *vertex2);

// Original: engine_fpoly.c_findHardwareEdgeByYMin_FUN_004d1300
// Address: 004d1300
SHardwareEdge * __cdecl findHardwareEdgeByYMin(int y_min,SHardwareEdge *exclude_edge);

// Original: engine_fpoly.c_rasterizePolygonHardware_FUN_004d1340
// Address: 004d1340
void __cdecl rasterizePolygonHardware(SRenderVertex **vertices,int vertex_count);
