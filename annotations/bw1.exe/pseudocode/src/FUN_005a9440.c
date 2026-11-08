// Name: FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a95b2]]
// Convention: unknown
// Signature: undefined4 FUN_005a9440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a9440(int param_1)

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
  FUN_004837b0(DAT_00612560,param_1 + 0x20);
  iStack_14 = param_1 + 0x30;
  FUN_00483850(DAT_00612560,iStack_14,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_30;
  puVar5 = auStack_48;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uVar2 = FUN_004207b0(auStack_48);
  uVar1 = DAT_00612560;
  *(uint *)(param_1 + 0x7e8) = uVar2;
  thunk_FUN_005084b0(uVar1);
  if (*(int *)(param_1 + 0x7e8) == 0) {
    return *(uint *)(param_1 + 0x7e8);
  }
  FUN_00483850(DAT_00612560,iStack_14,0);
  FUN_00483de0(DAT_00612560,0xffff);
  if ((*(int *)(param_1 + 0x3b8) == 3) || (*(float *)(param_1 + 0x3bc) <= 0.0)) {
    FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  }
  else {
    fVar7 = (float10)_DAT_005f915e - (float10)*(float *)(param_1 + 0x3bc) * (float10)_DAT_005f915e;
    FUN_005c03a0();
    iStack_18 = (int)ROUND(fVar7);
    FUN_00483de0(DAT_00612560,iStack_18);
    FUN_00484a40(DAT_00612560,0);
    FUN_004688a0(param_1 + 0x158,0,0x2e7);
    FUN_00484e00(DAT_00612560);
  }
  thunk_FUN_005084b0(DAT_00612560);
  return *(uint *)(param_1 + 0x7e8);
}
