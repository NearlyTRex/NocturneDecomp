// Name: FUN_00488b30
// Address: 00488b30
// Address Range: [[00488b30, 00488ba1]]
// Convention: unknown
// Signature: void FUN_00488b30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488b30(int param_1)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  float *pfVar3;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005bda54;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = *(float *)(param_1 + 0x15c) * fVar1;
  fStack_c = *(float *)(param_1 + 0x160) + (float)_DAT_005bda5c;
  fStack_8 = *(float *)(param_1 + 0x164) * fVar1;
  afStack_1c[2] = -*(float *)(param_1 + 0x164) * fVar1;
  afStack_1c[0] = -*(float *)(param_1 + 0x15c) * fVar1;
  pfVar3 = afStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
