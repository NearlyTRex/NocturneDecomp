// Name: core_armour.cpp_CArmour_setup_FUN_0040eee0
// Address: 0040eee0
// Address Range: [[0040eee0, 0040eeff]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_setup_FUN_0040eee0(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_setup_FUN_0040eee0(CArmour *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(this_ptr->base).base.model);
  return;
}
