// Name: FUN_004accb0
// Address: 004accb0
// Address Range: [[004accb0, 004ace5e]]
// Convention: unknown
// Signature: void FUN_004accb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004accb0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  float10 fVar7;
  int aiStackY_102c [1015];
  uint uVar8;
  uint local_44;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  int local_1c [3];
  
  bVar6 = 0;
  switch(*(uint *)(param_1 + 0x2b4)) {
  case 0:
    uVar8 = 0;
    uVar2 = 0x450FC000;
    goto LAB_004accd9;
  case 1:
    FUN_004aced0(param_1,0x43030000,0x4427c000);
    break;
  case 2:
    FUN_004aced0(param_1,0x4403c000,0x445dc000);
    break;
  case 3:
    FUN_004aced0(param_1,0x44882000,0x44d9a000);
    break;
  case 4:
    FUN_004aced0(param_1,0x43af0000,0x43c80000);
    break;
  case 5:
    FUN_004aced0(param_1,0x44580000,0x44828000);
    break;
  case 6:
  case 7:
    uVar8 = 0x44d4a000;
    uVar2 = 0x44f14000;
    goto LAB_004accd9;
  case 8:
    uVar8 = 0x44f3a000;
    uVar2 = 0x450fc000;
LAB_004accd9:
    FUN_004acf60(param_1,uVar8,uVar2);
    break;
  default:
    _DAT_01d046a0 = "..\\core\\frankgen.cpp";
    _DAT_01d046a4 = 0x1bb;
    FUN_004e4500(&DAT_005d6ce6);
  }
  FUN_00408ae0(param_1);
  fVar7 = (float10)*(float *)(param_1 + 0x2dc);
  FUN_005b7ff0();
  local_1c[2] = (int)ROUND(fVar7);
  iVar1 = *(int *)(param_1 + 0x5e4);
  uVar2 = FUN_0044fd20(param_1 + 0x2e0,local_1c[2]);
  iVar3 = FUN_0044e6e0(uVar2);
  piVar4 = (int *)(iVar1 * 0xc + iVar3);
  piVar5 = piVar4 + (uint)bVar6 * -2 + 1;
  local_38 = *piVar4;
  *(int *)((int)&stack0xffffffcc + (uint)bVar6 * -8) = *piVar5;
  *(int *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       piVar5[(uint)bVar6 * -2 + 1];
  local_2c = (float)local_38 * _DAT_005f71d8;
  local_28 = (float)local_34 * _DAT_005f71d8;
  local_24 = (float)local_30 * _DAT_005f71d8;
  FUN_00408d70(param_1,&local_2c);
  local_20 = local_44;
  local_1c[(uint)bVar6 * -2] = *(int *)(&stack0xffffffc0 + (uint)bVar6 * -8);
  local_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)(param_1 + 0x5ec) != &local_20) {
    *(uint *)(param_1 + 0x5ec) = local_20;
    *(int *)(param_1 + 0x5f0) = local_1c[0];
    *(int *)(param_1 + 0x5f4) = local_1c[1];
    return;
  }
  return;
}
