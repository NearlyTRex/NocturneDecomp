// Name: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_0051e2f0
// Address: 0051e2f0
// Address Range: [[0051e2f0, 0051e5c4]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_0051e2f0(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_0051e2f0(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_1060 [985];
  CMatrix3x4f CStack_c0;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  uint uStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  uint uStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar5 = 0;
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                      ((this_ptr->base).base.carry_hands[hand_index].carry_actor,
                       g_CElephantGunClassInfo.name_hash);
    if (iVar1 == 0) {
      CStack_24.y = -0.13793;
      CStack_24.z = -0.112196;
      CStack_24.x = 0.228082;
      if (&CStack_6c != (CVector3f *)(afStack_38 + 5)) {
        CStack_6c.x = 0.228082;
        CStack_6c.y = -0.13793;
        CStack_6c.z = -0.112196;
      }
      uStack_60 = 0xbe8ed8b2;
      afStack_5c[1] = 1.55012;
      afStack_5c[0] = 1.58477;
      CStack_78.x = -0.278997;
      *(float *)((int)&CStack_78 + (uint)bVar5 * -8 + 4) = afStack_5c[(uint)bVar5 * -2];
      *(float *)((int)&CStack_78 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&CStack_54 != &CStack_78) {
        CStack_54.x = CStack_78.x;
        CStack_54.y = CStack_78.y;
        CStack_54.z = CStack_78.z;
      }
    }
    else {
      CStack_30.y = -0.1;
      CStack_30.z = 0.309;
      CStack_30.x = 0.378;
      if (&CStack_6c != (CVector3f *)(afStack_38 + 2)) {
        CStack_6c.y = -0.1;
        CStack_6c.z = 0.309;
        CStack_6c.x = 0.378;
      }
      afStack_38[1] = 1.494;
      uStack_3c = 0xbe810625;
      afStack_38[0] = 1.588;
      CStack_18.x = -0.252;
      afStack_38[(uint)bVar5 * -2 + 9] = afStack_38[(uint)bVar5 * -2];
      afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&CStack_54 != (CVector3f *)(afStack_38 + 8)) {
        CStack_54.x = CStack_18.x;
        CStack_54.y = CStack_18.y;
        CStack_54.z = CStack_18.z;
      }
    }
  }
  else {
    CStack_48.y = -0.14;
    CStack_48.z = -0.175;
    CStack_48.x = -0.248;
    if (&CStack_6c != &CStack_48) {
      CStack_6c.y = -0.14;
      CStack_6c.z = -0.175;
      CStack_6c.x = -0.248;
    }
    uStack_88 = 0xbfdac083;
    uStack_90 = 0xbee978d5;
    uStack_8c = 0xbfbbe76d;
    CStack_84.x = -0.456;
    CStack_84.y = -1.468;
    CStack_84.z = -1.709;
    if (&CStack_54 != &CStack_84) {
      CStack_54.x = -0.456;
      CStack_54.y = -1.468;
      CStack_54.z = -1.709;
    }
  }
  core_xform_cpp_FUN_005b5760(&CStack_c0,&CStack_6c,&CStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_c0,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar2);
  pfVar3 = (float *)&stack0xffffff10;
  pCVar4 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
