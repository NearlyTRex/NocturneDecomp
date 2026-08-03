// Name: core_xform.cpp_buildYFlipMatrix_FUN_0055ca30
// Address: 0055ca30
// Address Range: [[0055ca30, 0055ca8c]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildYFlipMatrix_FUN_0055ca30(float y_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack_esi core_xform_cpp_buildYFlipMatrix_FUN_0055ca30(float y_offset,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_38 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_38[0] = 1.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = -1.0;
  local_38[6] = 0.0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_c = 0;
  local_38[7] = y_offset * (float)_DAT_0059833e;
  pfVar2 = local_38;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
