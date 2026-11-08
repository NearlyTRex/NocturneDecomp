// Name: FUN_00413c40
// Address: 00413c40
// Address Range: [[00413c40, 00413f81]]
// Convention: unknown
// Signature: void FUN_00413c40(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413c40(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  byte *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int aiStackY_1028 [1011];
  uint *puVar7;
  uint uVar8;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_14;
  
  bVar6 = 0;
  puVar7 = &stack0xffffffc0;
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar4 = FUN_005c084c();
    switch(iVar4 % 6) {
    case 0:
      iVar4 = *(int *)(param_1 + 0xc2d8);
      break;
    case 1:
      iVar4 = *(int *)(param_1 + 0xc2dc);
      break;
    case 2:
      iVar4 = *(int *)(param_1 + 0xc2e0);
      break;
    case 3:
      iVar4 = *(int *)(param_1 + 0xc2e4);
      break;
    case 4:
      iVar4 = *(int *)(param_1 + 0xc2d0);
      break;
    case 5:
      iVar4 = *(int *)(param_1 + 0xc2d4);
      break;
    default:
      goto switchD_00413c76_default;
    }
    *param_2 = iVar4;
  }
switchD_00413c76_default:
  iVar4 = *param_2;
  if (((((iVar4 == *(int *)(param_1 + 0xc2d8)) || (iVar4 == *(int *)(param_1 + 0xc2dc))) ||
       (iVar4 == *(int *)(param_1 + 0xc2e0))) ||
      ((iVar4 == *(int *)(param_1 + 0xc2e4) || (iVar4 == *(int *)(param_1 + 0xc2d4))))) ||
     (iVar4 == *(int *)(param_1 + 0xc2d0))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xc2d0) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xc2d4) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CCF390 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar4 = FUN_0040cd00(local_14);
    if (iVar4 != 0) {
      uVar5 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                           *(uint *)(param_1 + 0x27a0));
      FUN_00431210(param_1,uVar5,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xc2d8)) {
        FUN_00431210(param_1,uVar5,*(uint *)(param_1 + 0xc2dc),0);
      }
      if (*(int *)(param_1 + 0xc2e0) == *param_2) {
        FUN_00431210(param_1,uVar5,*(uint *)(param_1 + 0xc2e4),0);
      }
      if (*(int *)(param_1 + 0xc2d4) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2e0),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2e4),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2d8),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2dc),piVar1,0);
        FUN_004311a0(param_1,*(uint *)(param_1 + 0xc2d0),piVar1,0);
      }
      FUN_004352e0(param_1,"limb?.wav");
      FUN_00419b90(uVar5);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d0) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d3b49);
    }
  }
  iVar4 = *param_2;
  if (iVar4 == *(int *)(param_1 + 0xc2d0)) {
    fVar2 = (float)param_2[1] * (float)_DAT_005d3b59;
  }
  else {
    if ((iVar4 == *(int *)(param_1 + 0xc2e8)) || (iVar4 == *(int *)(param_1 + 0xc2d4))) {
      param_2[1] = param_2[1];
      goto LAB_00413e31;
    }
    fVar2 = (float)param_2[1] * (float)_DAT_005d3b51;
  }
  param_2[1] = (int)fVar2;
LAB_00413e31:
  puVar3 = PTR_DAT_00611100;
  if ((*(int *)(param_1 + 0xc2d4) == *param_2) && (param_2[0xc] == 0x68)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005d3b61);
    FUN_00445430(puVar3,"Shot thru the heart\n");
    iVar4 = FUN_0040cd00(0x3f000000);
    if (iVar4 != 0) {
      local_30 = 0x41a00000;
      local_2c = 0x41a00000;
      local_34 = 0;
      FUN_00408ac0(param_1,&stack0xffffffcc);
      uVar8 = 1;
      uVar5 = 0xbf800000;
      local_40 = local_28;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00430d90(param_1,puVar7,uVar5,uVar8);
      return;
    }
  }
  return;
}
