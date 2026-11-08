// Name: FUN_00561fa0
// Address: 00561fa0
// Address Range: [[00561fa0, 00562004]]
// Convention: unknown
// Signature: void FUN_00561fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561fa0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_20 [4];
  float fStack_10;
  float fStack_c;
  
  afStack_20[1] = 0.0;
  afStack_20[2] = 0.0;
  afStack_20[3] = *(float *)(param_1 + 700) * (float)_DAT_005eb148;
  fStack_10 = *(float *)(param_1 + 0x2b4) * (float)*(int *)(param_1 + 0x2c8);
  fStack_c = *(float *)(param_1 + 0x2b8) * (float)*(int *)(param_1 + 0x2c8);
  afStack_20[0] = -*(float *)(param_1 + 700) * (float)_DAT_005eb148;
  pfVar2 = afStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
