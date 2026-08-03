// Name: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00428ef0
// Address: 00428ef0
// Address Range: [[00428ef0, 00428f15]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00428ef0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00428ef0(CCharacter *this_ptr)

{
  if (this_ptr->door_target == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_onOpened_FUN_00455270(this_ptr->door_target);
  this_ptr->door_target = (CDoor *)0x0;
  return;
}
