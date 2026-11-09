// Name: core_armour.cpp_CArmour_setup_FUN_0040ea80
// Address: 0040ea80
// Address Range: [[0040ea80, 0040ea9f]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_setup_FUN_0040ea80(CArmour *this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_setup_FUN_0040ea80(CArmour *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&this_ptr->field_0x158);
  return;
}
