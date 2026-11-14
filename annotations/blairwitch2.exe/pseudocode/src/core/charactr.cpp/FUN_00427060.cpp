// Name: core_charactr.cpp_FUN_00427060
// Address: 00427060
// Address Range: [[00427060, 00427123]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00427060(int param_1,int param_2,int param_3,float param_4)

#include "nocturne.h"

void core_charactr_cpp_FUN_00427060(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_1040 [1012];
  float *pfVar3;
  CVector3f local_58;
  float local_4c;
  float afStack_48 [5];
  float local_34 [4];
  float afStack_24 [2];
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x23f4 + param_2 * 4) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040d060(param_4);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                ((CDeformableModelInstance *)(param_1 + 0x2b4),param_3,&local_58);
      pfVar3 = afStack_48 + 8;
      local_34[3] = local_58.x;
      afStack_24[(uint)bVar2 * -2] = *(float *)((int)&local_58 + (uint)bVar2 * -8 + 4);
      afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_actor_cpp_FUN_00408d70(param_1,pfVar3);
      local_10.x = local_4c;
      *(float *)((int)&local_10 + (uint)bVar2 * -8 + 4) = afStack_48[(uint)bVar2 * -2];
      *(float *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      local_34[0] = -3.0;
      local_34[1] = 0.0;
      local_34[2] = 0.0;
      core_actor_cpp_FUN_00408cf0(param_1,afStack_48 + 5);
      local_1c.x = afStack_48[2];
      *(float *)((int)&local_1c + (uint)bVar2 * -8 + 4) = afStack_48[(uint)bVar2 * -2 + 3];
      *(float *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                (g_CGorePtr,&local_10,&local_1c,*(EBloodType *)(param_1 + 0x280c));
      return;
    }
  }
  return;
}
