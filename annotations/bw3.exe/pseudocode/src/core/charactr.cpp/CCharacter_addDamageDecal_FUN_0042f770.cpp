// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042f770
// Address: 0042f770
// Address Range: [[0042f770, 0042fbc7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(CCharacter *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1060 [846];
  float *pfVar10;
  uint local_318 [12];
  uint local_2e8 [12];
  uint local_2b8 [12];
  uint local_288 [12];
  uint local_258 [12];
  uint local_228 [12];
  uint local_1f8 [12];
  CMatrix3x4f local_1c8;
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  uint local_108 [12];
  float local_d8 [12];
  uint local_a8 [12];
  float local_78;
  float afStack_74 [5];
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_20;
  float local_1c;
  SDamageDecal *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar9 = 0;
  iVar3 = this_ptr->damage_decal_count;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->collision_part_index)) {
    this_ptr->damage_decal_count = this_ptr->damage_decal_count + 1;
    local_18 = this_ptr->damage_decals + iVar3;
    local_18->part_index = pCVar2->collision_part_index;
    iVar3 = pCVar2->collision_bone_index;
    local_18->bone_index = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)
                        (this_ptr,local_18->part_index);
      local_18->bone_index = iVar3;
    }
    local_48 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    local_44 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_40 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    local_78 = local_48;
    afStack_74[(uint)bVar9 * -2] = afStack_74[(uint)bVar9 * -2 + 0xc];
    afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    local_3c = local_48;
    afStack_74[(uint)bVar9 * -2 + 0xf] = afStack_74[(uint)bVar9 * -2 + 0xc];
    afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    local_20 = SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38);
    if (local_20 <= 0.0) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    else {
      fVar1 = 1.0 / local_20;
      local_3c = local_3c * fVar1;
      local_38 = local_38 * fVar1;
      local_34 = local_34 * fVar1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.3,0.6);
    local_1c = local_14;
    local_3c = local_3c * local_14;
    local_38 = local_38 * local_14;
    local_34 = local_34 * local_14;
    local_60 = (g_CDemonSetPtr->collision_impact_position).x - local_3c;
    local_5c = (g_CDemonSetPtr->collision_impact_position).y - local_38;
    local_58 = (g_CDemonSetPtr->collision_impact_position).z - local_34;
    afStack_74[2] = local_60;
    afStack_74[(uint)bVar9 * -2 + 3] = afStack_74[(uint)bVar9 * -2 + 6];
    afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_78);
    pfVar6 = afStack_74 + 8;
    pfVar10 = afStack_74 + 2;
    puVar5 = local_2b8;
    local_54[0] = (float)local_30;
    afStack_74[(uint)bVar9 * -2 + 9] = afStack_74[(uint)bVar9 * -2 + 0x12];
    afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
    core_xform_cpp_FUN_00583940(puVar5,pfVar10,pfVar6);
    puVar5 = local_2b8;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_00584ff0(local_14,puVar5);
    puVar5 = local_228;
    puVar4 = local_2e8;
    puVar7 = local_228;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_00584f70(local_14,puVar5);
    puVar5 = local_288;
    puVar4 = local_258;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_258);
    puVar5 = local_a8;
    puVar4 = local_1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_1f8);
    puVar5 = local_108;
    puVar4 = local_2b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_FUN_00583800
              (&local_1c8,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_00584560
              ((this_ptr->model).bone_transform.bone_model_matrices + local_18->bone_index);
    puVar5 = local_138;
    puVar4 = local_168;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_2b8,&local_1c8,local_168);
    puVar5 = local_198;
    puVar4 = local_318;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_318);
    pfVar6 = local_d8;
    pCVar8 = &local_18->transform;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar8->m[0].w = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar9 * -8 + 4);
    }
  }
  return;
}
