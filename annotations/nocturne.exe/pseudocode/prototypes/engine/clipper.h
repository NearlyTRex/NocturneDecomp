#pragma once

// Function prototypes for engine/clipper.cpp
// Generated from Ghidra function signatures

// Original: engine_clipper.c_allocateClipVertex_FUN_004314b0
// Address: 004314b0
SRenderVertex * __cdecl allocateClipVertex(void);

// Original: engine_clipper.c_setNearPlaneDistance_FUN_00431500
// Address: 00431500
void __cdecl setNearPlaneDistance(int distance);

// Original: engine_clipper.c_getNearPlaneDistance_FUN_00431520
// Address: 00431520
int __cdecl getNearPlaneDistance(void);

// Original: engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
// Address: 00431530
void __cdecl interpolateVertexLeftClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexRightClip_FUN_00431630
// Address: 00431630
void __cdecl interpolateVertexRightClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
// Address: 00431730
void __cdecl interpolateVertexBottomClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexTopClip_FUN_00431830
// Address: 00431830
void __cdecl interpolateVertexTopClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexNearClip_FUN_00431930
// Address: 00431930
void __cdecl interpolateVertexNearClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_clipPolygonLeftPlane_FUN_00431a50
// Address: 00431a50
int __cdecl clipPolygonLeftPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonRightPlane_FUN_00431b90
// Address: 00431b90
int __cdecl clipPolygonRightPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonBottomPlane_FUN_00431cd0
// Address: 00431cd0
int __cdecl clipPolygonBottomPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonTopPlane_FUN_00431e10
// Address: 00431e10
int __cdecl clipPolygonTopPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonNearPlane_FUN_00431f50
// Address: 00431f50
void __cdecl clipPolygonNearPlane(void);

// Original: engine_clipper.c_normalizeClippedVertices_FUN_00432150
// Address: 00432150
void __cdecl normalizeClippedVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustum_FUN_00432210
// Address: 00432210
int __cdecl clipPolygonToViewFrustum(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_clipAndRasterize_FUN_00432cd0
// Address: 00432cd0
void __cdecl clipAndRasterize(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_copyMemory_FUN_00433770
// Address: 00433770
void __cdecl copyMemory(void *dest_ptr,void *src_ptr,int byte_count);

// Original: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
// Address: 004337a0
void __cdecl interpolateVertexLeftClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
// Address: 004338d0
void __cdecl interpolateVertexRightClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
// Address: 00433a00
void __cdecl interpolateVertexBottomClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
// Address: 00433b30
void __cdecl interpolateVertexTopClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00433c70
// Address: 00433c70
void __cdecl clipPolygonLeftPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00433db0
// Address: 00433db0
void __cdecl clipPolygonRightPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00433ef0
// Address: 00433ef0
void __cdecl clipPolygonHorizontalPlanes(void);

// Original: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00434030
// Address: 00434030
void __cdecl clipPolygonVerticalPlanes(void);

// Original: engine_clipper.c_perspectiveDivideVertices_FUN_00434160
// Address: 00434160
void __cdecl perspectiveDivideVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00434210
// Address: 00434210
int __cdecl clipPolygonToViewFrustumAdvanced(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
// Address: 004349a0
void __cdecl clipPolygonToViewport(int vertex_count,int *vertex_indices);
