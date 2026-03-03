// Name: core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0
// Address: 004f2ed0
// Address Range: [[004f2ed0, 004f2f49]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->door_to_open == (CDoor *)0x0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                    (&this_ptr->inventory,this_ptr->door_to_open->key_mask,1);
  if (iVar1 != 0) {
    core_door_cpp_CDoor_onOpened_FUN_0047fcf0(this_ptr->door_to_open);
    this_ptr->door_to_open = (CDoor *)0x0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00481210(this_ptr->door_to_open);
  this_ptr->door_to_open = (CDoor *)0x0;
  return 0;
}
