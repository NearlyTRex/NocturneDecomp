// Name: FUN_00585810
// Address: 00585810
// Address Range: [[00585810, 00585982]]
// Convention: unknown
// Signature: undefined4 FUN_00585810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00585810(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStack_48 [6];
  uint auStack_30 [6];
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  FUN_0046b2b0(DAT_0060b280,param_1 + 0x20);
  iStack_14 = param_1 + 0x30;
  FUN_0046b350(DAT_0060b280,iStack_14,0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar4 = auStack_30;
  puVar5 = auStack_48;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uVar2 = FUN_0041a840(auStack_48);
  uVar1 = DAT_0060b280;
  *(uint *)(param_1 + 0xaa0) = uVar2;
  thunk_FUN_004e9810(uVar1);
  if (*(int *)(param_1 + 0xaa0) == 0) {
    return *(uint *)(param_1 + 0xaa0);
  }
  FUN_0046b350(DAT_0060b280,iStack_14,0);
  FUN_0046b8e0(DAT_0060b280,0xffff);
  if ((*(int *)(param_1 + 0x514) == 3) || (*(float *)(param_1 + 0x518) <= 0.0)) {
    FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  }
  else {
    fVar7 = (float10)_DAT_005ede02 - (float10)*(float *)(param_1 + 0x518) * (float10)_DAT_005ede02;
    FUN_005b7ff0();
    iStack_18 = (int)ROUND(fVar7);
    FUN_0046b8e0(DAT_0060b280,iStack_18);
    FUN_0046c540(DAT_0060b280,0);
    FUN_0044fcc0(param_1 + 0x2b4,0,0x2e7);
    FUN_0046c900(DAT_0060b280);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  return *(uint *)(param_1 + 0xaa0);
}
