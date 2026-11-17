// Name: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0
// Address: 005188e0
// Address Range: [[005188e0, 00519915]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

{
  float fVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  float afStackY_1264 [808];
  CMatrix3x4f local_58c;
  CMatrix3x4f local_55c;
  CMatrix3x4f local_52c;
  CMatrix3x4f local_4fc;
  CMatrix3x4f local_4cc;
  CMatrix3x4f local_49c;
  CMatrix3x4f local_46c;
  CMatrix3x4f local_43c;
  CMatrix3x4f local_40c;
  CMatrix3x4f local_3dc;
  CMatrix3x4f local_3ac;
  CMatrix3x4f local_37c;
  CMatrix3x4f local_34c;
  CMatrix3x4f local_31c;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  UIntegerFloat local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278 [2];
  CVector3f local_270;
  CVector3f local_264;
  CVector3f local_258;
  CVector3f local_24c;
  float local_240;
  float local_23c;
  float local_238;
  CVector3f local_234;
  CVector3f local_228;
  CVector3f local_21c;
  float local_210;
  float local_20c [4];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  CVector3f local_1e0;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  CVector3f local_1c8;
  CVector3f local_1bc;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  CVector3f local_1a4;
  CVector3f local_198;
  float local_18c;
  float local_188 [2];
  CVector3f local_180;
  CVector3f local_174;
  float local_168;
  float local_164 [2];
  CVector3f local_15c;
  float local_150;
  float local_14c [2];
  UIntegerFloat local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134 [2];
  CVector3f local_12c;
  CVector3f local_120;
  float local_114;
  float local_110 [2];
  CVector3f local_108;
  CVector3f local_fc;
  CVector3f local_f0;
  CVector3f local_e4;
  CVector3f local_d8;
  CVector3f local_cc;
  CVector3f local_c0;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
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
  
  bVar8 = 0;
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&local_28c,&this_ptr->corner1,&this_ptr->corner2,&this_ptr->corner3);
  if ((ABS(local_28c.f) <= ABS(local_288)) || (ABS(local_28c.f) <= ABS(local_284))) {
    if ((ABS(local_288) <= ABS(local_28c.f)) || (ABS(local_288) <= ABS(local_284))) {
      local_1ac = 1.0;
      local_1a8 = 0.0;
      local_1b0 = 0.0;
    }
    else {
      local_1ac = 0.0;
      local_1a8 = 1.0;
      local_1b0 = 0.0;
    }
  }
  else {
    local_1ac = 1.0;
    local_1a8 = 0.0;
    local_1b0 = 0.0;
  }
  local_1b0 = 0.0;
  local_144.i = local_28c.i;
  local_140 = local_288;
  local_1ec = local_1ac * local_284 - local_1a8 * local_288;
  local_13c = local_284;
  local_1e8 = local_1a8 * local_28c.f - local_284 * 0.0;
  local_1e4 = local_288 * 0.0 - local_1ac * local_28c.f;
  local_1f8 = local_1ec;
  local_20c[(uint)bVar8 * 0xfffffffe + 6] = local_20c[(uint)bVar8 * 0xfffffffe + 9];
  local_20c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 7] =
       local_20c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 10];
  if (local_20c + 0xe != local_20c + 5) {
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
  local_20c[2] = local_138;
  local_20c[(uint)bVar8 * 0xfffffffe + 3] = local_134[(uint)bVar8 * -2];
  local_20c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4] =
       local_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_1b0 != local_20c + 2) {
    local_1b0 = local_20c[2];
    local_1ac = local_20c[3];
    local_1a8 = local_1fc;
  }
  local_18 = SQRT(local_1a8 * local_1a8 + local_1b0 * local_1b0 + local_1ac * local_1ac);
  if (local_18 <= 0.0) {
    local_1ac = 0.0;
    local_1b0 = 0.0;
    local_1a8 = 0.0;
  }
  else {
    fVar1 = 1.0 / local_18;
    local_1b0 = local_1b0 * fVar1;
    local_1ac = local_1ac * fVar1;
    local_1a8 = local_1a8 * fVar1;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_52c);
  local_52c.m[0].z = -(this_ptr->corner1).x;
  local_52c.m[1].z = -(this_ptr->corner1).y;
  local_40c.m[0].w = local_1d4;
  local_40c.m[0].x = local_1d0;
  local_40c.m[0].y = local_1cc;
  local_40c.m[1].w = local_1b0;
  local_40c.m[1].x = local_1ac;
  local_40c.m[1].y = local_1a8;
  local_40c.m[2].w = local_144.f;
  local_52c.m[2].z = -(this_ptr->corner1).z;
  local_40c.m[2].x = local_140;
  local_40c.m[2].y = local_13c;
  local_40c.m[0].z = 0.0;
  local_40c.m[1].z = 0.0;
  local_40c.m[2].z = 0.0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_4fc);
  local_4fc.m[2].y = -1.0;
  core_xform_cpp_inverse_FUN_005b6380(&local_52c,&local_3dc);
  pCVar6 = &local_55c;
  pCVar5 = &local_3dc;
  pCVar4 = &local_55c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005b6380(&local_40c,&local_34c);
  pCVar5 = &local_4cc;
  pCVar4 = &local_4fc;
  pCVar3 = &local_34c;
  pCVar7 = &local_4cc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar7->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_52c,&local_40c,&local_46c);
  pCVar3 = &local_46c;
  pCVar7 = &local_58c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar7->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_58c,pCVar4,&local_49c);
  pCVar4 = &local_49c;
  pCVar3 = &local_3ac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_3ac,pCVar5,&local_37c);
  pCVar5 = &local_37c;
  pCVar4 = &local_2bc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2bc,pCVar6,&local_2ec);
  pCVar6 = &local_2ec;
  pCVar5 = &this_ptr->mirror_transform_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar8 * -8 + 4);
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (camera_position,&this_ptr->mirror_transform_matrix,&local_15c);
  local_168 = local_15c.x;
  local_164[(uint)bVar8 * -2] = *(float *)((int)&local_15c + (uint)bVar8 * -8 + 4);
  local_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&local_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&this_ptr->camera_origin != (CVector3f *)&local_168) {
    (this_ptr->camera_origin).x = local_168;
    (this_ptr->camera_origin).y = local_164[0];
    (this_ptr->camera_origin).z = local_164[1];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&this_ptr->reflection_matrix,camera_rotation);
  local_44 = (this_ptr->reflection_matrix).m[0].y;
  local_40 = (this_ptr->reflection_matrix).m[1].y;
  local_20 = (this_ptr->reflection_matrix).m[2].y;
  local_1c8.x = local_44;
  local_1c8.y = local_40;
  local_1c8.z = local_20;
  local_3c = (this_ptr->reflection_matrix).m[0].x;
  local_38 = (this_ptr->reflection_matrix).m[1].x;
  local_34 = (this_ptr->reflection_matrix).m[2].x;
  local_fc.x = local_3c;
  local_fc.y = local_38;
  local_fc.z = local_34;
  local_30 = (this_ptr->reflection_matrix).m[0].z;
  local_2c = (this_ptr->reflection_matrix).m[1].z;
  local_28 = (this_ptr->reflection_matrix).m[2].z;
  local_e4.x = local_30;
  local_e4.y = local_2c;
  local_e4.z = local_28;
  local_18c = local_44 + camera_position->x;
  local_188[0] = local_40 + camera_position->y;
  local_188[1] = local_20 + camera_position->z;
  local_228.x = local_18c;
  *(float *)((int)&local_228 + (uint)bVar8 * -8 + 4) = local_188[(uint)bVar8 * -2];
  *(float *)((int)&local_228 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       local_188[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_1c8 != &local_228) {
    local_1c8.x = local_228.x;
    local_1c8.y = local_228.y;
    local_1c8.z = local_228.z;
  }
  local_114 = local_fc.x + camera_position->x;
  local_110[0] = local_fc.y + camera_position->y;
  local_110[1] = local_fc.z + camera_position->z;
  local_a8.x = local_114;
  *(float *)((int)&local_a8 + (uint)bVar8 * -8 + 4) = local_110[(uint)bVar8 * -2];
  *(float *)((int)&local_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       local_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_fc != &local_a8) {
    local_fc.x = local_a8.x;
    local_fc.y = local_a8.y;
    local_fc.z = local_a8.z;
  }
  local_240 = local_e4.x + camera_position->x;
  local_23c = local_e4.y + camera_position->y;
  local_238 = local_e4.z + camera_position->z;
  local_1e0.x = local_240;
  local_20c[(uint)bVar8 * 0xfffffffe + 0xc] = local_278[(uint)bVar8 * -2 + 0xf];
  local_20c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 0xd] =
       local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
  if (&local_e4 != (CVector3f *)(local_20c + 0xb)) {
    local_e4.x = local_1e0.x;
    local_e4.y = local_1e0.y;
    local_e4.z = local_1e0.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (&local_1c8,&this_ptr->mirror_transform_matrix,&local_cc);
  local_198.x = local_cc.x;
  *(uint *)((int)&local_198 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_cc + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_198 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_1c8 != &local_198) {
    local_1c8.x = local_198.x;
    local_1c8.y = local_198.y;
    local_1c8.z = local_198.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (&local_fc,&this_ptr->mirror_transform_matrix,&local_120);
  local_258.x = local_120.x;
  local_278[(uint)bVar8 * -2 + 9] = *(float *)((int)&local_120 + (uint)bVar8 * -8 + 4);
  local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
       *(float *)((int)&local_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_fc != (CVector3f *)(local_278 + 8)) {
    local_fc.x = local_258.x;
    local_fc.y = local_258.y;
    local_fc.z = local_258.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (&local_e4,&this_ptr->mirror_transform_matrix,&local_108);
  local_12c.x = local_108.x;
  local_134[(uint)bVar8 * -2 + 3] = *(float *)((int)&local_108 + (uint)bVar8 * -8 + 4);
  local_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       *(float *)((int)&local_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_e4 != (CVector3f *)(local_134 + 2)) {
    local_e4.x = local_12c.x;
    local_e4.y = local_12c.y;
    local_e4.z = local_12c.z;
  }
  local_210 = local_1c8.x - (this_ptr->camera_origin).x;
  local_20c[0] = local_1c8.y - (this_ptr->camera_origin).y;
  local_20c[1] = local_1c8.z - (this_ptr->camera_origin).z;
  local_180.x = local_210;
  local_188[(uint)bVar8 * 0xfffffffe + 3] = local_20c[(uint)bVar8 * -2];
  local_188[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4] =
       local_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_1c8 != (CVector3f *)(local_188 + 2)) {
    local_1c8.x = local_180.x;
    local_1c8.y = local_180.y;
    local_1c8.z = local_180.z;
  }
  local_150 = local_fc.x - (this_ptr->camera_origin).x;
  local_14c[0] = local_fc.y - (this_ptr->camera_origin).y;
  local_14c[1] = local_fc.z - (this_ptr->camera_origin).z;
  local_60.x = local_150;
  *(float *)((int)&local_60 + (uint)bVar8 * -8 + 4) = local_14c[(uint)bVar8 * -2];
  *(float *)((int)&local_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       local_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_fc != &local_60) {
    local_fc.x = local_60.x;
    local_fc.y = local_60.y;
    local_fc.z = local_60.z;
  }
  local_27c = local_e4.x - (this_ptr->camera_origin).x;
  local_278[0] = local_e4.y - (this_ptr->camera_origin).y;
  local_278[1] = local_e4.z - (this_ptr->camera_origin).z;
  local_21c.x = local_27c;
  *(float *)((int)&local_21c + (uint)bVar8 * -8 + 4) = local_278[(uint)bVar8 * -2];
  *(float *)((int)&local_21c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&local_e4 != &local_21c) {
    local_e4.x = local_21c.x;
    local_e4.y = local_21c.y;
    local_e4.z = local_21c.z;
  }
  (this_ptr->reflection_matrix).m[0].x = local_fc.x;
  (this_ptr->reflection_matrix).m[1].x = local_fc.y;
  (this_ptr->reflection_matrix).m[2].x = local_fc.z;
  (this_ptr->reflection_matrix).m[0].y = local_1c8.x;
  (this_ptr->reflection_matrix).m[1].y = local_1c8.y;
  (this_ptr->reflection_matrix).m[2].y = local_1c8.z;
  (this_ptr->reflection_matrix).m[0].z = local_e4.x;
  (this_ptr->reflection_matrix).m[1].z = local_e4.y;
  (this_ptr->reflection_matrix).m[2].z = local_e4.z;
  this_ptr->projection_scale = projection_scale;
  core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(this_ptr);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_52c);
  local_52c.m[0].z = -(this_ptr->camera_origin).x;
  local_52c.m[1].z = -(this_ptr->camera_origin).y;
  local_52c.m[2].z = -(this_ptr->camera_origin).z;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_40c);
  local_40c.m[0].w = (float)g_INT_01c51d5c * (float)1.52587890625e-05;
  local_40c.m[1].w = (float)g_INT_01c51d60 * (float)1.52587890625e-05;
  local_40c.m[2].w = (float)g_INT_01c51d64 * (float)1.52587890625e-05;
  local_40c.m[0].x = (float)g_INT_01c51d68 * (float)1.52587890625e-05;
  local_40c.m[1].x = (float)g_INT_01c51d6c * (float)1.52587890625e-05;
  local_40c.m[2].x = (float)g_INT_01c51d70 * (float)1.52587890625e-05;
  local_40c.m[0].y = (float)g_INT_01c51d74 * (float)1.52587890625e-05;
  local_40c.m[1].y = (float)g_INT_01c51d78 * (float)1.52587890625e-05;
  local_40c.m[2].y = (float)g_INT_01c51d7c * (float)1.52587890625e-05;
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_52c,&local_40c,&local_31c);
  pCVar6 = &local_31c;
  pCVar5 = &local_43c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080(&this_ptr->corner1,&local_43c,&local_174);
  local_264.x = local_174.x;
  local_278[(uint)bVar8 * -2 + 6] = *(float *)((int)&local_174 + (uint)bVar8 * -8 + 4);
  local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       *(float *)((int)&local_174 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_d8 != (CVector3f *)(local_278 + 5)) {
    local_d8.x = local_264.x;
    local_d8.y = local_264.y;
    local_d8.z = local_264.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080(&this_ptr->corner2,&local_43c,&local_f0);
  local_b4.x = local_f0.x;
  *(uint *)((int)&local_b4 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_f0 + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_b4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_54 != &local_b4) {
    local_54.x = local_b4.x;
    local_54.y = local_b4.y;
    local_54.z = local_b4.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080(&this_ptr->corner3,&local_43c,&local_9c);
  local_270.x = local_9c.x;
  local_278[(uint)bVar8 * -2 + 3] = *(float *)((int)&local_9c + (uint)bVar8 * -8 + 4);
  local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       *(float *)((int)&local_9c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_78 != (CVector3f *)(local_278 + 2)) {
    local_78.x = local_270.x;
    local_78.y = local_270.y;
    local_78.z = local_270.z;
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080(&this_ptr->corner4,&local_43c,&local_c0);
  local_24c.x = local_c0.x;
  local_278[(uint)bVar8 * -2 + 0xc] = *(float *)((int)&local_c0 + (uint)bVar8 * -8 + 4);
  local_278[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       *(float *)((int)&local_c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_234 != (CVector3f *)(local_278 + 0xb)) {
    local_234.x = local_24c.x;
    local_234.y = local_24c.y;
    local_234.z = local_24c.z;
  }
  pCVar6 = &local_43c;
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (camera_position,&this_ptr->mirror_transform_matrix,&local_1bc);
  local_6c.x = local_1bc.x;
  *(uint *)((int)&local_6c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_1bc + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_1bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  core_xform_cpp_transformVector3x4_FUN_005b5080(&local_6c,pCVar6,&local_90);
  local_1a4.x = local_90.x;
  *(uint *)((int)&local_1a4 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_90 + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_1a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&local_84 != &local_1a4) {
    local_84.x = local_1a4.x;
    local_84.y = local_1a4.y;
    local_84.z = local_1a4.z;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&this_ptr[1].corner1.y,&local_d8,&local_54,&local_78);
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&this_ptr[1].corner2.z,&local_84,&local_d8,&local_54);
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&this_ptr[1].corner4,&local_84,&local_54,&local_78);
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[0].x,&local_84,&local_78,
             &local_234);
  core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[1].x,&local_84,&local_234,
             &local_d8);
  return;
}
