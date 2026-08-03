// Name: core_xform.cpp_buildUniformScaleMatrix_FUN_0055c910
// Address: 0055c910
// Address Range: [[0055c910, 0055c960]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_0055c910(float scale_factor,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_0055c910(float scale_factor,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_34 [6];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float local_c;
  uint local_8;
  
  local_34[0] = scale_factor;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_34[4] = 0.0;
  local_34[5] = scale_factor;
  local_c = scale_factor;
  pfVar2 = local_34;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
