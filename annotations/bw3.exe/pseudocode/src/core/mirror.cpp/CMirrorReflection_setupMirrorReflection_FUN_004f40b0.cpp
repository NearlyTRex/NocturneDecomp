// Name: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0
// Address: 004f40b0
// Address Range: [[004f40b0, 004f50e5]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  uint *puVar6;
  byte bVar7;
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
  UIntegerFloat local_3ec;
  float local_3e8;
  float local_3e4;
  uint local_3e0;
  uint local_3dc [12];
  uint local_3ac [12];
  uint local_37c [12];
  uint local_34c [12];
  uint local_31c [12];
  float local_2ec [12];
  uint local_2bc [12];
  UIntegerFloat local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278 [2];
  CVector3f local_270;
  CVector3f local_264;
  float local_258;
  float local_254;
  float local_250;
  CVector3f local_24c;
  float local_240;
  float local_23c;
  float local_238;
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
  float local_174;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_148;
  UIntegerFloat local_144;
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
  float local_f0;
  float afStack_ec [4];
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float afStack_c8 [5];
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_90;
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
  
  bVar7 = 0;
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&local_28c,&this_ptr->corner1,&this_ptr->corner2,&this_ptr->corner3);
  if ((ABS(local_28c.f) <= ABS(local_288)) || (ABS(local_28c.f) <= ABS(local_284))) {
    if ((ABS(local_288) <= ABS(local_28c.f)) || (ABS(local_288) <= ABS(local_284))) {
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
  local_144.i = local_28c.i;
  local_140 = local_288;
  local_1ec = afStack_1b8[3] * local_284 - afStack_1b8[4] * local_288;
  local_13c = local_284;
  local_1e8 = afStack_1b8[4] * local_28c.f - local_284 * 0.0;
  local_1e4 = local_288 * 0.0 - afStack_1b8[3] * local_28c.f;
  local_1f8 = local_1ec;
  local_224[(uint)bVar7 * -2 + 0xc] = local_224[(uint)bVar7 * -2 + 0xf];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
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
  local_134[0] = local_13c * local_1d4 - local_144.f * local_1cc;
  local_134[1] = local_144.f * local_1d0 - local_140 * local_1d4;
  local_204 = local_138;
  local_224[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
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
  local_520 = -(this_ptr->corner1).x;
  local_510 = -(this_ptr->corner1).y;
  local_40c = local_1d4;
  local_408 = local_1d0;
  local_404 = local_1cc;
  local_3fc = afStack_1b8[2];
  local_3f8 = afStack_1b8[3];
  local_3f4 = afStack_1b8[4];
  local_3ec.i = local_144.i;
  local_500 = -(this_ptr->corner1).z;
  local_3e8 = local_140;
  local_3e4 = local_13c;
  local_400 = 0;
  local_3f0 = 0;
  local_3e0 = 0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_4fc);
  local_4d4 = 0xbf800000;
  core_xform_cpp_inverse_FUN_00584560(local_52c);
  puVar4 = local_3dc;
  puVar6 = (uint *)&stack0xfffffaa4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_00584560(&local_40c,&stack0xfffffaa4);
  puVar4 = local_34c;
  puVar6 = local_4cc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_52c,&local_40c,local_4fc,local_4cc);
  puVar4 = local_46c;
  puVar6 = (uint *)&stack0xfffffa74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffa74);
  puVar4 = local_49c;
  puVar6 = local_3ac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_3ac);
  puVar4 = local_37c;
  puVar6 = local_2bc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_2bc);
  pfVar3 = local_2ec;
  pCVar5 = &this_ptr->mirror_transform_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
  }
  core_xform_cpp_FUN_00583260(camera_position,&this_ptr->mirror_transform_matrix);
  local_168 = local_15c;
  local_194[(uint)bVar7 * -2 + 0xc] = local_194[(uint)bVar7 * -2 + 0xf];
  local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (&this_ptr->camera_origin != (CVector3f *)(local_194 + 0xb)) {
    (this_ptr->camera_origin).x = local_168;
    (this_ptr->camera_origin).y = local_164;
    (this_ptr->camera_origin).z = local_160;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (&this_ptr->reflection_matrix,camera_rotation);
  local_44 = (this_ptr->reflection_matrix).m[0].y;
  local_40 = (this_ptr->reflection_matrix).m[1].y;
  local_20 = (this_ptr->reflection_matrix).m[2].y;
  local_1c8 = local_44;
  local_1c4 = local_40;
  local_1c0 = local_20;
  local_3c = (this_ptr->reflection_matrix).m[0].x;
  local_38 = (this_ptr->reflection_matrix).m[1].x;
  local_34 = (this_ptr->reflection_matrix).m[2].x;
  local_fc = local_3c;
  local_f8 = local_38;
  local_f4 = local_34;
  local_30 = (this_ptr->reflection_matrix).m[0].z;
  local_2c = (this_ptr->reflection_matrix).m[1].z;
  local_28 = (this_ptr->reflection_matrix).m[2].z;
  afStack_ec[2] = local_30;
  afStack_ec[3] = local_2c;
  local_dc = local_28;
  local_194[2] = local_44 + camera_position->x;
  local_194[3] = local_40 + camera_position->y;
  local_184 = local_20 + camera_position->z;
  local_228 = local_194[2];
  local_224[(uint)bVar7 * -2] = local_194[(uint)bVar7 * -2 + 3];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  if (local_224 + 0x17 != &local_228) {
    local_1c8 = local_228;
    local_1c4 = local_224[0];
    local_1c0 = local_224[1];
  }
  local_114 = local_fc + camera_position->x;
  local_110 = local_f8 + camera_position->y;
  local_10c = local_f4 + camera_position->z;
  local_a8 = local_114;
  afStack_c8[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2 + 9];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (local_134 + 0xe != afStack_c8 + 8) {
    local_fc = local_a8;
    local_f8 = local_a4;
    local_f4 = local_a0;
  }
  local_240 = afStack_ec[2] + camera_position->x;
  local_23c = afStack_ec[3] + camera_position->y;
  local_238 = local_dc + camera_position->z;
  local_1e0 = local_240;
  local_224[(uint)bVar7 * -2 + 0x12] = local_278[(uint)bVar7 * -2 + 0xf];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (afStack_ec + 2 != local_224 + 0x11) {
    afStack_ec[2] = local_1e0;
    afStack_ec[3] = local_1dc;
    local_dc = local_1d8;
  }
  core_xform_cpp_FUN_00583260(local_224 + 0x17,&this_ptr->mirror_transform_matrix);
  local_198 = local_cc;
  local_194[(uint)bVar7 * -2] = afStack_c8[(uint)bVar7 * -2];
  local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (local_224 + 0x17 != &local_198) {
    local_1c8 = local_198;
    local_1c4 = local_194[0];
    local_1c0 = local_194[1];
  }
  core_xform_cpp_FUN_00583260(local_134 + 0xe,&this_ptr->mirror_transform_matrix);
  local_258 = local_120;
  local_278[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2 + 6];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (local_134 + 0xe != local_278 + 8) {
    local_fc = local_258;
    local_f8 = local_254;
    local_f4 = local_250;
  }
  core_xform_cpp_FUN_00583260(afStack_ec + 2,&this_ptr->mirror_transform_matrix);
  local_134[2] = local_108;
  local_134[(uint)bVar7 * -2 + 3] = local_134[(uint)bVar7 * -2 + 0xc];
  local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  if (afStack_ec + 2 != local_134 + 2) {
    afStack_ec[2] = local_134[2];
    afStack_ec[3] = local_134[3];
    local_dc = local_124;
  }
  local_210 = local_1c8 - (this_ptr->camera_origin).x;
  local_20c = local_1c4 - (this_ptr->camera_origin).y;
  local_208 = local_1c0 - (this_ptr->camera_origin).z;
  local_180 = local_210;
  local_194[(uint)bVar7 * -2 + 6] = local_224[(uint)bVar7 * -2 + 6];
  local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (local_224 + 0x17 != local_194 + 5) {
    local_1c8 = local_180;
    local_1c4 = local_17c;
    local_1c0 = local_178;
  }
  local_150 = local_fc - (this_ptr->camera_origin).x;
  local_14c = local_f8 - (this_ptr->camera_origin).y;
  local_148 = local_f4 - (this_ptr->camera_origin).z;
  afStack_68[2] = local_150;
  afStack_68[(uint)bVar7 * -2 + 3] = local_194[(uint)bVar7 * -2 + 0x12];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  if (local_134 + 0xe != afStack_68 + 2) {
    local_fc = afStack_68[2];
    local_f8 = afStack_68[3];
    local_f4 = local_58;
  }
  local_27c = afStack_ec[2] - (this_ptr->camera_origin).x;
  local_278[0] = afStack_ec[3] - (this_ptr->camera_origin).y;
  local_278[1] = local_dc - (this_ptr->camera_origin).z;
  local_224[2] = local_27c;
  local_224[(uint)bVar7 * -2 + 3] = local_278[(uint)bVar7 * -2];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_ec + 2 != local_224 + 2) {
    afStack_ec[2] = local_224[2];
    afStack_ec[3] = local_224[3];
    local_dc = local_214;
  }
  (this_ptr->reflection_matrix).m[0].x = local_fc;
  (this_ptr->reflection_matrix).m[1].x = local_f8;
  (this_ptr->reflection_matrix).m[2].x = local_f4;
  (this_ptr->reflection_matrix).m[0].y = local_1c8;
  (this_ptr->reflection_matrix).m[1].y = local_1c4;
  (this_ptr->reflection_matrix).m[2].y = local_1c0;
  (this_ptr->reflection_matrix).m[0].z = afStack_ec[2];
  (this_ptr->reflection_matrix).m[1].z = afStack_ec[3];
  (this_ptr->reflection_matrix).m[2].z = local_dc;
  this_ptr->projection_scale = projection_scale;
  core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(this_ptr);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_52c);
  local_520 = -(this_ptr->camera_origin).x;
  local_510 = -(this_ptr->camera_origin).y;
  local_500 = -(this_ptr->camera_origin).z;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(&local_40c);
  local_40c = (float)_DAT_01c6e2fc * (float)_DAT_005c836d;
  local_3fc = (float)_DAT_01c6e300 * (float)_DAT_005c836d;
  local_3ec.f = (float)_DAT_01c6e304 * (float)_DAT_005c836d;
  local_408 = (float)_DAT_01c6e308 * (float)_DAT_005c836d;
  local_3f8 = (float)_DAT_01c6e30c * (float)_DAT_005c836d;
  local_3e8 = (float)_DAT_01c6e310 * (float)_DAT_005c836d;
  local_404 = (float)_DAT_01c6e314 * (float)_DAT_005c836d;
  local_3f4 = (float)_DAT_01c6e318 * (float)_DAT_005c836d;
  local_3e4 = (float)_DAT_01c6e31c * (float)_DAT_005c836d;
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_52c,&local_40c);
  puVar4 = local_31c;
  puVar6 = local_43c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260(this_ptr,local_43c);
  local_264.x = local_174;
  local_278[(uint)bVar7 * -2 + 6] = local_194[(uint)bVar7 * -2 + 9];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       local_194[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (&local_d8 != (CVector3f *)(local_278 + 5)) {
    local_d8.x = local_264.x;
    local_d8.y = local_264.y;
    local_d8.z = local_264.z;
  }
  core_xform_cpp_FUN_00583260(&this_ptr->corner2,local_43c);
  local_b4.x = local_f0;
  afStack_c8[(uint)bVar7 * -2 + 6] = afStack_ec[(uint)bVar7 * -2];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (&local_54 != (CVector3f *)(afStack_c8 + 5)) {
    local_54.x = local_b4.x;
    local_54.y = local_b4.y;
    local_54.z = local_b4.z;
  }
  core_xform_cpp_FUN_00583260(&this_ptr->corner3,local_43c);
  local_270.x = local_9c;
  local_278[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2 + 0xc];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  if (&local_78 != (CVector3f *)(local_278 + 2)) {
    local_78.x = local_270.x;
    local_78.y = local_270.y;
    local_78.z = local_270.z;
  }
  core_xform_cpp_FUN_00583260(&this_ptr->corner4,local_43c);
  local_24c.x = afStack_c8[2];
  local_278[(uint)bVar7 * -2 + 0xc] = afStack_c8[(uint)bVar7 * -2 + 3];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  if (&local_234 != (CVector3f *)(local_278 + 0xb)) {
    local_234.x = local_24c.x;
    local_234.y = local_24c.y;
    local_234.z = local_24c.z;
  }
  core_xform_cpp_FUN_00583260(camera_position,&this_ptr->mirror_transform_matrix,local_43c);
  local_6c = local_1bc;
  afStack_68[(uint)bVar7 * -2] = afStack_1b8[(uint)bVar7 * -2];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_xform_cpp_FUN_00583260(&local_6c);
  local_1a4.x = local_90;
  *(float *)((int)&local_1a4 + (uint)bVar7 * -8 + 4) = afStack_c8[(uint)bVar7 * -2 + 0xf];
  *(float *)((int)&local_1a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (&local_84 != (CVector3f *)(afStack_1b8 + 5)) {
    local_84.x = local_1a4.x;
    local_84.y = local_1a4.y;
    local_84.z = local_1a4.z;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&this_ptr[1].corner1.y,&local_d8,&local_54,&local_78);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&this_ptr[1].corner2.z,&local_84,&local_d8,&local_54);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&this_ptr[1].corner4,&local_84,&local_54,&local_78);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[0].x,&local_84,&local_78,
             &local_234);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[1].x,&local_84,&local_234,
             &local_d8);
  return;
}
