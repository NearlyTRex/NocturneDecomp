// Name: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00431980
// Address: 00431980
// Address Range: [[00431980, 004319a5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00431980(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00431980(CCharacter *this_ptr)

{
  if (this_ptr->door_target == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_onOpened_FUN_00463d10(this_ptr->door_target);
  this_ptr->door_target = (CDoor *)0x0;
  return;
}
