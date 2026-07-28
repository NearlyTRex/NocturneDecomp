// Name: core_armour.cpp_FUN_0040f960
// Address: 0040f960
// Address Range: [[0040f960, 0040f9f2]]
// Convention: unknown
// Signature: CEnemy * core_armour_cpp_FUN_0040f960(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_armour_cpp_FUN_0040f960(CEnemy *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  char *pcVar5;
  CEnemy *pCVar6;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pcVar5 = "none";
  (pCVar4->base).base.vtable._ub = (CDemonActor_vtable *)&PTR_core_armour_cpp_FUN_0040fa00_005997b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar4->base).model,"armour.dfm");
  fVar3 = 100.0f;
  fVar2 = 50.0f;
  (pCVar4->base).collision_cylinder_height = 0.6;
  (pCVar4->base).collision_cylinder_radius = 2.0;
  pCVar6 = pCVar4 + 1;
  (pCVar4->base).ai_detection_range_min = fVar2;
  (pCVar4->base).ai_detection_range_max = fVar3;
  do {
    cVar1 = *pcVar5;
    (pCVar6->base).base.actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (pCVar6->base).base.actor_name[1] = cVar1;
    pCVar6 = (CEnemy *)((pCVar6->base).base.actor_name + 2);
  } while (cVar1 != '\0');
  (pCVar4->base).blood_type = 2;
  return pCVar4;
}
