// Name: core_baron.cpp_CBaronWeapon_FUN_00413df0
// Address: 00413df0
// Address Range: [[00413df0, 00413e1c]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413df0(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413df0(CBaronWeapon *this_ptr)

{
  core_baron_cpp_CBaronWeapon_FUN_00413f20(this_ptr);
  if (this_ptr->unk == 0) {
    return 0;
  }
  *(uint *)(this_ptr->unk + 0xbe38) = 1;
  return 1;
}
