// Name: FUN_005b1470
// Address: 005b1470
// Address Range: [[005b1470, 005b1798]]
// Convention: unknown
// Signature: void FUN_005b1470(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1470(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1018 [1009];
  byte auStack_24 [4];
  uint auStack_20 [4];
  
  bVar5 = 0;
  FUN_00573a80(*(uint *)(param_1 + 0xc284));
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_005b0bb0(param_1);
    FUN_005247c0(param_1 + 0x158,0x16,1);
    FUN_004a0f00(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005f9bd2;
    FUN_00408b40(param_1,param_2 + 0x1c);
    iVar4 = 0;
    auStack_20[(uint)bVar5 * -2] = *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
    auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      FUN_004b59e0(0x01C57074,auStack_24,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iVar4);
    if ((*(int *)(iVar2 + 0x24) != 0xd) && (*(int *)(iVar2 + 0x24) != 0xc)) {
      FUN_005247c0(iVar4,0xc,1);
      if ((*(int *)(param_1 + 0xc268) == 0) && (*(int *)(0x01E82168 + 0x15ae5c) != 0)) {
        if (*(float *)(param_1 + 0x20) <= (float)_DAT_005f9bda) {
          if ((double)*(float *)(param_1 + 0x20) < _DAT_005f9be2) {
            *(uint *)(param_1 + 0x34) = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)(param_1 + 0x34) = 0xbfc90fdb;
        }
      }
      FUN_00573a80(*(uint *)(param_1 + 0xc28c));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-die?.wav");
      *(uint *)(param_1 + 0xc28c) = uVar3;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
    goto LAB_005b1593;
  }
  if (*(int *)(param_1 + 0xc268) != 2) {
    iVar4 = FUN_00524770(iVar4);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = FUN_0040cc60(0,2);
      if (iVar4 == 0) {
        FUN_005247c0(param_1 + 0x158,9,1);
      }
      if (iVar4 == 1) {
        FUN_005247c0(param_1 + 0x158,10,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0xb;
LAB_005b16cb:
        FUN_005247c0(param_1 + 0x158,uVar3,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = FUN_0040cc60(0,2);
      if (iVar4 == 0) {
        FUN_005247c0(param_1 + 0x158,0x10,1);
      }
      if (iVar4 == 1) {
        FUN_005247c0(param_1 + 0x158,0x11,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0x12;
        goto LAB_005b16cb;
      }
    }
  }
  iVar4 = FUN_005735a0(*(uint *)(param_1 + 0xc28c));
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-hurt?.wav");
    *(uint *)(param_1 + 0xc28c) = uVar3;
  }
LAB_005b1593:
  FUN_004a0f00(param_1,param_2);
  return;
}
