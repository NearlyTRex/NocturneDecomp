// Name: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920
// Address: 004fa920
// Address Range: [[004fa920, 004faaef] [03fc43bc, 03fc441a]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar2;
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_c0;
  CMatrix3x4f local_90;
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    local_60[0].y = -0.505;
    local_60[0].z = 0.389;
    local_60[0].x = 0.206;
    if (&local_18 != local_60) {
      local_18.x = 0.206;
      local_18.y = -0.505;
      local_18.z = 0.389;
    }
    local_30.x = -0.683;
    local_30.z = 0.993;
    local_30.y = 0.439;
    if (&local_3c != &local_30) {
      local_3c.y = 0.439;
      local_3c.z = 0.993;
      local_3c.x = -0.683;
    }
  }
  else {
    local_24.y = -0.53;
    local_24.z = 0.41;
    local_24.x = -0.417;
    if (&local_18 != &local_24) {
      local_18.y = -0.53;
      local_18.z = 0.41;
      local_18.x = -0.417;
    }
    local_48.z = 0.993;
    local_48.y = 0.439;
    local_48.x = -0.683;
    if (&local_3c != &local_48) {
      local_3c.z = 0.993;
      local_3c.x = -0.683;
      local_3c.y = 0.439;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_90,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
             &local_c0);
  out_matrix->m[0].w = local_c0.m[0].w;
  out_matrix->m[0].x = local_c0.m[0].x;
  out_matrix->m[0].y = local_c0.m[0].y;
  out_matrix->m[0].z = local_c0.m[0].z;
  out_matrix->m[1].w = local_c0.m[1].w;
  out_matrix->m[1].x = local_c0.m[1].x;
  out_matrix->m[1].y = local_c0.m[1].y;
  out_matrix->m[1].z = local_c0.m[1].z;
  out_matrix->m[2].w = local_c0.m[2].w;
  out_matrix->m[2].x = local_c0.m[2].x;
  out_matrix->m[2].y = local_c0.m[2].y;
  out_matrix->m[2].z = local_c0.m[2].z;
  return;
}
