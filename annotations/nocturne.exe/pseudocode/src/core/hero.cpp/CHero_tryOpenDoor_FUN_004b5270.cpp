// Name: core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
// Address: 004b5270
// Address Range: [[004b5270, 004b52e9]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->door_to_open == (CDoor *)0x0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
                    (&this_ptr->inventory,this_ptr->door_to_open->key_mask,1);
  if (iVar1 != 0) {
    core_door_cpp_CDoor_onOpened_FUN_00455270(this_ptr->door_to_open);
    this_ptr->door_to_open = (CDoor *)0x0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00456650(this_ptr->door_to_open);
  this_ptr->door_to_open = (CDoor *)0x0;
  return 0;
}
