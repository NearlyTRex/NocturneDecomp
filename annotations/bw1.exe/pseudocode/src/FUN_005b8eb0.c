// Name: FUN_005b8eb0
// Address: 005b8eb0
// Address Range: [[005b8eb0, 005b910b]]
// Convention: unknown
// Signature: void FUN_005b8eb0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b8eb0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005c084c();
    switch(iVar2 % 4) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xc284);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xc288);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xc29c);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xc298);
      break;
    default:
      goto switchD_005b8ee6_default;
    }
    *param_2 = iVar2;
  }
switchD_005b8ee6_default:
  iVar2 = *param_2;
  if ((((iVar2 == *(int *)(param_1 + 0xc284)) || (iVar2 == *(int *)(param_1 + 0xc288))) ||
      (iVar2 == *(int *)(param_1 + 0xc298))) || (iVar2 == *(int *)(param_1 + 0xc29c))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xc29c) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xc298) == *param_2) {
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
      piVar1 = param_2 + 3;
      uVar3 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,piVar1,param_1,0,0,0);
      FUN_00431210(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xc298)) {
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc284),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc288),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc28c),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc290),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc294),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc29c),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2a0),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2a4),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2a8),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2ac),piVar1,0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc29c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005fa354);
      if (*(int *)(param_1 + 0xc298) < 0) {
        param_2[1] = 0x4479c000;
        return;
      }
    }
  }
  return;
}
