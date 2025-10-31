// Name: core_mirror.cpp_setupMirrorReflection_FUN_005214c0
// Address: 005214c0
// Address Range: [[005214c0, 005222ed]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection * reflection)
// Cross-references:
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (005709e0) at 00570a99 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00638995 = 0.0000152587890625
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   core_mirror.cpp_setupMirrorCamera_FUN_00521480
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void __cdecl core_mirror_cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection *reflection)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  undefined4 *puVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  undefined4 *puVar10;
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
  undefined4 uStack_45c;
  CMatrix3x4f CStack_458;
  undefined4 auStack_424 [11];
  undefined4 auStack_3f8 [6];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [48];
  CMatrix3x4f CStack_3a0;
  undefined4 uStack_368;
  undefined1 auStack_364 [36];
  CMatrix3x4f aCStack_340 [2];
  undefined1 auStack_2dc [8];
  undefined1 auStack_2d4 [24];
  float local_2bc;
  float local_2b8;
  undefined1 local_2b4 [8];
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  undefined1 auStack_284 [8];
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
  undefined4 uStack_1c0;
  undefined1 auStack_1bc [24];
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
  undefined1 local_110 [16];
  undefined1 local_100 [8];
  undefined1 local_f8 [12];
  float local_ec;
  float local_e8;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  CVector3f local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f CStack_84;
  undefined1 local_74 [8];
  undefined1 auStack_6c [8];
  CVector3f CStack_64;
  undefined1 local_54 [8];
  undefined1 auStack_4c [16];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
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
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)(auStack_3e0 + 8),SUB84(dVar12,0));
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
  puVar6 = (undefined4 *)auStack_2dc;
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
            (&CStack_458,SUB84(dVar13,0),(CMatrix3x4f *)((ulonglong)dVar13 >> 0x20));
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
  auStack_284._4_4_ = (float)g_TransformMatrix.m[0][0] * (float)DOUBLE_00638995;
  fStack_270 = (float)g_TransformMatrix.m[0][1] * (float)DOUBLE_00638995;
  fStack_260 = (float)g_TransformMatrix.m[0][2] * (float)DOUBLE_00638995;
  fStack_27c = (float)g_TransformMatrix.m[1][0] * (float)DOUBLE_00638995;
  fStack_26c = (float)g_TransformMatrix.m[1][1] * (float)DOUBLE_00638995;
  fStack_25c = (float)g_TransformMatrix.m[1][2] * (float)DOUBLE_00638995;
  fStack_278 = (float)g_TransformMatrix.m[2][0] * (float)DOUBLE_00638995;
  fStack_268 = (float)g_TransformMatrix.m[2][1] * (float)DOUBLE_00638995;
  fStack_258 = (float)g_TransformMatrix.m[2][2] * (float)DOUBLE_00638995;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_3a0,(CMatrix3x4f *)(auStack_284 + 4),in_stack_fffffb74);
  puVar6 = &uStack_45c;
  puVar10 = (undefined4 *)auStack_2dc;
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


// Assembly code:
// 005214c0: PUSH EBX
//   Label: core_mirror.cpp_setupMirrorReflection_FUN_005214c0
// 005214c1: PUSH ESI
// 005214c2: PUSH EDI
// 005214c3: PUSH EBP
// 005214c4: MOV EBP,ESP
// 005214c6: SUB ESP,0x4c0
// 005214cc: AND ESP,0xfffffff8
// 005214cf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005214d2: LEA EAX,[EBX + 0x18]
// 005214d5: PUSH EAX
// 005214d6: LEA EAX,[EBX + 0xc]
// 005214d9: PUSH EAX
// 005214da: PUSH EBX
// 005214db: LEA EAX,[ESP + 0x338]
//   XREF to: Stack[-0x1a4] (DATA)
// 005214e2: PUSH EAX
// 005214e3: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 005214e8: ADD ESP,0x10
// 005214eb: MOV EAX,dword ptr [ESP + 0x32c]
//   XREF to: Stack[-0x1a4] (READ)
// 005214f2: FLD float ptr [ESP + 0x32c]
//   XREF to: Stack[-0x1a4] (READ)
// 005214f9: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x4b0] (WRITE)
// 005214fd: MOV EAX,dword ptr [ESP + 0x330]
//   XREF to: Stack[-0x1a0] (READ)
// 00521504: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x4c8] (WRITE)
// 00521508: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x4ac] (WRITE)
// 0052150c: MOV EAX,dword ptr [ESP + 0x334]
//   XREF to: Stack[-0x19c] (READ)
// 00521513: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x4c8] (READ)
// 00521517: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x4a8] (WRITE)
// 0052151b: FABS
// 0052151d: FLD float ptr [ESP + 0x330]
//   XREF to: Stack[-0x1a0] (READ)
// 00521524: FABS
// 00521526: FXCH
// 00521528: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c0] (WRITE)
// 0052152c: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c0] (READ)
// 00521530: FNSTSW AX
// 00521532: SAHF
// 00521533: JNC 0x0052224f
//   XREF to: 0052224f (CONDITIONAL_JUMP)
// 00521539: FLD float ptr [ESP + 0x334]
//   XREF to: Stack[-0x19c] (READ)
// 00521540: FABS
// 00521542: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c0] (READ)
// 00521546: FNSTSW AX
// 00521548: SAHF
// 00521549: JNC 0x0052224f
//   XREF to: 0052224f (CONDITIONAL_JUMP)
// 0052154f: MOV ESI,0x3f800000
// 00521554: XOR ECX,ECX
// 00521556: MOV dword ptr [ESP + 0x370],ESI
//   XREF to: Stack[-0x160] (WRITE)
// 0052155d: MOV dword ptr [ESP + 0x374],ECX
//   XREF to: Stack[-0x15c] (WRITE)
// 00521564: MOV dword ptr [ESP + 0x36c],ECX
//   XREF to: Stack[-0x164] (WRITE)
// 0052156b: FLD float ptr [ESP + 0x370]
//   Label: LAB_0052156b
//   XREF to: Stack[-0x160] (READ)
// 00521572: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x4a8] (READ)
// 00521576: FLD float ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (READ)
// 0052157d: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x4b0] (READ)
// 00521581: FLD float ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (READ)
// 00521588: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4ac] (READ)
// 0052158c: FLD float ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (READ)
// 00521593: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4ac] (READ)
// 00521597: FLD float ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (READ)
// 0052159e: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x4a8] (READ)
// 005215a2: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x4b0] (READ)
// 005215a6: FLD float ptr [ESP + 0x370]
//   XREF to: Stack[-0x160] (READ)
// 005215ad: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x4b0] (READ)
// 005215b1: MOV dword ptr [ESP + 0x384],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005215b8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4ac] (READ)
// 005215bc: LEA EDX,[ESP + 0x33c]
//   XREF to: Stack[-0x194] (DATA)
// 005215c3: MOV dword ptr [ESP + 0x388],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005215ca: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x4a8] (READ)
// 005215ce: FXCH ST2
// 005215d0: FSUBP ST5,ST0
// 005215d2: FSUBP ST3,ST0
// 005215d4: FSUBP
// 005215d6: MOV dword ptr [ESP + 0x38c],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005215dd: FXCH ST2
// 005215df: FSTP float ptr [ESP + 0x420]
//   XREF to: Stack[-0xb0] (WRITE)
// 005215e6: FSTP float ptr [ESP + 0x424]
//   XREF to: Stack[-0xac] (WRITE)
// 005215ed: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0xb0] (DATA)
// 005215f4: FSTP float ptr [ESP + 0x428]
//   XREF to: Stack[-0xa8] (WRITE)
// 005215fb: CMP EDX,EAX
// 005215fd: JZ 0x00521629
//   XREF to: 00521629 (CONDITIONAL_JUMP)
// 005215ff: MOV EAX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0xb0] (DATA)
// 00521606: MOV dword ptr [ESP + 0x33c],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 0052160d: MOV EAX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0xac] (READ)
// 00521614: MOV dword ptr [ESP + 0x340],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 0052161b: MOV EAX,dword ptr [ESP + 0x428]
//   XREF to: Stack[-0xa8] (READ)
// 00521622: MOV dword ptr [ESP + 0x344],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 00521629: FLD float ptr [ESP + 0x340]
//   Label: LAB_00521629
//   XREF to: Stack[-0x190] (READ)
// 00521630: FMUL ST0
// 00521632: FLD float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (READ)
// 00521639: FMUL ST0
// 0052163b: FADDP
// 0052163d: FLD float ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (READ)
// 00521644: FMUL ST0
// 00521646: FADDP
// 00521648: FSQRT
// 0052164a: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x4b8] (WRITE)
// 0052164e: FLDZ
// 00521650: FCOMPP
// 00521652: FNSTSW AX
// 00521654: SAHF
// 00521655: JNC 0x005222b6
//   XREF to: 005222b6 (CONDITIONAL_JUMP)
// 0052165b: FLD1
// 0052165d: FLD float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (READ)
// 00521664: FXCH
// 00521666: FDIV float ptr [ESP + 0x18]
//   XREF to: Stack[-0x4b8] (READ)
// 0052166a: FXCH
// 0052166c: FMUL ST1
// 0052166e: FLD float ptr [ESP + 0x340]
//   XREF to: Stack[-0x190] (READ)
// 00521675: FMUL ST2
// 00521677: FLD float ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (READ)
// 0052167e: FMULP ST3
// 00521680: FXCH
// 00521682: FSTP float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (WRITE)
// 00521689: FSTP float ptr [ESP + 0x340]
//   XREF to: Stack[-0x190] (WRITE)
// 00521690: FSTP float ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (WRITE)
// 00521697: FLD float ptr [ESP + 0x388]
//   Label: LAB_00521697
//   XREF to: Stack[-0x148] (READ)
// 0052169e: FMUL float ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (READ)
// 005216a5: FLD float ptr [ESP + 0x38c]
//   XREF to: Stack[-0x144] (READ)
// 005216ac: FMUL float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (READ)
// 005216b3: FLD float ptr [ESP + 0x384]
//   XREF to: Stack[-0x14c] (READ)
// 005216ba: FMUL float ptr [ESP + 0x340]
//   XREF to: Stack[-0x190] (READ)
// 005216c1: FLD float ptr [ESP + 0x38c]
//   XREF to: Stack[-0x144] (READ)
// 005216c8: FMUL float ptr [ESP + 0x340]
//   XREF to: Stack[-0x190] (READ)
// 005216cf: FLD float ptr [ESP + 0x384]
//   XREF to: Stack[-0x14c] (READ)
// 005216d6: FMUL float ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (READ)
// 005216dd: FLD float ptr [ESP + 0x388]
//   XREF to: Stack[-0x148] (READ)
// 005216e4: FMUL float ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (READ)
// 005216eb: LEA EAX,[ESP + 0x378]
//   XREF to: Stack[-0x158] (DATA)
// 005216f2: LEA EDX,[ESP + 0x36c]
//   XREF to: Stack[-0x164] (DATA)
// 005216f9: FXCH ST2
// 005216fb: FSUBP ST5,ST0
// 005216fd: FSUBP ST3,ST0
// 005216ff: FSUBP
// 00521701: FXCH
// 00521703: FSTP float ptr [ESP + 0x37c]
//   XREF to: Stack[-0x154] (WRITE)
// 0052170a: FSTP float ptr [ESP + 0x380]
//   XREF to: Stack[-0x150] (WRITE)
// 00521711: FSTP float ptr [ESP + 0x378]
//   XREF to: Stack[-0x158] (WRITE)
// 00521718: CMP EDX,EAX
// 0052171a: JZ 0x00521746
//   XREF to: 00521746 (CONDITIONAL_JUMP)
// 0052171c: MOV EAX,dword ptr [ESP + 0x378]
//   XREF to: Stack[-0x158] (DATA)
// 00521723: MOV dword ptr [ESP + 0x36c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 0052172a: MOV EAX,dword ptr [ESP + 0x37c]
//   XREF to: Stack[-0x154] (READ)
// 00521731: MOV dword ptr [ESP + 0x370],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 00521738: MOV EAX,dword ptr [ESP + 0x380]
//   XREF to: Stack[-0x150] (READ)
// 0052173f: MOV dword ptr [ESP + 0x374],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 00521746: FLD float ptr [ESP + 0x370]
//   Label: LAB_00521746
//   XREF to: Stack[-0x160] (READ)
// 0052174d: FMUL ST0
// 0052174f: FLD float ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (READ)
// 00521756: FMUL ST0
// 00521758: FADDP
// 0052175a: FLD float ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (READ)
// 00521761: FMUL ST0
// 00521763: FADDP
// 00521765: FSQRT
// 00521767: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4b4] (WRITE)
// 0052176b: FLDZ
// 0052176d: FCOMPP
// 0052176f: FNSTSW AX
// 00521771: SAHF
// 00521772: JNC 0x005222d2
//   XREF to: 005222d2 (CONDITIONAL_JUMP)
// 00521778: FLD1
// 0052177a: FLD float ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (READ)
// 00521781: FXCH
// 00521783: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4b4] (READ)
// 00521787: FXCH
// 00521789: FMUL ST1
// 0052178b: FLD float ptr [ESP + 0x370]
//   XREF to: Stack[-0x160] (READ)
// 00521792: FMUL ST2
// 00521794: FLD float ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (READ)
// 0052179b: FMULP ST3
// 0052179d: FXCH
// 0052179f: FSTP float ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (WRITE)
// 005217a6: FSTP float ptr [ESP + 0x370]
//   XREF to: Stack[-0x160] (WRITE)
// 005217ad: FSTP float ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (WRITE)
// 005217b4: LEA EAX,[ESP + 0xec]
//   Label: LAB_005217b4
//   XREF to: Stack[-0x3e4] (DATA)
// 005217bb: PUSH EAX
// 005217bc: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 005217c1: FLD float ptr [EBX]
// 005217c3: ADD ESP,0x4
// 005217c6: FCHS
// 005217c8: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x3d8] (WRITE)
// 005217cf: MOV EAX,dword ptr [ESP + 0x33c]
//   XREF to: Stack[-0x194] (READ)
// 005217d6: FLD float ptr [EBX + 0x4]
// 005217d9: FCHS
// 005217db: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x3c8] (WRITE)
// 005217e2: FLD float ptr [EBX + 0x8]
// 005217e5: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x2c4] (WRITE)
// 005217ec: MOV EAX,dword ptr [ESP + 0x340]
//   XREF to: Stack[-0x190] (READ)
// 005217f3: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x2c0] (WRITE)
// 005217fa: MOV EAX,dword ptr [ESP + 0x344]
//   XREF to: Stack[-0x18c] (READ)
// 00521801: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x2bc] (WRITE)
// 00521808: MOV EAX,dword ptr [ESP + 0x36c]
//   XREF to: Stack[-0x164] (READ)
// 0052180f: MOV dword ptr [ESP + 0x21c],EAX
//   XREF to: Stack[-0x2b4] (WRITE)
// 00521816: MOV EAX,dword ptr [ESP + 0x370]
//   XREF to: Stack[-0x160] (READ)
// 0052181d: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0x2b0] (WRITE)
// 00521824: MOV EAX,dword ptr [ESP + 0x374]
//   XREF to: Stack[-0x15c] (READ)
// 0052182b: MOV dword ptr [ESP + 0x224],EAX
//   XREF to: Stack[-0x2ac] (WRITE)
// 00521832: MOV EAX,dword ptr [ESP + 0x384]
//   XREF to: Stack[-0x14c] (READ)
// 00521839: XOR EDX,EDX
// 0052183b: MOV dword ptr [ESP + 0x22c],EAX
//   XREF to: Stack[-0x2a4] (WRITE)
// 00521842: MOV EAX,dword ptr [ESP + 0x388]
//   XREF to: Stack[-0x148] (READ)
// 00521849: FCHS
// 0052184b: MOV dword ptr [ESP + 0x230],EAX
//   XREF to: Stack[-0x2a0] (WRITE)
// 00521852: MOV EAX,dword ptr [ESP + 0x38c]
//   XREF to: Stack[-0x144] (READ)
// 00521859: FSTP float ptr [ESP + 0x118]
//   XREF to: Stack[-0x3b8] (WRITE)
// 00521860: MOV dword ptr [ESP + 0x234],EAX
//   XREF to: Stack[-0x29c] (WRITE)
// 00521867: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0x354] (DATA)
// 0052186e: MOV dword ptr [ESP + 0x218],EDX
//   XREF to: Stack[-0x2b8] (WRITE)
// 00521875: PUSH EAX
// 00521876: MOV dword ptr [ESP + 0x22c],EDX
//   XREF to: Stack[-0x2a8] (WRITE)
// 0052187d: MOV dword ptr [ESP + 0x23c],EDX
//   XREF to: Stack[-0x298] (WRITE)
// 00521884: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 00521889: ADD ESP,0x4
// 0052188c: LEA EAX,[ESP + 0xec]
//   XREF to: Stack[-0x3e4] (DATA)
// 00521893: MOV EDI,0xbf800000
// 00521898: PUSH EAX
// 00521899: LEA ESI,[ESP + 0x270]
//   XREF to: Stack[-0x264] (DATA)
// 005218a0: MOV dword ptr [ESP + 0x1a8],EDI
//   XREF to: Stack[-0x32c] (WRITE)
// 005218a7: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005218ac: MOV ECX,0xc
// 005218b1: LEA EDI,[ESP + 0x2a0]
//   XREF to: Stack[-0x234] (DATA)
// 005218b8: ADD ESP,0x4
// 005218bb: LEA EAX,[ESP + 0x29c]
//   XREF to: Stack[-0x234] (DATA)
// 005218c2: LEA ESI,[ESP + 0x26c]
//   XREF to: Stack[-0x264] (DATA)
// 005218c9: PUSH EAX
// 005218ca: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x2c4] (DATA)
// 005218d1: MOVSD.REP ES:EDI,ESI
// 005218d3: PUSH EAX
// 005218d4: LEA ESI,[ESP + 0x2d4]
//   XREF to: Stack[-0x204] (DATA)
// 005218db: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005218e0: ADD ESP,0x4
// 005218e3: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x3b4] (DATA)
// 005218ea: LEA EDI,[ESP + 0x120]
//   XREF to: Stack[-0x3b4] (DATA)
// 005218f1: PUSH EAX
// 005218f2: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x354] (DATA)
// 005218f9: MOV ECX,0xc
// 005218fe: PUSH EAX
// 005218ff: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x2c4] (DATA)
// 00521906: LEA ESI,[ESP + 0x2d8]
//   XREF to: Stack[-0x204] (DATA)
// 0052190d: PUSH EAX
// 0052190e: LEA EAX,[ESP + 0xfc]
//   XREF to: Stack[-0x3e4] (DATA)
// 00521915: MOVSD.REP ES:EDI,ESI
// 00521917: PUSH EAX
// 00521918: LEA ESI,[ESP + 0x1f0]
//   XREF to: Stack[-0x2f4] (DATA)
// 0052191f: LEA EDI,[ESP + 0x310]
//   XREF to: Stack[-0x1d4] (DATA)
// 00521926: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0052192b: MOV ECX,0xc
// 00521930: LEA ESI,[ESP + 0x1f0]
//   XREF to: Stack[-0x2f4] (DATA)
// 00521937: ADD ESP,0x8
// 0052193a: LEA EAX,[ESP + 0x308]
//   XREF to: Stack[-0x1d4] (DATA)
// 00521941: MOVSD.REP ES:EDI,ESI
// 00521943: PUSH EAX
// 00521944: LEA ESI,[ESP + 0xcc]
//   XREF to: Stack[-0x414] (DATA)
// 0052194b: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x474] (DATA)
// 0052194f: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00521954: MOV ECX,0xc
// 00521959: LEA ESI,[ESP + 0xcc]
//   XREF to: Stack[-0x414] (DATA)
// 00521960: ADD ESP,0x8
// 00521963: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x474] (DATA)
// 00521967: MOVSD.REP ES:EDI,ESI
// 00521969: PUSH EAX
// 0052196a: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x444] (DATA)
// 00521971: LEA EDI,[ESP + 0x158]
//   XREF to: Stack[-0x384] (DATA)
// 00521978: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0052197d: MOV ECX,0xc
// 00521982: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x444] (DATA)
// 00521989: ADD ESP,0x8
// 0052198c: LEA EAX,[ESP + 0x150]
//   XREF to: Stack[-0x384] (DATA)
// 00521993: MOVSD.REP ES:EDI,ESI
// 00521995: PUSH EAX
// 00521996: LEA ESI,[ESP + 0x244]
//   XREF to: Stack[-0x294] (DATA)
// 0052199d: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005219a2: ADD ESP,0x8
// 005219a5: LEA EAX,[EBX + 0x30]
// 005219a8: MOV ECX,0xc
// 005219ad: PUSH EAX
// 005219ae: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005219b1: LEA ESI,[ESP + 0x240]
//   XREF to: Stack[-0x294] (DATA)
// 005219b8: PUSH EAX
// 005219b9: LEA EAX,[ESP + 0x44c]
//   XREF to: Stack[-0x8c] (DATA)
// 005219c0: LEA EDI,[EBX + 0x30]
// 005219c3: PUSH EAX
// 005219c4: MOVSD.REP ES:EDI,ESI
// 005219c6: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005219cb: LEA EDX,[EBX + 0x60]
// 005219ce: ADD ESP,0xc
// 005219d1: CMP EDX,EAX
// 005219d3: JZ 0x005219e5
//   XREF to: 005219e5 (CONDITIONAL_JUMP)
// 005219d5: MOV ECX,dword ptr [EAX]
// 005219d7: MOV dword ptr [EDX],ECX
// 005219d9: MOV ECX,dword ptr [EAX + 0x4]
// 005219dc: MOV dword ptr [EDX + 0x4],ECX
// 005219df: MOV ECX,dword ptr [EAX + 0x8]
// 005219e2: MOV dword ptr [EDX + 0x8],ECX
// 005219e5: MOV EDX,dword ptr [EBP + 0x1c]
//   Label: LAB_005219e5
//   XREF to: Stack[0xc] (READ)
// 005219e8: PUSH EDX
// 005219e9: LEA EAX,[EBX + 0x70]
// 005219ec: PUSH EAX
// 005219ed: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005219f2: ADD ESP,0x8
// 005219f5: MOV EAX,dword ptr [EBX + 0x74]
// 005219f8: MOV dword ptr [ESP + 0x498],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005219ff: MOV EAX,dword ptr [EBX + 0x80]
// 00521a05: MOV dword ptr [ESP + 0x4b8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00521a0c: MOV EAX,dword ptr [EBX + 0x8c]
// 00521a12: MOV dword ptr [ESP + 0x49c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00521a19: MOV EAX,dword ptr [ESP + 0x498]
//   XREF to: Stack[-0x38] (READ)
// 00521a20: MOV dword ptr [ESP + 0x3a8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 00521a27: MOV EAX,dword ptr [ESP + 0x4b8]
//   XREF to: Stack[-0x18] (READ)
// 00521a2e: MOV dword ptr [ESP + 0x3ac],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 00521a35: MOV EAX,dword ptr [ESP + 0x49c]
//   XREF to: Stack[-0x34] (READ)
// 00521a3c: MOV dword ptr [ESP + 0x3b0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 00521a43: MOV EAX,dword ptr [EBX + 0x70]
// 00521a46: MOV dword ptr [ESP + 0x4a0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00521a4d: MOV EAX,dword ptr [EBX + 0x7c]
// 00521a50: MOV dword ptr [ESP + 0x4a4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00521a57: MOV EAX,dword ptr [EBX + 0x88]
// 00521a5d: MOV dword ptr [ESP + 0x4a8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00521a64: MOV EAX,dword ptr [ESP + 0x4a0]
//   XREF to: Stack[-0x30] (READ)
// 00521a6b: MOV dword ptr [ESP + 0x3f0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00521a72: MOV EAX,dword ptr [ESP + 0x4a4]
//   XREF to: Stack[-0x2c] (READ)
// 00521a79: MOV dword ptr [ESP + 0x3f4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00521a80: MOV EAX,dword ptr [ESP + 0x4a8]
//   XREF to: Stack[-0x28] (READ)
// 00521a87: MOV dword ptr [ESP + 0x3f8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00521a8e: MOV EAX,dword ptr [EBX + 0x78]
// 00521a91: MOV dword ptr [ESP + 0x4ac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00521a98: MOV EAX,dword ptr [EBX + 0x84]
// 00521a9e: MOV dword ptr [ESP + 0x4b0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00521aa5: MOV EAX,dword ptr [EBX + 0x90]
// 00521aab: MOV dword ptr [ESP + 0x4b4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00521ab2: MOV EAX,dword ptr [ESP + 0x4ac]
//   XREF to: Stack[-0x24] (READ)
// 00521ab9: MOV dword ptr [ESP + 0x474],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00521ac0: MOV EAX,dword ptr [ESP + 0x4b0]
//   XREF to: Stack[-0x20] (READ)
// 00521ac7: MOV dword ptr [ESP + 0x478],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00521ace: MOV EAX,dword ptr [ESP + 0x4b4]
//   XREF to: Stack[-0x1c] (READ)
// 00521ad5: LEA EDX,[ESP + 0x3a8]
//   XREF to: Stack[-0x128] (DATA)
// 00521adc: MOV dword ptr [ESP + 0x47c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00521ae3: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00521ae6: FLD float ptr [ESP + 0x498]
//   XREF to: Stack[-0x38] (READ)
// 00521aed: FADD float ptr [EAX]
// 00521aef: FLD float ptr [ESP + 0x4b8]
//   XREF to: Stack[-0x18] (READ)
// 00521af6: FXCH
// 00521af8: FSTP float ptr [ESP + 0x3cc]
//   XREF to: Stack[-0x104] (WRITE)
// 00521aff: FADD float ptr [EAX + 0x4]
// 00521b02: FLD float ptr [ESP + 0x49c]
//   XREF to: Stack[-0x34] (READ)
// 00521b09: FXCH
// 00521b0b: FSTP float ptr [ESP + 0x3d0]
//   XREF to: Stack[-0x100] (WRITE)
// 00521b12: FADD float ptr [EAX + 0x8]
// 00521b15: LEA EAX,[ESP + 0x3cc]
//   XREF to: Stack[-0x104] (DATA)
// 00521b1c: FSTP float ptr [ESP + 0x3d4]
//   XREF to: Stack[-0xfc] (WRITE)
// 00521b23: CMP EDX,EAX
// 00521b25: JZ 0x00521b51
//   XREF to: 00521b51 (CONDITIONAL_JUMP)
// 00521b27: MOV EAX,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[-0x104] (DATA)
// 00521b2e: MOV dword ptr [ESP + 0x3a8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 00521b35: MOV EAX,dword ptr [ESP + 0x3d0]
//   XREF to: Stack[-0x100] (READ)
// 00521b3c: MOV dword ptr [ESP + 0x3ac],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 00521b43: MOV EAX,dword ptr [ESP + 0x3d4]
//   XREF to: Stack[-0xfc] (READ)
// 00521b4a: MOV dword ptr [ESP + 0x3b0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 00521b51: FLD float ptr [ESP + 0x3f0]
//   Label: LAB_00521b51
//   XREF to: Stack[-0xe0] (READ)
// 00521b58: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00521b5b: FLD float ptr [ESP + 0x3f4]
//   XREF to: Stack[-0xdc] (READ)
// 00521b62: FXCH
// 00521b64: FADD float ptr [EAX]
// 00521b66: FLD float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0xd8] (READ)
// 00521b6d: FXCH
// 00521b6f: FSTP float ptr [ESP + 0x408]
//   XREF to: Stack[-0xc8] (WRITE)
// 00521b76: FXCH
// 00521b78: FADD float ptr [EAX + 0x4]
// 00521b7b: LEA EDX,[ESP + 0x3f0]
//   XREF to: Stack[-0xe0] (DATA)
// 00521b82: FSTP float ptr [ESP + 0x40c]
//   XREF to: Stack[-0xc4] (WRITE)
// 00521b89: FADD float ptr [EAX + 0x8]
// 00521b8c: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0xc8] (DATA)
// 00521b93: FSTP float ptr [ESP + 0x410]
//   XREF to: Stack[-0xc0] (WRITE)
// 00521b9a: CMP EDX,EAX
// 00521b9c: JZ 0x00521bc8
//   XREF to: 00521bc8 (CONDITIONAL_JUMP)
// 00521b9e: MOV EAX,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0xc8] (DATA)
// 00521ba5: MOV dword ptr [ESP + 0x3f0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00521bac: MOV EAX,dword ptr [ESP + 0x40c]
//   XREF to: Stack[-0xc4] (READ)
// 00521bb3: MOV dword ptr [ESP + 0x3f4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00521bba: MOV EAX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0xc0] (READ)
// 00521bc1: MOV dword ptr [ESP + 0x3f8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00521bc8: FLD float ptr [ESP + 0x474]
//   Label: LAB_00521bc8
//   XREF to: Stack[-0x5c] (READ)
// 00521bcf: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00521bd2: FLD float ptr [ESP + 0x478]
//   XREF to: Stack[-0x58] (READ)
// 00521bd9: FXCH
// 00521bdb: FADD float ptr [EAX]
// 00521bdd: FLD float ptr [ESP + 0x47c]
//   XREF to: Stack[-0x54] (READ)
// 00521be4: FXCH
// 00521be6: FSTP float ptr [ESP + 0x3e4]
//   XREF to: Stack[-0xec] (WRITE)
// 00521bed: FXCH
// 00521bef: FADD float ptr [EAX + 0x4]
// 00521bf2: LEA EDX,[ESP + 0x3e4]
//   XREF to: Stack[-0xec] (DATA)
// 00521bf9: FSTP float ptr [ESP + 0x3e8]
//   XREF to: Stack[-0xe8] (WRITE)
// 00521c00: FADD float ptr [EAX + 0x8]
// 00521c03: LEA EAX,[ESP + 0x474]
//   XREF to: Stack[-0x5c] (DATA)
// 00521c0a: FSTP float ptr [ESP + 0x3ec]
//   XREF to: Stack[-0xe4] (WRITE)
// 00521c11: CMP EAX,EDX
// 00521c13: JZ 0x00521c3f
//   XREF to: 00521c3f (CONDITIONAL_JUMP)
// 00521c15: MOV EAX,dword ptr [ESP + 0x3e4]
//   XREF to: Stack[-0xec] (READ)
// 00521c1c: MOV dword ptr [ESP + 0x474],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00521c23: MOV EAX,dword ptr [ESP + 0x3e8]
//   XREF to: Stack[-0xe8] (READ)
// 00521c2a: MOV dword ptr [ESP + 0x478],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00521c31: MOV EAX,dword ptr [ESP + 0x3ec]
//   XREF to: Stack[-0xe4] (READ)
// 00521c38: MOV dword ptr [ESP + 0x47c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00521c3f: LEA EAX,[EBX + 0x30]
//   Label: LAB_00521c3f
// 00521c42: PUSH EAX
// 00521c43: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x128] (DATA)
// 00521c4a: PUSH EAX
// 00521c4b: LEA EAX,[ESP + 0x458]
//   XREF to: Stack[-0x80] (DATA)
// 00521c52: PUSH EAX
// 00521c53: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00521c58: MOV EDX,EAX
// 00521c5a: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x128] (DATA)
// 00521c61: ADD ESP,0xc
// 00521c64: CMP EAX,EDX
// 00521c66: JZ 0x00521c85
//   XREF to: 00521c85 (CONDITIONAL_JUMP)
// 00521c68: MOV EAX,dword ptr [EDX]
// 00521c6a: MOV dword ptr [ESP + 0x3a8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 00521c71: MOV EAX,dword ptr [EDX + 0x4]
// 00521c74: MOV dword ptr [ESP + 0x3ac],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 00521c7b: MOV EAX,dword ptr [EDX + 0x8]
// 00521c7e: MOV dword ptr [ESP + 0x3b0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 00521c85: LEA EAX,[EBX + 0x30]
//   Label: LAB_00521c85
// 00521c88: PUSH EAX
// 00521c89: LEA EAX,[ESP + 0x3f4]
//   XREF to: Stack[-0xe0] (DATA)
// 00521c90: PUSH EAX
// 00521c91: LEA EAX,[ESP + 0x3c8]
//   XREF to: Stack[-0x110] (DATA)
// 00521c98: PUSH EAX
// 00521c99: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00521c9e: MOV EDX,EAX
// 00521ca0: LEA EAX,[ESP + 0x3fc]
//   XREF to: Stack[-0xe0] (DATA)
// 00521ca7: ADD ESP,0xc
// 00521caa: CMP EAX,EDX
// 00521cac: JZ 0x00521ccb
//   XREF to: 00521ccb (CONDITIONAL_JUMP)
// 00521cae: MOV EAX,dword ptr [EDX]
// 00521cb0: MOV dword ptr [ESP + 0x3f0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00521cb7: MOV EAX,dword ptr [EDX + 0x4]
// 00521cba: MOV dword ptr [ESP + 0x3f4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00521cc1: MOV EAX,dword ptr [EDX + 0x8]
// 00521cc4: MOV dword ptr [ESP + 0x3f8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00521ccb: LEA EAX,[EBX + 0x30]
//   Label: LAB_00521ccb
// 00521cce: PUSH EAX
// 00521ccf: LEA EAX,[ESP + 0x478]
//   XREF to: Stack[-0x5c] (DATA)
// 00521cd6: PUSH EAX
// 00521cd7: LEA EAX,[ESP + 0x470]
//   XREF to: Stack[-0x68] (DATA)
// 00521cde: PUSH EAX
// 00521cdf: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00521ce4: MOV EDX,EAX
// 00521ce6: LEA EAX,[ESP + 0x480]
//   XREF to: Stack[-0x5c] (DATA)
// 00521ced: ADD ESP,0xc
// 00521cf0: CMP EAX,EDX
// 00521cf2: JZ 0x00521d11
//   XREF to: 00521d11 (CONDITIONAL_JUMP)
// 00521cf4: MOV EAX,dword ptr [EDX]
// 00521cf6: MOV dword ptr [ESP + 0x474],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00521cfd: MOV EAX,dword ptr [EDX + 0x4]
// 00521d00: MOV dword ptr [ESP + 0x478],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00521d07: MOV EAX,dword ptr [EDX + 0x8]
// 00521d0a: MOV dword ptr [ESP + 0x47c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00521d11: FLD float ptr [ESP + 0x3a8]
//   Label: LAB_00521d11
//   XREF to: Stack[-0x128] (READ)
// 00521d18: LEA EAX,[EBX + 0x60]
// 00521d1b: FLD float ptr [ESP + 0x3ac]
//   XREF to: Stack[-0x124] (READ)
// 00521d22: FXCH
// 00521d24: FSUB float ptr [EAX]
// 00521d26: FLD float ptr [ESP + 0x3b0]
//   XREF to: Stack[-0x120] (READ)
// 00521d2d: FXCH
// 00521d2f: FSTP float ptr [ESP + 0x3d8]
//   XREF to: Stack[-0xf8] (WRITE)
// 00521d36: FXCH
// 00521d38: FSUB float ptr [EAX + 0x4]
// 00521d3b: LEA EDX,[ESP + 0x3a8]
//   XREF to: Stack[-0x128] (DATA)
// 00521d42: FSTP float ptr [ESP + 0x3dc]
//   XREF to: Stack[-0xf4] (WRITE)
// 00521d49: FSUB float ptr [EAX + 0x8]
// 00521d4c: LEA EAX,[ESP + 0x3d8]
//   XREF to: Stack[-0xf8] (DATA)
// 00521d53: FSTP float ptr [ESP + 0x3e0]
//   XREF to: Stack[-0xf0] (WRITE)
// 00521d5a: CMP EDX,EAX
// 00521d5c: JZ 0x00521d88
//   XREF to: 00521d88 (CONDITIONAL_JUMP)
// 00521d5e: MOV EAX,dword ptr [ESP + 0x3d8]
//   XREF to: Stack[-0xf8] (DATA)
// 00521d65: MOV dword ptr [ESP + 0x3a8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 00521d6c: MOV EAX,dword ptr [ESP + 0x3dc]
//   XREF to: Stack[-0xf4] (READ)
// 00521d73: MOV dword ptr [ESP + 0x3ac],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 00521d7a: MOV EAX,dword ptr [ESP + 0x3e0]
//   XREF to: Stack[-0xf0] (READ)
// 00521d81: MOV dword ptr [ESP + 0x3b0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 00521d88: FLD float ptr [ESP + 0x3f0]
//   Label: LAB_00521d88
//   XREF to: Stack[-0xe0] (READ)
// 00521d8f: LEA EAX,[EBX + 0x60]
// 00521d92: FLD float ptr [ESP + 0x3f4]
//   XREF to: Stack[-0xdc] (READ)
// 00521d99: FXCH
// 00521d9b: FSUB float ptr [EAX]
// 00521d9d: FLD float ptr [ESP + 0x3f8]
//   XREF to: Stack[-0xd8] (READ)
// 00521da4: FXCH
// 00521da6: FSTP float ptr [ESP + 0x48c]
//   XREF to: Stack[-0x44] (WRITE)
// 00521dad: FXCH
// 00521daf: FSUB float ptr [EAX + 0x4]
// 00521db2: LEA EDX,[ESP + 0x3f0]
//   XREF to: Stack[-0xe0] (DATA)
// 00521db9: FSTP float ptr [ESP + 0x490]
//   XREF to: Stack[-0x40] (WRITE)
// 00521dc0: FSUB float ptr [EAX + 0x8]
// 00521dc3: LEA EAX,[ESP + 0x48c]
//   XREF to: Stack[-0x44] (DATA)
// 00521dca: FSTP float ptr [ESP + 0x494]
//   XREF to: Stack[-0x3c] (WRITE)
// 00521dd1: CMP EDX,EAX
// 00521dd3: JZ 0x00521dff
//   XREF to: 00521dff (CONDITIONAL_JUMP)
// 00521dd5: MOV EAX,dword ptr [ESP + 0x48c]
//   XREF to: Stack[-0x44] (DATA)
// 00521ddc: MOV dword ptr [ESP + 0x3f0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00521de3: MOV EAX,dword ptr [ESP + 0x490]
//   XREF to: Stack[-0x40] (READ)
// 00521dea: MOV dword ptr [ESP + 0x3f4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00521df1: MOV EAX,dword ptr [ESP + 0x494]
//   XREF to: Stack[-0x3c] (READ)
// 00521df8: MOV dword ptr [ESP + 0x3f8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00521dff: FLD float ptr [ESP + 0x474]
//   Label: LAB_00521dff
//   XREF to: Stack[-0x5c] (READ)
// 00521e06: LEA EAX,[EBX + 0x60]
// 00521e09: FLD float ptr [ESP + 0x478]
//   XREF to: Stack[-0x58] (READ)
// 00521e10: FXCH
// 00521e12: FSUB float ptr [EAX]
// 00521e14: FLD float ptr [ESP + 0x47c]
//   XREF to: Stack[-0x54] (READ)
// 00521e1b: FXCH
// 00521e1d: FSTP float ptr [ESP + 0x39c]
//   XREF to: Stack[-0x134] (WRITE)
// 00521e24: FXCH
// 00521e26: FSUB float ptr [EAX + 0x4]
// 00521e29: LEA EDX,[ESP + 0x474]
//   XREF to: Stack[-0x5c] (DATA)
// 00521e30: FSTP float ptr [ESP + 0x3a0]
//   XREF to: Stack[-0x130] (WRITE)
// 00521e37: FSUB float ptr [EAX + 0x8]
// 00521e3a: LEA EAX,[ESP + 0x39c]
//   XREF to: Stack[-0x134] (DATA)
// 00521e41: FSTP float ptr [ESP + 0x3a4]
//   XREF to: Stack[-0x12c] (WRITE)
// 00521e48: CMP EDX,EAX
// 00521e4a: JZ 0x00521e76
//   XREF to: 00521e76 (CONDITIONAL_JUMP)
// 00521e4c: MOV EAX,dword ptr [ESP + 0x39c]
//   XREF to: Stack[-0x134] (DATA)
// 00521e53: MOV dword ptr [ESP + 0x474],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00521e5a: MOV EAX,dword ptr [ESP + 0x3a0]
//   XREF to: Stack[-0x130] (READ)
// 00521e61: MOV dword ptr [ESP + 0x478],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00521e68: MOV EAX,dword ptr [ESP + 0x3a4]
//   XREF to: Stack[-0x12c] (READ)
// 00521e6f: MOV dword ptr [ESP + 0x47c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00521e76: MOV EAX,dword ptr [ESP + 0x3f0]
//   Label: LAB_00521e76
//   XREF to: Stack[-0xe0] (READ)
// 00521e7d: MOV dword ptr [EBX + 0x70],EAX
// 00521e80: MOV EAX,dword ptr [ESP + 0x3f4]
//   XREF to: Stack[-0xdc] (READ)
// 00521e87: MOV dword ptr [EBX + 0x7c],EAX
// 00521e8a: MOV EAX,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[-0xd8] (READ)
// 00521e91: MOV dword ptr [EBX + 0x88],EAX
// 00521e97: MOV EAX,dword ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x128] (READ)
// 00521e9e: MOV dword ptr [EBX + 0x74],EAX
// 00521ea1: MOV EAX,dword ptr [ESP + 0x3ac]
//   XREF to: Stack[-0x124] (READ)
// 00521ea8: MOV dword ptr [EBX + 0x80],EAX
// 00521eae: MOV EAX,dword ptr [ESP + 0x3b0]
//   XREF to: Stack[-0x120] (READ)
// 00521eb5: MOV dword ptr [EBX + 0x8c],EAX
// 00521ebb: MOV EAX,dword ptr [ESP + 0x474]
//   XREF to: Stack[-0x5c] (READ)
// 00521ec2: MOV dword ptr [EBX + 0x78],EAX
// 00521ec5: MOV EAX,dword ptr [ESP + 0x478]
//   XREF to: Stack[-0x58] (READ)
// 00521ecc: MOV dword ptr [EBX + 0x84],EAX
// 00521ed2: MOV EAX,dword ptr [ESP + 0x47c]
//   XREF to: Stack[-0x54] (READ)
// 00521ed9: MOV dword ptr [EBX + 0x90],EAX
// 00521edf: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00521ee2: PUSH EBX
// 00521ee3: MOV dword ptr [EBX + 0x6c],EAX
// 00521ee6: CALL core_mirror.cpp_setupMirrorCamera_FUN_00521480
//   XREF to: 00521480 (UNCONDITIONAL_CALL)
// 00521eeb: ADD ESP,0x4
// 00521eee: LEA EAX,[ESP + 0xec]
//   XREF to: Stack[-0x3e4] (DATA)
// 00521ef5: PUSH EAX
// 00521ef6: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 00521efb: FLD float ptr [EBX + 0x60]
// 00521efe: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x2c4] (DATA)
// 00521f05: ADD ESP,0x4
// 00521f08: FCHS
// 00521f0a: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x3d8] (WRITE)
// 00521f11: PUSH EAX
// 00521f12: FLD float ptr [EBX + 0x64]
// 00521f15: FCHS
// 00521f17: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x3c8] (WRITE)
// 00521f1e: FLD float ptr [EBX + 0x68]
// 00521f21: FCHS
// 00521f23: FSTP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x3b8] (WRITE)
// 00521f2a: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 00521f2f: FILD dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 00521f35: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f3b: FILD dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 00521f41: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f47: FILD dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 00521f4d: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f53: FILD dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 00521f59: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f5f: FILD dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 00521f65: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f6b: FILD dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 00521f71: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f77: FILD dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 00521f7d: ADD ESP,0x4
// 00521f80: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f86: FXCH ST6
// 00521f88: FSTP float ptr [ESP + 0x20c]
//   XREF to: Stack[-0x2c4] (WRITE)
// 00521f8f: FILD dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 00521f95: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521f9b: FXCH ST5
// 00521f9d: FSTP float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x2b4] (WRITE)
// 00521fa4: FILD dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 00521faa: FMUL double ptr [0x00638995]
//   XREF to: 00638995 (READ)
// 00521fb0: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x2c4] (DATA)
// 00521fb7: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x4a4] (DATA)
// 00521fbb: PUSH EAX
// 00521fbc: FXCH ST4
// 00521fbe: FSTP float ptr [ESP + 0x230]
//   XREF to: Stack[-0x2a4] (WRITE)
// 00521fc5: FXCH ST2
// 00521fc7: FSTP float ptr [ESP + 0x214]
//   XREF to: Stack[-0x2c0] (WRITE)
// 00521fce: FSTP float ptr [ESP + 0x224]
//   XREF to: Stack[-0x2b0] (WRITE)
// 00521fd5: FSTP float ptr [ESP + 0x234]
//   XREF to: Stack[-0x2a0] (WRITE)
// 00521fdc: FXCH ST2
// 00521fde: FSTP float ptr [ESP + 0x218]
//   XREF to: Stack[-0x2bc] (WRITE)
// 00521fe5: LEA EAX,[ESP + 0xf0]
//   XREF to: Stack[-0x3e4] (DATA)
// 00521fec: FSTP float ptr [ESP + 0x228]
//   XREF to: Stack[-0x2ac] (WRITE)
// 00521ff3: PUSH EAX
// 00521ff4: FSTP float ptr [ESP + 0x23c]
//   XREF to: Stack[-0x29c] (WRITE)
// 00521ffb: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00522000: ADD ESP,0x8
// 00522003: LEA EAX,[ESP + 0x1ac]
//   XREF to: Stack[-0x324] (DATA)
// 0052200a: PUSH EAX
// 0052200b: LEA EDI,[ESP + 0x1b0]
//   XREF to: Stack[-0x324] (DATA)
// 00522012: MOV ECX,0xc
// 00522017: PUSH EBX
// 00522018: LEA EAX,[ESP + 0x488]
//   XREF to: Stack[-0x50] (DATA)
// 0052201f: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x4a4] (DATA)
// 00522023: PUSH EAX
// 00522024: MOVSD.REP ES:EDI,ESI
// 00522026: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0052202b: MOV EDX,EAX
// 0052202d: LEA EAX,[ESP + 0x36c]
//   XREF to: Stack[-0x170] (DATA)
// 00522034: ADD ESP,0xc
// 00522037: CMP EAX,EDX
// 00522039: JZ 0x00522058
//   XREF to: 00522058 (CONDITIONAL_JUMP)
// 0052203b: MOV EAX,dword ptr [EDX]
// 0052203d: MOV dword ptr [ESP + 0x360],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 00522044: MOV EAX,dword ptr [EDX + 0x4]
// 00522047: MOV dword ptr [ESP + 0x364],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 0052204e: MOV EAX,dword ptr [EDX + 0x8]
// 00522051: MOV dword ptr [ESP + 0x368],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 00522058: LEA EAX,[ESP + 0x1ac]
//   Label: LAB_00522058
//   XREF to: Stack[-0x324] (DATA)
// 0052205f: PUSH EAX
// 00522060: LEA EAX,[EBX + 0xc]
// 00522063: PUSH EAX
// 00522064: LEA EAX,[ESP + 0x464]
//   XREF to: Stack[-0x74] (DATA)
// 0052206b: PUSH EAX
// 0052206c: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00522071: MOV EDX,EAX
// 00522073: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0xd4] (DATA)
// 0052207a: ADD ESP,0xc
// 0052207d: CMP EAX,EDX
// 0052207f: JZ 0x0052209e
//   XREF to: 0052209e (CONDITIONAL_JUMP)
// 00522081: MOV EAX,dword ptr [EDX]
// 00522083: MOV dword ptr [ESP + 0x3fc],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 0052208a: MOV EAX,dword ptr [EDX + 0x4]
// 0052208d: MOV dword ptr [ESP + 0x400],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 00522094: MOV EAX,dword ptr [EDX + 0x8]
// 00522097: MOV dword ptr [ESP + 0x404],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 0052209e: LEA EAX,[ESP + 0x1ac]
//   Label: LAB_0052209e
//   XREF to: Stack[-0x324] (DATA)
// 005220a5: PUSH EAX
// 005220a6: LEA EAX,[EBX + 0x18]
// 005220a9: PUSH EAX
// 005220aa: LEA EAX,[ESP + 0x398]
//   XREF to: Stack[-0x140] (DATA)
// 005220b1: PUSH EAX
// 005220b2: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005220b7: MOV EDX,EAX
// 005220b9: LEA EAX,[ESP + 0x438]
//   XREF to: Stack[-0xa4] (DATA)
// 005220c0: ADD ESP,0xc
// 005220c3: CMP EAX,EDX
// 005220c5: JZ 0x005220e4
//   XREF to: 005220e4 (CONDITIONAL_JUMP)
// 005220c7: MOV EAX,dword ptr [EDX]
// 005220c9: MOV dword ptr [ESP + 0x42c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005220d0: MOV EAX,dword ptr [EDX + 0x4]
// 005220d3: MOV dword ptr [ESP + 0x430],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005220da: MOV EAX,dword ptr [EDX + 0x8]
// 005220dd: MOV dword ptr [ESP + 0x434],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005220e4: LEA EAX,[ESP + 0x1ac]
//   Label: LAB_005220e4
//   XREF to: Stack[-0x324] (DATA)
// 005220eb: PUSH EAX
// 005220ec: LEA EAX,[EBX + 0x24]
// 005220ef: PUSH EAX
// 005220f0: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x188] (DATA)
// 005220f7: PUSH EAX
// 005220f8: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005220fd: MOV EDX,EAX
// 005220ff: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0xbc] (DATA)
// 00522106: ADD ESP,0xc
// 00522109: CMP EAX,EDX
// 0052210b: JZ 0x0052212a
//   XREF to: 0052212a (CONDITIONAL_JUMP)
// 0052210d: MOV EAX,dword ptr [EDX]
// 0052210f: MOV dword ptr [ESP + 0x414],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00522116: MOV EAX,dword ptr [EDX + 0x4]
// 00522119: MOV dword ptr [ESP + 0x418],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00522120: MOV EAX,dword ptr [EDX + 0x8]
// 00522123: MOV dword ptr [ESP + 0x41c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0052212a: LEA EAX,[ESP + 0x1ac]
//   Label: LAB_0052212a
//   XREF to: Stack[-0x324] (DATA)
// 00522131: PUSH EAX
// 00522132: LEA EAX,[EBX + 0x30]
// 00522135: PUSH EAX
// 00522136: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00522139: PUSH ECX
// 0052213a: LEA EAX,[ESP + 0x360]
//   XREF to: Stack[-0x17c] (DATA)
// 00522141: PUSH EAX
// 00522142: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00522147: ADD ESP,0xc
// 0052214a: PUSH EAX
// 0052214b: LEA EAX,[ESP + 0x3bc]
//   XREF to: Stack[-0x11c] (DATA)
// 00522152: PUSH EAX
// 00522153: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00522158: MOV EDX,EAX
// 0052215a: LEA EAX,[ESP + 0x444]
//   XREF to: Stack[-0x98] (DATA)
// 00522161: ADD ESP,0xc
// 00522164: CMP EAX,EDX
// 00522166: JZ 0x00522185
//   XREF to: 00522185 (CONDITIONAL_JUMP)
// 00522168: MOV EAX,dword ptr [EDX]
// 0052216a: MOV dword ptr [ESP + 0x438],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00522171: MOV EAX,dword ptr [EDX + 0x4]
// 00522174: MOV dword ptr [ESP + 0x43c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0052217b: MOV EAX,dword ptr [EDX + 0x8]
// 0052217e: MOV dword ptr [ESP + 0x440],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00522185: LEA EAX,[ESP + 0x42c]
//   Label: LAB_00522185
//   XREF to: Stack[-0xa4] (DATA)
// 0052218c: PUSH EAX
// 0052218d: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0xd4] (DATA)
// 00522194: PUSH EAX
// 00522195: LEA EAX,[ESP + 0x368]
//   XREF to: Stack[-0x170] (DATA)
// 0052219c: PUSH EAX
// 0052219d: LEA EAX,[EBX + 0x98]
// 005221a3: PUSH EAX
// 005221a4: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 005221a9: ADD ESP,0x10
// 005221ac: LEA EAX,[ESP + 0x3fc]
//   XREF to: Stack[-0xd4] (DATA)
// 005221b3: PUSH EAX
// 005221b4: LEA EAX,[ESP + 0x364]
//   XREF to: Stack[-0x170] (DATA)
// 005221bb: PUSH EAX
// 005221bc: LEA EAX,[ESP + 0x440]
//   XREF to: Stack[-0x98] (DATA)
// 005221c3: PUSH EAX
// 005221c4: LEA EAX,[EBX + 0xa8]
// 005221ca: PUSH EAX
// 005221cb: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 005221d0: ADD ESP,0x10
// 005221d3: LEA EAX,[ESP + 0x42c]
//   XREF to: Stack[-0xa4] (DATA)
// 005221da: PUSH EAX
// 005221db: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0xd4] (DATA)
// 005221e2: PUSH EAX
// 005221e3: LEA EAX,[ESP + 0x440]
//   XREF to: Stack[-0x98] (DATA)
// 005221ea: PUSH EAX
// 005221eb: LEA EAX,[EBX + 0xb8]
// 005221f1: PUSH EAX
// 005221f2: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 005221f7: ADD ESP,0x10
// 005221fa: LEA EAX,[ESP + 0x414]
//   XREF to: Stack[-0xbc] (DATA)
// 00522201: PUSH EAX
// 00522202: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0xa4] (DATA)
// 00522209: PUSH EAX
// 0052220a: LEA EAX,[ESP + 0x440]
//   XREF to: Stack[-0x98] (DATA)
// 00522211: PUSH EAX
// 00522212: LEA EAX,[EBX + 0xc8]
// 00522218: PUSH EAX
// 00522219: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 0052221e: ADD ESP,0x10
// 00522221: LEA EAX,[ESP + 0x360]
//   XREF to: Stack[-0x170] (DATA)
// 00522228: PUSH EAX
// 00522229: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0xbc] (DATA)
// 00522230: PUSH EAX
// 00522231: LEA EAX,[ESP + 0x440]
//   XREF to: Stack[-0x98] (DATA)
// 00522238: PUSH EAX
// 00522239: ADD EBX,0xd8
// 0052223f: PUSH EBX
// 00522240: CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
//   XREF to: 00520fe0 (UNCONDITIONAL_CALL)
// 00522245: ADD ESP,0x10
// 00522248: MOV ESP,EBP
// 0052224a: POP EBP
// 0052224b: POP EDI
// 0052224c: POP ESI
// 0052224d: POP EBX
// 0052224e: RET
// 0052224f: FLD float ptr [ESP + 0x20]
//   Label: LAB_0052224f
//   XREF to: Stack[-0x4b0] (READ)
// 00522253: FABS
// 00522255: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4ac] (READ)
// 00522259: FABS
// 0052225b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x4d0] (DATA)
// 0052225e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x4d0] (DATA)
// 00522261: FNSTSW AX
// 00522263: SAHF
// 00522264: JNC 0x00522295
//   XREF to: 00522295 (CONDITIONAL_JUMP)
// 00522266: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x4a8] (READ)
// 0052226a: FABS
// 0052226c: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x4d0] (DATA)
// 0052226f: FNSTSW AX
// 00522271: SAHF
// 00522272: JNC 0x00522295
//   XREF to: 00522295 (CONDITIONAL_JUMP)
// 00522274: XOR EDI,EDI
// 00522276: MOV EDX,0x3f800000
// 0052227b: MOV dword ptr [ESP + 0x370],EDI
//   XREF to: Stack[-0x160] (WRITE)
// 00522282: MOV dword ptr [ESP + 0x374],EDX
//   XREF to: Stack[-0x15c] (WRITE)
// 00522289: MOV dword ptr [ESP + 0x36c],EDI
//   XREF to: Stack[-0x164] (WRITE)
// 00522290: JMP 0x0052156b
//   XREF to: 0052156b (UNCONDITIONAL_JUMP)
// 00522295: MOV ECX,0x3f800000
//   Label: LAB_00522295
// 0052229a: XOR EDX,EDX
// 0052229c: MOV dword ptr [ESP + 0x370],ECX
//   XREF to: Stack[-0x160] (WRITE)
// 005222a3: MOV dword ptr [ESP + 0x374],EDX
//   XREF to: Stack[-0x15c] (WRITE)
// 005222aa: MOV dword ptr [ESP + 0x36c],EDX
//   XREF to: Stack[-0x164] (WRITE)
// 005222b1: JMP 0x0052156b
//   XREF to: 0052156b (UNCONDITIONAL_JUMP)
// 005222b6: XOR EAX,EAX
//   Label: LAB_005222b6
// 005222b8: MOV dword ptr [ESP + 0x340],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005222bf: MOV dword ptr [ESP + 0x33c],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005222c6: MOV dword ptr [ESP + 0x344],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005222cd: JMP 0x00521697
//   XREF to: 00521697 (UNCONDITIONAL_JUMP)
// 005222d2: XOR ESI,ESI
//   Label: LAB_005222d2
// 005222d4: MOV dword ptr [ESP + 0x370],ESI
//   XREF to: Stack[-0x160] (WRITE)
// 005222db: MOV dword ptr [ESP + 0x36c],ESI
//   XREF to: Stack[-0x164] (WRITE)
// 005222e2: MOV dword ptr [ESP + 0x374],ESI
//   XREF to: Stack[-0x15c] (WRITE)
// 005222e9: JMP 0x005217b4
//   XREF to: 005217b4 (UNCONDITIONAL_JUMP)
