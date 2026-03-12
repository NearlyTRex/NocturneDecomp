// Name: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f8b20
// Address: 004f8b20
// Address Range: [[004f8b20, 004f8c6f]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f8b20(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f8b20(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
  
  bVar3 = 0;
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    local_18.x = 0.45;
    local_18.y = -0.229;
    local_18.z = -0.02;
    if (&local_3c != &local_18) {
      local_3c.y = -0.229;
      local_3c.z = -0.02;
      local_3c.x = 0.45;
    }
    local_30.z = 1.433;
    local_30.y = 1.176;
    local_30.x = -0.39;
    if (&local_24 != &local_30) {
      local_24.z = 1.433;
      local_24.x = -0.39;
      local_24.y = 1.176;
    }
  }
  else {
    g_CurrentFilename = "..\\core\\icepick.cpp";
    g_CurrentLineNumber = 0x28a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
             &local_a8);
  pCVar2 = &local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar3 * -8 + 4);
    out_matrix->m[0].w = pCVar2->m[0].w;
    pCVar2 = pCVar2;
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
