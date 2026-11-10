// Name: core_baron.cpp_CBaronWeapon_fire_FUN_00410510
// Address: 00410510
// Address Range: [[00410510, 0041053c]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00410510(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00410510(CBaronWeapon *this_ptr)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(this_ptr);
  if (this_ptr->baron == (CBaron *)0x0) {
    return 0;
  }
  *(uint *)&this_ptr->baron->field_0xc1e4 = 1;
  return 1;
}
