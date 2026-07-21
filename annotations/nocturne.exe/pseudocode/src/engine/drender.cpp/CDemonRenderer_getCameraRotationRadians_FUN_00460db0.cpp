// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
// Address: 00460db0
// Address Range: [[00460db0, 00460e11]]
// Convention: __cdecl
// Signature: float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int local_20;
  int local_1c;
  
  engine_matrix_c_getCameraRotation_FUN_004ce790(&local_20);
  fVar2 = (float)_DAT_0057dc75;
  fVar1 = (float)_DAT_0057dc7d;
  *param_2 = fVar2 * 4591045.0 * fVar1;
  param_2[2] = (float)local_20 * fVar2 * fVar1;
  param_2[1] = fVar1 * (float)local_1c * fVar2;
  return param_2;
}
