// Name: FUN_00521810
// Address: 00521810
// Address Range: [[00521810, 00521989]]
// Convention: unknown
// Signature: void FUN_00521810(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00521810(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((*param_2 == *(int *)(param_1 + 0xc1dc)) || (*param_2 == *(int *)(param_1 + 0xc1f0))) {
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
      if (*param_2 == *(int *)(param_1 + 0xc1f0)) {
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc1dc),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc1e0),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc1e4),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc1e8),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc1ec),piVar1,0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc1dc) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005ea3ea);
    }
  }
  if (*(int *)(param_1 + 0xc1dc) == *param_2) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ea3fa);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ea3f2);
  return;
}
