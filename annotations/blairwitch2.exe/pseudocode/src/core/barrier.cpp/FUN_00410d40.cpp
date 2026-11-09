// Name: core_barrier.cpp_FUN_00410d40
// Address: 00410d40
// Address Range: [[00410d40, 00410db1]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_00410d40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_barrier_cpp_FUN_00410d40(int param_1)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  float *pfVar3;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005cb61f;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = *(float *)(param_1 + 0x2b4) * fVar1;
  fStack_c = *(float *)(param_1 + 0x2b8) + (float)_DAT_005cb627;
  fStack_8 = *(float *)(param_1 + 700) * fVar1;
  afStack_1c[2] = -*(float *)(param_1 + 700) * fVar1;
  afStack_1c[0] = -*(float *)(param_1 + 0x2b4) * fVar1;
  pfVar3 = afStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
