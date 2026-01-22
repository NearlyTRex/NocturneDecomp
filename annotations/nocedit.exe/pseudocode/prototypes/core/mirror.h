#pragma once

// Function prototypes for core/mirror.cpp
// Generated from Ghidra function signatures

// Original: core_mirror.cpp_staticInit_FUN_00520fb0
// Address: 00520fb0
void staticInit(void);

// Original: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
// Address: 00520fe0
void computePlaneFromTriangle(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c);

// Original: core_mirror.cpp_computePlaneIntersection_FUN_00521160
// Address: 00521160
void computePlaneIntersection(SClipPlane * clip_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * out_intersection);

// Original: core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
// Address: 00521290
void clipPolygonAgainstPlane(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, int * output_count);

// Original: core_mirror.cpp_CMirror_ctor_FUN_005213c0
// Address: 005213c0
CMirror * CMirror::ctor(CMirror * this_ptr);

// Original: core_mirror.cpp_CMirror_dtor_FUN_005213e0
// Address: 005213e0
CMirror * CMirror::dtor(CMirror * this_ptr);

// Original: core_mirror.cpp_CMirror_setupCorners_FUN_00521400
// Address: 00521400
void CMirror::setupCorners(CMirror * this_ptr, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, CVector3f * corner4);

// Original: core_mirror.cpp_setupMirrorCamera_FUN_00521480
// Address: 00521480
void setupMirrorCamera(SMirrorReflection * reflection);

// Original: core_mirror.cpp_setupMirrorReflection_FUN_005214c0
// Address: 005214c0
void setupMirrorReflection(SMirrorReflection * reflection);

// Original: core_mirror.cpp_applyMirrorTransform_FUN_005222f0
// Address: 005222f0
CVector3f * applyMirrorTransform(SMirrorReflection * reflection, CVector3f * output_buffer, CVector3f * input_vector);

// Original: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
// Address: 00522310
uint CMirror::reflectAndClipPrimitive(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive);

// Original: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560
// Address: 00522560
void CMirror::clipAndRenderReflectedPrimitive(CMirror * this_ptr, SMRGLHeaderPrimitive * prim);

// Original: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
// Address: 005225a0
void CMirror::renderReflectedPrimitive(CMirror * this_ptr, SMRGLHeaderPrimitive * prim);

// Original: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
// Address: 005225e0
void CMirror::renderMirroredPrimitive(CMirror * this_ptr, SMRGLHeaderPrimitive * prim);

// Original: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
// Address: 00522670
int CMirror::renderMirrorQuad(CMirror * this_ptr);

// Original: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
// Address: 00522800
void CMirror::renderMirrorQuadDepth(CMirror * this_ptr);

// Original: core_mirror.cpp_transformMirrorVertex_FUN_005229b0
// Address: 005229b0
CVector3f * transformMirrorVertex(SMirrorReflection * reflection, CVector3f * input_vertex, CVector3f * output_vertex);

// Original: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// Address: 00522a50
CVector3i * transformMirrorEdgeToIntegerSpace(SMirrorReflection * reflection, CVector3i * point_a, CVector3i * point_b, CVector3i * output);

// Original: core_mirror.cpp_SClipPlane_ctor_FUN_00522bf0
// Address: 00522bf0
SClipPlane * SClipPlane::ctor(SClipPlane * this_ptr);

// Original: core_mirror.cpp_SClipPlane_dtor_FUN_00522c00
// Address: 00522c00
SClipPlane * SClipPlane::dtor(SClipPlane * this_ptr);

// Original: core_mirror.cpp_freeClipPlaneArray_FUN_00522c10
// Address: 00522c10
void freeClipPlaneArray(SClipPlane * * array_ptr);

// Original: core_mirror.cpp_freeVectorArray32_FUN_00522c30
// Address: 00522c30
void freeVectorArray32(CVector3f * * array_ptr);
