// Name: FUN_00595f90
// Address: 00595f90
// Address Range: [[00595f90, 005962c2]]
// Convention: unknown
// Signature: void FUN_00595f90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595f90(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1018 [1009];
  uint uStack_30;
  uint uStack_24;
  
  bVar5 = 0;
  FUN_00556be0(*(uint *)(param_1 + 0xd070));
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_00595710(param_1);
    FUN_004fc0d0(param_1 + 0x158,0x16,1);
    FUN_00489b80(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005d9451;
    FUN_00408b80(param_1,param_2 + 0x1c);
    iVar4 = 0;
    uStack_30 = uStack_24;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      FUN_004a23c0(0x01C73654,&stack0xffffffd0,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(iVar4);
    if ((*(int *)(iVar2 + 0x24) != 0xd) && (*(int *)(iVar2 + 0x24) != 0xc)) {
      FUN_004fc0d0(iVar4,0xc,1);
      if ((*(int *)(param_1 + 0xd054) == 0) && (*(int *)(0x01ED78C8 + 0x15ae5c) != 0)) {
        if (*(float *)(param_1 + 0x20) <= (float)_DAT_005d9459) {
          if ((double)*(float *)(param_1 + 0x20) < _DAT_005d9461) {
            *(uint *)(param_1 + 0x34) = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)(param_1 + 0x34) = 0xbfc90fdb;
        }
      }
      FUN_00556be0(*(uint *)(param_1 + 0xd078));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-die?.wav");
      *(uint *)(param_1 + 0xd078) = uVar3;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
    goto LAB_005960bd;
  }
  if (*(int *)(param_1 + 0xd054) != 2) {
    iVar4 = FUN_004fc070(iVar4);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        FUN_004fc0d0(param_1 + 0x158,9,1);
      }
      if (iVar4 == 1) {
        FUN_004fc0d0(param_1 + 0x158,10,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0xb;
LAB_005961f5:
        FUN_004fc0d0(param_1 + 0x158,uVar3,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        FUN_004fc0d0(param_1 + 0x158,0x10,1);
      }
      if (iVar4 == 1) {
        FUN_004fc0d0(param_1 + 0x158,0x11,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0x12;
        goto LAB_005961f5;
      }
    }
  }
  iVar4 = FUN_00556700(*(uint *)(param_1 + 0xd078));
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"werewolf-hurt?.wav");
    *(uint *)(param_1 + 0xd078) = uVar3;
  }
LAB_005960bd:
  FUN_00489b80(param_1,param_2);
  return;
}
