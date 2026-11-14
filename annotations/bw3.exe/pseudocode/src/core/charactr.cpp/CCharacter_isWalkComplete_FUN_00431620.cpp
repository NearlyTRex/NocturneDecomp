// Name: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00431620
// Address: 00431620
// Address Range: [[00431620, 0043164f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00431620(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00431620(CCharacter *this_ptr)

{
  if ((this_ptr->walk_to_target != (CDemonActor *)0x0) &&
     ((this_ptr->walk_state != WALK_STATE_IDLE || (this_ptr->door_target != (CDoor *)0x0)))) {
    return 0;
  }
  return 1;
}
