// Name: FUN_00412760
// Address: 00412760
// Address Range: [[00412760, 0041298c]]
// Convention: unknown
// Signature: void FUN_00412760(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412760(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1048 [1011];
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_24;
  
  bVar4 = 0;
  FUN_00551050(*(uint *)(param_1 + 0x10b38));
  FUN_00551050(*(uint *)(param_1 + 0x10b30));
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005cb956;
    FUN_00408d70(param_1,param_2 + 0x1c);
    iVar3 = 0;
    uStack_60 = uStack_3c;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar3 = iVar3 + 1;
      FUN_0049d090(0x01C3DEB4,&stack0xffffffa0,0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_00546a90(param_1 + 0x2b4,0);
    puVar5 = &stack0xffffffdc;
    uStack_24 = uStack_54;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00408d70(param_1,puVar5);
    uVar9 = 0;
    uVar8 = 0x41200000;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &stack0xffffffd0;
    uStack_30 = uStack_48;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8);
    iVar3 = param_1;
    *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00426e70(iVar3,puVar5,uVar6,uVar7,uVar8,uVar9);
  }
  FUN_00412500(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(iVar3);
    if ((*(int *)(iVar2 + 0x24) != 7) && (*(int *)(iVar2 + 0x24) != 8)) {
      FUN_00503620(iVar3,7,1);
      FUN_00551050(*(uint *)(param_1 + 0x10b34));
      uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"@batman-die.wav" + 1)
      ;
      *(uint *)(param_1 + 0x10b34) = uVar6;
    }
  }
  else {
    iVar2 = FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      FUN_00503620(iVar3,4,1);
    }
    if (iVar2 == 1) {
      FUN_00503620(param_1 + 0x2b4,5,1);
    }
    if (iVar2 == 2) {
      FUN_00503620(param_1 + 0x2b4,6,1);
    }
    iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b34));
    if (iVar3 == 0) {
      uVar6 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"batman-hurt?.wav");
      *(uint *)(param_1 + 0x10b34) = uVar6;
    }
  }
  FUN_00488890(param_1,param_2);
  return;
}
