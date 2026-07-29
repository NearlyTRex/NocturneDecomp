// Name: core_beast.cpp_CBeast_setup_FUN_004150b0
// Address: 004150b0
// Address Range: [[004150b0, 004150cf]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_setup_FUN_004150b0(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_setup_FUN_004150b0(CBeast *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(this_ptr->base).base.model);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  return;
}
