// Name: core_trigger.cpp_FUN_00578060
// Address: 00578060
// Address Range: [[00578060, 005780d1]]
// Convention: unknown
// Signature: void core_trigger_cpp_FUN_00578060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trigger_cpp_FUN_00578060(int param_1)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  float *pfVar3;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005ecd92;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = *(float *)(param_1 + 700) * fVar1;
  fStack_c = *(float *)(param_1 + 0x2c0) + (float)_DAT_005ecd9a;
  fStack_8 = *(float *)(param_1 + 0x2c4) * fVar1;
  afStack_1c[2] = -*(float *)(param_1 + 0x2c4) * fVar1;
  afStack_1c[0] = -*(float *)(param_1 + 700) * fVar1;
  pfVar3 = afStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
