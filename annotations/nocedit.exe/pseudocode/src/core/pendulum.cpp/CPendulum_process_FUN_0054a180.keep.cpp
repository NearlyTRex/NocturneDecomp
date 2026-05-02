// Name: core_pendulum.cpp_CPendulum_process_FUN_0054a180
// Address: 0054a180
// MANUAL RECONSTRUCTION
// Address Range: [[0054a180, 0054a2e5]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_process_FUN_0054a180(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_process_FUN_0054a180(CPendulum *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CHero *left_hand_actor;
  CEnemy *pCVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (this_ptr->moving == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->start_event);
    if (iVar1 == 0) {
      return;
    }
    this_ptr->moving = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->stop_event);
  if ((iVar1 != 0) && (this_ptr->decay != 1.0)) {
    this_ptr->decay_timer = 0.0;
    this_ptr->decay = 1.0;
  }
  core_pendulum_cpp_CPendulum_updateSwing_FUN_00549b90(this_ptr,delta_time);
  fVar5 = (float10)1;
  fVar3 = (float10)1.4426950408889634 *
          (float10)this_ptr->decay * (float10)-1 * (float10)this_ptr->decay_timer;
  fVar4 = (float10)f2xm1(fVar3 - (fVar3 / fVar5) * fVar5);
  fVar5 = (float10)fscale(fVar4 + fVar5,fVar3);
  if (fVar5 <= (float10)0.10000000000000001) {
    this_ptr->is_stopped = 1;
    return;
  }
  this_ptr->is_stopped = 0;
  if ((this_ptr->kill_hero == 0) && (this_ptr->kill_enemy == 0)) {
    return;
  }
  iVar1 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar1) {
        return;
      }
      actor_ptr = (CDemonActor *)g_CDemonSetPtr->characters[iVar1];
      if ((this_ptr->kill_hero == 0) ||
         (left_hand_actor =
               (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (actor_ptr,g_CHeroClassInfo.name_hash),
         left_hand_actor == (CHero *)0x0)) break;
      core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_005495c0
                (this_ptr,actor_ptr,(CDemonActor *)left_hand_actor,(CDemonActor *)0x0);
LAB_0054a24e:
      iVar1 = iVar1 + 1;
    }
    if ((this_ptr->kill_enemy == 0) ||
       (pCVar2 = (CEnemy *)
                 core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash),
       pCVar2 == (CEnemy *)0x0)) goto LAB_0054a24e;
    core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_005495c0
              (this_ptr,actor_ptr,(CDemonActor *)0x0,(CDemonActor *)pCVar2);
    iVar1 = iVar1 + 1;
  } while( true );
}
