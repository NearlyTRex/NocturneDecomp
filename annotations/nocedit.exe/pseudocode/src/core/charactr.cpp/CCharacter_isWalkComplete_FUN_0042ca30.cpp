// Name: core_charactr.cpp_CCharacter_isWalkComplete_FUN_0042ca30
// Address: 0042ca30
// Address Range: [[0042ca30, 0042ca5f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30(CCharacter *this_ptr)

{
  if ((this_ptr->walk_to_target != (CDemonActor *)0x0) &&
     ((this_ptr->is_walking != 0 || (this_ptr->door_target != (CDoor *)0x0)))) {
    return 0;
  }
  return 1;
}
