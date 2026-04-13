// Name: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550
// Address: 004f6550
// MANUAL RECONSTRUCTION
// Address Range: [[004f6550, 004f69b8] [03fc52d7, 03fc5332] [03fc58b4, 03fc5909]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f688c) */
/* WARNING: Removing unreachable block (ram,0x004f6977) */
/* WARNING: Removing unreachable block (ram,0x004f68c6) */
/* WARNING: Removing unreachable block (ram,0x004f68f7) */
/* WARNING: Removing unreachable block (ram,0x004f6911) */
/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float local_294 [12];
  CMatrix3x4f local_264 [2];
  CMatrix3x4f local_204;
  CMatrix3x4f local_1d4 [2];
  CMatrix3x4f local_174;
  CMatrix3x4f local_144;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CVector3f local_a8;
  CVector3f local_9c [2];
  CVector3f local_84;
  CVector3f local_78 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24 [2];
  
  if ((this_ptr->hostage_type == 1) &&
     (iVar12 = core_actor_cpp_isOfClass_FUN_0040c6d0
                         ((this_ptr->base).base.carry_hands[hand_index].carry_actor,
                          "CShotgun"), iVar12 != 0)) {
    local_84.x = 0.269;
    local_84.y = -0.012;
    local_54.x = -0.287;
    local_84.z = 0.092;
    local_54.z = 1.209;
    local_54.y = 0.405;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_204,&local_84,&local_54);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_204,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index,local_1d4);
    pCVar2 = local_1d4;
  }
  else if (this_ptr->hostage_type == 3) {
    local_3c.x = 0.265971;
    local_3c.y = -0.200311;
    local_3c.z = 0.0324051;
    if (&local_a8 != &local_3c) {
      local_a8.y = -0.200311;
      local_a8.z = 0.0324051;
      local_a8.x = 0.265971;
    }
    local_24[0].z = 0.13687;
    local_24[0].y = 0.13687;
    local_24[0].x = -0.480625;
    if (&local_9c[0] != &local_24[0]) {
      local_9c[0].x = -0.480625;
      local_9c[0].y = 0.13687;
      local_9c[0].z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_e4,&local_a8,local_9c);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_e4,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index,local_264);
    pCVar2 = local_264;
  }
  else if (this_ptr->hostage_type == 5) {
    local_78[0].x = 0.265971;
    local_78[0].y = -0.200311;
    local_78[0].z = 0.0324051;
    if (&local_30 != local_78) {
      local_30.y = -0.200311;
      local_30.z = 0.0324051;
      local_30.x = 0.265971;
    }
    local_60.z = 0.13687;
    local_60.y = 0.13687;
    local_60.x = -0.480625;
    if (&local_48 != &local_60) {
      local_48.x = -0.480625;
      local_48.y = 0.13687;
      local_48.z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_114,&local_30,&local_48);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_114,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index,&local_174);
    pCVar2 = &local_174;
  }
  else {
    core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
              ((CCharacter *)this_ptr,hand_index,&local_144);
    pCVar2 = &local_144;
  }
  fVar1 = pCVar2->m[0].x;
  fVar2 = pCVar2->m[0].y;
  fVar3 = pCVar2->m[0].z;
  fVar4 = pCVar2->m[1].w;
  fVar5 = pCVar2->m[1].x;
  fVar6 = pCVar2->m[1].y;
  fVar7 = pCVar2->m[1].z;
  fVar8 = pCVar2->m[2].w;
  fVar9 = pCVar2->m[2].x;
  fVar10 = pCVar2->m[2].y;
  fVar11 = pCVar2->m[2].z;
  out_matrix->m[0].w = pCVar2->m[0].w;
  out_matrix->m[0].x = fVar1;
  out_matrix->m[0].y = fVar2;
  out_matrix->m[0].z = fVar3;
  out_matrix->m[1].w = fVar4;
  out_matrix->m[1].x = fVar5;
  out_matrix->m[1].y = fVar6;
  out_matrix->m[1].z = fVar7;
  out_matrix->m[2].w = fVar8;
  out_matrix->m[2].x = fVar9;
  out_matrix->m[2].y = fVar10;
  out_matrix->m[2].z = fVar11;
  return out_matrix;
}
