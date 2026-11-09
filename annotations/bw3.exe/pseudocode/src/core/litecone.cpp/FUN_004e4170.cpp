// Name: core_litecone.cpp_FUN_004e4170
// Address: 004e4170
// Address Range: [[004e4170, 004e41cb]]
// Convention: unknown
// Signature: void core_litecone_cpp_FUN_004e4170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_litecone_cpp_FUN_004e4170(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_24 [4];
  float fStack_14;
  uint uStack_10;
  float fStack_c;
  
  fStack_c = ((float)_DAT_005c6b1f / *(float *)(param_1 + 0x158)) * *(float *)(param_1 + 0x15c);
  afStack_24[0] = -fStack_c;
  afStack_24[1] = -fStack_c;
  afStack_24[3] = fStack_c;
  fStack_14 = fStack_c;
  afStack_24[2] = 0.0;
  uStack_10 = *(uint *)(param_1 + 0x15c);
  pfVar2 = afStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
