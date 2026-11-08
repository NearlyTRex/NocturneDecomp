// Name: FUN_0047d480
// Address: 0047d480
// Address Range: [[0047d480, 0047d720]]
// Convention: unknown
// Signature: void FUN_0047d480(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d480(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_104c [1011];
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_64;
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  int iStack_14;
  
  bVar4 = 0;
  iStack_14 = 0;
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005dafcd;
    FUN_00408b40(param_1,param_2 + 0x1c);
    iVar3 = 0;
    uStack_4c = uStack_40;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar3 = iVar3 + 1;
      FUN_004b59e0(0x01C57074,&stack0xffffffb4,0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x68) {
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_00569130(param_1 + 0x158,0);
    puVar5 = &stack0xffffffd8;
    uStack_28 = uStack_64;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00408b40(param_1,puVar5);
    uVar9 = 0;
    uVar8 = 0x41200000;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &stack0xffffffcc;
    uStack_34 = uStack_58;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
    iVar3 = param_1;
    *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_004308a0(iVar3,puVar5,uVar6,uVar7,uVar8,uVar9);
  }
  FUN_0047d430(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iVar3);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0x11) && (iVar2 != 0x10)) && (iVar2 != 10)) && (iVar2 != 7)) {
      if (iStack_14 == 0) {
        FUN_005247c0(iVar3,10,1);
      }
      else {
        FUN_005247c0(iVar3,7,1);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,"4@bride-launch.wav" + 2)
        ;
      }
    }
    iVar3 = FUN_0040cd00(0x3ecccccd);
    if (iVar3 != 0) {
      FUN_0047d920(param_1,"bride-die?.wav",0x40000000);
    }
    goto LAB_0047d5ac;
  }
  iVar3 = FUN_00524770(iVar3);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (((iVar3 == 8) || (iVar3 == 9)) || (iVar3 == 2)) {
    uVar6 = 1;
LAB_0047d666:
    FUN_005247c0(param_1 + 0x158,uVar6,1);
  }
  else if (((iVar3 == 0) || (iVar3 == 0xe)) ||
          (((iVar3 == 0x13 || (((iVar3 == 0xc || (iVar3 == 0x12)) || (iVar3 == 0x14)))) ||
           (iVar3 == 0x15)))) {
    iVar3 = FUN_0040cc60(0,2);
    if (iVar3 == 0) {
      FUN_005247c0(param_1 + 0x158,4,1);
    }
    if (iVar3 == 1) {
      FUN_005247c0(param_1 + 0x158,5,1);
    }
    if (iVar3 == 2) {
      uVar6 = 6;
      goto LAB_0047d666;
    }
  }
  iVar3 = FUN_0040cd00(0x3ecccccd);
  if (iVar3 != 0) {
    FUN_0047d920(param_1,"bride-hurt?.wav",0x40000000);
  }
LAB_0047d5ac:
  FUN_004a0f00(param_1,param_2);
  return;
}
