// Name: FUN_0041ead0
// Address: 0041ead0
// Address Range: [[0041ead0, 0041ed11]]
// Convention: unknown
// Signature: void FUN_0041ead0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ead0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1048 [1011];
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_24;
  
  bVar3 = 0;
  FUN_00551050(*(uint *)(param_1 + 0x10b24));
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005cc8f9;
    FUN_00408d70(param_1,param_2 + 0x1c);
    iVar2 = 0;
    uStack_24 = uStack_60;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    do {
      iVar2 = iVar2 + 1;
      FUN_0049d090(0x01C3DEB4,&stack0xffffffdc,0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_00546a90(param_1 + 0x2b4,0);
    puVar4 = &stack0xffffffb8;
    uStack_48 = uStack_30;
    *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_00408d70(param_1,puVar4);
    uVar8 = 0;
    uVar7 = 0x41200000;
    uVar6 = 0;
    uVar5 = 0;
    puVar4 = &stack0xffffffac;
    uStack_54 = uStack_3c;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8);
    iVar2 = param_1;
    *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_00426e70(iVar2,puVar4,uVar5,uVar6,uVar7,uVar8);
  }
  FUN_0041e8a0(param_1,param_2);
  *(float *)(param_1 + 0x25a8) = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  if (*(int *)(*(int *)(param_1 + 0x10b18) * 4 + param_1 + 0x23f4) == 0) {
    *(uint *)(param_1 + 0x25a8) = 0;
  }
  iVar2 = param_1 + 0x2b4;
  if (0.0 < *(float *)(param_1 + 0x25a8)) {
    iVar1 = FUN_0040d060(0x3f000000,1);
    FUN_00503620(iVar2,(iVar1 == 0) + '\a');
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b20));
    if (iVar2 == 0) {
      uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"ub-hurt?.wav");
      *(uint *)(param_1 + 0x10b20) = uVar5;
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar1 = FUN_005035c0(iVar2);
    if ((*(int *)(iVar1 + 0x24) != 0xe) && (*(int *)(iVar1 + 0x24) != 0xd)) {
      iVar1 = FUN_0040d060(0x3f000000,1);
      FUN_00503620(iVar2,(iVar1 == 0) + '\v');
      FUN_00551050(*(uint *)(param_1 + 0x10b20));
      uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"ub-die?.wav");
      *(uint *)(param_1 + 0x10b20) = uVar5;
    }
  }
  FUN_00488890(param_1,param_2);
  return;
}
