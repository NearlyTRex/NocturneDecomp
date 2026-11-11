// Name: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005a68d0
// Address: 005a68d0
// Address Range: [[005a68d0, 005a69f0]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005a68d0(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005a68d0(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  CStack_48.x = 0.0;
  CStack_48.y = 0.128;
  CStack_48.z = 4.14;
  if (&CStack_30 != &CStack_48) {
    CStack_30.y = 0.128;
    CStack_30.z = 4.14;
    CStack_30.x = 0.0;
  }
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_14 = 0x4048f5c3;
  CStack_24.x = 0.0;
  CStack_24.y = 3.14;
  CStack_24.z = 0.0;
  if (&CStack_3c != &CStack_24) {
    CStack_3c.x = 0.0;
    CStack_3c.y = 3.14;
    CStack_3c.z = 0.0;
  }
  core_xform_cpp_FUN_005b5760(&CStack_78,&CStack_30,&CStack_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_78,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1);
  pfVar2 = afStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
