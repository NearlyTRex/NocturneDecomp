// Name: core_basicene.cpp_FUN_0059ee00
// Address: 0059ee00
// Address Range: [[0059ee00, 0059ef8d]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059ee00(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059ee00(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CEnemy_full_vtable *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  float fVar4;
  uint class_name_hash;
  
  pCVar1 = (param_1->base).base.vtable._ue;
  (param_1->base).follow_leader = (CCharacter *)0x0;
  (*(pCVar1->_ue).updateVictim)(param_1,param_2);
  if (param_1->victim != (CCharacter *)0x0) {
    core_muzzle_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
    return;
  }
  fVar4 = param_1[1].base.model.rest_bone_scales[0x39];
  if (fVar4 == 0.0) {
    class_name_hash = g_CPatrolPointClassInfo.name_hash;
    pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                       (0x01D182F0,param_1->patrol_name_pattern);
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,class_name_hash);
    param_1[1].base.model.rest_bone_scales[0x39] = (float)pCVar3;
    if (pCVar3 == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(param_1->base).model.base,(int)param_1[1].base.model.rest_bone_scales[0x30],1);
      return;
    }
  }
  else {
    if (param_1[1].base.model.rest_bone_scales[0x3a] == 0.0) {
      pCVar3 = (CDemonActor *)core_waypoint_cpp_FUN_005882d0(&(param_1->base).base.location,fVar4,0)
      ;
      pCVar3 = (CPatrolPoint *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,g_CPatrolPointClassInfo.name_hash)
      ;
      param_1[1].base.model.rest_bone_scales[0x3a] = (float)pCVar3;
    }
    fVar4 = param_1[1].base.model.rest_bone_scales[0x3a];
    this_ptr = &(param_1->base).model;
    if (fVar4 == 0.0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&this_ptr->base,(int)param_1[1].base.model.rest_bone_scales[0x30],1);
      return;
    }
    iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      (&param_1->base,(CVector3f *)((int)fVar4 + 0x20),(CPathMap *)0x0,
                       (CVector3f *)(param_1[1].base.model.rest_bone_scales + 0x59),
                       param_1[1].base.model.rest_bone_scales[0x5b],0.7853982);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&this_ptr->base,(int)param_1[1].base.model.rest_bone_scales[0x32],1);
      return;
    }
    if (param_1[1].base.model.rest_bone_scales[0x39] == param_1[1].base.model.rest_bone_scales[0x3a]
       ) {
      fVar4 = (float)core_hpatrol_cpp_FUN_0059c9c0
                               (param_1[1].base.model.rest_bone_scales[0x3a],
                                param_1[1].base.model.rest_bone_scales + 0x3b);
      param_1[1].base.model.rest_bone_scales[0x3a] = 0.0;
      param_1[1].base.model.rest_bone_scales[0x39] = fVar4;
      return;
    }
    param_1[1].base.model.rest_bone_scales[0x3a] = 0.0;
  }
  return;
}
