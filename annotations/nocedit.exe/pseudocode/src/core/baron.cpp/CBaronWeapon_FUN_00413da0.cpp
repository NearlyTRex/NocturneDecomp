// Name: core_baron.cpp_CBaronWeapon_FUN_00413da0
// Address: 00413da0
// Address Range: [[00413da0, 00413dba]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_FUN_00413da0(CBaronWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413da0(CBaronWeapon *this_ptr)

{
  core_weapon_cpp_CWeapon_FUN_005edff0(&this_ptr->base_weapon);
  core_skeleton_cpp_getDeformableModel_FUN_005a1cf0("baron.dfm");
  return;
}
