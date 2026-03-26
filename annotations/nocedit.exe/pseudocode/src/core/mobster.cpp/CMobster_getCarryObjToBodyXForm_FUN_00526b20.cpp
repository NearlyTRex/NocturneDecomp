// Name: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_00526b20
// Address: 00526b20
// Address Range: [[00526b20, 00526d8b] [03fc4239, 03fc4297]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_00526b20(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_00526b20(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar2;
  CElephantGun *pCVar1;
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  CVector3f local_78 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    pCVar1 = (CElephantGun *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       ((this_ptr->base).base.carry_hands[hand_index].carry_actor,
                        g_CElephantGunClassInfo.name_hash);
    if (pCVar1 == (CElephantGun *)0x0) {
      local_78[0].x = 0.228082;
      local_78[0].y = -0.13793;
      local_78[0].z = -0.112196;
      if (&local_60 != local_78) {
        local_60.z = -0.112196;
        local_60.y = -0.13793;
        local_60.x = 0.228082;
      }
      local_54.x = -0.278997;
      local_54.z = 1.55012;
      local_54.y = 1.58477;
      if (&local_30 != &local_54) {
        local_30.y = 1.58477;
        local_30.z = 1.55012;
        local_30.x = -0.278997;
      }
    }
    else {
      local_18.y = -0.1;
      local_18.z = 0.309;
      local_18.x = 0.378;
      if (&local_60 != &local_18) {
        local_60.y = -0.1;
        local_60.z = 0.309;
        local_60.x = 0.378;
      }
      local_24.z = 1.494;
      local_24.y = 1.588;
      local_24.x = -0.252;
      if (&local_30 != &local_24) {
        local_30.y = 1.588;
        local_30.x = -0.252;
        local_30.z = 1.494;
      }
    }
  }
  else {
    local_3c.y = -0.14;
    local_3c.z = -0.175;
    local_3c.x = -0.248;
    if (&local_60 != &local_3c) {
      local_60.y = -0.14;
      local_60.z = -0.175;
      local_60.x = -0.248;
    }
    local_48.z = -1.709;
    local_48.y = -1.468;
    local_48.x = -0.456;
    if (&local_30 != &local_48) {
      local_30.y = -1.468;
      local_30.x = -0.456;
      local_30.z = -1.709;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_d8,&local_60,&local_30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_d8,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
             &local_a8);
  out_matrix->m[0].w = local_a8.m[0].w;
  out_matrix->m[0].x = local_a8.m[0].x;
  out_matrix->m[0].y = local_a8.m[0].y;
  out_matrix->m[0].z = local_a8.m[0].z;
  out_matrix->m[1].w = local_a8.m[1].w;
  out_matrix->m[1].x = local_a8.m[1].x;
  out_matrix->m[1].y = local_a8.m[1].y;
  out_matrix->m[1].z = local_a8.m[1].z;
  out_matrix->m[2].w = local_a8.m[2].w;
  out_matrix->m[2].x = local_a8.m[2].x;
  out_matrix->m[2].y = local_a8.m[2].y;
  out_matrix->m[2].z = local_a8.m[2].z;
  return;
}
