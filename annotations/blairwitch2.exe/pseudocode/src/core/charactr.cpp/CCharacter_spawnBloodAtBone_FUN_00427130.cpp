// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130
// Address: 00427130
// Address Range: [[00427130, 004271d6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1012];
  uint *puVar3;
  CVector3f local_40;
  uint local_34;
  float afStack_30 [5];
  CVector3f local_1c;
  uint local_10;
  float afStack_c [2];
  
  bVar2 = 0;
  if (*(int *)(&(this_ptr->model).field_0x2140 + part_index * 4) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040d060(chance);
    if (iVar1 != 0) {
      core_skeleton_cpp_FUN_00546a90(&this_ptr->model,bone_index);
      puVar3 = &local_10;
      local_10 = local_34;
      afStack_c[(uint)bVar2 * -2] = afStack_30[(uint)bVar2 * -2];
      afStack_c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar3);
      local_40.x = afStack_30[2];
      *(float *)((int)&local_40 + (uint)bVar2 * -8 + 4) = afStack_30[(uint)bVar2 * -2 + 3];
      *(float *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      local_1c.x = 0.0;
      local_1c.y = 7.0;
      local_1c.z = 0.0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
                (g_CGorePtr,&local_40,&local_1c,this_ptr->blood_type);
      return;
    }
  }
  return;
}
