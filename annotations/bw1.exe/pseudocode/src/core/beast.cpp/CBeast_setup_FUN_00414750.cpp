// Name: core_beast.cpp_CBeast_setup_FUN_00414750
// Address: 00414750
// Address Range: [[00414750, 0041476f]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_setup_FUN_00414750(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_setup_FUN_00414750(CBeast *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  return;
}
