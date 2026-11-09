// Name: core_flies.cpp_FUN_004ae200
// Address: 004ae200
// Address Range: [[004ae200, 004ae268]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004ae200(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flies_cpp_FUN_004ae200(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_28 [4];
  uint uStack_18;
  float fStack_14;
  
  afStack_28[1] = 0.0;
  uStack_18 = *(uint *)(param_1 + 0x15c);
  afStack_28[0] = *(float *)(param_1 + 0x158) * (float)_DAT_005c1c69;
  afStack_28[3] = *(float *)(param_1 + 0x158) * (float)_DAT_005c1c71;
  afStack_28[2] = (float)_DAT_005c1c69 * *(float *)(param_1 + 0x160);
  fStack_14 = *(float *)(param_1 + 0x160) * (float)_DAT_005c1c71;
  pfVar2 = afStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
