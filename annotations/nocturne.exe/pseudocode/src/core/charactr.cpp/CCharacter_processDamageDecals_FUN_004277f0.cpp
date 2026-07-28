// Name: core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
// Address: 004277f0
// Address Range: [[004277f0, 004278d5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_vector;
  SDamageDecal *pSVar2;
  int iVar3;
  CMatrix3x4f *matrix;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3f local_2c;
  CVector3f local_20;
  CMatrix3x4f *local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->damage_decal_count) {
    local_14 = (this_ptr->model).bone_transform.bone_world_matrices;
    pSVar2 = this_ptr->damage_decals;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar2->part_index] != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar1 != 0) {
          matrix = local_14 + pSVar2->bone_index;
          local_2c.x = 0.0;
          local_2c.y = 0.0;
          local_2c.z = -0.2;
          input_vector = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_50,&local_2c,&pSVar2->transform);
          core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_20,input_vector,matrix);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    (&this_ptr->base,&local_44,&local_20);
          local_34 = 0;
          local_30 = 0;
          local_38 = 0x40400000;
          core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,&local_5c,&local_38);
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                    ((CGore *)INT_005b96c4,&local_44,&local_5c,this_ptr->blood_type);
        }
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->damage_decal_count);
  }
  return;
}
