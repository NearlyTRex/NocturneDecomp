// Name: FUN_00413f40
// Address: 00413f40
// Address Range: [[00413f40, 00414281]]
// Convention: unknown
// Signature: void FUN_00413f40(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413f40(int param_1,int *param_2)

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
    iVar4 = FUN_005b849c();
    switch(iVar4 % 6) {
    case 0:
      iVar4 = *(int *)(param_1 + 0x10b64);
      break;
    case 1:
      iVar4 = *(int *)(param_1 + 0x10b68);
      break;
    case 2:
      iVar4 = *(int *)(param_1 + 0x10b6c);
      break;
    case 3:
      iVar4 = *(int *)(param_1 + 0x10b70);
      break;
    case 4:
      iVar4 = *(int *)(param_1 + 0x10b5c);
      break;
    case 5:
      iVar4 = *(int *)(param_1 + 0x10b60);
      break;
    default:
      goto switchD_00413f76_default;
    }
    *param_2 = iVar4;
  }
switchD_00413f76_default:
  iVar4 = *param_2;
  if (((((iVar4 == *(int *)(param_1 + 0x10b64)) || (iVar4 == *(int *)(param_1 + 0x10b68))) ||
       (iVar4 == *(int *)(param_1 + 0x10b6c))) ||
      ((iVar4 == *(int *)(param_1 + 0x10b70) || (iVar4 == *(int *)(param_1 + 0x10b60))))) ||
     (iVar4 == *(int *)(param_1 + 0x10b5c))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0x10b5c) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0x10b60) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01CB6900 + 0x14) == 0) {
      local_14 = 0;
    }
    iVar4 = FUN_0040d060(local_14);
    if (iVar4 != 0) {
      uVar5 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                           *(uint *)(param_1 + 0x280c));
      FUN_004277e0(param_1,uVar5,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0x10b64)) {
        FUN_004277e0(param_1,uVar5,*(uint *)(param_1 + 0x10b68),0);
      }
      if (*(int *)(param_1 + 0x10b6c) == *param_2) {
        FUN_004277e0(param_1,uVar5,*(uint *)(param_1 + 0x10b70),0);
      }
      if (*(int *)(param_1 + 0x10b60) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b6c),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b70),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b64),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b68),piVar1,0);
        FUN_00427770(param_1,*(uint *)(param_1 + 0x10b5c),piVar1,0);
      }
      FUN_0042b260(param_1,"limb?.wav");
      FUN_00416700(uVar5);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b5c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005cbbce);
    }
  }
  iVar4 = *param_2;
  if (iVar4 == *(int *)(param_1 + 0x10b5c)) {
    fVar2 = (float)param_2[1] * (float)_DAT_005cbbde;
  }
  else {
    if ((iVar4 == *(int *)(param_1 + 0x10b74)) || (iVar4 == *(int *)(param_1 + 0x10b60))) {
      param_2[1] = param_2[1];
      goto LAB_00414131;
    }
    fVar2 = (float)param_2[1] * (float)_DAT_005cbbd6;
  }
  param_2[1] = (int)fVar2;
LAB_00414131:
  puVar3 = PTR_DAT_00609ed0;
  if ((*(int *)(param_1 + 0x10b60) == *param_2) && (param_2[0xc] == 0x68)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005cbbe6);
    FUN_00436710(puVar3,"Shot thru the heart\n");
    iVar4 = FUN_0040d060(0x3f000000);
    if (iVar4 != 0) {
      local_30 = 0x41a00000;
      local_2c = 0x41a00000;
      local_34 = 0;
      FUN_00408cf0(param_1,&stack0xffffffcc);
      uVar8 = 1;
      uVar5 = 0xbf800000;
      local_40 = local_28;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00427360(param_1,puVar7,uVar5,uVar8);
      return;
    }
  }
  return;
}
