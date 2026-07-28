// Name: core_dog.cpp_FUN_00454660
// Address: 00454660
// Address Range: [[00454660, 004546c5]]
// Convention: unknown
// Signature: CEnemy * core_dog_cpp_FUN_00454660(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_dog_cpp_FUN_00454660(CEnemy *param_1)

{
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar4->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_dog_cpp_CZombieDog_setup_FUN_004546d0_0059c0f4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar4->base).model,"dog.dfm");
  fVar2 = 50.0f;
  (pCVar4->base).collision_cylinder_height = 0.75;
  fVar3 = 100.0f;
  (pCVar4->base).collision_cylinder_radius = 1.5;
  pCVar1 = &pCVar4[1].base;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  (pCVar4->base).ai_detection_range_min = fVar2;
  (pCVar4->base).ai_detection_range_max = fVar3;
  return pCVar4;
}
