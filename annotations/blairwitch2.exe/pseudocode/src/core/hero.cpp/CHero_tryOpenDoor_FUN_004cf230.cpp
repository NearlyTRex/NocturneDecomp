// Name: core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
// Address: 004cf230
// Address Range: [[004cf230, 004cf2a9]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->door_to_open == (CDoor *)0x0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70
                    (this_ptr->inventories,this_ptr->door_to_open->key_mask,1);
  if (iVar1 != 0) {
    core_door_cpp_FUN_0045efc0(this_ptr->door_to_open);
    this_ptr->door_to_open = (CDoor *)0x0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00460800(this_ptr->door_to_open);
  this_ptr->door_to_open = (CDoor *)0x0;
  return 0;
}
