// Name: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120
// Address: 005da120
// Address Range: [[005da120, 005da238] [03fc3c9c, 03fc3cfa]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar2;
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_a8;
  CMatrix3x4f local_78;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    local_18.y = -1.866;
    local_18.z = -4.108;
    local_18.x = 2.104;
    if (&local_3c != &local_18) {
      local_3c.y = -1.866;
      local_3c.z = -4.108;
      local_3c.x = 2.104;
    }
    local_30.z = 0.101;
    local_30.y = -0.486;
    local_30.x = 1.371;
    if (&local_24 != &local_30) {
      local_24.z = 0.101;
      local_24.x = 1.371;
      local_24.y = -0.486;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
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
