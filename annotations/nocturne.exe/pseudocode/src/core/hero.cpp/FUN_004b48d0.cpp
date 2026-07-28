// Name: core_hero.cpp_FUN_004b48d0
// Address: 004b48d0
// Address Range: [[004b48d0, 004b4907]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004b48d0(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004b48d0(CCharacter *param_1)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&param_1->model);
  core_charactr_cpp_CCharacter_setup_FUN_00424260(param_1);
  param_1[1].base.actor_name[0] = '\0';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = '\0';
  param_1[1].base.actor_name[3] = '\0';
  core_inv_cpp_CInventory_setupItems_FUN_004c1510
            ((CInventory *)(param_1[2].flames[0x1b].off_event + 0x3c));
  return;
}
