// Name: core_pendulum.cpp_CPendulum_process_FUN_004f3a20
// Address: 004f3a20
// Address Range: [[004f3a20, 004f3b85]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_process_FUN_004f3a20(CPendulum *param_1,float param_2)

#include "nocturne.h"

void core_pendulum_cpp_CPendulum_process_FUN_004f3a20(CPendulum *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1->moving == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->start_event);
    if (iVar1 == 0) {
      return;
    }
    param_1->moving = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1->stop_event)
  ;
  if ((iVar1 != 0) && (param_1->decay != 1.0)) {
    param_1->decay_timer = 0.0;
    param_1->decay = 1.0;
  }
  core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(param_1,param_2);
  fVar6 = (float10)1;
  fVar4 = (float10)1.4426950408889634 *
          (float10)param_1->decay * (float10)-1 * (float10)param_1->decay_timer;
  fVar5 = (float10)f2xm1(fVar4 - (fVar4 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar5 + fVar6,fVar4);
  if (fVar6 <= (float10)0.10000000000000001) {
    param_1->is_stopped = 1;
    return;
  }
  param_1->is_stopped = 0;
  if ((param_1->kill_hero == 0) && (param_1->kill_enemy == 0)) {
    return;
  }
  iVar3 = 0;
  iVar1 = 0;
  do {
    while( true ) {
      if (g_CDemonSet_PTR_005be368->character_count <= iVar1) {
        return;
      }
      actor_ptr = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->characters + iVar3);
      if ((param_1->kill_hero == 0) ||
         (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (actor_ptr,g_CHeroActorType_01cae0ec.name_hash),
         pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
                (param_1,actor_ptr,pCVar2,(CDemonActor *)0x0);
LAB_004f3aee:
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
    if ((param_1->kill_enemy == 0) ||
       (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (actor_ptr,g_CEnemyActorType_01bcdebc.name_hash),
       pCVar2 == (CDemonActor *)0x0)) goto LAB_004f3aee;
    core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
              (param_1,actor_ptr,(CDemonActor *)0x0,pCVar2);
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
