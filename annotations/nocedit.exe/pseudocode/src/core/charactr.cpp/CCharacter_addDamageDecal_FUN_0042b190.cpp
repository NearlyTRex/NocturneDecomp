// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

{
  float fVar1;
  CVector3f *euler_angles;
  int iVar2;
  int iVar3;
  SDamageDecal *pSVar4;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  SDamageDecal *local_18;
  float local_14;
  CDemonSet *pCVar1;
  
  pCVar1 = g_CDemonSetPtr;
  bVar7 = 0;
  iVar3 = this_ptr->damage_decal_count;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->collision_part_index)) {
    this_ptr->damage_decal_count = this_ptr->damage_decal_count + 1;
    pSVar4 = this_ptr->damage_decals + iVar3;
    pSVar4->part_index = pCVar1->collision_part_index;
    iVar3 = pCVar1->collision_triangle_index;
    pSVar4->bone_index = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)
                        (this_ptr,pSVar4->part_index);
      pSVar4->bone_index = iVar3;
    }
    local_4c.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    local_4c.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_4c.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    fVar1 = SQRT(local_4c.z * local_4c.z + local_4c.y * local_4c.y + local_4c.x * local_4c.x);
    if (fVar1 <= 0.0) {
      local_30 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      local_34 = local_4c.x * fVar1;
      local_30 = local_4c.y * fVar1;
      local_2c = local_4c.z * fVar1;
    }
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_28.x = (g_CDemonSetPtr->collision_impact_position).x - local_34 * fVar1;
    local_28.y = (g_CDemonSetPtr->collision_impact_position).y - local_30 * fVar1;
    local_28.z = (g_CDemonSetPtr->collision_impact_position).z - local_2c * fVar1;
    euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_40,&local_4c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_ac,&local_28,euler_angles);
    pCVar9 = &local_ac;
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(fVar1,&local_25c);
    pCVar8 = &local_2bc;
    pCVar7 = &local_25c;
    pCVar10 = &local_2bc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar10->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar7 * -2 + 1) * 4);
    }
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(fVar1,&local_16c);
    pCVar3 = &local_16c;
    pCVar6 = &local_19c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar7 * -8 + 4);
      pCVar6->m[0].w = pCVar3->m[0].w;
      pCVar3 = pCVar3;
      pCVar6 = pCVar6;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,pCVar8,&local_1cc);
    pCVar8 = &local_1cc;
    pCVar7 = &local_13c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_13c,pCVar9,&local_7c);
    pCVar8 = &local_7c;
    pCVar9 = &local_ac;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar9->m[0].w = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_10c,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + pSVar4->bone_index,&local_2ec)
    ;
    pCVar8 = &local_22c;
    pCVar9 = &local_2ec;
    pCVar7 = &local_22c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar9->m[0].w;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_ac,&local_10c,&local_1fc);
    pCVar4 = &local_1fc;
    pCVar9 = &local_dc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar7 * -8 + 4);
      pCVar9->m[0].w = pCVar4->m[0].w;
      pCVar4 = pCVar4;
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,pCVar8,&local_28c);
    pCVar5 = &local_28c;
    pCVar8 = &pSVar4->transform;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
      pCVar8->m[0].w = pCVar5->m[0].w;
      pCVar5 = pCVar5;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar7 * -8 + 4);
    }
  }
  return;
}
