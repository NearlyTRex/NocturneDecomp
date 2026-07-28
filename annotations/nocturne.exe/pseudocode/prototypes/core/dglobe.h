#pragma once

// Function prototypes for core/dglobe.cpp
// Generated from Ghidra function signatures

// Original: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
// Address: 0044cd90
void __cdecl CDemonGlobe::setPosition(CDemonGlobe *this_ptr,CVector3f *position);

// Original: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
// Address: 0044cde0
void __cdecl CDemonGlobe::precomputeAttenuation(CDemonGlobe *this_ptr,float radius);

// Original: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
// Address: 0044ce80
void __cdecl CDemonGlobe::renderCorona(CDemonGlobe *this_ptr);

// Original: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060
// Address: 0044d060
void CDemonGlobe::renderCoronaTextured(int param_1);

// Original: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0
// Address: 0044d1f0
int __cdecl CDemonGlobe::intersectAABB(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max);

// Original: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
// Address: 0044d2d0
int CDemonGlobe::getAttenuationAtVertex(int param_1,int *param_2,int *param_3);
