// Name: core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042fc90
// Address: 0042fc90
// Address Range: [[0042fc90, 0042fdbe]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90(CCharacter *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_107c [1014];
  CMatrix3x4f *matrix;
  CVector3f *input_local_point;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CMatrix3x4f *local_1c;
  int local_18;
  SDamageDecal *local_14;
  
  bVar2 = 0;
  local_18 = 0;
  if (0 < this_ptr->damage_decal_count) {
    local_1c = (this_ptr->model).bone_transform.bone_model_matrices;
    local_14 = this_ptr->damage_decals;
    do {
      if ((this_ptr->model).part_data.visibility_flags[local_14->part_index] != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
        if (iVar1 != 0) {
          matrix = local_1c + local_14->bone_index;
          local_34.x = 0.0;
          local_34.y = 0.0;
          local_34.z = -0.2;
          core_xform_cpp_transformVector3x4_FUN_00583260(&local_34,&local_14->transform,&local_58);
          local_4c.x = local_58.x;
          *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_58 + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          core_xform_cpp_transformVector3x4_FUN_00583260(&local_4c,matrix,&local_94);
          input_local_point = &local_40;
          local_40.x = local_94.x;
          *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_94 + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_94 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&this_ptr->base,input_local_point,&local_7c);
          local_28.x = local_7c.x;
          *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_7c + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_7c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          local_64.x = 3.0;
          local_64.y = 0.0;
          local_64.z = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    (&this_ptr->base,&local_64,&local_70);
          local_88.x = local_70.x;
          *(uint *)((int)&local_88 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_70 + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_88 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_70 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0
                    (g_CGorePtr,&local_28,&local_88,this_ptr->blood_type);
        }
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->damage_decal_count);
  }
  return;
}
