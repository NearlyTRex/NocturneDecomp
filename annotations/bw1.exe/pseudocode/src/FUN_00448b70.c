// Name: FUN_00448b70
// Address: 00448b70
// Address Range: [[00448b70, 00448de5]]
// Convention: unknown
// Signature: void FUN_00448b70(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448b70(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005c084c();
    switch(iVar2 % 4) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xc274);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xc290);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xc294);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xc298);
      break;
    default:
      goto switchD_00448ba6_default;
    }
    *param_2 = iVar2;
  }
switchD_00448ba6_default:
  iVar2 = *param_2;
  if ((((iVar2 == *(int *)(param_1 + 0xc290)) || (iVar2 == *(int *)(param_1 + 0xc294))) ||
      (iVar2 == *(int *)(param_1 + 0xc298))) ||
     ((iVar2 == *(int *)(param_1 + 0xc274) || (iVar2 == *(int *)(param_1 + 0xc28c))))) {
    local_14 = param_2[0xb];
    if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CCF390 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      piVar1 = param_2 + 3;
      uVar3 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,piVar1,param_1,0,0,0);
      FUN_00431210(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xc28c)) {
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc274),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc278),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc27c),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc280),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc284),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc288),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc290),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc294),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc298),piVar1,0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d72fe);
    }
  }
  if (*(int *)(param_1 + 0xc274) != *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d7306);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d730e);
  return;
}
