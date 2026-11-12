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
    uStack_2c = 0xbf4a875d;
    uStack_28 = 0x3f153598;
    uStack_30 = 0x3f32424a;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbf4a875d;
      uStack_34 = 0x3f153598;
      uStack_3c = 0x3f32424a;
    }
    uStack_10 = 0xbff539eb;
    uStack_18 = 0x3f2e9521;
    uStack_14 = 0x402af473;
    uStack_48 = 0x3f2e9521;
    uStack_44 = 0x402af473;
    uStack_40 = 0xbff539eb;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0x3f2e9521;
      uStack_20 = 0x402af473;
      uStack_1c = 0xbff539eb;
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
