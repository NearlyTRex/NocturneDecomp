// Name: FUN_0040fc00
// Address: 0040fc00
// Address Range: [[0040fc00, 0040fce4]]
// Convention: unknown
// Signature: void FUN_0040fc00(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040fc00(int param_1)

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
  if (*(int *)(param_1 + 0x20084) != 0) {
    local_14 = *(int *)(param_1 + 0x154);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0xc0000000;
    FUN_00408ac0(*(uint *)(param_1 + 0x20084),&stack0xffffffc8,
                 *(int *)(param_1 + 0x20084) + 0x30);
    local_2c = local_44;
    (&stack0xffffffd8)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
    iVar1 = local_14;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    iVar2 = *(int *)(param_1 + 0x20084);
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
    (**(code **)(iVar1 + 0x68))(iVar2,pfVar4);
    iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x20084),DAT_007c637c);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar2 == 2) {
        FUN_0040fbc0(param_1,*(uint *)(param_1 + 0x20084));
        return;
      }
    }
  }
  return;
}
