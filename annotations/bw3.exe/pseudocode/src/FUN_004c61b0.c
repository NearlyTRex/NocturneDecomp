// Name: FUN_004c61b0
// Address: 004c61b0
// Address Range: [[004c61b0, 004c630d]]
// Convention: unknown
// Signature: void FUN_004c61b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004c61b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1010 [1011];
  uint uStack_28;
  uint uStack_1c;
  
  bVar5 = 0;
  FUN_00408b80(param_1,param_2 + 0x1c);
  iVar4 = 0;
  uStack_28 = uStack_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  do {
    iVar4 = iVar4 + 1;
    FUN_004a23c0(0x01C73654,&stack0xffffffd8,0,0x10000,0x8000,0,0xffff);
  } while (iVar4 < 3);
  iVar4 = param_1 + 0x158;
  iVar2 = FUN_004fc070(iVar4);
  if (*(int *)(iVar2 + 0x24) != 5) {
    FUN_004c5f10(param_1,param_2);
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (0.0 < fVar1) {
      iVar4 = FUN_00556700(*(uint *)(param_1 + 0xd094));
      if (iVar4 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"gargoyle-hurt?.wav");
        *(uint *)(param_1 + 0xd094) = uVar3;
      }
    }
    else {
      FUN_00556be0(*(uint *)(param_1 + 0xd094));
      *(uint *)(param_1 + 0x2538) = 0;
      iVar2 = FUN_004fc070(iVar4);
      if (*(int *)(iVar2 + 0x24) != 8) {
        FUN_004fc0d0(iVar4,8,1);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"@gargoyle-shatter.wav" + 1)
        ;
        FUN_004300e0(param_1,0,0xbf800000,1);
      }
    }
    FUN_00489b80(param_1,param_2);
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  FUN_00489b80(param_1,param_2);
  return;
}
