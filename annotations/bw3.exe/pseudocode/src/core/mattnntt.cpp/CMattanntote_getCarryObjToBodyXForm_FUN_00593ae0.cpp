// Name: core_mattnntt.cpp_CMattanntote_getCarryObjToBodyXForm_FUN_00593ae0
// Address: 00593ae0
// Address Range: [[00593ae0, 00593c0d]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_mattnntt_cpp_CMattanntote_getCarryObjToBodyXForm_FUN_00593ae0(CMattanntote *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_mattnntt_cpp_CMattanntote_getCarryObjToBodyXForm_FUN_00593ae0(CMattanntote *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
  iVar1 = *(int *)(&this_ptr->field_0x25a8 + hand_index * 0x78);
  if (hand_index == 1) {
    uStack_2c = 0xbda77e94;
    uStack_28 = 0x3ef35569;
    uStack_30 = 0xbe51c1d7;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbda77e94;
      uStack_34 = 0x3ef35569;
      uStack_3c = 0xbe51c1d7;
    }
    uStack_10 = 0x3fc5cc10;
    uStack_18 = 0xbc98ca9c;
    uStack_14 = 0x3fcf0e2c;
    uStack_48 = 0xbc98ca9c;
    uStack_44 = 0x3fcf0e2c;
    uStack_40 = 0x3fc5cc10;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbc98ca9c;
      uStack_20 = 0x3fcf0e2c;
      uStack_1c = 0x3fc5cc10;
    }
  }
  core_xform_cpp_FUN_00583940(auStack_78,&uStack_3c,&uStack_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_78,&this_ptr->field_0xfd8 + iVar1 * 0x30);
  pfVar2 = afStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
