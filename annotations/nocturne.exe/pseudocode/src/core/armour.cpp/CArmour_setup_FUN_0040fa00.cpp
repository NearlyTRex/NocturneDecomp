// Name: core_armour.cpp_CArmour_setup_FUN_0040fa00
// Address: 0040fa00
// Address Range: [[0040fa00, 0040fa1f]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_setup_FUN_0040fa00(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_setup_FUN_0040fa00(CArmour *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(this_ptr->base).base.model);
  return;
}
