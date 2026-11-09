// Name: core_armour.cpp_FUN_0040eee0
// Address: 0040eee0
// Address Range: [[0040eee0, 0040eeff]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040eee0(CEnemy *param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040eee0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  return;
}
