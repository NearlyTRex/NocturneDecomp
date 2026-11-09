// Name: core_hero.cpp_FUN_004eb5e0
// Address: 004eb5e0
// Address Range: [[004eb5e0, 004eb659]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004eb5e0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_FUN_004eb5e0(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x1ff74) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004fc240
                    ((CInventory *)(this_ptr + 0x1fae8),
                     *(uint *)(*(int *)(this_ptr + 0x1ff74) + 0x990),1);
  if (iVar1 != 0) {
    core_door_cpp_CDoor_onOpened_FUN_004774d0(*(CDoor **)(this_ptr + 0x1ff74));
    *(uint *)(this_ptr + 0x1ff74) = 0;
    return 1;
  }
  core_door_cpp_FUN_00478d10(*(CDoor **)(this_ptr + 0x1ff74));
  *(uint *)(this_ptr + 0x1ff74) = 0;
  return 0;
}
