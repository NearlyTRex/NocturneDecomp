// Name: FUN_004c9140
// Address: 004c9140
// Address Range: [[004c9140, 004c93f1]]
// Convention: unknown
// Signature: void FUN_004c9140(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9140(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005a35cc();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xd078);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xd07c);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xd080);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xd084);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xd0a0);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xd09c);
      break;
    default:
      goto switchD_004c9176_default;
    }
    *param_2 = iVar2;
  }
switchD_004c9176_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xd078)) || (iVar2 == *(int *)(param_1 + 0xd07c))) ||
       (iVar2 == *(int *)(param_1 + 0xd080))) ||
      ((iVar2 == *(int *)(param_1 + 0xd084) || (iVar2 == *(int *)(param_1 + 0xd09c))))) ||
     (iVar2 == *(int *)(param_1 + 0xd0a0))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xd0a0) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xd09c) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01D2130C + 0x204) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01D2130C + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040cf40(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_00414550(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_00430590(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xd078)) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd07c),1);
      }
      if (*(int *)(param_1 + 0xd080) == *param_2) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd084),1);
      }
      if (*(int *)(param_1 + 0xd09c) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd080),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd084),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd078),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd07c),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd0a0),piVar1,1);
      }
      FUN_00434810(param_1,"limb?.wav");
      FUN_004157c0(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a0) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005c43ad);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xd0a0)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c43bd);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xd098)) && (iVar2 != *(int *)(param_1 + 0xd09c))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c43b5);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
