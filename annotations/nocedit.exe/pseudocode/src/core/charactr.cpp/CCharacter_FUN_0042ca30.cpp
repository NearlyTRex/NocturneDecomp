// Name: core_charactr.cpp_CCharacter_FUN_0042ca30
// Address: 0042ca30
// Address Range: [[0042ca30, 0042ca5f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr)

{
  if ((this_ptr->field18_0x25a0 != 0.0) &&
     ((this_ptr->field22_0x25b0 != 0 || (this_ptr->field23_0x25b4 != 0)))) {
    return 0;
  }
  return 1;
}
