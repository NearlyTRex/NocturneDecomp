#pragma once

// Function prototypes for core/mirror.cpp
// Generated from Ghidra function signatures

// Original: core_mirror.cpp_staticInit_FUN_004d6140
// Address: 004d6140
void __cdecl staticInit(void);

// Original: core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170
// Address: 004d6170
void __cdecl computePlaneFromTriangle(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c);

// Original: core_mirror.cpp_computePlaneIntersection_FUN_004d62f0
// Address: 004d62f0
void __cdecl computePlaneIntersection(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection);

// Original: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420
// Address: 004d6420
void __cdecl clipPolygonAgainstPlane(SClipPlane *clip_plane,CVector3f *input_vertices,int input_count,CVector3f *output_vertices,int *output_count);

// Original: core_mirror.cpp_CMirror_ctor_FUN_004d6550
// Address: 004d6550
CMirror * __cdecl CMirror::ctor(CMirror *this_ptr);

// Original: core_mirror.cpp_CMirror_dtor_FUN_004d6570
// Address: 004d6570
CMirror * __cdecl CMirror::dtor(CMirror *this_ptr,uint flags);

// Original: core_mirror.cpp_CMirror_setupCorners_FUN_004d6590
// Address: 004d6590
void __cdecl CMirror::setupCorners(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4);

// Original: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
// Address: 004d6610
void __cdecl CMirrorReflection::setupMirrorCamera(CMirrorReflection *this_ptr);

// Original: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650
// Address: 004d6650
void __cdecl CMirrorReflection::setupMirrorReflection(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale);

// Original: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
// Address: 004d7480
CVector3f * __cdecl CMirrorReflection::applyMirrorTransform(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector);

// Original: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
// Address: 004d74a0
uint __cdecl CMirror::reflectAndClipPrimitive(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive);

// Original: core_mirror.cpp_CMirror_FUN_004d76e0
// Address: 004d76e0
void __cdecl CMirror(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: core_mirror.cpp_CMirror_FUN_004d7720
// Address: 004d7720
int __cdecl CMirror(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
// Address: 004d7760
void __cdecl CMirror::renderMirroredPrimitive(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_004d77f0
// Address: 004d77f0
int __cdecl CMirror::renderMirrorQuad(CMirror *this_ptr);

// Original: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
// Address: 004d7980
void __cdecl CMirror::renderMirrorQuadDepth(CMirror *this_ptr);

// Original: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
// Address: 004d7b30
CVector3i * __stack2_esi CMirrorReflection::transformMirrorVertex(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex);

// Original: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
// Address: 004d7bd0
CVector3i * __stack3_esi CMirrorReflection::transformMirrorEdgeToIntegerSpace(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output);

// Original: core_mirror.cpp_SClipPlane_ctor_FUN_004d7d70
// Address: 004d7d70
SClipPlane * __cdecl SClipPlane::ctor(SClipPlane *this_ptr);

// Original: core_mirror.cpp_SClipPlane_dtor_FUN_004d7d80
// Address: 004d7d80
SClipPlane * __cdecl SClipPlane::dtor(SClipPlane *this_ptr,uint flags);

// Original: core_mirror.cpp_SClipPlane_arrdtor5_FUN_004d7d90
// Address: 004d7d90
SClipPlane * __cdecl SClipPlane::arrdtor5(SClipPlane *this_ptr,uint flags);

// Original: core_mirror.cpp_CVector3f_arrdtor32_FUN_004d7db0
// Address: 004d7db0
CVector3f * __cdecl CVector3f::arrdtor32(CVector3f *this_ptr,uint flags);
