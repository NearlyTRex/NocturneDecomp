#pragma once

// Function prototypes for engine/clipper.cpp
// Generated from Ghidra function signatures

// Original: engine_clipper.c_allocateClipVertex_FUN_00435980
// Address: 00435980
SRenderVertex * __cdecl allocateClipVertex(void);

// Original: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
// Address: 004359d0
void __cdecl setNearPlaneDistance(int distance);

// Original: engine_clipper.c_getNearPlaneDistance_FUN_004359f0
// Address: 004359f0
int __cdecl getNearPlaneDistance(void);

// Original: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// Address: 00435a00
void __cdecl interpolateVertexLeftClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
// Address: 00435b00
void __cdecl interpolateVertexRightClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
// Address: 00435c00
void __cdecl interpolateVertexBottomClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
// Address: 00435d00
void __cdecl interpolateVertexTopClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// Address: 00435e00
void __cdecl interpolateVertexNearClip(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20
// Address: 00435f20
int __cdecl clipPolygonLeftPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonRightPlane_FUN_00436060
// Address: 00436060
int __cdecl clipPolygonRightPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0
// Address: 004361a0
int __cdecl clipPolygonBottomPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
// Address: 004362e0
int __cdecl clipPolygonTopPlane(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);

// Original: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
void __cdecl clipPolygonNearPlane(void);

// Original: engine_clipper.c_normalizeClippedVertices_FUN_00436620
// Address: 00436620
void __cdecl normalizeClippedVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// Address: 004366e0
int __cdecl clipPolygonToViewFrustum(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_clipAndRasterize_FUN_004371b0
// Address: 004371b0
void __cdecl clipAndRasterize(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_copyMemory_FUN_00437200
// Address: 00437200
void __cdecl copyMemory(void *dest_ptr,void *src_ptr,int byte_count);

// Original: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
// Address: 00437230
void __cdecl interpolateVertexLeftClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
// Address: 00437360
void __cdecl interpolateVertexRightClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
// Address: 00437490
void __cdecl interpolateVertexBottomClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
// Address: 004375c0
void __cdecl interpolateVertexTopClipAdvanced(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);

// Original: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// Address: 00437700
void __cdecl clipPolygonLeftPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// Address: 00437840
void __cdecl clipPolygonRightPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// Address: 00437980
void __cdecl clipPolygonHorizontalPlanes(void);

// Original: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// Address: 00437ac0
void __cdecl clipPolygonVerticalPlanes(void);

// Original: engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0
// Address: 00437bf0
void __cdecl perspectiveDivideVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// Address: 00437ca0
int __cdecl clipPolygonToViewFrustumAdvanced(int vertex_count,int *vertex_indices);

// Original: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// Address: 00438420
void __cdecl clipPolygonToViewport(int vertex_count,int *vertex_indices);
