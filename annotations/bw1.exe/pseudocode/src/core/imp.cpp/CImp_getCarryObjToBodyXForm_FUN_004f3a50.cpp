// Name: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004f3a50
// Address: 004f3a50
// Address Range: [[004f3a50, 004f3c3a]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004f3a50(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004f3a50(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f CStack_cc;
  float afStack_9c [12];
  CVector3f CStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  CVector3f CStack_18;
  
  bVar4 = 0;
  iVar1 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78);
  if (hand_index == 1) {
    CStack_48.x = 0.206;
    CStack_48.y = -0.505;
    CStack_48.z = 0.389;
    if (&CStack_18 != &CStack_48) {
      CStack_18.y = -0.505;
      CStack_18.z = 0.389;
      CStack_18.x = 0.206;
    }
    uStack_1c = 0x3f7e353f;
    uStack_20 = 0x3ee0c49c;
    uStack_24 = 0xbf2ed917;
    CStack_3c.x = -0.683;
    CStack_3c.y = 0.439;
    CStack_3c.z = 0.993;
    if (&CStack_54 == &CStack_3c) goto LAB_004f3b3e;
  }
  else {
    CStack_6c.y = -0.53;
    CStack_6c.z = 0.41;
    CStack_6c.x = -0.417;
    if (&CStack_18 != &CStack_6c) {
      CStack_18.y = -0.53;
      CStack_18.z = 0.41;
      CStack_18.x = -0.417;
    }
    uStack_58 = 0x3f7e353f;
    uStack_60 = 0xbf2ed917;
    uStack_5c = 0x3ee0c49c;
    CStack_30.x = -0.683;
    CStack_30.y = 0.439;
    CStack_30.z = 0.993;
    if (&CStack_54 == &CStack_30) goto LAB_004f3b3e;
  }
  CStack_54.y = 0.439;
  CStack_54.x = -0.683;
  CStack_54.z = 0.993;
LAB_004f3b3e:
  core_xform_cpp_FUN_005b5760(&CStack_cc,&CStack_18,&CStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_cc,&(this_ptr->base).base.model.field_0xe80 + iVar1 * 0x30);
  pfVar2 = afStack_9c;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
