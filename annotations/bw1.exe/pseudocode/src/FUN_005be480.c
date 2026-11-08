// Name: FUN_005be480
// Address: 005be480
// Address Range: [[005be480, 005be74a]]
// Convention: unknown
// Signature: void FUN_005be480(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005be480(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005c084c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xc324);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xc328);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xc32c);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xc330);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xc33c);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xc338);
      break;
    default:
      goto switchD_005be4b6_default;
    }
    *param_2 = iVar2;
  }
switchD_005be4b6_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xc324)) || (iVar2 == *(int *)(param_1 + 0xc328))) ||
       (iVar2 == *(int *)(param_1 + 0xc32c))) ||
      ((iVar2 == *(int *)(param_1 + 0xc330) || (iVar2 == *(int *)(param_1 + 0xc338))))) ||
     (iVar2 == *(int *)(param_1 + 0xc33c))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xc33c) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xc338) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CCF390 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_00431210(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xc324)) {
        FUN_00431210(param_1,uVar3,*(uint *)(param_1 + 0xc328),0);
      }
      if (*(int *)(param_1 + 0xc32c) == *param_2) {
        FUN_00431210(param_1,uVar3,*(uint *)(param_1 + 0xc330),0);
      }
      if (*(int *)(param_1 + 0xc338) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc32c),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc330),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc324),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc328),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc33c),piVar1,0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc33c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005fa93c);
      if (*(int *)(param_1 + 0xc334) < 0) {
        param_2[1] = 0x4479c000;
      }
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xc33c)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005fa94c);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xc334)) && (iVar2 != *(int *)(param_1 + 0xc338))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005fa944);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
