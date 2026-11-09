// Name: core_stairs.cpp_FUN_005849f0
// Address: 005849f0
// Address Range: [[005849f0, 00584a54]]
// Convention: unknown
// Signature: void core_stairs_cpp_FUN_005849f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stairs_cpp_FUN_005849f0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  
  afStack_20[1] = 0.0;
  afStack_20[2] = 0.0;
  afStack_20[3] = *(float *)(param_1 + 0x160) * (float)_DAT_005f634c;
  fStack_10 = *(float *)(param_1 + 0x158) * (float)*(int *)(param_1 + 0x16c);
  fStack_c = *(float *)(param_1 + 0x15c) * (float)*(int *)(param_1 + 0x16c);
  afStack_20[0] = -*(float *)(param_1 + 0x160) * (float)_DAT_005f634c;
  pfVar2 = afStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
