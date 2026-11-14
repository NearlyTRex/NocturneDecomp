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
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    uStack_2c = 0xbe0d6063;
    uStack_28 = 0xbcff05cf;
    uStack_30 = 0x3e0f5276;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbe0d6063;
      uStack_34 = 0xbcff05cf;
      uStack_3c = 0x3e0f5276;
    }
    uStack_10 = 0xbfc9f40a;
    uStack_18 = 0x3e92f512;
    uStack_14 = 0xbfd2646f;
    uStack_48 = 0x3e92f512;
    uStack_44 = 0xbfd2646f;
    uStack_40 = 0xbfc9f40a;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0x3e92f512;
      uStack_20 = 0xbfd2646f;
      uStack_1c = 0xbfc9f40a;
    }
  }
  core_xform_cpp_FUN_00583940(&CStack_78,&uStack_3c,&uStack_24);
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
