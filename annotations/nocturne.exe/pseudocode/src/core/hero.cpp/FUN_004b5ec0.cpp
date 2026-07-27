// Name: core_hero.cpp_FUN_004b5ec0
// Address: 004b5ec0
// Address Range: [[004b5ec0, 004b5f52]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004b5ec0(int param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004b5ec0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x1fa04) = 0;
  *(uint *)(param_1 + 0x1fa08) = 0;
  *(uint *)(param_1 + 0x1fa0c) = 0;
  *(uint *)(param_1 + 0x1fa10) = 0;
  *(uint *)(param_1 + 0x1fa14) = 0;
  *(uint *)(param_1 + 0x1fa18) = 0;
  *(uint *)(param_1 + 0x1fa1c) = 0;
  *(uint *)(param_1 + 0x2590) = 0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(param_1 + 0x1f5a0,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,0);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 0x44;
    *(uint *)(iVar2 + 0x24ac) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x88);
  return;
}
