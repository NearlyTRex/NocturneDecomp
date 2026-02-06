// Name: core_charactr.cpp_CCharacter_FUN_0042cd60
// Address: 0042cd60
// Address Range: [[0042cd60, 0042cd85]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr)

{
  if (this_ptr->field23_0x25b4 == 0) {
    return;
  }
  core_door_cpp_FUN_0047fcf0();
  this_ptr->field23_0x25b4 = 0;
  return;
}
