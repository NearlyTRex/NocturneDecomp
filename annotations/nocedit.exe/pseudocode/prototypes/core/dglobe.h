#pragma once

// Function prototypes for core/dglobe.cpp
// Generated from Ghidra function signatures

// Original: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
void __cdecl CDemonGlobe::setColor(CDemonGlobe *this_ptr,CColor3f *color);

// Original: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
void __cdecl CDemonGlobe::precomputeAttenuation(CDemonGlobe *this_ptr,float radius);

// Original: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
void __cdecl CDemonGlobe::renderCorona(CDemonGlobe *this_ptr);

// Original: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
void __cdecl CDemonGlobe::renderCoronaTextured(CDemonGlobe *this_ptr);

// Original: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
// Address: 00471770
int __cdecl CDemonGlobe::intersectAABB(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix, CVector3f *aabb_min,CVector3f *aabb_max);

// Original: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
// Address: 00471850
int __cdecl CDemonGlobe::getAttenuationAtVertex(CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal);
