// Name: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
// Address: 005f6ee0
// Address Range: [[005f6ee0, 005f6f3a]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_34 [4];
  
  local_34[0] = -1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = x_offset * (float)2;
  pfVar2 = local_34;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
