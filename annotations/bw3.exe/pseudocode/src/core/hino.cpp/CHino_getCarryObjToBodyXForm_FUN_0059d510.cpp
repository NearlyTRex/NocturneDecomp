// Name: core_hino.cpp_CHino_getCarryObjToBodyXForm_FUN_0059d510
// Address: 0059d510
// Address Range: [[0059d510, 0059d63c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_hino_cpp_CHino_getCarryObjToBodyXForm_FUN_0059d510(CHino *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_hino_cpp_CHino_getCarryObjToBodyXForm_FUN_0059d510(CHino *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
    CStack_30.y = -0.138063;
    CStack_30.z = -0.0311307;
    CStack_30.x = 0.139963;
    if (&CStack_3c != &CStack_30) {
      CStack_3c.y = -0.138063;
      CStack_3c.z = -0.0311307;
      CStack_3c.x = 0.139963;
    }
    uStack_10 = 0xbfc9f40a;
    uStack_18 = 0x3e92f512;
    uStack_14 = 0xbfd2646f;
    CStack_48.x = 0.287026;
    CStack_48.y = -1.64369;
    CStack_48.z = -1.57776;
    if (&CStack_24 != &CStack_48) {
      CStack_24.x = 0.287026;
      CStack_24.y = -1.64369;
      CStack_24.z = -1.57776;
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
