// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90
// Address: 0058af90
// Address Range: [[0058af90, 0058b3e9]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1104 [955];
  CBoundingBox3D *in_stack_fffffdf4;
  CVector3f *this_ptr_01;
  float fStack_1d0;
  float fStack_1c0;
  float fStack_1b0;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
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
  
  bVar7 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = hand_index;
  if ((this_ptr->zombie_variant != 4) && (hand_index != this_ptr->bone_indices[0])) {
    iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  }
  pCStack_14 = out_matrix;
  if (hand_index != this_ptr->bone_indices[0]) {
    uVar1 = this_ptr->object_shape_class;
    if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf4);
      puVar5 = (uint *)&stack0xfffffecc;
      puVar6 = &stack0xfffffeb4;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_f8 = fStack_14c + fStack_140;
      fStack_f4 = fStack_148 + fStack_13c;
      fStack_f0 = fStack_144 + fStack_138;
      afStack_64[2] = fStack_14c + fStack_140;
      afStack_64[(uint)bVar7 * -2 + 3] = *(float *)((int)&stack0xffffff0c + (uint)bVar7 * -8);
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&stack0xffffff10 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
      fStack_110 = afStack_64[2] * _DAT_005d8743;
      fStack_10c = afStack_64[3] * _DAT_005d8743;
      fStack_108 = fStack_54 * _DAT_005d8743;
      fStack_98 = afStack_64[2] * _DAT_005d8743;
      afStack_94[(uint)bVar7 * -2] = *(float *)((int)&stack0xfffffef4 + (uint)bVar7 * -8);
      afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&stack0xfffffef8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
      if (&stack0xffffff14 != &fStack_98) {
        fStack_ec = fStack_98;
        fStack_e8 = afStack_94[0];
        uStack_e4 = afStack_94[1];
      }
      pCVar3 = &(this_ptr->base).base.carry_hands[hand_index].initial_carry_transform;
      pfVar4 = (float *)&stack0xfffffdf4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
      }
    }
    else {
      iVar2 = _strnicmp
                        ((this_ptr->base).base.model.model_name,&DAT_005d873f,3);
      if (iVar2 == 0) {
        uStack_6c = 0xbf7c6a90;
        uStack_70 = 0x3f7343c8;
        uStack_74 = 0xbf93b0b4;
      }
      else {
        uStack_6c = 0;
        uStack_70 = 0x3f676c8b;
        uStack_74 = 0x3e1eb852;
      }
      core_xform_cpp_FUN_00583940(&stack0xfffffdf4,&DAT_02cfd900,&uStack_74);
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf4);
      puVar5 = (uint *)&stack0xfffffe9c;
      puVar6 = &stack0xfffffe84;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_d4);
      this_ptr_01 = &CStack_80;
      CStack_d4.x = fStack_17c + fStack_170;
      CStack_d4.y = fStack_178 + fStack_16c;
      CStack_d4.z = fStack_174 + fStack_168;
      afStack_94[2] = fStack_17c + fStack_170;
      afStack_94[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4);
      afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_d4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(this_ptr_01);
      CStack_80.x = afStack_94[2] * _DAT_005d8743;
      CStack_80.y = afStack_94[3] * _DAT_005d8743;
      CStack_80.z = fStack_84 * _DAT_005d8743;
      fStack_50 = afStack_94[2] * _DAT_005d8743;
      afStack_64[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + 4);
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           *(float *)((int)&CStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
      fStack_48 = fStack_174 + (float)_DAT_005d8747;
      fStack_c8 = fStack_50;
      afStack_c4[(uint)bVar7 * -2] = afStack_64[(uint)bVar7 * -2 + 6];
      afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&stack0xffffff14 != &fStack_c8) {
        fStack_ec = fStack_c8;
        fStack_e8 = afStack_c4[0];
        uStack_e4 = afStack_c4[1];
      }
    }
  }
  if (iStack_10 == this_ptr->bone_indices[1]) {
    uStack_e0 = 0xbecccccd;
    uStack_dc = 0;
    uStack_d8 = 0;
    core_xform_cpp_FUN_00583260();
    fStack_b0 = fStack_20;
    afStack_c4[(uint)bVar7 * -2 + 6] = afStack_64[(uint)bVar7 * -2 + 0x12];
    afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
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
    core_xform_cpp_FUN_00583260();
    afStack_c4[2] = fStack_11c;
    afStack_c4[(uint)bVar7 * -2 + 3] = *(float *)(&stack0xfffffee8 + (uint)bVar7 * -8);
    afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         *(float *)(&stack0xfffffeec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    if (afStack_c4 + 8 != afStack_c4 + 2) {
      fStack_a4 = afStack_c4[2];
      fStack_a0 = afStack_c4[3];
      fStack_9c = fStack_b4;
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0();
  puVar5 = (uint *)&stack0xfffffe54;
  puVar6 = (uint *)&stack0xfffffe24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260();
  fStack_2c = fStack_68;
  afStack_64[(uint)bVar7 * -2 + 0xf] = afStack_64[(uint)bVar7 * -2];
  afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_44 = fStack_a4 - fStack_2c;
  fStack_40 = fStack_a0 - fStack_28;
  fStack_3c = fStack_9c - fStack_24;
  fStack_38 = fStack_a4 - fStack_2c;
  afStack_64[(uint)bVar7 * -2 + 0xc] = afStack_64[(uint)bVar7 * -2 + 9];
  afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  fStack_1d0 = fStack_1d0 + fStack_38;
  fStack_1c0 = fStack_1c0 + fStack_34;
  fStack_1b0 = fStack_1b0 + fStack_30;
  pfVar4 = (float *)&stack0xfffffe24;
  pCVar3 = pCStack_14;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return pCStack_14;
}
