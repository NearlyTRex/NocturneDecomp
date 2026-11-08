// Name: FUN_0041d760
// Address: 0041d760
// Address Range: [[0041d760, 0041d82d]]
// Convention: unknown
// Signature: void FUN_0041d760(int param_1)

#include "nocturne.h"

void FUN_0041d760(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1800 [1525];
  uint local_24;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0xc2e4)) {
    puVar3 = (uint *)(param_1 + 0xc320);
    iVar2 = param_1;
    do {
      FUN_005b7ed0(*(int *)(iVar2 + 0xc32c) + 0x30);
      puVar4 = (uint *)(iVar2 + 0xc304 + (uint)bVar6 * -8);
      *(uint *)(iVar2 + 0xc300) = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)(iVar2 + 0xc32c) + 0xf24) = 0;
      iVar1 = *(int *)(iVar2 + 0xc32c);
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(param_1 + 0xc2e4));
  }
  *(uint *)(param_1 + 0xc888) = 2;
  *(uint *)(param_1 + 0xc88c) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"boneguy-comeback.wav");
  return;
}
