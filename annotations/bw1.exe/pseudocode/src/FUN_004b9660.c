// Name: FUN_004b9660
// Address: 004b9660
// Address Range: [[004b9660, 004b9707]]
// Convention: unknown
// Signature: undefined4 FUN_004b9660(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b9660(int param_1)

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
  if (*(int *)(param_1 + 0x568) < 1) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar4 = &stack0xffffffe4;
  uStack_1c = uStack_10;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_00408b40(param_1,puVar4);
  uVar7 = 1;
  uVar6 = 3;
  iVar5 = param_1 + 0x30;
  puVar4 = &stack0xffffffd8;
  uStack_28 = uStack_34;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  uVar3 = 0x01C57074;
  *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_004b6f80(uVar3,puVar4,iVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x580) == 0) {
    fVar1 = 1.0 / _DAT_006005c0;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + -1;
    *(float *)(param_1 + 0x584) = fVar1;
  }
  *(uint *)(param_1 + 0x578) = 1;
  return 1;
}
