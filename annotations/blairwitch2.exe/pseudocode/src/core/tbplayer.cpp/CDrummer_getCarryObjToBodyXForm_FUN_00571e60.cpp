// Name: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00571e60
// Address: 00571e60
// Address Range: [[00571e60, 0057202f]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00571e60(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00571e60(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f CStack_cc;
  CMatrix3x4f CStack_9c;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
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
    uStack_48 = 0x3f228f5c;
    uStack_44 = 0xbde353f8;
    uStack_40 = 0xbe322d0e;
    if (&uStack_18 != &uStack_48) {
      uStack_14 = 0xbde353f8;
      uStack_10 = 0xbe322d0e;
      uStack_18 = 0x3f228f5c;
    }
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (&uStack_54 == &uStack_3c) goto LAB_00571f40;
  }
  else {
    uStack_68 = 0xbde353f8;
    uStack_64 = 0xbe322d0e;
    uStack_6c = 0xbf228f5c;
    if (&uStack_18 != &uStack_6c) {
      uStack_14 = 0xbde353f8;
      uStack_10 = 0xbe322d0e;
      uStack_18 = 0xbf228f5c;
    }
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    if (&uStack_54 == &uStack_30) goto LAB_00571f40;
  }
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
LAB_00571f40:
  core_xform_cpp_FUN_00591c10(&CStack_cc,&uStack_18,&uStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
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
