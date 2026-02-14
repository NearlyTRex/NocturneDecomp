// Name: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370
// Address: 005da370
// Address Range: [[005da370, 005da502]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
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
  
  bVar3 = 0;
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    local_60[0].y = -0.111;
    local_60[0].z = -0.174;
    local_60[0].x = 0.635;
    if (&local_18 != local_60) {
      local_18.x = 0.635;
      local_18.y = -0.111;
      local_18.z = -0.174;
    }
    local_30.z = 0.0;
    local_30.y = 0.0;
    local_30.x = 0.0;
    if (&local_3c == &local_30) goto LAB_005da42c;
  }
  else {
    local_24.y = -0.111;
    local_24.z = -0.174;
    local_24.x = -0.635;
    if (&local_18 != &local_24) {
      local_18.y = -0.111;
      local_18.z = -0.174;
      local_18.x = -0.635;
    }
    local_48.z = 0.0;
    local_48.y = 0.0;
    local_48.x = 0.0;
    if (&local_3c == &local_48) goto LAB_005da42c;
  }
  local_3c.y = 0.0;
  local_3c.z = 0.0;
  local_3c.x = 0.0;
LAB_005da42c:
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_90,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar1,
             &local_c0);
  pCVar2 = &local_c0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    out_matrix->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
