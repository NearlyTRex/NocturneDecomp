// Name: core_charactr.cpp_FUN_00427060
// Address: 00427060
// Address Range: [[00427060, 00427123]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00427060(CDemonActor *param_1,int param_2,int param_3,float param_4)

#include "nocturne.h"

void core_charactr_cpp_FUN_00427060(CDemonActor *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_1040 [1012];
  CVector3f *input_local_point;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1[0xd].create_event + param_2 * 4 + 0x58) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040d060(param_4);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                ((CDeformableModelInstance *)(param_1 + 1),param_3,&local_58);
      input_local_point = &local_28;
      local_28.x = local_58.x;
      *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_58 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,input_local_point,&local_4c)
      ;
      local_10.x = local_4c.x;
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_34.x = -3.0;
      local_34.y = 0.0;
      local_34.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(param_1,&local_34,&local_40);
      local_1c.x = local_40.x;
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                (g_CGorePtr,&local_10,&local_1c,(EBloodType)param_1[0xe].particle_systems[3].owner);
      return;
    }
  }
  return;
}
