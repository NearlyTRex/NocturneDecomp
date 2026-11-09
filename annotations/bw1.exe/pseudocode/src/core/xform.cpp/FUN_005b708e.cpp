// Name: core_xform.cpp_FUN_005b708e
// Address: 005b708e
// Address Range: [[005b708e, 005b70ec]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b708e(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_005b708e(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
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
  afStack_38[7] = param_1 * _DAT_005fa15c;
  pfVar2 = afStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
