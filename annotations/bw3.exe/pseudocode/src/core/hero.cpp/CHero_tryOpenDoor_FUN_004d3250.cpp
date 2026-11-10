// Name: core_hero.cpp_CHero_tryOpenDoor_FUN_004d3250
// Address: 004d3250
// Address Range: [[004d3250, 004d32c9]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(CHero *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x20b94) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004de610
                    ((CInventory *)(this_ptr + 0x206e8),
                     *(uint *)(*(int *)(this_ptr + 0x20b94) + 0x990),1);
  if (iVar1 != 0) {
    core_door_cpp_CDoor_onOpened_FUN_00463d10(*(CDoor **)(this_ptr + 0x20b94));
    *(uint *)(this_ptr + 0x20b94) = 0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00465550(*(CDoor **)(this_ptr + 0x20b94));
  *(uint *)(this_ptr + 0x20b94) = 0;
  return 0;
}
