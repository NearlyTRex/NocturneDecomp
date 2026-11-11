// Name: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_00582c90
// Address: 00582c90
// Address Range: [[00582c90, 00582db0]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_00582c90(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_00582c90(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

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
  uStack_48 = 0;
  uStack_44 = 0x3e03126f;
  uStack_40 = 0x40847ae1;
  if (&uStack_30 != &uStack_48) {
    uStack_2c = 0x3e03126f;
    uStack_28 = 0x40847ae1;
    uStack_30 = 0;
  }
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_14 = 0x4048f5c3;
  uStack_24 = 0;
  uStack_20 = 0x4048f5c3;
  uStack_1c = 0;
  if (&uStack_3c != &uStack_24) {
    uStack_3c = 0;
    uStack_38 = 0x4048f5c3;
    uStack_34 = 0;
  }
  core_xform_cpp_FUN_00591c10(auStack_78,&uStack_30,&uStack_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
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
