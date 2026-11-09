// Name: core_hero.cpp_FUN_004ec570
// Address: 004ec570
// Address Range: [[004ec570, 004ec602]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ec570(int param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004ec570(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x1ff74) = 0;
  *(uint *)(param_1 + 0x1ff78) = 0;
  *(uint *)(param_1 + 0x1ff7c) = 0;
  *(uint *)(param_1 + 0x1ff80) = 0;
  *(uint *)(param_1 + 0x1ff84) = 0;
  *(uint *)(param_1 + 0x1ff88) = 0;
  *(uint *)(param_1 + 0x1ff8c) = 0;
  *(uint *)(param_1 + 0x26fc) = 0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310
            ((CInventory *)(param_1 + 0x1fae8),0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 0x78;
    *(uint *)(iVar2 + 0x25b0) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  return;
}
