// Name: FUN_004c3e30
// Address: 004c3e30
// Address Range: [[004c3e30, 004c40e1]]
// Convention: unknown
// Signature: void FUN_004c3e30(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3e30(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005b849c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0x10b1c);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0x10b20);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0x10b24);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0x10b28);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0x10b44);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0x10b40);
      break;
    default:
      goto switchD_004c3e66_default;
    }
    *param_2 = iVar2;
  }
switchD_004c3e66_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0x10b1c)) || (iVar2 == *(int *)(param_1 + 0x10b20))) ||
       (iVar2 == *(int *)(param_1 + 0x10b24))) ||
      ((iVar2 == *(int *)(param_1 + 0x10b28) || (iVar2 == *(int *)(param_1 + 0x10b40))))) ||
     (iVar2 == *(int *)(param_1 + 0x10b44))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0x10b44) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0x10b40) == *param_2) {
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
      if (*param_2 == *(int *)(param_1 + 0x10b1c)) {
        FUN_004277e0(param_1,uVar3,*(uint *)(param_1 + 0x10b20),0);
      }
      if (*(int *)(param_1 + 0x10b24) == *param_2) {
        FUN_004277e0(param_1,uVar3,*(uint *)(param_1 + 0x10b28),0);
      }
      if (*(int *)(param_1 + 0x10b40) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b24),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b28),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b1c),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b20),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b44),piVar1,0);
      }
      FUN_0042b260(param_1,"limb?.wav");
      FUN_00416700(uVar3);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b44) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d91e7);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0x10b44)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d91f7);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0x10b3c)) && (iVar2 != *(int *)(param_1 + 0x10b40))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d91ef);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
