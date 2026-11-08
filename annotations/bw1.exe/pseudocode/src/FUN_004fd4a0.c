// Name: FUN_004fd4a0
// Address: 004fd4a0
// Address Range: [[004fd4a0, 004fd55e]]
// Convention: unknown
// Signature: void FUN_004fd4a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd4a0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStack_38 [3];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint auStack_20 [6];
  
  bVar6 = 0;
  iVar2 = FUN_00468900(param_1 + 0x158);
  if (*(int *)(iVar2 + 0x110) < 1) {
    fVar1 = (float)_DAT_005e6b73;
    afStack_38[1] = -0.1;
    fStack_2c = *(float *)(param_1 + 0x2d4) * fVar1;
    fStack_28 = *(float *)(param_1 + 0x2d8) + (float)_DAT_005e6b7b;
    fStack_24 = *(float *)(param_1 + 0x2dc) * fVar1;
    iVar3 = 6;
    afStack_38[2] = -*(float *)(param_1 + 0x2dc) * fVar1;
    afStack_38[0] = -*(float *)(param_1 + 0x2d4) * fVar1;
    pfVar4 = afStack_38;
    puVar5 = auStack_20;
  }
  else {
    puVar5 = auStack_20;
    iVar2 = FUN_00468900(param_1 + 0x158);
    iVar3 = 6;
    pfVar4 = (float *)(iVar2 + 0x338);
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar5 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
