// Name: core_xform.cpp_buildYFlipMatrix_FUN_00585270
// Address: 00585270
// Address Range: [[00585270, 005852cc]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildYFlipMatrix_FUN_00585270(float y_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack_esi core_xform_cpp_buildYFlipMatrix_FUN_00585270(float y_offset,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float afStack_38 [8];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  afStack_38[0] = 1.0;
  afStack_38[1] = 0.0;
  afStack_38[2] = 0.0;
  afStack_38[3] = 0.0;
  afStack_38[4] = 0.0;
  afStack_38[5] = -1.0;
  afStack_38[6] = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x3f800000;
  uStack_c = 0;
  afStack_38[7] = y_offset * _DAT_005d8187;
  pfVar2 = afStack_38;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
