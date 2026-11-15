// Name: core_styldemo.cpp_CStylerDemon_getCarryObjToBodyXForm_FUN_005a07c0
// Address: 005a07c0
// Address Range: [[005a07c0, 005a08ec]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_styldemo_cpp_CStylerDemon_getCarryObjToBodyXForm_FUN_005a07c0(CStylerDemon *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_styldemo_cpp_CStylerDemon_getCarryObjToBodyXForm_FUN_005a07c0(CStylerDemon *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f CStack_a8;
  CMatrix3x4f CStack_78;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    CStack_30.y = -0.791128;
    CStack_30.z = 0.582849;
    CStack_30.x = 0.696324;
    if (&CStack_3c != &CStack_30) {
      CStack_3c.y = -0.791128;
      CStack_3c.z = 0.582849;
      CStack_3c.x = 0.696324;
    }
    uStack_10 = 0xbff539eb;
    uStack_18 = 0x3f2e9521;
    uStack_14 = 0x402af473;
    CStack_48.x = 0.681963;
    CStack_48.y = 2.67117;
    CStack_48.z = -1.91583;
    if (&CStack_24 != &CStack_48) {
      CStack_24.x = 0.681963;
      CStack_24.y = 2.67117;
      CStack_24.z = -1.91583;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
            (&CStack_78,&CStack_3c,&CStack_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            (&CStack_78,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1,
             &CStack_a8);
  pCVar2 = &CStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
