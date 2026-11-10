// Name: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004ef400
// Address: 004ef400
// Address Range: [[004ef400, 004ef908]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004ef400(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ef7aa) */
/* WARNING: Removing unreachable block (ram,0x004ef8bd) */
/* WARNING: Removing unreachable block (ram,0x004ef7e4) */
/* WARNING: Removing unreachable block (ram,0x004ef826) */
/* WARNING: Removing unreachable block (ram,0x004ef850) */

CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004ef400(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10b4 [892];
  CMatrix3x4f aCStack_2b8 [3];
  CMatrix3x4f CStack_228;
  CMatrix3x4f CStack_1f8;
  CMatrix3x4f CStack_1c8;
  CMatrix3x4f CStack_198;
  CMatrix3x4f CStack_168;
  CMatrix3x4f CStack_138;
  float afStack_108 [12];
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f aCStack_a8 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [5];
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f aCStack_3c [4];
  
  bVar4 = 0;
  if ((this_ptr->hostage_type == 1) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550
                        (*(CDemonActor **)
                          ((this_ptr->base).base.carry_hands + hand_index * 0x78 + 8),
                         "CShotgun"), iVar1 != 0)) {
    CStack_48.y = -0.012;
    aCStack_a8[0].y = 0.405;
    CStack_48.x = 0.269;
    CStack_48.z = 0.092;
    aCStack_a8[0].x = -0.287;
    aCStack_a8[0].z = 1.209;
    core_xform_cpp_FUN_005b5760(&CStack_228,&CStack_48,aCStack_a8);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&CStack_228,
               &(this_ptr->base).base.model.field_0xe80 +
               *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78) * 0x30);
    pCVar2 = &CStack_138;
  }
  else if (this_ptr->hostage_type == 3) {
    aCStack_3c[0].y = -0.200311;
    aCStack_3c[0].z = 0.0324051;
    aCStack_3c[0].x = 0.265971;
    if (&CStack_c0 != aCStack_3c) {
      CStack_c0.x = 0.265971;
      CStack_c0.y = -0.200311;
      CStack_c0.z = 0.0324051;
    }
    uStack_cc = 0xbef6147b;
    afStack_c8[1] = 0.13687;
    afStack_c8[0] = 0.13687;
    CStack_60.x = -0.480625;
    *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + 4) = afStack_c8[(uint)bVar4 * -2];
    *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&CStack_b4 != &CStack_60) {
      CStack_b4.x = CStack_60.x;
      CStack_b4.y = CStack_60.y;
      CStack_b4.z = CStack_60.z;
    }
    core_xform_cpp_FUN_005b5760(aCStack_2b8,&CStack_c0,&CStack_b4);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (aCStack_2b8,
               &(this_ptr->base).base.model.field_0xe80 +
               *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78) * 0x30);
    pCVar2 = &CStack_198;
  }
  else if (this_ptr->hostage_type == 5) {
    CStack_d8.x = 0.265971;
    CStack_d8.y = -0.200311;
    CStack_d8.z = 0.0324051;
    if (&CStack_54 != &CStack_d8) {
      CStack_54.z = 0.0324051;
      CStack_54.y = -0.200311;
      CStack_54.x = 0.265971;
    }
    uStack_78 = 0xbef6147b;
    afStack_74[1] = 0.13687;
    afStack_74[0] = 0.13687;
    CStack_84.x = -0.480625;
    *(float *)((int)&CStack_84 + (uint)bVar4 * -8 + 4) = afStack_74[(uint)bVar4 * -2];
    *(float *)((int)&CStack_84 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&CStack_90 != &CStack_84) {
      CStack_90.x = CStack_84.x;
      CStack_90.y = CStack_84.y;
      CStack_90.z = CStack_84.z;
    }
    core_xform_cpp_FUN_005b5760(&CStack_168,&CStack_54,&CStack_90);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&CStack_168,
               &(this_ptr->base).base.model.field_0xe80 +
               *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78) * 0x30);
    pCVar2 = &CStack_1c8;
  }
  else {
    core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432be0
              ((CCharacter *)this_ptr,hand_index,&CStack_1f8);
    pCVar2 = &CStack_1f8;
  }
  pfVar3 = afStack_108;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  pfVar3 = afStack_108;
  pCVar2 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
