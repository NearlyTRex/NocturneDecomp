// Name: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00594ab0
// Address: 00594ab0
// Address Range: [[00594ab0, 00594c7f]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00594ab0(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00594ab0(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f CStack_cc;
  CMatrix3x4f CStack_9c;
  CVector3f CStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  CVector3f CStack_18;
  
  bVar4 = 0;
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    CStack_48.x = 0.635;
    CStack_48.y = -0.111;
    CStack_48.z = -0.174;
    if (&CStack_18 != &CStack_48) {
      CStack_18.y = -0.111;
      CStack_18.z = -0.174;
      CStack_18.x = 0.635;
    }
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    CStack_3c.x = 0.0;
    CStack_3c.y = 0.0;
    CStack_3c.z = 0.0;
    if (&CStack_54 == &CStack_3c) goto LAB_00594b90;
  }
  else {
    CStack_6c.y = -0.111;
    CStack_6c.z = -0.174;
    CStack_6c.x = -0.635;
    if (&CStack_18 != &CStack_6c) {
      CStack_18.y = -0.111;
      CStack_18.z = -0.174;
      CStack_18.x = -0.635;
    }
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    CStack_30.x = 0.0;
    CStack_30.y = 0.0;
    CStack_30.z = 0.0;
    if (&CStack_54 == &CStack_30) goto LAB_00594b90;
  }
  CStack_54.y = 0.0;
  CStack_54.x = 0.0;
  CStack_54.z = 0.0;
LAB_00594b90:
  core_xform_cpp_FUN_005b5760(&CStack_cc,&CStack_18,&CStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_cc,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1,
             &CStack_9c);
  pCVar2 = &CStack_9c;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
