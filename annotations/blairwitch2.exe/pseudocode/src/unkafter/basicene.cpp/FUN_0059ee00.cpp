// Name: unkafter_basicene.cpp_FUN_0059ee00
// Address: 0059ee00
// Address Range: [[0059ee00, 0059ef8d]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ee00(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059ee00(CCharacter *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  
  *(uint *)&param_1->field_0x342c = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
  if (*(int *)&param_1[1].field_0x18 != 0) {
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
    return;
  }
  if (*(int *)&param_1[1].field_0x944 == 0) {
    uVar4 = g_CPatrolPointClassInfo.name_hash;
    pCVar3 = core_mission_cpp_FUN_004fc740(0x01D182F0,&param_1[1].field_0x24);
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,uVar4);
    *(int *)&param_1[1].field_0x944 = iVar1;
    if (iVar1 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,*(int *)&param_1[1].field_0x920,1);
      return;
    }
  }
  else {
    if (*(int *)&param_1[1].field_0x948 == 0) {
      uVar2 = core_waypoint_cpp_FUN_005882d0(&param_1->field_0x20,*(int *)&param_1[1].field_0x944,0)
      ;
      uVar2 = (CPatrolPoint *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar2,g_CPatrolPointClassInfo.name_hash);
      *(uint *)&param_1[1].field_0x948 = uVar2;
    }
    if (*(int *)&param_1[1].field_0x948 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,*(int *)&param_1[1].field_0x920,1);
      return;
    }
    iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x948 + 0x20),(CPathMap *)0x0
                       ,(CVector3f *)&param_1[1].field_0x9c4,*(float *)&param_1[1].field_0x9cc,
                       0.7853982);
    if (iVar1 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,*(int *)&param_1[1].field_0x928,1);
      return;
    }
    if (*(int *)&param_1[1].field_0x944 == *(int *)&param_1[1].field_0x948) {
      uVar2 = core_patrpoin_cpp_FUN_0059c9c0
                        (*(uint *)&param_1[1].field_0x948,&param_1[1].field_0x94c);
      *(uint *)&param_1[1].field_0x948 = 0;
      *(uint *)&param_1[1].field_0x944 = uVar2;
      return;
    }
    *(uint *)&param_1[1].field_0x948 = 0;
  }
  return;
}
