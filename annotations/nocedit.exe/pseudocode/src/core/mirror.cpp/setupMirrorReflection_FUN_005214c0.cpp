// Name: core_mirror.cpp_setupMirrorReflection_FUN_005214c0
// Address: 005214c0
// Address Range: [[005214c0, 005222ed]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection * reflection)

#include "nocturne.h"

void __cdecl core_mirror_cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection *reflection)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  uint *puVar10;
  byte bVar11;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float fStack00000010;
  float fStack00000014;
  double dVar12;
  CMatrix3x4f *matrix_b;
  double dVar13;
  CMatrix3x4f *matrix_b_00;
  CMatrix3x4f *in_stack_fffffb74;
  CMatrix3x4f *in_stack_fffffb88;
  uint uStack_45c;
  CMatrix3x4f CStack_458;
  uint auStack_424 [11];
  uint auStack_3f8 [6];
  byte auStack_3e0 [16];
  byte auStack_3d0 [48];
  CMatrix3x4f CStack_3a0;
  uint uStack_368;
  byte auStack_364 [36];
  CMatrix3x4f aCStack_340 [2];
  byte auStack_2dc [8];
  byte auStack_2d4 [24];
  float local_2bc;
  float local_2b8;
  byte local_2b4 [8];
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  byte auStack_284 [8];
  float fStack_27c;
  float fStack_278;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float afStack_254 [12];
  CMatrix3x4f CStack_224;
  float afStack_1f0 [12];
  uint uStack_1c0;
  byte auStack_1bc [24];
  char local_1a4;
  float local_1a0;
  float local_19c;
  float fStack_198;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float fStack_13c;
  CVector3f local_134;
  CVector3f local_124;
  byte local_110 [16];
  byte local_100 [8];
  byte local_f8 [12];
  float local_ec;
  float local_e8;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  CVector3f local_c0;
  float local_b4;
  byte local_b0 [8];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f CStack_84;
  byte local_74 [8];
  byte auStack_6c [8];
  CVector3f CStack_64;
  byte local_54 [8];
  byte auStack_4c [16];
  byte local_3c [8];
  byte local_34 [8];
  byte local_2c [8];
  CVector3f local_24;
  
  bVar11 = 0;
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&local_1a4,&reflection->corner1,&reflection->corner2,&reflection->corner3
            );
  dVar12 = (double)local_1a0;
  dVar13 = ABS(dVar12);
  if (((float)dVar13 <= ABS(local_19c)) || ((float)dVar13 <= ABS(fStack_198))) {
    if ((ABS(local_19c) <= ABS(local_1a0)) || (ABS(local_19c) <= ABS(fStack_198))) {
      local_15c = 1.0;
      local_158 = 0.0;
    }
    else {
      local_15c = 0.0;
      local_158 = 1.0;
    }
  }
  else {
    local_15c = 1.0;
    local_158 = 0.0;
  }
  local_160 = 0.0;
  local_148 = local_1a0;
  local_144 = local_19c;
  local_b0._4_4_ = local_15c * fStack_198 - local_158 * local_19c;
  local_a8 = local_158 * local_1a0 - fStack_198 * 0.0;
  local_a4 = local_19c * 0.0 - local_15c * local_1a0;
  local_140 = fStack_198;
  if (&local_190 != (float *)(local_b0 + 4)) {
    local_190 = (float)local_b0._4_4_;
    local_18c = local_a8;
    local_188 = local_a4;
  }
  pCVar9 = (CMatrix3x4f *)
           SQRT(local_188 * local_188 + local_190 * local_190 + local_18c * local_18c);
  if ((float)pCVar9 <= 0.0) {
    local_18c = 0.0;
    local_190 = 0.0;
    local_188 = 0.0;
  }
  else {
    fVar1 = 1.0 / (float)pCVar9;
    local_190 = local_190 * fVar1;
    local_18c = local_18c * fVar1;
    local_188 = local_188 * fVar1;
  }
  local_154 = local_19c * local_188 - fStack_198 * local_18c;
  local_150 = fStack_198 * local_190 - local_1a0 * local_188;
  local_14c = local_1a0 * local_18c - local_19c * local_190;
  if (&local_160 != &local_154) {
    local_160 = local_154;
    local_15c = local_150;
    local_158 = local_14c;
  }
  matrix_b_00 = (CMatrix3x4f *)
                SQRT(local_158 * local_158 + local_160 * local_160 + local_15c * local_15c);
  if ((float)matrix_b_00 <= 0.0) {
    local_15c = 0.0;
    local_160 = 0.0;
    local_158 = 0.0;
  }
  else {
    fVar1 = 1.0 / (float)matrix_b_00;
    local_160 = local_160 * fVar1;
    local_15c = local_15c * fVar1;
    local_158 = local_158 * fVar1;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)auStack_3e0);
  auStack_3d0._0_4_ = -(reflection->corner1).x;
  auStack_3d0._16_4_ = -(reflection->corner1).y;
  local_2bc = local_18c;
  local_2b8 = local_188;
  local_2b4._0_4_ = fStack_184;
  local_2ac = local_15c;
  local_2a8 = local_158;
  local_2a4 = local_154;
  local_29c = local_144;
  auStack_3d0._32_4_ = -(reflection->corner1).z;
  local_298 = local_140;
  local_294 = fStack_13c;
  local_2b4._4_4_ = 0.0;
  local_2a0 = 0.0;
  fStack_290 = 0.0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)(auStack_364 + 0x18));
  aCStack_340[0].m[2].w = -1.0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)(auStack_3e0 + 8),SUB84 /* extract 2-byte value */(dVar12,0));
  matrix_b = (CMatrix3x4f *)((ulonglong)dVar12 >> 0x20);
  pfVar5 = afStack_254;
  pCVar7 = &CStack_224;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar7->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar11 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar11 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_2b4,&CStack_224);
  pCVar7 = &CStack_3a0;
  pfVar5 = afStack_1f0;
  pCVar8 = &CStack_3a0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar8->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar11 * -2 + 1;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_3d0,(CMatrix3x4f *)(local_2b4 + 4),aCStack_340);
  puVar6 = (uint *)auStack_2dc;
  puVar10 = &uStack_1c0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10((CMatrix3x4f *)auStack_1bc,pCVar7,matrix_b);
  puVar6 = auStack_3f8;
  puVar10 = &uStack_45c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_458,SUB84 /* extract 2-byte value */(dVar13,0),(CMatrix3x4f *)((ulonglong)dVar13 >> 0x20));
  puVar6 = auStack_424;
  puVar10 = &uStack_368;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10((CMatrix3x4f *)auStack_364,pCVar9,matrix_b_00);
  pfVar5 = &fStack_270;
  pCVar9 = &reflection->mirror_transform_matrix;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar9->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar11 * -2 + 1;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + (uint)bVar11 * -8 + 4);
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)(auStack_6c + 4),in_stack_00000008,
                      &reflection->mirror_transform_matrix);
  if ((CVector3f *)&reflection->camera_origin != pCVar2) {
    (reflection->camera_origin).x = (int)pCVar2->x;
    (reflection->camera_origin).y = (int)pCVar2->y;
    (reflection->camera_origin).z = (int)pCVar2->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&reflection->reflection_matrix,in_stack_0000000c);
  local_100._4_4_ = (reflection->reflection_matrix).m[0].y;
  fStack00000014 = (reflection->reflection_matrix).m[1].y;
  local_f8._4_4_ = (reflection->reflection_matrix).m[2].y;
  local_b4 = (reflection->reflection_matrix).m[0].x;
  local_b0._0_4_ = (reflection->reflection_matrix).m[1].x;
  local_b0._4_4_ = (reflection->reflection_matrix).m[2].x;
  pCVar2 = (CVector3f *)(reflection->reflection_matrix).m[0].z;
  local_2c._0_4_ = (reflection->reflection_matrix).m[1].z;
  fStack00000010 = (reflection->reflection_matrix).m[2].z;
  local_e0.z = (float)local_100._4_4_ + pCVar2->x;
  local_d4 = fStack00000014 + pCVar2->y;
  local_d0 = (float)local_f8._4_4_ + pCVar2->z;
  local_f8._0_4_ = fStack00000014;
  if ((float *)(local_100 + 4) != &local_e0.z) {
    local_100._4_4_ = local_e0.z;
    local_f8._0_4_ = local_d4;
    local_f8._4_4_ = local_d0;
  }
  local_9c = local_b4 + pCVar2->x;
  local_98 = (float)local_b0._0_4_ + pCVar2->y;
  local_94 = (float)local_b0._4_4_ + pCVar2->z;
  if (&local_b4 != &local_9c) {
    local_b4 = local_9c;
    local_b0._0_4_ = local_98;
    local_b0._4_4_ = local_94;
  }
  local_c0.x = (float)pCVar2 + pCVar2->x;
  local_c0.y = (float)local_2c._0_4_ + pCVar2->y;
  local_c0.z = fStack00000010 + pCVar2->z;
  local_34._4_4_ = pCVar2;
  local_2c._4_4_ = fStack00000010;
  if ((CVector3f *)(local_34 + 4) != &local_c0) {
    local_34._4_4_ = local_c0.x;
    local_2c._0_4_ = local_c0.y;
    local_2c._4_4_ = local_c0.z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)local_54,(CVector3f *)(local_100 + 4),
                      &reflection->mirror_transform_matrix);
  if ((CVector3f *)local_f8 != pCVar3) {
    local_f8._0_4_ = pCVar3->x;
    local_f8._4_4_ = pCVar3->y;
    local_f8._8_4_ = pCVar3->z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_e0,(CVector3f *)local_b0,&reflection->mirror_transform_matrix);
  if ((CVector3f *)(local_b0 + 4) != pCVar3) {
    local_b0._4_4_ = pCVar3->x;
    local_a8 = pCVar3->y;
    local_a4 = pCVar3->z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)local_34,(CVector3f *)(local_2c + 4),
                      &reflection->mirror_transform_matrix);
  if (&local_24 != pCVar3) {
    local_24.x = pCVar3->x;
    local_24.y = pCVar3->y;
    local_24.z = pCVar3->z;
  }
  local_c0.x = (float)local_f8._8_4_ - (float)(reflection->camera_origin).x;
  local_c0.y = local_ec - (float)(reflection->camera_origin).y;
  local_c0.z = local_e8 - (float)(reflection->camera_origin).z;
  if ((CVector3f *)(local_f8 + 8) != &local_c0) {
    local_f8._8_4_ = local_c0.x;
    local_ec = local_c0.y;
    local_e8 = local_c0.z;
  }
  if (&local_a8 != (float *)&stack0xfffffff4) {
    local_a8 = local_a8 - (float)(reflection->camera_origin).x;
    local_a4 = local_a4 - (float)(reflection->camera_origin).y;
    local_a0 = local_a0 - (float)(reflection->camera_origin).z;
  }
  local_100._4_4_ = local_24.x - (float)(reflection->camera_origin).x;
  local_f8._0_4_ = local_24.y - (float)(reflection->camera_origin).y;
  local_f8._4_4_ = local_24.z - (float)(reflection->camera_origin).z;
  if (&local_24 != (CVector3f *)(local_100 + 4)) {
    local_24.x = (float)local_100._4_4_;
    local_24.y = (float)local_f8._0_4_;
    local_24.z = (float)local_f8._4_4_;
  }
  (reflection->reflection_matrix).m[0].x = local_a8;
  (reflection->reflection_matrix).m[1].x = local_a4;
  (reflection->reflection_matrix).m[2].x = local_a0;
  (reflection->reflection_matrix).m[0].y = (float)local_f8._8_4_;
  (reflection->reflection_matrix).m[1].y = local_ec;
  (reflection->reflection_matrix).m[2].y = local_e8;
  (reflection->reflection_matrix).m[0].z = local_24.x;
  (reflection->reflection_matrix).m[1].z = local_24.y;
  (reflection->reflection_matrix).m[2].z = local_24.z;
  reflection->projection_scale = fStack00000010;
  core_mirror_cpp_setupMirrorCamera_FUN_00521480(reflection);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)(auStack_3d0 + 0x28));
  CStack_3a0.m[0].y = -(float)(reflection->camera_origin).x;
  CStack_3a0.m[1].y = -(float)(reflection->camera_origin).y;
  CStack_3a0.m[2].y = -(float)(reflection->camera_origin).z;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)auStack_284);
  auStack_284._4_4_ = (float)g_TransformMatrix.m[0].x * (float)1.52587890625e-05;
  fStack_270 = (float)g_TransformMatrix.m[0].y * (float)1.52587890625e-05;
  fStack_260 = (float)g_TransformMatrix.m[0].z * (float)1.52587890625e-05;
  fStack_27c = (float)g_TransformMatrix.m[1].x * (float)1.52587890625e-05;
  fStack_26c = (float)g_TransformMatrix.m[1].y * (float)1.52587890625e-05;
  fStack_25c = (float)g_TransformMatrix.m[1].z * (float)1.52587890625e-05;
  fStack_278 = (float)g_TransformMatrix.m[2].x * (float)1.52587890625e-05;
  fStack_268 = (float)g_TransformMatrix.m[2].y * (float)1.52587890625e-05;
  fStack_258 = (float)g_TransformMatrix.m[2].z * (float)1.52587890625e-05;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_3a0,(CMatrix3x4f *)(auStack_284 + 4),in_stack_fffffb74);
  puVar6 = &uStack_45c;
  puVar10 = (uint *)auStack_2dc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)&stack0xfffffff8,&reflection->corner1,(CMatrix3x4f *)auStack_2dc)
  ;
  if (&local_124 != pCVar3) {
    local_124.x = pCVar3->x;
    local_124.y = pCVar3->y;
    local_124.z = pCVar3->z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)(local_2c + 4),&reflection->corner2,
                      (CMatrix3x4f *)(auStack_2dc + 4));
  if (&CStack_84 != pCVar3) {
    CStack_84.x = pCVar3->x;
    CStack_84.y = pCVar3->y;
    CStack_84.z = pCVar3->z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)(local_f8 + 8),&reflection->corner3,(CMatrix3x4f *)auStack_2d4);
  if ((CVector3f *)(local_54 + 4) != pCVar3) {
    local_54._4_4_ = pCVar3->x;
    auStack_4c._0_4_ = pCVar3->y;
    auStack_4c._4_4_ = pCVar3->z;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_134,&reflection->corner4,(CMatrix3x4f *)(auStack_2d4 + 4));
  if (&CStack_64 != pCVar3) {
    CStack_64.x = pCVar3->x;
    CStack_64.y = pCVar3->y;
    CStack_64.z = pCVar3->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_124,pCVar2,&reflection->mirror_transform_matrix);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_c0,pCVar2,in_stack_fffffb88);
  if ((CVector3f *)(local_3c + 4) != pCVar2) {
    local_3c._4_4_ = pCVar2->x;
    local_34._0_4_ = pCVar2->y;
    local_34._4_4_ = pCVar2->z;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner1.y,(CVector3f *)local_110,(CVector3f *)local_74,
             (CVector3f *)(auStack_4c + 8));
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner2.z,(CVector3f *)local_34,
             (CVector3f *)(local_110 + 4),(CVector3f *)(local_74 + 4));
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner4,(CVector3f *)(local_34 + 4),
             (CVector3f *)auStack_6c,(CVector3f *)local_3c);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[0].x,(CVector3f *)local_2c,
             (CVector3f *)(local_3c + 4),(CVector3f *)(local_54 + 4));
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[1].x,(CVector3f *)(local_2c + 4)
             ,(CVector3f *)auStack_4c,(CVector3f *)local_100);
  return;
}
