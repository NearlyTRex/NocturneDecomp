// Name: FUN_004398b0
// Address: 004398b0
// Address Range: [[004398b0, 00439b25]]
// Convention: unknown
// Signature: void FUN_004398b0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004398b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005b849c();
    switch(iVar2 % 4) {
    case 0:
      iVar2 = *(int *)(param_1 + 0x10b04);
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
    default:
      goto switchD_004398e6_default;
    }
    *param_2 = iVar2;
  }
switchD_004398e6_default:
  iVar2 = *param_2;
  if ((((iVar2 == *(int *)(param_1 + 0x10b20)) || (iVar2 == *(int *)(param_1 + 0x10b24))) ||
      (iVar2 == *(int *)(param_1 + 0x10b28))) ||
     ((iVar2 == *(int *)(param_1 + 0x10b04) || (iVar2 == *(int *)(param_1 + 0x10b1c))))) {
    local_14 = param_2[0xb];
    if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CB6900 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040d060(local_14);
    if (iVar2 != 0) {
      piVar1 = param_2 + 3;
      uVar3 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,piVar1,param_1,0,0,0);
      FUN_004277e0(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0x10b1c)) {
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b04),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b08),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b0c),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b10),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b14),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b18),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b20),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b24),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b28),piVar1,0);
      }
      FUN_0042b260(param_1,"limb?.wav");
      FUN_00416700(uVar3);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b04) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b20) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005ce192);
    }
  }
  if (*(int *)(param_1 + 0x10b04) != *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ce19a);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ce1a2);
  return;
}
