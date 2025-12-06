// Name: core_baron.cpp_FUN_00413df0
// Address: 00413df0
// Address Range: [[00413df0, 00413e1c]]
// Convention: __cdecl
// Signature: int core_baron.cpp_FUN_00413df0(CBaronWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_FUN_00413df0(CBaronWeapon *this_ptr)

{
  core_baron_cpp_FUN_00413f20();
  if (this_ptr->field1_0x578 == 0) {
    return 0;
  }
  *(uint *)(this_ptr->field1_0x578 + 0xbe38) = 1;
  return 1;
}
