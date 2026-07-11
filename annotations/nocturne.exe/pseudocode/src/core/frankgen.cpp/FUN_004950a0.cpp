// Name: FUN_004950a0
// Address: 004950a0
// Address Range: [[004950a0, 0049523c]]
// Convention: unknown
// Signature: void FUN_004950a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004950a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  float10 fVar8;
  int aiStackY_1014 [1012];
  uint uVar9;
  byte local_38 [12];
  int local_2c;
  int local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar7 = 0;
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    uVar9 = 0;
    uVar2 = 0x450FC000;
    goto LAB_004950c9;
  case 1:
    FUN_004952b0(param_1,0x43030000,0x4427c000);
    break;
  case 2:
    FUN_004952b0(param_1,0x4403c000,0x445dc000);
    break;
  case 3:
    FUN_004952b0(param_1,0x44882000,0x44d9a000);
    break;
  case 4:
    FUN_004952b0(param_1,0x43af0000,0x43c80000);
    break;
  case 5:
    FUN_004952b0(param_1,0x44580000,0x44828000);
    break;
  case 6:
  case 7:
    uVar9 = 0x44d4a000;
    uVar2 = 0x44f14000;
    goto LAB_004950c9;
  case 8:
    uVar9 = 0x44f3a000;
    uVar2 = 0x450fc000;
LAB_004950c9:
    FUN_00495340(param_1,uVar9,uVar2);
    break;
  default:
    _DAT_01cc4800 = "..\\core\\frankgen.cpp";
    _DAT_01cc4804 = 0x1bb;
    FUN_004c8440(&DAT_00581d6d);
  }
  FUN_0040a000(param_1);
  fVar8 = (float10)*(float *)(param_1 + 0x178);
  FUN_00563a30();
  local_14 = (int)ROUND(fVar8);
  iVar1 = *(int *)(param_1 + 0x480);
  uVar2 = FUN_00454530(param_1 + 0x17c,local_14);
  iVar3 = FUN_00453080(uVar2);
  piVar5 = (int *)(iVar1 * 0xc + iVar3);
  piVar6 = piVar5 + (uint)bVar7 * -2 + 1;
  local_2c = *piVar5;
  local_28[(uint)bVar7 * -2] = *piVar6;
  local_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = piVar6[(uint)bVar7 * -2 + 1];
  local_20 = (float)local_2c * _DAT_0059db58;
  local_1c = (float)local_28[0] * _DAT_0059db58;
  local_18 = (float)local_28[1] * _DAT_0059db58;
  puVar4 = (uint *)FUN_0040a240(param_1,local_38,&local_20);
  if ((uint *)(param_1 + 0x488) != puVar4) {
    *(uint *)(param_1 + 0x488) = *puVar4;
    *(uint *)(param_1 + 0x48c) = puVar4[1];
    *(uint *)(param_1 + 0x490) = puVar4[2];
    return;
  }
  return;
}
