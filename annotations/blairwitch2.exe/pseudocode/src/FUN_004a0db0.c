// Name: FUN_004a0db0
// Address: 004a0db0
// Address Range: [[004a0db0, 004a0e57]]
// Convention: unknown
// Signature: undefined4 FUN_004a0db0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a0db0(int param_1)

{
  float fVar1;
  byte bVar2;
  uint auStackY_101c [1011];
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_34;
  uint uStack_28;
  uint uStack_1c;
  uint uStack_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x6c4) < 1) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  puVar4 = &stack0xffffffe4;
  uStack_1c = uStack_10;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_00408d70(param_1,puVar4);
  uVar7 = 1;
  uVar6 = 3;
  iVar5 = param_1 + 0x30;
  puVar4 = &stack0xffffffd8;
  uStack_28 = uStack_34;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  uVar3 = 0x01C3DEB4;
  *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_0049e680(uVar3,puVar4,iVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x6dc) == 0) {
    fVar1 = 1.0 / _DAT_005f6b50;
    *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + -1;
    *(float *)(param_1 + 0x6e0) = fVar1;
  }
  *(uint *)(param_1 + 0x6d4) = 1;
  return 1;
}
