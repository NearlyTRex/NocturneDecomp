// Name: FUN_00576c90
// Address: 00576c90
// Address Range: [[00576c90, 00576e02]]
// Convention: unknown
// Signature: undefined4 FUN_00576c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00576c90(int param_1)

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
  FUN_0046ce90(DAT_005f2afc,param_1 + 0x20);
  iStack_14 = param_1 + 0x30;
  FUN_0046cf30(DAT_005f2afc,iStack_14,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_30;
  puVar5 = auStack_48;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uVar2 = FUN_0041daf0(auStack_48);
  uVar1 = DAT_005f2afc;
  *(uint *)(param_1 + 0x7e8) = uVar2;
  thunk_FUN_004e5ef0(uVar1);
  if (*(int *)(param_1 + 0x7e8) == 0) {
    return *(uint *)(param_1 + 0x7e8);
  }
  FUN_0046cf30(DAT_005f2afc,iStack_14,0);
  FUN_0046d4c0(DAT_005f2afc,0xffff);
  if ((*(int *)(param_1 + 0x3b8) == 3) || (*(float *)(param_1 + 0x3bc) <= 0.0)) {
    FUN_00462540(param_1 + 0x158,0,0xffffffff);
  }
  else {
    fVar7 = (float10)_DAT_005d70c7 - (float10)*(float *)(param_1 + 0x3bc) * (float10)_DAT_005d70c7;
    FUN_005a3120();
    iStack_18 = (int)ROUND(fVar7);
    FUN_0046d4c0(DAT_005f2afc,iStack_18);
    FUN_0046e120(DAT_005f2afc,0);
    FUN_00462540(param_1 + 0x158,0,0x2e7);
    FUN_0046e4e0(DAT_005f2afc);
  }
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return *(uint *)(param_1 + 0x7e8);
}
