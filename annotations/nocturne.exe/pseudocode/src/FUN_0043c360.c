// Name: FUN_0043c360
// Address: 0043c360
// Address Range: [[0043c360, 0043c5d5]]
// Convention: unknown
// Signature: void FUN_0043c360(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c360(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_0056488c();
    switch(iVar2 % 4) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbd30);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbd4c);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbd50);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbd54);
      break;
    default:
      goto switchD_0043c396_default;
    }
    *param_2 = iVar2;
  }
switchD_0043c396_default:
  iVar2 = *param_2;
  if ((((iVar2 == *(int *)(param_1 + 0xbd4c)) || (iVar2 == *(int *)(param_1 + 0xbd50))) ||
      (iVar2 == *(int *)(param_1 + 0xbd54))) ||
     ((iVar2 == *(int *)(param_1 + 0xbd30) || (iVar2 == *(int *)(param_1 + 0xbd48))))) {
    local_14 = param_2[0xb];
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01C775EC + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040dea0(local_14);
    if (iVar2 != 0) {
      piVar1 = param_2 + 3;
      uVar3 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,piVar1,param_1,0,0,0);
      FUN_00427eb0(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xbd48)) {
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd30),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd34),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd38),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd3c),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd40),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd44),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd4c),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd50),piVar1,0);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd54),piVar1,0);
      }
      FUN_0042b490(param_1,"limb?.wav");
      FUN_00416d40(uVar3);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd30) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_0057b3fa);
    }
  }
  if (*(int *)(param_1 + 0xbd30) != *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_0057b402);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_0057b40a);
  return;
}
