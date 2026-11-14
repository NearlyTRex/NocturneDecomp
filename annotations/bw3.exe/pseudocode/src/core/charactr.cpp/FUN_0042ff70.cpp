// Name: core_charactr.cpp_FUN_0042ff70
// Address: 0042ff70
// Address Range: [[0042ff70, 0042ffda]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042ff70(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042ff70(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  
  (*((param_1->vtable)._ub)->playSound)(param_1,"glass-1.wav@2.0");
  if ((char)param_1[0x1b].runtime_state != '\0') {
    core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0054f7f0
              ((CDeformableModelInstance *)(param_1 + 1),&(param_1->location).position,
               &(param_1->orient).vec,0);
  }
  pCVar1 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CEnemyClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    param_1->lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  core_enemy_cpp_FUN_00489c90(pCVar1);
  param_1->lifecycle_state = ACTOR_DESTROYED;
  return;
}
