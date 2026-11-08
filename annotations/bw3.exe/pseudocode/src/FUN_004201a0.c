// Name: FUN_004201a0
// Address: 004201a0
// Address Range: [[004201a0, 00420281]]
// Convention: unknown
// Signature: void FUN_004201a0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004201a0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1034 [1002];
  uint local_7c [6];
  uint local_64 [6];
  uint local_4c;
  uint auStack_48 [2];
  uint uStack_40;
  uint auStack_3c [5];
  uint uStack_28;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint local_10;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x324) == 0) {
    return;
  }
  FUN_00408bf0(*(int *)(param_1 + 0x324),param_1 + 0x20);
  local_4c = local_10;
  *(uint *)((int)auStack_48 + (uint)bVar4 * 0xfffffff8) =
       auStack_3c[(uint)bVar4 * 0xfffffffe + 0xc];
  auStack_48[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       auStack_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd];
  (**(code **)(*(int *)(*(int *)(param_1 + 0x324) + 0x154) + 0x1c))
            (*(int *)(param_1 + 0x324),&local_4c);
  puVar2 = local_64;
  puVar3 = local_7c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_0041ee30(local_7c);
  uStack_40 = uStack_28;
  *(uint *)((int)auStack_3c + (uint)bVar4 * 0xfffffff8) =
       auStack_3c[(uint)bVar4 * 0xfffffffe + 6];
  auStack_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       auStack_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
  if (&local_4c != &uStack_40) {
    local_4c = uStack_40;
    auStack_48[0] = auStack_3c[0];
    auStack_48[1] = auStack_3c[1];
  }
  FUN_00408b80(*(uint *)(param_1 + 0x324),&local_4c);
  uStack_1c = auStack_3c[2];
  auStack_3c[(uint)bVar4 * 0xfffffffe + 9] = auStack_3c[(uint)bVar4 * 0xfffffffe + 3];
  auStack_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 10] =
       auStack_3c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
  *(uint *)(param_1 + 0x20) = uStack_1c;
  *(uint *)(param_1 + 0x24) = uStack_18;
  *(uint *)(param_1 + 0x28) = uStack_14;
  return;
}
