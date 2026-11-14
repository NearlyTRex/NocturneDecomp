// Name: core_charactr.cpp_CCharacter_processDamageDecals_FUN_00430960
// Address: 00430960
// Address Range: [[00430960, 00430a8e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_00430960(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_00430960(CCharacter *this_ptr)

{
  int iVar1;
  byte bVar2;
  float afStackY_107c [1014];
  uint *puVar3;
  uint local_94;
  CVector3f local_88;
  float local_7c;
  float afStack_78 [5];
  float local_64 [4];
  uint auStack_54 [5];
  uint local_40 [3];
  uint local_34;
  uint local_30;
  uint local_2c;
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
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
        if (iVar1 != 0) {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0xbe4ccccd;
          core_xform_cpp_FUN_005b5080
                    (auStack_54 + 8,&local_14->transform,local_1c + local_14->bone_index);
          auStack_54[2] = local_64[3];
          auStack_54[(uint)bVar2 * -2 + 3] = auStack_54[(uint)bVar2 * -2];
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
               auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          core_xform_cpp_FUN_005b5080(auStack_54 + 2);
          puVar3 = auStack_54 + 5;
          local_40[0] = local_94;
          auStack_54[(uint)bVar2 * -2 + 6] = *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8);
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
               *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          core_actor_cpp_FUN_00408b40(this_ptr,puVar3);
          local_28.x = local_7c;
          *(float *)((int)&local_28 + (uint)bVar2 * -8 + 4) = afStack_78[(uint)bVar2 * -2];
          *(float *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               afStack_78[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          local_64[0] = 3.0;
          local_64[1] = 0.0;
          local_64[2] = 0.0;
          core_actor_cpp_FUN_00408ac0(this_ptr,afStack_78 + 5);
          local_88.x = afStack_78[2];
          *(float *)((int)&local_88 + (uint)bVar2 * -8 + 4) = afStack_78[(uint)bVar2 * -2 + 3];
          *(float *)((int)&local_88 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               afStack_78[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                    (g_CGorePtr,&local_28,&local_88,this_ptr->blood_type);
        }
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->damage_decal_count);
  }
  return;
}
