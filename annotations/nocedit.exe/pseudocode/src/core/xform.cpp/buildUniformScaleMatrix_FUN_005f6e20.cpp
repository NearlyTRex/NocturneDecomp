// Name: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
// Address: 005f6e20
// Address Range: [[005f6e20, 005f6e70]]
// Convention: __stack_esi
// Signature: void core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20(CMatrix3x4f * output_matrix, float scale_factor)

#include "nocturne.h"

void __stack_esi
core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(CMatrix3x4f *output_matrix,float scale_factor)

{
  int iVar1;
  CMatrix3x4f **ppCVar2;
  CMatrix3x4f *local_34 [6];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  CMatrix3x4f *local_c;
  uint local_8;
  
  local_34[0] = output_matrix;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_34[1] = (CMatrix3x4f *)0x0;
  local_34[2] = (CMatrix3x4f *)0x0;
  local_34[3] = (CMatrix3x4f *)0x0;
  local_34[4] = (CMatrix3x4f *)0x0;
  local_34[5] = output_matrix;
  local_c = output_matrix;
  ppCVar2 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(CMatrix3x4f **)scale_factor = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
    scale_factor = (float)((int)scale_factor + 4);
  }
  return;
}
