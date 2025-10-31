#pragma once

// Function prototypes for engine/clipper.cpp
// Generated from Ghidra function signatures

// Original: engine_clipper.c_allocateClipVertex_FUN_00435980
// Address: 00435980
SRenderVertex * allocateClipVertex(void);

// Original: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
// Address: 004359d0
void setNearPlaneDistance(int distance);

// Original: engine_clipper.c_getNearPlaneDistance_FUN_004359f0
// Address: 004359f0
int getNearPlaneDistance(void);

// Original: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// Address: 00435a00
void interpolateVertexLeftClip(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
// Address: 00435b00
void interpolateVertexRightClip(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
// Address: 00435c00
void interpolateVertexBottomClip(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
// Address: 00435d00
void interpolateVertexTopClip(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// Address: 00435e00
void interpolateVertexNearClip(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20
// Address: 00435f20
int clipPolygonLeftPlane(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);

// Original: engine_clipper.c_clipPolygonRightPlane_FUN_00436060
// Address: 00436060
int clipPolygonRightPlane(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);

// Original: engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0
// Address: 004361a0
int clipPolygonBottomPlane(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);

// Original: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
// Address: 004362e0
int clipPolygonTopPlane(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);

// Original: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
void clipPolygonNearPlane(void);

// Original: engine_clipper.c_normalizeClippedVertices_FUN_00436620
// Address: 00436620
void normalizeClippedVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// Address: 004366e0
int clipPolygonToViewFrustum(int vertex_count, int * vertex_indices);

// Original: engine_clipper.c_clipAndRasterize_FUN_004371b0
// Address: 004371b0
void clipAndRasterize(int vertex_count, int * vertex_indices);

// Original: engine_clipper.c_copyMemory_FUN_00437200
// Address: 00437200
void copyMemory(void * dest_ptr, void * src_ptr, int byte_count);

// Original: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
// Address: 00437230
void interpolateVertexLeftClipAdvanced(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
// Address: 00437360
void interpolateVertexRightClipAdvanced(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
// Address: 00437490
void interpolateVertexBottomClipAdvanced(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
// Address: 004375c0
void interpolateVertexTopClipAdvanced(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);

// Original: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// Address: 00437700
void clipPolygonLeftPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// Address: 00437840
void clipPolygonRightPlaneGlobal(void);

// Original: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// Address: 00437980
void clipPolygonHorizontalPlanes(void);

// Original: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// Address: 00437ac0
void clipPolygonVerticalPlanes(void);

// Original: engine_clipper.c_perspectiveDivideVertices_FUN_00437bf0
// Address: 00437bf0
void perspectiveDivideVertices(void);

// Original: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// Address: 00437ca0
int clipPolygonToViewFrustumAdvanced(int vertex_count, int * vertex_indices);

// Original: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// Address: 00438420
void clipPolygonToViewport(int vertex_count, int * vertex_indices);
