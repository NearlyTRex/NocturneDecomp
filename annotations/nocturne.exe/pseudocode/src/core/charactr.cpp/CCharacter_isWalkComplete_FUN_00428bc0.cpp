// Name: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00428bc0
// Address: 00428bc0
// Address Range: [[00428bc0, 00428bef]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00428bc0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00428bc0(CCharacter *this_ptr)

{
  if ((this_ptr->walk_to_target != (CDemonActor *)0x0) &&
     ((this_ptr->is_walking != 0 || (this_ptr->door_target != (CDoor *)0x0)))) {
    return 0;
  }
  return 1;
}
