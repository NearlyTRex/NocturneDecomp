// Name: core_asgaya.cpp_CAsgaya_getCarryObjToBodyXForm_FUN_005a1970
// Address: 005a1970
// Address Range: [[005a1970, 005a1a9c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_asgaya_cpp_CAsgaya_getCarryObjToBodyXForm_FUN_005a1970(CAsgaya *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_asgaya_cpp_CAsgaya_getCarryObjToBodyXForm_FUN_005a1970(CAsgaya *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
    uStack_2c = 0xbf6c7086;
    uStack_28 = 0x3d5b9b16;
    uStack_30 = 0xbf204945;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbf6c7086;
      uStack_34 = 0x3d5b9b16;
      uStack_3c = 0xbf204945;
    }
    uStack_10 = 0xc01bd399;
    uStack_18 = 0xbbd21c02;
    uStack_14 = 0x3d9ba527;
    uStack_48 = 0xbbd21c02;
    uStack_44 = 0x3d9ba527;
    uStack_40 = 0xc01bd399;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbbd21c02;
      uStack_20 = 0x3d9ba527;
      uStack_1c = 0xc01bd399;
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
