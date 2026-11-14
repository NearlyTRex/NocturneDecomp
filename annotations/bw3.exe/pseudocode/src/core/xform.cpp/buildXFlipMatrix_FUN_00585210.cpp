// Name: core_xform.cpp_buildXFlipMatrix_FUN_00585210
// Address: 00585210
// Address Range: [[00585210, 0058526a]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_00585210(float x_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_00585210(float x_offset,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float afStack_34 [4];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  afStack_34[0] = -1.0;
  afStack_34[1] = 0.0;
  afStack_34[2] = 0.0;
  uStack_24 = 0;
  uStack_20 = 0x3f800000;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  uStack_8 = 0;
  afStack_34[3] = x_offset * _DAT_005d8183;
  pfVar2 = afStack_34;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
