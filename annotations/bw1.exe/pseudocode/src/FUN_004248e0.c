// Name: FUN_004248e0
// Address: 004248e0
// Address Range: [[004248e0, 00424b0a]]
// Convention: unknown
// Signature: void FUN_004248e0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004248e0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float local_20;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = FUN_005c084c();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = *(int *)(param_1 + 0xc268);
      break;
    case 1:
      iVar1 = *(int *)(param_1 + 0xc26c);
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0xc270);
      break;
    case 3:
      iVar1 = *(int *)(param_1 + 0xc274);
      break;
    case 4:
      iVar1 = *(int *)(param_1 + 0xc288);
      break;
    default:
      goto switchD_00424919_default;
    }
    *param_2 = iVar1;
  }
switchD_00424919_default:
  iVar1 = *param_2;
  if ((((iVar1 == *(int *)(param_1 + 0xc268)) || (iVar1 == *(int *)(param_1 + 0xc26c))) ||
      (iVar1 == *(int *)(param_1 + 0xc270))) ||
     ((iVar1 == *(int *)(param_1 + 0xc274) || (iVar1 == *(int *)(param_1 + 0xc288))))) {
    local_20 = (float)param_2[0xb];
    if (*(int *)(param_1 + 0xc288) == *param_2) {
      local_20 = local_20 * (float)_DAT_005d4fa8;
    }
    if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
      local_20 = 1.0;
    }
    if (*(int *)(0x01CCF390 + 0x14) == 0) {
      local_20 = 0.0;
    }
    iVar1 = FUN_0040cd00(local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_00431210(param_1,uVar2,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xc268)) {
        FUN_00431210(param_1,uVar2,*(uint *)(param_1 + 0xc26c),0);
      }
      if (*(int *)(param_1 + 0xc270) == *param_2) {
        FUN_00431210(param_1,uVar2,*(uint *)(param_1 + 0xc274),0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar2);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc288) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d4fb0);
    }
  }
  iVar1 = *param_2;
  if (iVar1 == *(int *)(param_1 + 0xc288)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d4fc0);
    return;
  }
  if ((iVar1 != *(int *)(param_1 + 0xc284)) && (iVar1 != *(int *)(param_1 + 0xc280))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d4fb8);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
