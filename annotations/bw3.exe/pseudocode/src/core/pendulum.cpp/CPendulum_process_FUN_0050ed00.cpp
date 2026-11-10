// Name: core_pendulum.cpp_CPendulum_process_FUN_0050ed00
// Address: 0050ed00
// Address Range: [[0050ed00, 0050ee65]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_process_FUN_0050ed00(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_process_FUN_0050ed00(CPendulum *this_ptr,float delta_time)

{
  CDemonActor *actor;
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (this_ptr->moving == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->start_event);
    if (iVar1 == 0) {
      return;
    }
    this_ptr->moving = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,this_ptr->stop_event);
  if ((iVar1 != 0) && (this_ptr->decay != 1.0)) {
    this_ptr->decay_timer = 0.0;
    this_ptr->decay = 1.0;
  }
  core_pendulum_cpp_CPendulum_updateSwing_FUN_0050e700(this_ptr,delta_time);
  fVar6 = (float10)1;
  fVar4 = (float10)1.4426950408889634 *
          (float10)this_ptr->decay * (float10)_DAT_005cbb4d * (float10)this_ptr->decay_timer;
  fVar5 = (float10)f2xm1(fVar4 - (fVar4 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar5 + fVar6,fVar4);
  if (fVar6 <= (float10)_DAT_005cbb55) {
    this_ptr->is_stopped = 1;
    return;
  }
  this_ptr->is_stopped = 0;
  if ((this_ptr->kill_hero == 0) && (this_ptr->kill_enemy == 0)) {
    return;
  }
  iVar3 = 0;
  iVar1 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar1) {
        return;
      }
      actor = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar3);
      if ((this_ptr->kill_hero == 0) ||
         (pCVar2 = (CDemonActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c840(actor,g_CHeroClassInfo.name_hash),
         pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_0050df70
                (this_ptr,actor,pCVar2,(CDemonActor *)0x0);
LAB_0050edce:
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
    if ((this_ptr->kill_enemy == 0) ||
       (pCVar2 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(actor,g_CEnemyClassInfo.name_hash),
       pCVar2 == (CDemonActor *)0x0)) goto LAB_0050edce;
    core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_0050df70
              (this_ptr,actor,(CDemonActor *)0x0,pCVar2);
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
