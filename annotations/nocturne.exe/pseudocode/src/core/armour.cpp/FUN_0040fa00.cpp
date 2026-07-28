// Name: core_armour.cpp_FUN_0040fa00
// Address: 0040fa00
// Address Range: [[0040fa00, 0040fa1f]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040fa00(CEnemy *param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040fa00(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(param_1->base).model);
  return;
}
