// Name: core_mirror.cpp_FUN_004f40b0
// Address: 004f40b0
// Address Range: [[004f40b0, 004f50e5]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_FUN_004f40b0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_FUN_004f40b0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  CMirrorReflection *pCVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1264 [808];
  byte local_52c [12];
  float local_520;
  float local_510;
  float local_500;
  byte local_4fc [40];
  uint local_4d4;
  uint local_4cc [12];
  uint local_49c [12];
  uint local_46c [12];
  uint local_43c [12];
  float local_40c;
  float local_408;
  float local_404;
  uint local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  uint local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  uint local_3e0;
  uint local_3dc [12];
  uint local_3ac [12];
  uint local_37c [12];
  uint local_34c [12];
  uint local_31c [12];
  uint local_2ec [12];
  uint local_2bc [12];
  float local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278 [2];
  CVector3f local_270;
  CVector3f local_264;
  float local_258;
  float local_254 [2];
  CVector3f local_24c;
  float local_240;
  float local_23c [2];
  CVector3f local_234;
  float local_228;
  float local_224 [4];
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  uint local_1bc;
  float afStack_1b8 [5];
  CVector3f local_1a4;
  float local_198;
  float local_194 [4];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  uint local_168;
  float local_164 [5];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134 [4];
  float local_124;
  float local_120;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  CVector3f local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float afStack_c8 [2];
  CVector3f local_c0;
  CVector3f local_b4;
  float local_a8;
  float local_a4 [2];
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  uint local_6c;
  float afStack_68 [4];
  float local_58;
  CVector3f local_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar6 = 0;
  core_mirror_cpp_FUN_004f3b80
            ((SClipPlane *)&local_28c,(CVector3f *)this_ptr,(CVector3f *)(this_ptr + 0xc),
             (CVector3f *)(this_ptr + 0x18));
  if ((ABS(local_28c) <= ABS(local_288)) || (ABS(local_28c) <= ABS(local_284))) {
    if ((ABS(local_288) <= ABS(local_28c)) || (ABS(local_288) <= ABS(local_284))) {
      afStack_1b8[3] = 1.0;
      afStack_1b8[4] = 0.0;
      afStack_1b8[2] = 0.0;
    }
    else {
      afStack_1b8[3] = 0.0;
      afStack_1b8[4] = 1.0;
      afStack_1b8[2] = 0.0;
    }
  }
  else {
    afStack_1b8[3] = 1.0;
    afStack_1b8[4] = 0.0;
    afStack_1b8[2] = 0.0;
  }
  afStack_1b8[2] = 0.0;
  local_144 = local_28c;
  local_140 = local_288;
  local_1ec = afStack_1b8[3] * local_284 - afStack_1b8[4] * local_288;
  local_13c = local_284;
  local_1e8 = afStack_1b8[4] * local_28c - local_284 * 0.0;
  local_1e4 = local_288 * 0.0 - afStack_1b8[3] * local_28c;
  local_1f8 = local_1ec;
  local_224[(uint)bVar6 * -2 + 0xc] = local_224[(uint)bVar6 * -2 + 0xf];
  local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  if (local_224 + 0x14 != local_224 + 0xb) {
    local_1d4 = local_1f8;
    local_1d0 = local_1f4;
    local_1cc = local_1f0;
  }
  local_1c = SQRT(local_1cc * local_1cc + local_1d4 * local_1d4 + local_1d0 * local_1d0);
  if (local_1c <= 0.0) {
    local_1d0 = 0.0;
    local_1d4 = 0.0;
    local_1cc = 0.0;
  }
  else {
    fVar1 = 1.0 / local_1c;
    local_1d4 = local_1d4 * fVar1;
    local_1d0 = local_1d0 * fVar1;
    local_1cc = local_1cc * fVar1;
  }
  local_138 = local_140 * local_1cc - local_13c * local_1d0;
  local_134[0] = local_13c * local_1d4 - local_144 * local_1cc;
  local_134[1] = local_144 * local_1d0 - local_140 * local_1d4;
  local_204 = local_138;
  local_224[(uint)bVar6 * -2 + 9] = local_134[(uint)bVar6 * -2];
  local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (afStack_1b8 + 2 != local_224 + 8) {
    afStack_1b8[2] = local_204;
    afStack_1b8[3] = local_200;
    afStack_1b8[4] = local_1fc;
  }
  local_18 = SQRT(afStack_1b8[4] * afStack_1b8[4] +
                  afStack_1b8[2] * afStack_1b8[2] + afStack_1b8[3] * afStack_1b8[3]);
  if (local_18 <= 0.0) {
    afStack_1b8[3] = 0.0;
    afStack_1b8[2] = 0.0;
    afStack_1b8[4] = 0.0;
  }
  else {
    fVar1 = 1.0 / local_18;
    afStack_1b8[2] = afStack_1b8[2] * fVar1;
    afStack_1b8[3] = afStack_1b8[3] * fVar1;
    afStack_1b8[4] = afStack_1b8[4] * fVar1;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_52c);
  local_520 = -*(float *)this_ptr;
  local_510 = -*(float *)(this_ptr + 4);
  local_40c = local_1d4;
  local_408 = local_1d0;
  local_404 = local_1cc;
  local_3fc = afStack_1b8[2];
  local_3f8 = afStack_1b8[3];
  local_3f4 = afStack_1b8[4];
  local_3ec = local_144;
  local_500 = -*(float *)(this_ptr + 8);
  local_3e8 = local_140;
  local_3e4 = local_13c;
  local_400 = 0;
  local_3f0 = 0;
  local_3e0 = 0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_4fc);
  local_4d4 = 0xbf800000;
  core_xform_cpp_FUN_00584560(local_52c);
  puVar3 = local_3dc;
  puVar5 = (uint *)&stack0xfffffaa4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_FUN_00584560(&local_40c,&stack0xfffffaa4);
  puVar3 = local_34c;
  puVar5 = local_4cc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_52c,&local_40c,local_4fc,local_4cc);
  puVar3 = local_46c;
  puVar5 = (uint *)&stack0xfffffa74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffa74);
  puVar3 = local_49c;
  puVar5 = local_3ac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_3ac);
  puVar3 = local_37c;
  puVar5 = local_2bc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_2bc);
  puVar3 = local_2ec;
  pCVar4 = this_ptr + 0x30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    pCVar4 = pCVar4 + (uint)bVar6 * -8 + 4;
  }
  core_xform_cpp_FUN_00583260(camera_position,this_ptr + 0x30);
  local_168 = local_164[2];
  local_164[(uint)bVar6 * -2] = local_164[(uint)bVar6 * -2 + 3];
  local_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  if (this_ptr + 0x60 != (CMirrorReflection *)&local_168) {
    *(uint *)(this_ptr + 0x60) = local_168;
    *(float *)(this_ptr + 100) = local_164[0];
    *(float *)(this_ptr + 0x68) = local_164[1];
  }
  core_dirmat_cpp_FUN_0045b550((CMatrix3x3f *)(this_ptr + 0x70),camera_rotation);
  local_44 = *(float *)(this_ptr + 0x74);
  local_40 = *(float *)(this_ptr + 0x80);
  local_20 = *(float *)(this_ptr + 0x8c);
  local_1c8 = local_44;
  local_1c4 = local_40;
  local_1c0 = local_20;
  local_3c = *(float *)(this_ptr + 0x70);
  local_38 = *(float *)(this_ptr + 0x7c);
  local_34 = *(float *)(this_ptr + 0x88);
  local_fc = *(float *)(this_ptr + 0x70);
  local_f8 = *(float *)(this_ptr + 0x7c);
  local_f4 = *(float *)(this_ptr + 0x88);
  local_30 = *(float *)(this_ptr + 0x78);
  local_2c = *(float *)(this_ptr + 0x84);
  local_28 = *(float *)(this_ptr + 0x90);
  local_e4 = *(float *)(this_ptr + 0x78);
  local_e0 = *(float *)(this_ptr + 0x84);
  local_dc = *(float *)(this_ptr + 0x90);
  local_194[2] = local_44 + *(float *)camera_position;
  local_194[3] = local_40 + *(float *)&camera_position->field_0x4;
  local_184 = local_20 + *(float *)&camera_position->field_0x8;
  local_228 = local_44 + *(float *)camera_position;
  local_224[(uint)bVar6 * -2] = local_194[(uint)bVar6 * -2 + 3];
  local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_194[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  if (local_224 + 0x17 != &local_228) {
    local_1c8 = local_228;
    local_1c4 = local_224[0];
    local_1c0 = local_224[1];
  }
  local_110 = local_f8 + *(float *)&camera_position->field_0x4;
  local_10c = local_f4 + *(float *)&camera_position->field_0x8;
  local_114 = local_fc + *(float *)camera_position;
  local_a8 = local_fc + *(float *)camera_position;
  local_a4[(uint)bVar6 * -2] = local_134[(uint)bVar6 * -2 + 9];
  local_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  if (local_134 + 0xe != &local_a8) {
    local_fc = local_a8;
    local_f8 = local_a4[0];
    local_f4 = local_a4[1];
  }
  local_23c[0] = local_e0 + *(float *)&camera_position->field_0x4;
  local_23c[1] = local_dc + *(float *)&camera_position->field_0x8;
  local_240 = local_e4 + *(float *)camera_position;
  local_1e0 = local_e4 + *(float *)camera_position;
  local_224[(uint)bVar6 * -2 + 0x12] = local_23c[(uint)bVar6 * -2];
  local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       local_23c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (&local_e4 != local_224 + 0x11) {
    local_e4 = local_1e0;
    local_e0 = local_1dc;
    local_dc = local_1d8;
  }
  core_xform_cpp_FUN_00583260(local_224 + 0x17,this_ptr + 0x30);
  local_198 = local_cc;
  local_194[(uint)bVar6 * -2] = afStack_c8[(uint)bVar6 * -2];
  local_194[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (local_224 + 0x17 != &local_198) {
    local_1c8 = local_198;
    local_1c4 = local_194[0];
    local_1c0 = local_194[1];
  }
  core_xform_cpp_FUN_00583260(local_134 + 0xe,this_ptr + 0x30);
  local_258 = local_120;
  local_254[(uint)bVar6 * -2] = local_134[(uint)bVar6 * -2 + 6];
  local_254[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  if (local_134 + 0xe != &local_258) {
    local_fc = local_258;
    local_f8 = local_254[0];
    local_f4 = local_254[1];
  }
  core_xform_cpp_FUN_00583260(&local_e4,this_ptr + 0x30);
  local_134[2] = local_108;
  local_134[(uint)bVar6 * -2 + 3] = local_134[(uint)bVar6 * -2 + 0xc];
  local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       local_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  if (&local_e4 != local_134 + 2) {
    local_e4 = local_134[2];
    local_e0 = local_134[3];
    local_dc = local_124;
  }
  local_210 = local_1c8 - *(float *)(this_ptr + 0x60);
  local_20c = local_1c4 - *(float *)(this_ptr + 100);
  local_208 = local_1c0 - *(float *)(this_ptr + 0x68);
  local_180 = local_1c8 - *(float *)(this_ptr + 0x60);
  local_194[(uint)bVar6 * -2 + 6] = local_224[(uint)bVar6 * -2 + 6];
  local_194[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  if (local_224 + 0x17 != local_194 + 5) {
    local_1c8 = local_180;
    local_1c4 = local_17c;
    local_1c0 = local_178;
  }
  local_150 = local_fc - *(float *)(this_ptr + 0x60);
  local_14c = local_f8 - *(float *)(this_ptr + 100);
  local_148 = local_f4 - *(float *)(this_ptr + 0x68);
  afStack_68[2] = local_fc - *(float *)(this_ptr + 0x60);
  afStack_68[(uint)bVar6 * -2 + 3] = local_164[(uint)bVar6 * -2 + 6];
  afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       local_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  if (local_134 + 0xe != afStack_68 + 2) {
    local_fc = afStack_68[2];
    local_f8 = afStack_68[3];
    local_f4 = local_58;
  }
  local_27c = local_e4 - *(float *)(this_ptr + 0x60);
  local_278[0] = local_e0 - *(float *)(this_ptr + 100);
  local_278[1] = local_dc - *(float *)(this_ptr + 0x68);
  local_224[2] = local_e4 - *(float *)(this_ptr + 0x60);
  local_224[(uint)bVar6 * -2 + 3] = local_278[(uint)bVar6 * -2];
  local_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       local_278[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (&local_e4 != local_224 + 2) {
    local_e4 = local_224[2];
    local_e0 = local_224[3];
    local_dc = local_214;
  }
  *(float *)(this_ptr + 0x70) = local_fc;
  *(float *)(this_ptr + 0x7c) = local_f8;
  *(float *)(this_ptr + 0x88) = local_f4;
  *(float *)(this_ptr + 0x74) = local_1c8;
  *(float *)(this_ptr + 0x80) = local_1c4;
  *(float *)(this_ptr + 0x8c) = local_1c0;
  *(float *)(this_ptr + 0x78) = local_e4;
  *(float *)(this_ptr + 0x84) = local_e0;
  *(float *)(this_ptr + 0x90) = local_dc;
  *(float *)(this_ptr + 0x6c) = projection_scale;
  core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(this_ptr);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_52c);
  local_520 = -*(float *)(this_ptr + 0x60);
  local_510 = -*(float *)(this_ptr + 100);
  local_500 = -*(float *)(this_ptr + 0x68);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(&local_40c);
  local_40c = (float)_DAT_01c6e2fc * (float)_DAT_005c836d;
  local_3fc = (float)_DAT_01c6e300 * (float)_DAT_005c836d;
  local_3ec = (float)_DAT_01c6e304 * (float)_DAT_005c836d;
  local_408 = (float)_DAT_01c6e308 * (float)_DAT_005c836d;
  local_3f8 = (float)_DAT_01c6e30c * (float)_DAT_005c836d;
  local_3e8 = (float)_DAT_01c6e310 * (float)_DAT_005c836d;
  local_404 = (float)_DAT_01c6e314 * (float)_DAT_005c836d;
  local_3f4 = (float)_DAT_01c6e318 * (float)_DAT_005c836d;
  local_3e4 = (float)_DAT_01c6e31c * (float)_DAT_005c836d;
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_52c,&local_40c);
  puVar3 = local_31c;
  puVar5 = local_43c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260(this_ptr,local_43c);
  local_264._0_4_ = local_174._0_4_;
  *(uint *)((int)&local_264 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_174 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_264 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&local_d8 != &local_264) {
    local_d8._0_4_ = local_264._0_4_;
    local_d8._4_4_ = local_264._4_4_;
    local_d8._8_4_ = local_264._8_4_;
  }
  core_xform_cpp_FUN_00583260(this_ptr + 0xc,local_43c);
  local_b4._0_4_ = local_f0._0_4_;
  *(uint *)((int)&local_b4 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_f0 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&local_54 != &local_b4) {
    local_54._0_4_ = local_b4._0_4_;
    local_54._4_4_ = local_b4._4_4_;
    local_54._8_4_ = local_b4._8_4_;
  }
  core_xform_cpp_FUN_00583260(this_ptr + 0x18,local_43c);
  local_270._0_4_ = local_9c._0_4_;
  *(uint *)((int)&local_270 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_9c + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_270 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&local_78 != &local_270) {
    local_78._0_4_ = local_270._0_4_;
    local_78._4_4_ = local_270._4_4_;
    local_78._8_4_ = local_270._8_4_;
  }
  core_xform_cpp_FUN_00583260(this_ptr + 0x24,local_43c);
  local_24c._0_4_ = local_c0._0_4_;
  *(uint *)((int)&local_24c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_c0 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_24c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&local_234 != &local_24c) {
    local_234._0_4_ = local_24c._0_4_;
    local_234._4_4_ = local_24c._4_4_;
    local_234._8_4_ = local_24c._8_4_;
  }
  core_xform_cpp_FUN_00583260(camera_position,this_ptr + 0x30,local_43c);
  local_6c = local_1bc;
  afStack_68[(uint)bVar6 * -2] = afStack_1b8[(uint)bVar6 * -2];
  afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_1b8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_xform_cpp_FUN_00583260(&local_6c);
  local_1a4._0_4_ = local_90._0_4_;
  *(uint *)((int)&local_1a4 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&local_84 != &local_1a4) {
    local_84._0_4_ = local_1a4._0_4_;
    local_84._4_4_ = local_1a4._4_4_;
    local_84._8_4_ = local_1a4._8_4_;
  }
  core_mirror_cpp_FUN_004f3b80((SClipPlane *)(this_ptr + 0x98),&local_d8,&local_54,&local_78);
  core_mirror_cpp_FUN_004f3b80((SClipPlane *)(this_ptr + 0xa8),&local_84,&local_d8,&local_54);
  core_mirror_cpp_FUN_004f3b80((SClipPlane *)(this_ptr + 0xb8),&local_84,&local_54,&local_78);
  core_mirror_cpp_FUN_004f3b80((SClipPlane *)(this_ptr + 200),&local_84,&local_78,&local_234);
  core_mirror_cpp_FUN_004f3b80((SClipPlane *)(this_ptr + 0xd8),&local_84,&local_234,&local_d8);
  return;
}
