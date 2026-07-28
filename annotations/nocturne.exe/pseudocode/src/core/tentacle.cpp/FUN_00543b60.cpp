// Name: core_tentacle.cpp_FUN_00543b60
// Address: 00543b60
// Address Range: [[00543b60, 00543bbf]]
// Convention: unknown
// Signature: CEnemy * core_tentacle_cpp_FUN_00543b60(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_tentacle_cpp_FUN_00543b60(CEnemy *param_1)

{
  CEnemy *pCVar1;
  CCharacter *pCVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar3->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_tentacle_cpp_CTentacle_setup_FUN_00543bc0_005a3104;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"tentacle.dfm");
  (pCVar3->base).ai_detection_range_min = 50.0;
  (pCVar3->base).ai_detection_range_max = 100.0;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  pCVar2 = &pCVar3[1].base;
  (pCVar2->base).actor_name[4] = '\0';
  (pCVar2->base).actor_name[5] = '\0';
  (pCVar2->base).actor_name[6] = '\0';
  (pCVar2->base).actor_name[7] = '\0';
  pCVar2 = &pCVar3[1].base;
  (pCVar2->base).actor_name[8] = '\0';
  (pCVar2->base).actor_name[9] = '\0';
  (pCVar2->base).actor_name[10] = '\0';
  (pCVar2->base).actor_name[0xb] = '\0';
  return pCVar3;
}
