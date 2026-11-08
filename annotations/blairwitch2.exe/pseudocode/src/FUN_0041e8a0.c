// Name: FUN_0041e8a0
// Address: 0041e8a0
// Address Range: [[0041e8a0, 0041eaca]]
// Convention: unknown
// Signature: void FUN_0041e8a0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e8a0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float local_20;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = FUN_005b849c();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = *(int *)(param_1 + 0x10af8);
      break;
    case 1:
      iVar1 = *(int *)(param_1 + 0x10afc);
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0x10b00);
      break;
    case 3:
      iVar1 = *(int *)(param_1 + 0x10b04);
      break;
    case 4:
      iVar1 = *(int *)(param_1 + 0x10b18);
      break;
    default:
      goto switchD_0041e8d9_default;
    }
    *param_2 = iVar1;
  }
switchD_0041e8d9_default:
  iVar1 = *param_2;
  if ((((iVar1 == *(int *)(param_1 + 0x10af8)) || (iVar1 == *(int *)(param_1 + 0x10afc))) ||
      (iVar1 == *(int *)(param_1 + 0x10b00))) ||
     ((iVar1 == *(int *)(param_1 + 0x10b04) || (iVar1 == *(int *)(param_1 + 0x10b18))))) {
    local_20 = (float)param_2[0xb];
    if (*(int *)(param_1 + 0x10b18) == *param_2) {
      local_20 = local_20 * (float)_DAT_005cc8b9;
    }
    if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
      local_20 = 1.0;
    }
    if (*(int *)(0x01CB6900 + 0x14) == 0) {
      local_20 = 0.0;
    }
    iVar1 = FUN_0040d060(local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_004277e0(param_1,uVar2,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0x10af8)) {
        FUN_004277e0(param_1,uVar2,*(uint *)(param_1 + 0x10afc),0);
      }
      if (*(int *)(param_1 + 0x10b00) == *param_2) {
        FUN_004277e0(param_1,uVar2,*(uint *)(param_1 + 0x10b04),0);
      }
      FUN_0042b260(param_1,"limb?.wav");
      FUN_00416700(uVar2);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b18) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005cc8c1);
    }
  }
  iVar1 = *param_2;
  if (iVar1 == *(int *)(param_1 + 0x10b18)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005cc8d1);
    return;
  }
  if ((iVar1 != *(int *)(param_1 + 0x10b14)) && (iVar1 != *(int *)(param_1 + 0x10b10))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005cc8c9);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
