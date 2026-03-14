// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
// Address: 0048c800
// Address Range: [[0048c800, 0048c861]]
// Convention: __cdecl
// Signature: float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer *this_ptr,float *output)

#include "nocturne.h"

float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer *this_ptr,float *output)

{
  float fVar3;
  float *extraout_EBX;
  CVector3i local_20;
  float fVar1;
  float fVar2;
  
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&local_20);
  fVar3 = (float)3.0517578125e-05;
  fVar1 = (float)3.1415926535000001;
  *extraout_EBX = fVar3 * 4769813.0 * fVar1;
  extraout_EBX[2] = (float)local_20.x * fVar3 * fVar1;
  extraout_EBX[1] = fVar1 * (float)local_20.y * fVar3;
  return extraout_EBX;
}
