// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

{
  CDemonSet *pCVar1;
  CVector3f *euler_angles;
  float fVar2;
  int iVar3;
  int unaff_EBP;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  float *pfVar8;
  byte bVar9;
  CMatrix3x4f CStack_2e4;
  CMatrix3x4f CStack_2b4;
  CMatrix3x4f CStack_284;
  CMatrix3x4f CStack_254;
  CMatrix3x4f CStack_224;
  CMatrix3x4f CStack_1f4;
  CMatrix3x4f CStack_1c4;
  CMatrix3x4f CStack_194;
  CMatrix3x4f CStack_164;
  CMatrix3x4f CStack_134;
  CMatrix3x4f CStack_104;
  CMatrix3x4f CStack_d4;
  CMatrix3x4f CStack_a4;
  CMatrix3x4f CStack_74;
  CVector3f local_44;
  CVector3f CStack_38;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar9 = 0;
  iVar3 = this_ptr->damage_decal_count;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->unk1)) {
    this_ptr->damage_decal_count = this_ptr->damage_decal_count + 1;
    local_20.z = (float)(this_ptr->damage_decals + iVar3);
    ((SDamageDecal *)local_20.z)->part_index = pCVar1->unk1;
    iVar3 = pCVar1->unk2;
    ((SDamageDecal *)local_20.z)->bone_index = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)
                        (this_ptr,((SDamageDecal *)local_20.z)->part_index);
      *(int *)(unaff_EBP + 4) = iVar3;
    }
    local_44.x = (g_CDemonSetPtr->collision_result_vec2).x -
                 (g_CDemonSetPtr->collision_result_vec1).x;
    local_44.y = (g_CDemonSetPtr->collision_result_vec2).y -
                 (g_CDemonSetPtr->collision_result_vec1).y;
    local_44.z = (g_CDemonSetPtr->collision_result_vec2).z -
                 (g_CDemonSetPtr->collision_result_vec1).z;
    local_24 = SQRT(local_44.z * local_44.z + local_44.y * local_44.y + local_44.x * local_44.x);
    if (local_24 <= 0.0) {
      local_28 = 0.0;
      local_2c = 0.0;
      local_24 = 0.0;
    }
    else {
      local_24 = 1.0 / local_24;
      local_2c = local_44.x * local_24;
      local_28 = local_44.y * local_24;
      local_24 = local_44.z * local_24;
    }
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_2c = local_2c * local_14;
    local_28 = local_28 * local_14;
    local_24 = local_24 * local_14;
    local_20.x = (g_CDemonSetPtr->collision_impact_position).x - local_2c;
    local_20.y = (g_CDemonSetPtr->collision_impact_position).y - local_28;
    local_20.z = (g_CDemonSetPtr->collision_impact_position).z - local_24;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_38,&local_44);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&CStack_a4,&local_20,euler_angles);
    pCVar5 = &CStack_a4;
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(fVar2,&CStack_254);
    pCVar6 = &CStack_2b4;
    pCVar4 = &CStack_254;
    pCVar7 = &CStack_2b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(fVar2,&CStack_164);
    pCVar4 = &CStack_164;
    pCVar7 = &CStack_194;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_194,pCVar6,&CStack_1c4);
    pCVar6 = &CStack_1c4;
    pCVar4 = &CStack_134;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_134,pCVar5,&CStack_74);
    pCVar6 = &CStack_74;
    pCVar5 = &CStack_a4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_104,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)(unaff_EBP + 4),
               &CStack_2e4);
    pCVar6 = &CStack_224;
    pCVar5 = &CStack_2e4;
    pCVar4 = &CStack_224;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_a4,&CStack_104,&CStack_1f4);
    pCVar5 = &CStack_1f4;
    pCVar4 = &CStack_d4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_d4,pCVar6,&CStack_284);
    pCVar6 = &CStack_284;
    pfVar8 = (float *)(unaff_EBP + 8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  return;
}
