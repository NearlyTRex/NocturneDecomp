// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440
// Address: 00430440
// Address Range: [[00430440, 00430897]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00430440(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00430440(CCharacter *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1060 [846];
  CVector3f *position;
  CVector3f *euler_angles;
  CMatrix3x4f local_318;
  CMatrix3x4f local_2e8;
  CMatrix3x4f local_2b8;
  CMatrix3x4f local_288;
  CMatrix3x4f local_258;
  CMatrix3x4f local_228;
  CMatrix3x4f local_1f8;
  CMatrix3x4f local_1c8;
  CMatrix3x4f local_198;
  CMatrix3x4f local_168;
  float local_138 [12];
  CMatrix3x4f local_108;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  float local_78;
  float afStack_74 [2];
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  CVector3f local_54;
  float local_48;
  float local_44 [9];
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
    local_44[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_44[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    local_78 = local_48;
    afStack_74[(uint)bVar9 * -2] = local_44[(uint)bVar9 * -2];
    afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_44[2] = local_48;
    local_44[(uint)bVar9 * -2 + 3] = local_44[(uint)bVar9 * -2];
    local_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         local_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_20 = SQRT(local_44[4] * local_44[4] +
                    local_44[2] * local_44[2] + local_44[3] * local_44[3]);
    if (local_20 <= 0.0) {
      local_44[3] = 0.0;
      local_44[2] = 0.0;
      local_44[4] = 0.0;
    }
    else {
      fVar1 = 1.0 / local_20;
      local_44[2] = local_44[2] * fVar1;
      local_44[3] = local_44[3] * fVar1;
      local_44[4] = local_44[4] * fVar1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,0.6);
    local_1c = local_14;
    local_44[2] = local_44[2] * local_14;
    local_44[3] = local_44[3] * local_14;
    local_44[4] = local_44[4] * local_14;
    local_60 = (g_CDemonSetPtr->collision_impact_position).x - local_44[2];
    local_5c[0] = (g_CDemonSetPtr->collision_impact_position).y - local_44[3];
    local_5c[1] = (g_CDemonSetPtr->collision_impact_position).z - local_44[4];
    local_6c.x = local_60;
    *(float *)((int)&local_6c + (uint)bVar9 * -8 + 4) = local_5c[(uint)bVar9 * -2];
    *(float *)((int)&local_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_78);
    euler_angles = &local_54;
    position = &local_6c;
    pCVar7 = &local_2b8;
    local_54.x = local_44[5];
    *(float *)((int)&local_54 + (uint)bVar9 * -8 + 4) = local_44[(uint)bVar9 * -2 + 6];
    *(float *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_xform_cpp_FUN_005b5760(pCVar7,position,euler_angles);
    pCVar7 = &local_2b8;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005b6e10(local_14,&local_2e8);
    pCVar6 = &local_228;
    pCVar4 = &local_2e8;
    pCVar8 = &local_228;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar8->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005b6d90(local_14,&local_288);
    pCVar4 = &local_288;
    pCVar8 = &local_258;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar8->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_258,pCVar6,&local_a8);
    pCVar6 = &local_a8;
    pCVar4 = &local_1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1f8,pCVar7,&local_108);
    pCVar7 = &local_108;
    pCVar6 = &local_2b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_FUN_005b5620
              (&local_1c8,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_005b6380
              ((this_ptr->model).bone_transform.bone_model_matrices + local_18->bone_index);
    pCVar7 = &local_168;
    pfVar5 = local_138;
    pCVar6 = &local_168;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2b8,&local_1c8,&local_198);
    pCVar6 = &local_198;
    pCVar4 = &local_318;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(float *)pCVar4 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_318,pCVar7,&local_d8);
    pCVar7 = &local_d8;
    pCVar6 = &local_18->transform;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
    }
  }
  return;
}
