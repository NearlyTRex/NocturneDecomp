#pragma once

// Function prototypes for core/spline.cpp
// Generated from Ghidra function signatures

// Original: core_spline.cpp_computeSplineBasis_FUN_005b90a0
// Address: 005b90a0
void __cdecl computeSplineBasis(float *out_basis,float t,float tension);

// Original: core_spline.cpp_evaluateSplineScalar_FUN_005b9230
// Address: 005b9230
float __cdecl evaluateSplineScalar(float *basis,float *p0,float *p1,float *p2,float *p3);

// Original: core_spline.cpp_evaluateSplintInt_FUN_005b9270
// Address: 005b9270
int __cdecl evaluateSplintInt(float *basis,int v0,int v1,int v2,int v3);

// Original: core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0
// Address: 005b92d0
CVector3f * __cdecl evaluateSplinePoint3D(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);

// Original: core_spline.cpp_evaluateSplineTangentScalar_FUN_005b93f0
// Address: 005b93f0
float __cdecl evaluateSplineTangentScalar(float *basis,float *p0,float *p1,float *p2,float *p3);

// Original: core_spline.cpp_evaluateSplineTangentInt_FUN_005b9430
// Address: 005b9430
int __cdecl evaluateSplineTangentInt(float *basis,int v0,int v1,int v2,int v3);

// Original: core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490
// Address: 005b9490
CVector3f * __cdecl evaluateSplineTangent3D(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
