// Name: unkafter_basicene.cpp_FUN_0059ee00
// Address: 0059ee00
// Address Range: [[0059ee00, 0059ef8d]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ee00(CEnemy *param_1,float param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059ee00(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CEnemy_full_vtable *pCVar1;
  int iVar2;
  uint uVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  
  pCVar1 = (param_1->base).base.vtable._ue;
  *(uint *)&(param_1->base).field_0x342c = 0;
  (*(pCVar1->_ue).updateVictim)(param_1,param_2);
  if (param_1->victim != (CCharacter *)0x0) {
    unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
    return;
  }
  iVar2 = *(int *)&param_1[1].base.model.field_0x5f8;
  if (iVar2 == 0) {
    uVar5 = g_CPatrolPointClassInfo.name_hash;
    pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                       (0x01D182F0,param_1->patrol_name_pattern);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar4,uVar5);
    *(int *)&param_1[1].base.model.field_0x5f8 = iVar2;
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(param_1->base).model,
                 *(int *)&param_1[1].base.model.field_0x5d4,1);
      return;
    }
  }
  else {
    if (*(int *)&param_1[1].base.model.field_0x5fc == 0) {
      uVar3 = core_waypoint_cpp_FUN_005882d0(&(param_1->base).base.field_0x20,iVar2,0);
      uVar3 = (CPatrolPoint *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar3,g_CPatrolPointClassInfo.name_hash);
      *(uint *)&param_1[1].base.model.field_0x5fc = uVar3;
    }
    iVar2 = *(int *)&param_1[1].base.model.field_0x5fc;
    this_ptr = &(param_1->base).model;
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,*(int *)&param_1[1].base.model.field_0x5d4,1);
      return;
    }
    iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      (&param_1->base,(CVector3f *)(iVar2 + 0x20),(CPathMap *)0x0,
                       (CVector3f *)&param_1[1].base.model.field_0x678,
                       *(float *)&param_1[1].base.model.field_0x680,0.7853982);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,*(int *)&param_1[1].base.model.field_0x5dc,1);
      return;
    }
    if (*(int *)&param_1[1].base.model.field_0x5f8 == *(int *)&param_1[1].base.model.field_0x5fc) {
      uVar3 = core_patrpoin_cpp_FUN_0059c9c0
                        (*(uint *)&param_1[1].base.model.field_0x5fc,
                         &param_1[1].base.model.field_0x600);
      *(uint *)&param_1[1].base.model.field_0x5fc = 0;
      *(uint *)&param_1[1].base.model.field_0x5f8 = uVar3;
      return;
    }
    *(uint *)&param_1[1].base.model.field_0x5fc = 0;
  }
  return;
}
