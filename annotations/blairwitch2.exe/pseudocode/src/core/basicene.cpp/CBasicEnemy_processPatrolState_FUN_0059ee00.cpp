// Name: core_basicene.cpp_CBasicEnemy_processPatrolState_FUN_0059ee00
// Address: 0059ee00
// Address Range: [[0059ee00, 0059ef8d]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processPatrolState_FUN_0059ee00(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processPatrolState_FUN_0059ee00(CBasicEnemy *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CEnemy_full_vtable *pCVar1;
  int iVar2;
  CWayPoint *actor_ptr;
  CDemonActor *pCVar3;
  uint class_name_hash;
  
  pCVar1 = (this_ptr->base).base.base.vtable._ue;
  (this_ptr->base).base.follow_leader = (CCharacter *)0x0;
  (*(pCVar1->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->base).victim != (CCharacter *)0x0) {
    core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
              (&this_ptr->state_machine,"Chasing");
    return;
  }
  if ((CWayPoint *)this_ptr->patrol_goal == (CWayPoint *)0x0) {
    class_name_hash = g_CPatrolPointClassInfo.name_hash;
    pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                       (g_CDemonMission_PTR_00618170,(this_ptr->base).patrol_name_pattern);
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,class_name_hash);
    this_ptr->patrol_goal = pCVar3;
    if (pCVar3 == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,this_ptr->walk_state_3_motion,1);
      return;
    }
  }
  else {
    if (this_ptr->patrol_next == (CDemonActor *)0x0) {
      actor_ptr = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005882d0
                            ((CWayPoint *)&(this_ptr->base).base.base.location,
                             (CWayPoint *)this_ptr->patrol_goal,0);
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((CDemonActor *)actor_ptr,g_CPatrolPointClassInfo.name_hash);
      this_ptr->patrol_next = pCVar3;
    }
    this_ptr_00 = &(this_ptr->base).base.model;
    if (this_ptr->patrol_next == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&this_ptr_00->base,this_ptr->walk_state_3_motion,1);
      return;
    }
    iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      ((CCharacter *)this_ptr,&(this_ptr->patrol_next->location).position,
                       (CPathMap *)0x0,&this_ptr->walk_direction,(this_ptr->walk_direction).z,
                       0.7853982);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&this_ptr_00->base,this_ptr->walk_motion,1);
      return;
    }
    if (this_ptr->patrol_goal == this_ptr->patrol_next) {
      pCVar3 = (CDemonActor *)
               core_hpatrol_cpp_findNextPatrolPoint_FUN_0059c9c0
                         (this_ptr->patrol_next->actor_name,&this_ptr->patrol_direction);
      this_ptr->patrol_next = (CDemonActor *)0x0;
      this_ptr->patrol_goal = pCVar3;
      return;
    }
    this_ptr->patrol_next = (CDemonActor *)0x0;
  }
  return;
}
