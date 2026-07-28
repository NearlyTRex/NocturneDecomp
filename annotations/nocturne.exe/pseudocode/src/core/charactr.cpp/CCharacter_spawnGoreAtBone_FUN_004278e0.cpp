// Name: core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
// Address: 004278e0
// Address Range: [[004278e0, 00427981]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CDemonActor *param_1,int param_2,int param_3,float param_4)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CDemonActor *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  CVector3f *input_local_point;
  uint local_34;
  uint local_30;
  uint local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(int *)(param_1[0x1a].create_event + param_2 * 4 + -8) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(param_4);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 1),&local_28,param_3);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_10,input_local_point)
      ;
      local_34 = 0xc0400000;
      local_30 = 0;
      local_2c = 0;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_1c,&local_34);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                ((CGore *)INT_005b96c4,&local_10,&local_1c,(int)param_1[0x1c].prev_actor);
      return;
    }
  }
  return;
}
