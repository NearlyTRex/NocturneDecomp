// Name: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004d7850
// Address: 004d7850
// Address Range: [[004d7850, 004d7a3a]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004d7850(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004d7850(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  byte auStack_cc [48];
  float afStack_9c [12];
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
  if (hand_index == 1) {
    uStack_48 = 0x3e52f1aa;
    uStack_44 = 0xbf0147ae;
    uStack_40 = 0x3ec72b02;
    if (&uStack_18 != &uStack_48) {
      uStack_14 = 0xbf0147ae;
      uStack_10 = 0x3ec72b02;
      uStack_18 = 0x3e52f1aa;
    }
    uStack_1c = 0x3f7e353f;
    uStack_20 = 0x3ee0c49c;
    uStack_24 = 0xbf2ed917;
    uStack_3c = 0xbf2ed917;
    uStack_38 = 0x3ee0c49c;
    uStack_34 = 0x3f7e353f;
    if (&uStack_54 == &uStack_3c) goto LAB_004d793e;
  }
  else {
    uStack_68 = 0xbf07ae14;
    uStack_64 = 0x3ed1eb85;
    uStack_6c = 0xbed58106;
    if (&uStack_18 != &uStack_6c) {
      uStack_14 = 0xbf07ae14;
      uStack_10 = 0x3ed1eb85;
      uStack_18 = 0xbed58106;
    }
    uStack_58 = 0x3f7e353f;
    uStack_60 = 0xbf2ed917;
    uStack_5c = 0x3ee0c49c;
    uStack_30 = 0xbf2ed917;
    uStack_2c = 0x3ee0c49c;
    uStack_28 = 0x3f7e353f;
    if (&uStack_54 == &uStack_30) goto LAB_004d793e;
  }
  uStack_50 = 0x3ee0c49c;
  uStack_54 = 0xbf2ed917;
  uStack_4c = 0x3f7e353f;
LAB_004d793e:
  core_xform_cpp_FUN_00591c10(auStack_cc,&uStack_18,&uStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (auStack_cc,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1);
  pfVar2 = afStack_9c;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
