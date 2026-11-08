// Name: FUN_004dd390
// Address: 004dd390
// Address Range: [[004dd390, 004dd628]]
// Convention: unknown
// Signature: void FUN_004dd390(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd390(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005c084c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xc268);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xc26c);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xc270);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xc274);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xc290);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xc28c);
      break;
    default:
      goto switchD_004dd3c6_default;
    }
    *param_2 = iVar2;
  }
switchD_004dd3c6_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xc268)) || (iVar2 == *(int *)(param_1 + 0xc26c))) ||
       (iVar2 == *(int *)(param_1 + 0xc270))) ||
      ((iVar2 == *(int *)(param_1 + 0xc274) || (iVar2 == *(int *)(param_1 + 0xc28c))))) ||
     (iVar2 == *(int *)(param_1 + 0xc290))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xc290) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xc28c) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    iVar2 = FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                           *(uint *)(param_1 + 0x27a0));
      FUN_00431210(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xc268)) {
        FUN_00431210(param_1,uVar3,*(uint *)(param_1 + 0xc26c),1);
      }
      if (*(int *)(param_1 + 0xc270) == *param_2) {
        FUN_00431210(param_1,uVar3,*(uint *)(param_1 + 0xc274),1);
      }
      if (*(int *)(param_1 + 0xc28c) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc270),piVar1,1);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc274),piVar1,1);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc268),piVar1,1);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc26c),piVar1,1);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc290),piVar1,1);
      }
      FUN_00419b90(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc290) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005e39dc);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xc290)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e39ec);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xc288)) && (iVar2 != *(int *)(param_1 + 0xc28c))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e39e4);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
