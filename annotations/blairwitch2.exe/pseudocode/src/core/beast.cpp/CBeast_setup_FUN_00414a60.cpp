// Name: core_beast.cpp_CBeast_setup_FUN_00414a60
// Address: 00414a60
// Address Range: [[00414a60, 00414a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_setup_FUN_00414a60(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_setup_FUN_00414a60(CBeast *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(this_ptr->base).base.model);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  return;
}
