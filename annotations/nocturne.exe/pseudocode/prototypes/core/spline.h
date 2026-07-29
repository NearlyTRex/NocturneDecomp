#pragma once

// Function prototypes for core/spline.cpp
// Generated from Ghidra function signatures

// Original: core_spline.cpp_computeSplineBasis_FUN_00533ce0
// Address: 00533ce0
void __cdecl computeSplineBasis(float *out_basis,float t,float tension);

// Original: core_spline.cpp_evaluateSplineScalar_FUN_00533e70
// Address: 00533e70
float __cdecl evaluateSplineScalar(float *basis,float *cp0,float *cp1,float *cp2,float *cp3);

// Original: core_spline.cpp_evaluateSplintInt_FUN_00533eb0
// Address: 00533eb0
int __cdecl evaluateSplintInt(float *basis,int v0,int v1,int v2,int v3);

// Original: core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10
// Address: 00533f10
CVector3f * __cdecl evaluateSplinePoint3D(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);

// Original: core_spline.cpp_evaluateSplineTangentScalar_FUN_00534030
// Address: 00534030
float __cdecl evaluateSplineTangentScalar(float *basis,float *cp0,float *cp1,float *cp2,float *cp3);

// Original: core_spline.cpp_evaluateSplineTangentInt_FUN_00534070
// Address: 00534070
int __cdecl evaluateSplineTangentInt(float *basis,int v0,int v1,int v2,int v3);

// Original: core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0
// Address: 005340d0
CVector3f * __cdecl evaluateSplineTangent3D(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
