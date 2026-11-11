// Name: core_baal.cpp_CBaal_getCarryObjToBodyXForm_FUN_00597810
// Address: 00597810
// Address Range: [[00597810, 0059793c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_baal_cpp_CBaal_getCarryObjToBodyXForm_FUN_00597810(CBaal *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_baal_cpp_CBaal_getCarryObjToBodyXForm_FUN_00597810(CBaal *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_a8 [12];
  byte auStack_78 [48];
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
    uStack_2c = 0xbdf61e4f;
    uStack_28 = 0xbe57caea;
    uStack_30 = 0x3ec1cbab;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbdf61e4f;
      uStack_34 = 0xbe57caea;
      uStack_3c = 0x3ec1cbab;
    }
    uStack_10 = 0xbfcbdfe3;
    uStack_18 = 0xbd2a6076;
    uStack_14 = 0xbfbf0f28;
    uStack_48 = 0xbd2a6076;
    uStack_44 = 0xbfbf0f28;
    uStack_40 = 0xbfcbdfe3;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbd2a6076;
      uStack_20 = 0xbfbf0f28;
      uStack_1c = 0xbfcbdfe3;
    }
  }
  core_xform_cpp_FUN_00583940(auStack_78,&uStack_3c,&uStack_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            (auStack_78,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1);
  pfVar2 = afStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
