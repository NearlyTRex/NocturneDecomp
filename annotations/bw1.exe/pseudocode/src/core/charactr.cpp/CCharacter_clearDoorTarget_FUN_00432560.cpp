// Name: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00432560
// Address: 00432560
// Address Range: [[00432560, 00432585]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00432560(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00432560(CCharacter *this_ptr)

{
  if (this_ptr->door_target == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_onOpened_FUN_004774d0(this_ptr->door_target);
  this_ptr->door_target = (CDoor *)0x0;
  return;
}
