// Name: core_baron.cpp_CBaronWeapon_setup_FUN_004113b0
// Address: 004113b0
// Address Range: [[004113b0, 004113ca]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_004113b0(CBaronWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_004113b0(CBaronWeapon *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_00553f10(&this_ptr->base);
  core_skeleton_cpp_getDeformableModel_FUN_0051f570("baron.dfm");
  return;
}
