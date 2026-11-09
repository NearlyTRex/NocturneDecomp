// Name: core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690
// Address: 00492690
// Address Range: [[00492690, 004926ab]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(CDynamite *this_ptr)

{
  if (0.0 < *(float *)&this_ptr->field_0x578) {
    return 1;
  }
  return 0;
}
