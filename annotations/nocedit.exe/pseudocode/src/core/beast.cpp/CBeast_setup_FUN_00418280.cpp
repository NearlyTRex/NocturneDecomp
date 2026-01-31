// Name: core_beast.cpp_CBeast_setup_FUN_00418280
// Address: 00418280
// Address Range: [[00418280, 0041829f]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_setup_FUN_00418280(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_setup_FUN_00418280(CBeast *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(this_ptr->base).base.model);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  return;
}
