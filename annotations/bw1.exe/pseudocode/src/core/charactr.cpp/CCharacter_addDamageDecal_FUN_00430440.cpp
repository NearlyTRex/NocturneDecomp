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
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  int *piVar10;
  byte bVar11;
  float afStackY_1060 [846];
  CVector3f *position;
  CVector3f *euler_angles;
  CMatrix3x4f local_2b8;
  uint local_288 [12];
  uint local_258 [12];
  uint local_228 [12];
  uint local_1f8 [12];
  CMatrix3x4f local_1c8;
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  float local_108 [12];
  int local_d8 [12];
  uint local_a8 [12];
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
  int *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar11 = 0;
  iVar3 = *(int *)&this_ptr->field_0x3004;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->collision_part_index)) {
    *(int *)&this_ptr->field_0x3004 = *(int *)&this_ptr->field_0x3004 + 1;
    local_18 = (int *)((int)this_ptr->collision_test_normals + iVar3 * 0x38 + 0xec);
    *local_18 = pCVar2->collision_part_index;
    iVar3 = pCVar2->collision_bone_index;
    local_18[1] = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)(this_ptr,*local_18);
      local_18[1] = iVar3;
    }
    local_48 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    local_44[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_44[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    local_78 = local_48;
    afStack_74[(uint)bVar11 * -2] = local_44[(uint)bVar11 * -2];
    afStack_74[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    local_44[2] = local_48;
    local_44[(uint)bVar11 * -2 + 3] = local_44[(uint)bVar11 * -2];
    local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
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
    *(float *)((int)&local_6c + (uint)bVar11 * -8 + 4) = local_5c[(uint)bVar11 * -2];
    *(float *)((int)&local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_78);
    euler_angles = &local_54;
    position = &local_6c;
    pCVar9 = &local_2b8;
    local_54.x = local_44[5];
    *(float *)((int)&local_54 + (uint)bVar11 * -8 + 4) = local_44[(uint)bVar11 * -2 + 6];
    *(float *)((int)&local_54 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_xform_cpp_FUN_005b5760(pCVar9,position,euler_angles);
    pCVar9 = &local_2b8;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005b6e10(local_14,pCVar9);
    puVar6 = local_228;
    puVar4 = (uint *)&stack0xfffffd18;
    puVar8 = local_228;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005b6d90(local_14,puVar6);
    puVar6 = local_288;
    puVar4 = local_258;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_258);
    puVar6 = local_a8;
    puVar4 = local_1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_1f8);
    pfVar5 = local_108;
    pCVar9 = &local_2b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar9->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar11 * -2 + 1;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
    }
    core_xform_cpp_FUN_005b5620
              (&local_1c8,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_005b6380(&(this_ptr->model).field_0xe80 + local_18[1] * 0x30);
    puVar6 = local_138;
    puVar4 = local_168;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2b8,&local_1c8,local_168);
    puVar6 = local_198;
    puVar4 = (uint *)&stack0xfffffce8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xfffffce8);
    piVar7 = local_d8;
    piVar10 = local_18 + 2;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + (uint)bVar11 * -2 + 1;
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
  }
  return;
}
