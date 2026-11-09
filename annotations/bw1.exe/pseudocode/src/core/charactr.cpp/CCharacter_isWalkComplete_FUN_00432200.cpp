// Name: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00432200
// Address: 00432200
// Address Range: [[00432200, 0043222f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00432200(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_00432200(CCharacter *this_ptr)

{
  if ((*(int *)&this_ptr->field_0x2704 != 0) &&
     ((*(int *)&this_ptr->field_0x273c != 0 || (*(int *)&this_ptr->field_0x2740 != 0)))) {
    return 0;
  }
  return 1;
}
