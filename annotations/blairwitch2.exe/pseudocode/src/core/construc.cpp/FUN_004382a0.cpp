// Name: core_construc.cpp_FUN_004382a0
// Address: 004382a0
// Address Range: [[004382a0, 0043836d]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_004382a0(int param_1)

#include "nocturne.h"

void core_construc_cpp_FUN_004382a0(int param_1)

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
  if (0 < *(int *)(param_1 + 0x10c14)) {
    puVar3 = (uint *)(param_1 + 0x10c50);
    iVar2 = param_1;
    do {
      core_xform_cpp_FUN_00594380(*(int *)(iVar2 + 0x10c5c) + 0x30);
      puVar4 = (uint *)(iVar2 + 0x10c34 + (uint)bVar6 * -8);
      *(uint *)(iVar2 + 0x10c30) = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)(iVar2 + 0x10c5c) + 0x1334) = 0;
      iVar1 = *(int *)(iVar2 + 0x10c5c);
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(param_1 + 0x10c14));
  }
  *(uint *)(param_1 + 0x112d8) = 2;
  *(uint *)(param_1 + 0x112dc) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"boneguy-comeback.wav");
  return;
}
