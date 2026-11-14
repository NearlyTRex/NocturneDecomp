// Name: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00428ac0
// Address: 00428ac0
// Address Range: [[00428ac0, 00428ae5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00428ac0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00428ac0(CCharacter *this_ptr)

{
  if (this_ptr->door_target == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_FUN_0045efc0(this_ptr->door_target);
  this_ptr->door_target = (CDoor *)0x0;
  return;
}
