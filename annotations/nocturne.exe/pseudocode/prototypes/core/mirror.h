#pragma once

// Function prototypes for core/mirror.cpp
// Generated from Ghidra function signatures

// Original: core_mirror.cpp_staticInit_FUN_004d6140
// Address: 004d6140
void __cdecl staticInit(void);

// Original: core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170
// Address: 004d6170
void __cdecl computePlaneFromTriangle(float *param_1,float *param_2,float *param_3,float *param_4);

// Original: core_mirror.cpp_computePlaneIntersection_FUN_004d62f0
// Address: 004d62f0
void __cdecl computePlaneIntersection(float *param_1,float *param_2,float *param_3,float *param_4);

// Original: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420
// Address: 004d6420
void clipPolygonAgainstPlane(float *param_1,float *param_2,uint param_3,int param_4,int *param_5);

// Original: core_mirror.cpp_CMirror_ctor_FUN_004d6550
// Address: 004d6550
int __cdecl CMirror::ctor(int param_1);

// Original: core_mirror.cpp_CMirror_dtor_FUN_004d6570
// Address: 004d6570
int __cdecl CMirror::dtor(int param_1);

// Original: core_mirror.cpp_CMirror_setupCorners_FUN_004d6590
// Address: 004d6590
void __cdecl CMirror::setupCorners(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);

// Original: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
// Address: 004d6610
void __cdecl CMirrorReflection::setupMirrorCamera(int param_1);

// Original: core_mirror.cpp_FUN_004d6650
// Address: 004d6650
void FUN_004d6650(float *param_1,float *param_2,undefined4 param_3,float param_4);

// Original: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
// Address: 004d7480
undefined4 CMirrorReflection::applyMirrorTransform(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_mirror.cpp_FUN_004d74a0
// Address: 004d74a0
undefined4 FUN_004d74a0(int param_1,int param_2);

// Original: core_mirror.cpp_FUN_004d76e0
// Address: 004d76e0
void FUN_004d76e0(int param_1,undefined4 param_2);

// Original: core_mirror.cpp_FUN_004d7720
// Address: 004d7720
void FUN_004d7720(int param_1,undefined4 param_2);

// Original: core_mirror.cpp_FUN_004d7760
// Address: 004d7760
void FUN_004d7760(int param_1,int param_2);

// Original: core_mirror.cpp_FUN_004d77f0
// Address: 004d77f0
undefined4 FUN_004d77f0(float *param_1);

// Original: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
// Address: 004d7980
void __cdecl CMirror::renderMirrorQuadDepth(float *param_1);

// Original: core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
// Address: 004d7b30
void CMirrorReflection::transformMirrorVertex(undefined4 param_1,int *param_2);

// Original: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
// Address: 004d7bd0
void CMirrorReflection::transformMirrorEdgeToIntegerSpace(undefined4 param_1,int *param_2,int *param_3);

// Original: core_mirror.cpp_FUN_004d7d70
// Address: 004d7d70
undefined4 FUN_004d7d70(undefined4 param_1);

// Original: core_mirror.cpp_FUN_004d7d80
// Address: 004d7d80
undefined4 FUN_004d7d80(undefined4 param_1);

// Original: core_mirror.cpp_SClipPlane_arrdtor_FUN_004d7d90
// Address: 004d7d90
void __cdecl SClipPlane::arrdtor(undefined4 param_1);

// Original: core_mirror.cpp_FUN_004d7db0
// Address: 004d7db0
void FUN_004d7db0(void);
