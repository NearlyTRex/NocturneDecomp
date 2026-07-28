// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
// Address: 00460db0
// Address Range: [[00460db0, 00460e11]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer *this_ptr,CVector3f *output)

#include "nocturne.h"

CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer *this_ptr,CVector3f *output)

{
  float fVar1;
  float fVar2;
  CVector3i local_20;
  
  engine_matrix_c_getCameraRotation_FUN_004ce790(&local_20);
  fVar2 = (float)3.0517578125e-05;
  fVar1 = (float)3.1415926535000001;
  output->x = fVar2 * 4591045.0 * fVar1;
  output->z = (float)local_20.x * fVar2 * fVar1;
  output->y = fVar1 * (float)local_20.y * fVar2;
  return output;
}
