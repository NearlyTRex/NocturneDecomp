// Name: FUN_0040fef0
// Address: 0040fef0
// Address Range: [[0040fef0, 0041003b]]
// Convention: unknown
// Signature: void FUN_0040fef0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040fef0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1012];
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if ((((param_2 != 0) && (param_2 != *(int *)(param_1 + 0x25718))) &&
      (*(int *)(param_1 + 0x25718) == 0)) &&
     ((iVar1 = FUN_0040c8f0(param_2,DAT_007bdc94), iVar1 == 0 ||
      (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 < 1)))) {
    *(int *)(param_1 + 0x25718) = param_2;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0xc0000000;
    FUN_00408cf0(*(uint *)(param_1 + 0x25718),&stack0xffffffb4);
    local_40 = local_34;
    (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    iVar1 = *(int *)(param_1 + 0x25718);
    local_1c = *(float *)(iVar1 + 0x20) + local_40;
    local_18 = *(float *)(iVar1 + 0x24) + local_3c;
    local_14 = *(float *)(iVar1 + 0x28) + local_38;
    local_28 = local_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(float *)(param_1 + 0x20) = local_28;
    *(uint *)(param_1 + 0x24) = local_24;
    *(uint *)(param_1 + 0x28) = local_20;
    iVar1 = *(int *)(param_1 + 0x25718);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
    }
    FUN_005b77c0(param_1 + 0x10a68,0,0x34);
    FUN_00503620(param_1 + 0x2b4,6,1);
    *(uint *)(param_1 + 0x25738) = 1;
    *(uint *)(param_1 + 0x2573c) = 0;
    return;
  }
  return;
}
