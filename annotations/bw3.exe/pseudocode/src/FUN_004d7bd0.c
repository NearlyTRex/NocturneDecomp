// Name: FUN_004d7bd0
// Address: 004d7bd0
// Address Range: [[004d7bd0, 004d7e65]]
// Convention: unknown
// Signature: void FUN_004d7bd0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7bd0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005a35cc();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xd060);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xd064);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xd068);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xd06c);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xd088);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xd084);
      break;
    default:
      goto switchD_004d7c06_default;
    }
    *param_2 = iVar2;
  }
switchD_004d7c06_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xd060)) || (iVar2 == *(int *)(param_1 + 0xd064))) ||
       (iVar2 == *(int *)(param_1 + 0xd068))) ||
      ((iVar2 == *(int *)(param_1 + 0xd06c) || (iVar2 == *(int *)(param_1 + 0xd084))))) ||
     (iVar2 == *(int *)(param_1 + 0xd088))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xd088) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xd084) == *param_2) {
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
      uVar3 = FUN_00414550(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                           *(uint *)(param_1 + 0x27a0));
      FUN_00430590(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xd060)) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd064),1);
      }
      if (*(int *)(param_1 + 0xd068) == *param_2) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd06c),1);
      }
      if (*(int *)(param_1 + 0xd084) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd068),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd06c),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd060),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd064),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd088),piVar1,1);
      }
      FUN_00434810(param_1,"limb?.wav");
      FUN_004157c0(uVar3);
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005c5668);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xd088)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c5678);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xd080)) && (iVar2 != *(int *)(param_1 + 0xd084))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005c5670);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
