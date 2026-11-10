// Name: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f19e0
// Address: 004f19e0
// Address Range: [[004f19e0, 004f1b48]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f19e0(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f19e0(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_a8 [12];
  CMatrix3x4f CStack_78;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  iVar1 = *(int *)(&this_ptr->field_0x25a8 + hand_index * 0x78);
  if (hand_index == 1) {
    CStack_30.y = -0.229;
    CStack_30.z = -0.02;
    CStack_30.x = 0.45;
    if (&CStack_3c != &CStack_30) {
      CStack_3c.x = 0.45;
      CStack_3c.y = -0.229;
      CStack_3c.z = -0.02;
    }
    uStack_18 = 0xbec7ae14;
    uStack_10 = 0x3fb76c8b;
    uStack_14 = 0x3f96872b;
    CStack_48.x = -0.39;
    CStack_48.y = 1.176;
    CStack_48.z = 1.433;
    if (&CStack_24 != &CStack_48) {
      CStack_24.x = -0.39;
      CStack_24.y = 1.176;
      CStack_24.z = 1.433;
    }
  }
  else {
    _DAT_01d1d400 = "..\\core\\icepick.cpp";
    _DAT_01d1d404 = 0x289;
    core_main_c_FUN_005030e0("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_FUN_005b5760(&CStack_78,&CStack_3c,&CStack_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_78,&this_ptr->field_0xfd8 + iVar1 * 0x30);
  pfVar2 = afStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
