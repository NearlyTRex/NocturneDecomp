// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90
// Address: 0058af90
// Address Range: [[0058af90, 0058b3e9]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  SCarryHand *pSVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1104 [955];
  CVector3f *this_ptr_00;
  uint auStack_20c [12];
  float afStack_1dc [3];
  float fStack_1d0;
  float fStack_1c0;
  float fStack_1b0;
  uint auStack_1ac [12];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint auStack_164 [6];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint auStack_134 [6];
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float afStack_f4 [2];
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMatrix3x4f *pCStack_14;
  int iStack_10;
  
  bVar10 = 0;
  iVar4 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78 + 8);
  iStack_10 = hand_index;
  if ((*(int *)&this_ptr->field_0xd140 != 4) && (hand_index != *(int *)&this_ptr->field_0xd0e8)) {
    iStack_10 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78);
  }
  pCStack_14 = out_matrix;
  if (hand_index != *(int *)&this_ptr->field_0xd0e8) {
    uVar1 = *(uint *)&this_ptr->field_0xd068;
    if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar7 = auStack_134;
      puVar9 = &fStack_14c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      fStack_f8 = fStack_14c + fStack_140;
      afStack_f4[0] = fStack_148 + fStack_13c;
      afStack_f4[1] = fStack_144 + fStack_138;
      afStack_64[2] = fStack_14c + fStack_140;
      afStack_64[(uint)bVar10 * -2 + 3] = *(float *)((int)afStack_f4 + (uint)bVar10 * 0xfffffff8);
      afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           *(float *)((int)afStack_f4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4);
      afStack_118[2] = afStack_64[2] * _DAT_005d8743;
      afStack_118[3] = afStack_64[3] * _DAT_005d8743;
      fStack_108 = fStack_54 * _DAT_005d8743;
      fStack_98 = afStack_64[2] * _DAT_005d8743;
      afStack_94[(uint)bVar10 * -2] = afStack_118[(uint)bVar10 * 0xfffffffe + 3];
      afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_118[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4];
      if (&fStack_ec != &fStack_98) {
        fStack_ec = fStack_98;
        fStack_e8 = afStack_94[0];
        uStack_e4 = afStack_94[1];
      }
      pSVar5 = (this_ptr->base).base.carry_hands + hand_index * 0x78 + 0xc;
      puVar7 = auStack_20c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *(uint *)pSVar5;
        pSVar5 = pSVar5 + ((uint)bVar10 * -2 + 1) * 4;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      }
    }
    else {
      iVar3 = _strnicmp
                        ((this_ptr->base).base.model.model_name,&DAT_005d873f,3);
      if (iVar3 == 0) {
        uStack_6c = 0xbf7c6a90;
        uStack_70 = 0x3f7343c8;
        uStack_74 = 0xbf93b0b4;
      }
      else {
        uStack_6c = 0;
        uStack_70 = 0x3f676c8b;
        uStack_74 = 0x3e1eb852;
      }
      core_xform_cpp_FUN_00583940(auStack_20c,&DAT_02cfd900,&uStack_74);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar7 = auStack_164;
      puVar9 = &fStack_17c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_d4);
      this_ptr_00 = &CStack_80;
      CStack_d4.x = fStack_17c + fStack_170;
      CStack_d4.y = fStack_178 + fStack_16c;
      CStack_d4.z = fStack_174 + fStack_168;
      afStack_94[2] = fStack_17c + fStack_170;
      afStack_94[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_d4 + (uint)bVar10 * -8 + 4);
      afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           *(float *)((int)&CStack_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(this_ptr_00);
      CStack_80.x = afStack_94[2] * _DAT_005d8743;
      CStack_80.y = afStack_94[3] * _DAT_005d8743;
      CStack_80.z = fStack_84 * _DAT_005d8743;
      fStack_50 = afStack_94[2] * _DAT_005d8743;
      afStack_64[(uint)bVar10 * -2 + 6] = *(float *)((int)&CStack_80 + (uint)bVar10 * -8 + 4);
      afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           *(float *)((int)&CStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      fStack_48 = fStack_174 + (float)_DAT_005d8747;
      fStack_c8 = fStack_50;
      afStack_c4[(uint)bVar10 * -2] = afStack_64[(uint)bVar10 * -2 + 6];
      afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      if (&fStack_ec != &fStack_c8) {
        fStack_ec = fStack_c8;
        fStack_e8 = afStack_c4[0];
        uStack_e4 = afStack_c4[1];
      }
    }
  }
  puVar2 = &(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30;
  if (iStack_10 == *(int *)&this_ptr->field_0xd0ec) {
    uStack_e0 = 0xbecccccd;
    uStack_dc = 0;
    uStack_d8 = 0;
    core_xform_cpp_FUN_00583260(&uStack_e0,puVar2);
    fStack_b0 = fStack_20;
    afStack_c4[(uint)bVar10 * -2 + 6] = afStack_64[(uint)bVar10 * -2 + 0x12];
    afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    if (afStack_c4 + 8 != afStack_c4 + 5) {
      fStack_a4 = fStack_b0;
      fStack_a0 = fStack_ac;
      fStack_9c = fStack_a8;
    }
  }
  else {
    uStack_104 = 0x3ecccccd;
    uStack_100 = 0;
    uStack_fc = 0;
    core_xform_cpp_FUN_00583260(&uStack_104,puVar2);
    afStack_c4[2] = fStack_11c;
    afStack_c4[(uint)bVar10 * -2 + 3] = *(float *)((int)afStack_118 + (uint)bVar10 * 0xfffffff8);
    afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)afStack_f4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + -8) * 4);
    if (afStack_c4 + 8 != afStack_c4 + 2) {
      fStack_a4 = afStack_c4[2];
      fStack_a0 = afStack_c4[3];
      fStack_9c = fStack_b4;
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            (auStack_20c,&(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30);
  puVar7 = auStack_1ac;
  puVar9 = afStack_1dc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260(&fStack_ec,afStack_1dc);
  fStack_2c = fStack_68;
  afStack_64[(uint)bVar10 * -2 + 0xf] = afStack_64[(uint)bVar10 * -2];
  afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
       afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  fStack_44 = fStack_a4 - fStack_2c;
  fStack_40 = fStack_a0 - fStack_28;
  fStack_3c = fStack_9c - fStack_24;
  fStack_38 = fStack_a4 - fStack_2c;
  afStack_64[(uint)bVar10 * -2 + 0xc] = afStack_64[(uint)bVar10 * -2 + 9];
  afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  fStack_1d0 = fStack_1d0 + fStack_38;
  fStack_1c0 = fStack_1c0 + fStack_34;
  fStack_1b0 = fStack_1b0 + fStack_30;
  pfVar6 = afStack_1dc;
  pCVar8 = pCStack_14;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar8->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
  }
  return pCStack_14;
}
