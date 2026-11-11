// Name: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0
// Address: 004d31d0
// Address Range: [[004d31d0, 004d36d8]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d357a) */
/* WARNING: Removing unreachable block (ram,0x004d368d) */
/* WARNING: Removing unreachable block (ram,0x004d35b4) */
/* WARNING: Removing unreachable block (ram,0x004d35f6) */
/* WARNING: Removing unreachable block (ram,0x004d3620) */
/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004d31d0(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  uint auStackY_10b4 [892];
  byte auStack_2b8 [144];
  byte auStack_228 [48];
  CMatrix3x4f CStack_1f8;
  CMatrix3x4f CStack_1c8;
  CMatrix3x4f CStack_198;
  byte auStack_168 [48];
  CMatrix3x4f CStack_138;
  float afStack_108 [12];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint auStack_c8 [6];
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [8];
  uint uStack_60;
  uint auStack_5c [20];
  
  bVar4 = 0;
  if ((this_ptr->hostage_type == 1) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                        ((this_ptr->base).base.carry_hands[hand_index].carry_actor,
                         "CShotgun"), iVar1 != 0)) {
    auStack_5c[6] = 0xbc449ba6;
    uStack_a4 = 0x3ecf5c29;
    auStack_5c[5] = 0x3e89ba5e;
    auStack_5c[7] = 0x3dbc6a7f;
    uStack_a8 = 0xbe92f1aa;
    uStack_a0 = 0x3f9ac083;
    core_xform_cpp_FUN_00591c10(auStack_228,auStack_5c + 5,&uStack_a8);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (auStack_228,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index);
    pCVar2 = &CStack_138;
  }
  else if (this_ptr->hostage_type == 3) {
    auStack_5c[9] = 0xbe4d1e54;
    auStack_5c[10] = 0x3d04bb36;
    auStack_5c[8] = 0x3e882d5a;
    if (auStack_c8 + 2 != auStack_5c + 8) {
      auStack_c8[2] = 0x3e882d5a;
      auStack_c8[3] = 0xbe4d1e54;
      auStack_c8[4] = 0x3d04bb36;
    }
    uStack_cc = 0xbef6147b;
    auStack_c8[1] = 0x3e0c27a6;
    auStack_c8[0] = 0x3e0c27a6;
    uStack_60 = 0xbef6147b;
    auStack_5c[(uint)bVar4 * -2] = auStack_c8[(uint)bVar4 * -2];
    auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (auStack_c8 + 5 != &uStack_60) {
      auStack_c8[5] = uStack_60;
      uStack_b0 = auStack_5c[0];
      uStack_ac = auStack_5c[1];
    }
    core_xform_cpp_FUN_00591c10(auStack_2b8,auStack_c8 + 2,auStack_c8 + 5);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (auStack_2b8,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index);
    pCVar2 = &CStack_198;
  }
  else if (this_ptr->hostage_type == 5) {
    uStack_d8 = 0x3e882d5a;
    uStack_d4 = 0xbe4d1e54;
    uStack_d0 = 0x3d04bb36;
    if (auStack_5c + 2 != &uStack_d8) {
      auStack_5c[4] = 0x3d04bb36;
      auStack_5c[3] = 0xbe4d1e54;
      auStack_5c[2] = 0x3e882d5a;
    }
    auStack_80[2] = 0xbef6147b;
    auStack_80[4] = 0x3e0c27a6;
    auStack_80[3] = 0x3e0c27a6;
    uStack_84 = 0xbef6147b;
    auStack_80[(uint)bVar4 * -2] = auStack_80[(uint)bVar4 * -2 + 3];
    auStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&uStack_90 != &uStack_84) {
      uStack_90 = uStack_84;
      uStack_8c = auStack_80[0];
      uStack_88 = auStack_80[1];
    }
    core_xform_cpp_FUN_00591c10(auStack_168,auStack_5c + 2,&uStack_90);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (auStack_168,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               (this_ptr->base).base.carry_hands[hand_index].bone_index);
    pCVar2 = &CStack_1c8;
  }
  else {
    core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
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
