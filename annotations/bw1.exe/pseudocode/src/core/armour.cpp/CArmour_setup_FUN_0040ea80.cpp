// Name: core_armour.cpp_CArmour_setup_FUN_0040ea80
// Address: 0040ea80
// Address Range: [[0040ea80, 0040ea9f]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_setup_FUN_0040ea80(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_setup_FUN_0040ea80(CArmour *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  return;
}
