// Name: core_hero.cpp_CHero_FUN_004f2ed0
// Address: 004f2ed0
// Address Range: [[004f2ed0, 004f2f49]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2ed0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2ed0(CHero *this_ptr)

{
  int iVar1;
  
  if (this_ptr->door_to_open == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                    (&this_ptr->inventory,(uint)this_ptr->door_to_open[7].location.position.z,1);
  if (iVar1 != 0) {
    core_door_cpp_FUN_0047fcf0((int)this_ptr->door_to_open);
    this_ptr->door_to_open = (CDemonActor *)0x0;
    return 1;
  }
  core_door_cpp_CDoor_FUN_00481210((CDoor *)this_ptr->door_to_open);
  this_ptr->door_to_open = (CDemonActor *)0x0;
  return 0;
}
