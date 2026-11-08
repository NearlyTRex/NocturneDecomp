// Name: FUN_00599400
// Address: 00599400
// Address Range: [[00599400, 005996ca]]
// Convention: unknown
// Signature: void FUN_00599400(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599400(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005b849c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0x10bb4);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0x10bb8);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0x10bbc);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0x10bc0);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0x10bcc);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0x10bc8);
      break;
    default:
      goto switchD_00599436_default;
    }
    *param_2 = iVar2;
  }
switchD_00599436_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0x10bb4)) || (iVar2 == *(int *)(param_1 + 0x10bb8))) ||
       (iVar2 == *(int *)(param_1 + 0x10bbc))) ||
      ((iVar2 == *(int *)(param_1 + 0x10bc0) || (iVar2 == *(int *)(param_1 + 0x10bc8))))) ||
     (iVar2 == *(int *)(param_1 + 0x10bcc))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0x10bcc) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0x10bc8) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CB6900 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040d060(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_004277e0(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0x10bb4)) {
        FUN_004277e0(param_1,uVar3,*(uint *)(param_1 + 0x10bb8),0);
      }
      if (*(int *)(param_1 + 0x10bbc) == *param_2) {
        FUN_004277e0(param_1,uVar3,*(uint *)(param_1 + 0x10bc0),0);
      }
      if (*(int *)(param_1 + 0x10bc8) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10bbc),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10bc0),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10bb4),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10bb8),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10bcc),piVar1,0);
      }
      FUN_0042b260(param_1,"limb?.wav");
      FUN_00416700(uVar3);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10bcc) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005ef36a);
      if (*(int *)(param_1 + 0x10bc4) < 0) {
        param_2[1] = 0x4479c000;
      }
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0x10bcc)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ef37a);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0x10bc4)) && (iVar2 != *(int *)(param_1 + 0x10bc8))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ef372);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
