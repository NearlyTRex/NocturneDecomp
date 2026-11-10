// Name: core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
// Address: 004cf230
// Address Range: [[004cf230, 004cf2a9]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x25604) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70
                    ((CInventory *)(this_ptr + 0x2437c),
                     *(uint *)(*(int *)(this_ptr + 0x25604) + 0xaec),1);
  if (iVar1 != 0) {
    core_door_cpp_FUN_0045efc0(*(CDoor **)(this_ptr + 0x25604));
    *(uint *)(this_ptr + 0x25604) = 0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00460800(*(CDoor **)(this_ptr + 0x25604));
  *(uint *)(this_ptr + 0x25604) = 0;
  return 0;
}
