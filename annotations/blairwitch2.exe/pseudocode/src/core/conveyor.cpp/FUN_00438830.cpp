// Name: core_conveyor.cpp_FUN_00438830
// Address: 00438830
// Address Range: [[00438830, 004388a1]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_00438830(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_conveyor_cpp_FUN_00438830(int param_1)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  float *pfVar3;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005cdfd2;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = *(float *)(param_1 + 0x884) * fVar1;
  fStack_c = *(float *)(param_1 + 0x888) + (float)_DAT_005cdfda;
  fStack_8 = *(float *)(param_1 + 0x88c) * fVar1;
  afStack_1c[2] = -*(float *)(param_1 + 0x88c) * fVar1;
  afStack_1c[0] = -*(float *)(param_1 + 0x884) * fVar1;
  pfVar3 = afStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
