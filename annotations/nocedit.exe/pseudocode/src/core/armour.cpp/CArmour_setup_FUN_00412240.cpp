// Name: core_armour.cpp_CArmour_setup_FUN_00412240
// Address: 00412240
// Address Range: [[00412240, 0041225f]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_setup_FUN_00412240(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_setup_FUN_00412240(CArmour *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(this_ptr->base).base.model);
  return;
}
