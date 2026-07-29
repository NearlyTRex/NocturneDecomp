// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
// Address: 00427310
// Address Range: [[00427310, 0042772a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *euler_angles;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  float fVar9;
  uint local_2ec [12];
  uint local_2bc [12];
  float local_28c [12];
  uint local_25c [12];
  uint local_22c [12];
  uint local_1fc [12];
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  uint local_13c [12];
  CMatrix3x4f local_10c;
  uint local_dc [12];
  CMatrix3x4f local_ac;
  float local_7c [12];
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  SDamageDecal *local_18;
  float local_14;
  
  iVar1 = 0x01E57284;
  bVar8 = 0;
  iVar2 = this_ptr->damage_decal_count;
  if ((iVar2 < 5) && (-1 < *(int *)(0x01E57284 + 0x14cd60))) {
    this_ptr->damage_decal_count = this_ptr->damage_decal_count + 1;
    local_18 = this_ptr->damage_decals + iVar2;
    local_18->part_index = *(int *)(iVar1 + 0x14cd60);
    iVar2 = *(int *)(iVar1 + 0x14cd64);
    local_18->bone_index = iVar2;
    if (iVar2 < 0) {
      iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)
                        (this_ptr,local_18->part_index);
      local_18->bone_index = iVar2;
    }
    local_4c.x = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
    local_4c.y = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
    local_4c.z = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
    fVar9 = SQRT(local_4c.z * local_4c.z + local_4c.y * local_4c.y + local_4c.x * local_4c.x);
    if (fVar9 <= 0.0) {
      local_30 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
    }
    else {
      local_2c = 1.0 / fVar9;
      local_34 = local_4c.x * local_2c;
      local_30 = local_4c.y * local_2c;
      local_2c = local_4c.z * local_2c;
    }
    local_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.3,0.6);
    local_34 = local_34 * local_1c;
    local_30 = local_30 * local_1c;
    local_2c = local_2c * local_1c;
    local_28.x = *(float *)(0x01E57284 + 0x14cd50) - local_34;
    local_28.y = *(float *)(0x01E57284 + 0x14cd54) - local_30;
    local_28.z = *(float *)(0x01E57284 + 0x14cd58) - local_2c;
    local_14 = local_1c;
    euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (&local_40,&local_4c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_ac,&local_28,euler_angles);
    pCVar7 = &local_ac;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_0055c7b0(local_14,pCVar7,fVar9);
    puVar4 = local_2bc;
    puVar3 = local_25c;
    puVar6 = local_2bc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_0055c730(local_14,puVar4);
    puVar4 = local_16c;
    puVar3 = local_19c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_19c);
    puVar4 = local_1cc;
    puVar3 = local_13c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_13c);
    pfVar5 = local_7c;
    pCVar7 = &local_ac;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar7->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_10c,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_0055bd00
              ((this_ptr->model).bone_transform.bone_world_matrices + local_18->bone_index);
    puVar4 = local_2ec;
    puVar3 = local_22c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_ac,&local_10c,local_22c);
    puVar4 = local_1fc;
    puVar3 = local_dc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_dc);
    pfVar5 = local_28c;
    pCVar7 = &local_18->transform;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar7->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar8 * -8 + 4);
    }
  }
  return;
}
