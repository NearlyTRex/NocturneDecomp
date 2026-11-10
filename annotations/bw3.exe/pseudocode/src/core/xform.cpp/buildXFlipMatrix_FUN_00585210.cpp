// Name: core_xform.cpp_buildXFlipMatrix_FUN_00585210
// Address: 00585210
// Address Range: [[00585210, 0058526a]]
// Convention: unknown
// Signature: void core_xform_cpp_buildXFlipMatrix_FUN_00585210(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_buildXFlipMatrix_FUN_00585210(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
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
  afStack_34[3] = param_1 * _DAT_005d8183;
  pfVar2 = afStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
