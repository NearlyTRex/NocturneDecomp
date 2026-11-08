// Name: FUN_00410080
// Address: 00410080
// Address Range: [[00410080, 00410164]]
// Convention: unknown
// Signature: void FUN_00410080(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00410080(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1015];
  float *pfVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x25718) != 0) {
    local_14 = *(int *)(param_1 + 0x2b0);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0xc0000000;
    FUN_00408cf0(*(uint *)(param_1 + 0x25718),&stack0xffffffc8,
                 *(int *)(param_1 + 0x25718) + 0x30);
    local_2c = local_44;
    (&stack0xffffffd8)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
    iVar1 = local_14;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    iVar2 = *(int *)(param_1 + 0x25718);
    pfVar4 = &stack0xffffffe0;
    local_50 = *(float *)(iVar2 + 0x20) + local_2c;
    local_4c = *(float *)(iVar2 + 0x24) + local_28;
    local_48 = *(float *)(iVar2 + 0x28) + local_24;
    local_20 = local_50;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
    iVar2 = param_1;
    *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    (**(code **)(iVar1 + 0x70))(iVar2,pfVar4);
    iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x25718),DAT_007bdc94);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
      if (iVar2 == 2) {
        FUN_00410040(param_1,*(uint *)(param_1 + 0x25718));
        return;
      }
    }
  }
  return;
}
