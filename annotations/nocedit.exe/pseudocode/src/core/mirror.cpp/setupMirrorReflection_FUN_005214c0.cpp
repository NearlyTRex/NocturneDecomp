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
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  byte bVar9;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  double in_stack_fffffb30;
  CMatrix3x4f *matrix_b;
  uint local_4a4 [14];
  CMatrix3x4f CStack_46c;
  uint auStack_438 [13];
  float afStack_404 [8];
  byte local_3e4 [12];
  float local_3d8;
  float local_3c8;
  float local_3b8;
  uint auStack_3b0 [12];
  byte auStack_380 [48];
  byte auStack_350 [100];
  uint auStack_2ec [10];
  byte local_2c4 [8];
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294 [12];
  float local_264 [12];
  CMatrix3x4f local_234;
  uint auStack_200 [12];
  uint auStack_1d0 [2];
  byte auStack_1c8 [36];
  char local_1a4;
  float local_1a0;
  float local_19c;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f local_188;
  CVector3f local_17c;
  byte local_170 [8];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  CVector3f local_140;
  float local_134;
  float local_130;
  float local_12c;
  byte local_128 [8];
  float local_120;
  byte auStack_118 [20];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  byte local_e0 [8];
  float local_d8;
  byte local_d4 [8];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  byte local_bc [8];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_a4 [8];
  float local_9c;
  byte local_98 [12];
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  byte local_5c [8];
  float local_54;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&local_1a4,&reflection->corner1,&reflection->corner2,&reflection->corner3
            );
  if ((ABS(_local_1a4) <= ABS(local_1a0)) || (ABS(_local_1a4) <= ABS(local_19c))) {
    fVar1 = ABS(local_1a0);
    in_stack_fffffb30 = (double)fVar1;
    if ((fVar1 <= ABS(_local_1a4)) || (fVar1 <= ABS(local_19c))) {
      local_160 = 1.0;
      local_15c = 0.0;
    }
    else {
      local_160 = 0.0;
      local_15c = 1.0;
    }
  }
  else {
    local_160 = 1.0;
    local_15c = 0.0;
  }
  local_164 = 0.0;
  local_14c = _local_1a4;
  local_148 = local_1a0;
  local_b0 = local_160 * local_19c - local_15c * local_1a0;
  local_ac = local_15c * _local_1a4 - local_19c * 0.0;
  local_a8 = local_1a0 * 0.0 - local_160 * _local_1a4;
  local_144 = local_19c;
  if (&local_194 != &local_b0) {
    local_194 = local_b0;
    local_190 = local_ac;
    local_18c = local_a8;
  }
  fVar1 = SQRT(local_18c * local_18c + local_194 * local_194 + local_190 * local_190);
  if (fVar1 <= 0.0) {
    local_190 = 0.0;
    local_194 = 0.0;
    local_18c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_194 = local_194 * fVar1;
    local_190 = local_190 * fVar1;
    local_18c = local_18c * fVar1;
  }
  local_158 = local_1a0 * local_18c - local_19c * local_190;
  local_154 = local_19c * local_194 - _local_1a4 * local_18c;
  local_150 = _local_1a4 * local_190 - local_1a0 * local_194;
  if (&local_164 != &local_158) {
    local_164 = local_158;
    local_160 = local_154;
    local_15c = local_150;
  }
  fVar1 = SQRT(local_15c * local_15c + local_164 * local_164 + local_160 * local_160);
  if (fVar1 <= 0.0) {
    local_160 = 0.0;
    local_164 = 0.0;
    local_15c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_164 = local_164 * fVar1;
    local_160 = local_160 * fVar1;
    local_15c = local_15c * fVar1;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)local_3e4);
  local_3d8 = -(reflection->corner1).x;
  local_3c8 = -(reflection->corner1).y;
  local_2c4._0_4_ = local_194;
  local_2c4._4_4_ = local_190;
  local_2bc = local_18c;
  local_2b4 = local_164;
  local_2b0 = local_160;
  local_2ac = local_15c;
  local_2a4 = local_14c;
  local_3b8 = -(reflection->corner1).z;
  local_2a0 = local_148;
  local_29c = local_144;
  local_2b8 = 0.0;
  local_2a8 = 0.0;
  local_298 = 0.0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)(auStack_380 + 0x2c));
  auStack_350._36_4_ = -1.0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_3e4,SUB84 /* extract 2-byte value */(in_stack_fffffb30,0));
  pfVar4 = local_264;
  pfVar6 = &local_234.m[0].x;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_2c4,&local_234);
  puVar5 = auStack_200;
  puVar8 = auStack_3b0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_3e4 + 4),(CMatrix3x4f *)(local_2c4 + 4),
             (CMatrix3x4f *)auStack_350);
  puVar5 = auStack_2ec;
  puVar8 = auStack_1d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_1c8,SUB84 /* extract 2-byte value */(in_stack_fffffb30,0),
             (CMatrix3x4f *)((ulonglong)in_stack_fffffb30 >> 0x20));
  pfVar4 = afStack_404;
  pfVar6 = &CStack_46c.m[0].x;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_46c,SUB84 /* extract 2-byte value */(in_stack_fffffb30,0),
             (CMatrix3x4f *)((ulonglong)in_stack_fffffb30 >> 0x20));
  puVar5 = auStack_438;
  puVar8 = (uint *)(auStack_380 + 4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_380,SUB84 /* extract 2-byte value */(in_stack_fffffb30,0),
             (CMatrix3x4f *)((ulonglong)in_stack_fffffb30 >> 0x20));
  matrix_b = (CMatrix3x4f *)((ulonglong)in_stack_fffffb30 >> 0x20);
  pfVar4 = local_294;
  pCVar7 = &reflection->mirror_transform_matrix;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_8c,in_stack_00000008,&reflection->mirror_transform_matrix);
  if ((CVector3f *)&reflection->camera_origin != pCVar2) {
    (reflection->camera_origin).x = (int)pCVar2->x;
    (reflection->camera_origin).y = (int)pCVar2->y;
    (reflection->camera_origin).z = (int)pCVar2->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&reflection->reflection_matrix,in_stack_0000000c);
  local_38 = (reflection->reflection_matrix).m[0].y;
  local_18 = (reflection->reflection_matrix).m[1].y;
  local_34 = (reflection->reflection_matrix).m[2].y;
  local_30 = (reflection->reflection_matrix).m[0].x;
  local_2c = (reflection->reflection_matrix).m[1].x;
  local_28 = (reflection->reflection_matrix).m[2].x;
  local_24 = (reflection->reflection_matrix).m[0].z;
  local_20 = (reflection->reflection_matrix).m[1].z;
  local_1c = (reflection->reflection_matrix).m[2].z;
  local_104 = local_38 + in_stack_00000008->x;
  local_100 = local_18 + in_stack_00000008->y;
  local_fc = local_34 + in_stack_00000008->z;
  local_128._0_4_ = local_38;
  local_128._4_4_ = local_18;
  local_120 = local_34;
  if ((float *)local_128 != &local_104) {
    local_128._0_4_ = local_104;
    local_128._4_4_ = local_100;
    local_120 = local_fc;
  }
  local_c8 = local_30 + in_stack_00000008->x;
  local_c4 = local_2c + in_stack_00000008->y;
  local_c0 = local_28 + in_stack_00000008->z;
  local_e0._0_4_ = local_30;
  local_e0._4_4_ = local_2c;
  local_d8 = local_28;
  if ((float *)local_e0 != &local_c8) {
    local_e0._0_4_ = local_c8;
    local_e0._4_4_ = local_c4;
    local_d8 = local_c0;
  }
  local_ec = local_24 + in_stack_00000008->x;
  local_e8 = local_20 + in_stack_00000008->y;
  local_e4 = local_1c + in_stack_00000008->z;
  local_5c._0_4_ = local_24;
  local_5c._4_4_ = local_20;
  local_54 = local_1c;
  if ((float *)local_5c != &local_ec) {
    local_5c._0_4_ = local_ec;
    local_5c._4_4_ = local_e8;
    local_54 = local_e4;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_80,(CVector3f *)local_128,&reflection->mirror_transform_matrix);
  if ((CVector3f *)(local_128 + 4) != pCVar2) {
    local_128._0_4_ = pCVar2->x;
    local_128._4_4_ = pCVar2->y;
    local_120 = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     ((CVector3f *)(auStack_118 + 8),(CVector3f *)local_e0,
                      &reflection->mirror_transform_matrix);
  if ((CVector3f *)(local_e0 + 4) != pCVar2) {
    local_e0._0_4_ = pCVar2->x;
    local_e0._4_4_ = pCVar2->y;
    local_d8 = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_68,(CVector3f *)local_5c,&reflection->mirror_transform_matrix);
  if ((CVector3f *)(local_5c + 4) != pCVar2) {
    local_5c._0_4_ = pCVar2->x;
    local_5c._4_4_ = pCVar2->y;
    local_54 = pCVar2->z;
  }
  local_f8 = (float)local_128._0_4_ - (float)(reflection->camera_origin).x;
  local_f4 = (float)local_128._4_4_ - (float)(reflection->camera_origin).y;
  local_f0 = local_120 - (float)(reflection->camera_origin).z;
  if ((float *)local_128 != &local_f8) {
    local_128._0_4_ = local_f8;
    local_128._4_4_ = local_f4;
    local_120 = local_f0;
  }
  local_44 = (float)local_e0._0_4_ - (float)(reflection->camera_origin).x;
  local_40 = (float)local_e0._4_4_ - (float)(reflection->camera_origin).y;
  local_3c = local_d8 - (float)(reflection->camera_origin).z;
  if ((float *)local_e0 != &local_44) {
    local_e0._0_4_ = local_44;
    local_e0._4_4_ = local_40;
    local_d8 = local_3c;
  }
  local_134 = (float)local_5c._0_4_ - (float)(reflection->camera_origin).x;
  local_130 = (float)local_5c._4_4_ - (float)(reflection->camera_origin).y;
  local_12c = local_54 - (float)(reflection->camera_origin).z;
  if ((float *)local_5c != &local_134) {
    local_5c._0_4_ = local_134;
    local_5c._4_4_ = local_130;
    local_54 = local_12c;
  }
  (reflection->reflection_matrix).m[0].x = (float)local_e0._0_4_;
  (reflection->reflection_matrix).m[1].x = (float)local_e0._4_4_;
  (reflection->reflection_matrix).m[2].x = local_d8;
  (reflection->reflection_matrix).m[0].y = (float)local_128._0_4_;
  (reflection->reflection_matrix).m[1].y = (float)local_128._4_4_;
  (reflection->reflection_matrix).m[2].y = local_120;
  (reflection->reflection_matrix).m[0].z = (float)local_5c._0_4_;
  (reflection->reflection_matrix).m[1].z = (float)local_5c._4_4_;
  (reflection->reflection_matrix).m[2].z = local_54;
  reflection->projection_scale = in_stack_00000010;
  core_mirror_cpp_setupMirrorCamera_FUN_00521480(reflection);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)local_3e4);
  local_3d8 = -(float)(reflection->camera_origin).x;
  local_3c8 = -(float)(reflection->camera_origin).y;
  local_3b8 = -(float)(reflection->camera_origin).z;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)(local_2c4 + 4));
  local_2c4._4_4_ = (float)g_TransformMatrix.m[0].x * (float)1.52587890625e-05;
  local_2b0 = (float)g_TransformMatrix.m[0].y * (float)1.52587890625e-05;
  local_2a0 = (float)g_TransformMatrix.m[0].z * (float)1.52587890625e-05;
  local_2bc = (float)g_TransformMatrix.m[1].x * (float)1.52587890625e-05;
  local_2ac = (float)g_TransformMatrix.m[1].y * (float)1.52587890625e-05;
  local_29c = (float)g_TransformMatrix.m[1].z * (float)1.52587890625e-05;
  local_2b8 = (float)g_TransformMatrix.m[2].x * (float)1.52587890625e-05;
  local_2a8 = (float)g_TransformMatrix.m[2].y * (float)1.52587890625e-05;
  local_298 = (float)g_TransformMatrix.m[2].z * (float)1.52587890625e-05;
  pCVar7 = (CMatrix3x4f *)(local_2c4 + 4);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10((CMatrix3x4f *)(local_3e4 + 4),pCVar7,matrix_b);
  puVar5 = local_4a4;
  puVar8 = (uint *)(auStack_350 + 0x2c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_50,&reflection->corner1,(CMatrix3x4f *)(auStack_350 + 0x2c));
  if ((CVector3f *)(local_170 + 4) != pCVar2) {
    local_170._0_4_ = pCVar2->x;
    local_170._4_4_ = pCVar2->y;
    local_168 = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_74,&reflection->corner2,(CMatrix3x4f *)(auStack_350 + 0x2c));
  if ((CVector3f *)(local_d4 + 4) != pCVar2) {
    local_d4._0_4_ = pCVar2->x;
    local_d4._4_4_ = pCVar2->y;
    local_cc = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_140,&reflection->corner3,(CMatrix3x4f *)(auStack_350 + 0x2c));
  if ((CVector3f *)(local_a4 + 4) != pCVar2) {
    local_a4._0_4_ = pCVar2->x;
    local_a4._4_4_ = pCVar2->y;
    local_9c = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_188,&reflection->corner4,(CMatrix3x4f *)(auStack_350 + 0x2c));
  if ((CVector3f *)(local_bc + 4) != pCVar2) {
    local_bc._0_4_ = pCVar2->x;
    local_bc._4_4_ = pCVar2->y;
    local_b4 = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_17c,in_stack_00000008,&reflection->mirror_transform_matrix);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0((CVector3f *)auStack_118,pCVar2,pCVar7);
  if ((CVector3f *)(local_98 + 8) != pCVar2) {
    local_98._0_4_ = pCVar2->x;
    local_98._4_4_ = pCVar2->y;
    local_98._8_4_ = pCVar2->z;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner1.y,(CVector3f *)local_170,(CVector3f *)local_d4,
             (CVector3f *)local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner2.z,(CVector3f *)local_98,(CVector3f *)local_170,
             (CVector3f *)local_d4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner4,(CVector3f *)local_98,(CVector3f *)local_d4,
             (CVector3f *)local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[0].x,(CVector3f *)local_98,
             (CVector3f *)local_a4,(CVector3f *)local_bc);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[1].x,(CVector3f *)local_98,
             (CVector3f *)local_bc,(CVector3f *)local_170);
  return;
}
