// Name: core_lantern.cpp_CLantern_setup_FUN_0059ccc0
// Address: 0059ccc0
// Address Range: [[0059ccc0, 0059ccdb]]
// Convention: __cdecl
// Signature: void __cdecl core_lantern_cpp_CLantern_setup_FUN_0059ccc0(CLantern *this_ptr)

#include "nocturne.h"

void __cdecl core_lantern_cpp_CLantern_setup_FUN_0059ccc0(CLantern *this_ptr)

{
  int in_stack_00000008;
  
  core_weapon_cpp_CWeapon_setup_FUN_00589b50(&this_ptr->base);
  *(uint *)(in_stack_00000008 + 0xfc) = 1;
  return;
}
