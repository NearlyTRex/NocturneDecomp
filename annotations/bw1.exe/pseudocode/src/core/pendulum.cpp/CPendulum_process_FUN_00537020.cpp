// Name: core_pendulum.cpp_CPendulum_process_FUN_00537020
// Address: 00537020
// Address Range: [[00537020, 00537185]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_process_FUN_00537020(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_process_FUN_00537020(CPendulum *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (this_ptr->moving == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->start_event);
    if (iVar1 == 0) {
      return;
    }
    this_ptr->moving = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->stop_event);
  if ((iVar1 != 0) && (this_ptr->decay != 1.0)) {
    this_ptr->decay_timer = 0.0;
    this_ptr->decay = 1.0;
  }
  core_pendulum_cpp_CPendulum_updateSwing_FUN_00536a20(this_ptr,delta_time);
  fVar6 = (float10)1;
  fVar4 = (float10)1.4426950408889634 *
          (float10)this_ptr->decay * (float10)_DAT_005ecce5 * (float10)this_ptr->decay_timer;
  fVar5 = (float10)f2xm1(fVar4 - (fVar4 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar5 + fVar6,fVar4);
  if (fVar6 <= (float10)_DAT_005ecced) {
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
      actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar3);
      if ((this_ptr->kill_hero == 0) ||
         (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CHeroClassInfo.name_hash)
         , pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00536290
                (this_ptr,actor_ptr,pCVar2,(CDemonActor *)0x0);
LAB_005370ee:
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
    if ((this_ptr->kill_enemy == 0) ||
       (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CEnemyClassInfo.name_hash),
       pCVar2 == (CDemonActor *)0x0)) goto LAB_005370ee;
    core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00536290
              (this_ptr,actor_ptr,(CDemonActor *)0x0,pCVar2);
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
