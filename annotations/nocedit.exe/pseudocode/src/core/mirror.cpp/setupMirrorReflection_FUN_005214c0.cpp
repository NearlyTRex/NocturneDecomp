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
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  CMatrix3x4f local_4a4;
  CMatrix3x4f local_474;
  CMatrix3x4f local_444;
  CMatrix3x4f local_414;
  CMatrix3x4f local_3e4;
  CMatrix3x4f local_3b4;
  CMatrix3x4f local_384;
  CMatrix3x4f local_354;
  CMatrix3x4f local_324;
  CMatrix3x4f local_2f4;
  CMatrix3x4f local_2c4;
  CMatrix3x4f local_294;
  CMatrix3x4f local_264;
  CMatrix3x4f local_234;
  CMatrix3x4f local_204;
  CMatrix3x4f local_1d4;
  char local_1a4;
  float local_1a0;
  float local_19c;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f local_188;
  CVector3f local_17c;
  CVector3f local_170;
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
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
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
    if ((ABS(local_1a0) <= ABS(_local_1a4)) || (ABS(local_1a0) <= ABS(local_19c))) {
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
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_3e4);
  local_3e4.m[0].z = -(reflection->corner1).x;
  local_3e4.m[1].z = -(reflection->corner1).y;
  local_2c4.m[0].w = local_194;
  local_2c4.m[0].x = local_190;
  local_2c4.m[0].y = local_18c;
  local_2c4.m[1].w = local_164;
  local_2c4.m[1].x = local_160;
  local_2c4.m[1].y = local_15c;
  local_2c4.m[2].w = local_14c;
  local_3e4.m[2].z = -(reflection->corner1).z;
  local_2c4.m[2].x = local_148;
  local_2c4.m[2].y = local_144;
  local_2c4.m[0].z = 0.0;
  local_2c4.m[1].z = 0.0;
  local_2c4.m[2].z = 0.0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_354);
  local_354.m[2].y = -1.0;
  core_xform_cpp_inverse_FUN_005f6210(&local_3e4,&local_264);
  pCVar7 = &local_234;
  pCVar6 = &local_264;
  pCVar5 = &local_234;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005f6210(&local_2c4,&local_204);
  pCVar6 = &local_3b4;
  pCVar5 = &local_354;
  pCVar4 = &local_204;
  pCVar8 = &local_3b4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar8->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_3e4,&local_2c4,&local_2f4);
  pCVar4 = &local_2f4;
  pCVar8 = &local_1d4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar8->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1d4,pCVar5,&local_414);
  pCVar5 = &local_414;
  pCVar4 = &local_474;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_474,pCVar6,&local_444);
  pCVar6 = &local_444;
  pCVar5 = &local_384;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_384,pCVar7,&local_294);
  pCVar7 = &local_294;
  pCVar6 = &reflection->mirror_transform_matrix;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = pCVar7->m[0].w;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
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
  local_104.x = local_38 + in_stack_00000008->x;
  local_104.y = local_18 + in_stack_00000008->y;
  local_104.z = local_34 + in_stack_00000008->z;
  local_128.x = local_38;
  local_128.y = local_18;
  local_128.z = local_34;
  if (&local_128 != &local_104) {
    local_128.x = local_104.x;
    local_128.y = local_104.y;
    local_128.z = local_104.z;
  }
  local_c8.x = local_30 + in_stack_00000008->x;
  local_c8.y = local_2c + in_stack_00000008->y;
  local_c8.z = local_28 + in_stack_00000008->z;
  local_e0.x = local_30;
  local_e0.y = local_2c;
  local_e0.z = local_28;
  if (&local_e0 != &local_c8) {
    local_e0.x = local_c8.x;
    local_e0.y = local_c8.y;
    local_e0.z = local_c8.z;
  }
  local_ec.x = local_24 + in_stack_00000008->x;
  local_ec.y = local_20 + in_stack_00000008->y;
  local_ec.z = local_1c + in_stack_00000008->z;
  local_5c.x = local_24;
  local_5c.y = local_20;
  local_5c.z = local_1c;
  if (&local_5c != &local_ec) {
    local_5c.x = local_ec.x;
    local_5c.y = local_ec.y;
    local_5c.z = local_ec.z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_80,&local_128,&reflection->mirror_transform_matrix);
  if (&local_128 != pCVar2) {
    local_128.x = pCVar2->x;
    local_128.y = pCVar2->y;
    local_128.z = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_110,&local_e0,&reflection->mirror_transform_matrix);
  if (&local_e0 != pCVar2) {
    local_e0.x = pCVar2->x;
    local_e0.y = pCVar2->y;
    local_e0.z = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_68,&local_5c,&reflection->mirror_transform_matrix);
  if (&local_5c != pCVar2) {
    local_5c.x = pCVar2->x;
    local_5c.y = pCVar2->y;
    local_5c.z = pCVar2->z;
  }
  local_f8.x = local_128.x - (float)(reflection->camera_origin).x;
  local_f8.y = local_128.y - (float)(reflection->camera_origin).y;
  local_f8.z = local_128.z - (float)(reflection->camera_origin).z;
  if (&local_128 != &local_f8) {
    local_128.x = local_f8.x;
    local_128.y = local_f8.y;
    local_128.z = local_f8.z;
  }
  local_44.x = local_e0.x - (float)(reflection->camera_origin).x;
  local_44.y = local_e0.y - (float)(reflection->camera_origin).y;
  local_44.z = local_e0.z - (float)(reflection->camera_origin).z;
  if (&local_e0 != &local_44) {
    local_e0.x = local_44.x;
    local_e0.y = local_44.y;
    local_e0.z = local_44.z;
  }
  local_134.x = local_5c.x - (float)(reflection->camera_origin).x;
  local_134.y = local_5c.y - (float)(reflection->camera_origin).y;
  local_134.z = local_5c.z - (float)(reflection->camera_origin).z;
  if (&local_5c != &local_134) {
    local_5c.x = local_134.x;
    local_5c.y = local_134.y;
    local_5c.z = local_134.z;
  }
  (reflection->reflection_matrix).m[0].x = local_e0.x;
  (reflection->reflection_matrix).m[1].x = local_e0.y;
  (reflection->reflection_matrix).m[2].x = local_e0.z;
  (reflection->reflection_matrix).m[0].y = local_128.x;
  (reflection->reflection_matrix).m[1].y = local_128.y;
  (reflection->reflection_matrix).m[2].y = local_128.z;
  (reflection->reflection_matrix).m[0].z = local_5c.x;
  (reflection->reflection_matrix).m[1].z = local_5c.y;
  (reflection->reflection_matrix).m[2].z = local_5c.z;
  reflection->projection_scale = in_stack_00000010;
  core_mirror_cpp_setupMirrorCamera_FUN_00521480(reflection);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_3e4);
  local_3e4.m[0].z = -(float)(reflection->camera_origin).x;
  local_3e4.m[1].z = -(float)(reflection->camera_origin).y;
  local_3e4.m[2].z = -(float)(reflection->camera_origin).z;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_2c4);
  local_2c4.m[0].w = (float)g_TransformMatrix.m[0].x * (float)1.52587890625e-05;
  local_2c4.m[1].w = (float)g_TransformMatrix.m[0].y * (float)1.52587890625e-05;
  local_2c4.m[2].w = (float)g_TransformMatrix.m[0].z * (float)1.52587890625e-05;
  local_2c4.m[0].x = (float)g_TransformMatrix.m[1].x * (float)1.52587890625e-05;
  local_2c4.m[1].x = (float)g_TransformMatrix.m[1].y * (float)1.52587890625e-05;
  local_2c4.m[2].x = (float)g_TransformMatrix.m[1].z * (float)1.52587890625e-05;
  local_2c4.m[0].y = (float)g_TransformMatrix.m[2].x * (float)1.52587890625e-05;
  local_2c4.m[1].y = (float)g_TransformMatrix.m[2].y * (float)1.52587890625e-05;
  local_2c4.m[2].y = (float)g_TransformMatrix.m[2].z * (float)1.52587890625e-05;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_3e4,&local_2c4,&local_4a4);
  pCVar7 = &local_4a4;
  pCVar6 = &local_324;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = pCVar7->m[0].w;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_50,&reflection->corner1,&local_324)
  ;
  if (&local_170 != pCVar2) {
    local_170.x = pCVar2->x;
    local_170.y = pCVar2->y;
    local_170.z = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_74,&reflection->corner2,&local_324)
  ;
  if (&local_d4 != pCVar2) {
    local_d4.x = pCVar2->x;
    local_d4.y = pCVar2->y;
    local_d4.z = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_140,&reflection->corner3,&local_324);
  if (&local_a4 != pCVar2) {
    local_a4.x = pCVar2->x;
    local_a4.y = pCVar2->y;
    local_a4.z = pCVar2->z;
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_188,&reflection->corner4,&local_324);
  if (&local_bc != pCVar2) {
    local_bc.x = pCVar2->x;
    local_bc.y = pCVar2->y;
    local_bc.z = pCVar2->z;
  }
  pCVar7 = &local_324;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_17c,in_stack_00000008,&reflection->mirror_transform_matrix);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_11c,pCVar2,pCVar7);
  if (&local_98 != pCVar2) {
    local_98.x = pCVar2->x;
    local_98.y = pCVar2->y;
    local_98.z = pCVar2->z;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner1.y,&local_170,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner2.z,&local_98,&local_170,&local_d4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].corner4,&local_98,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[0].x,&local_98,&local_a4,
             &local_bc);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&reflection[1].mirror_transform_matrix.m[1].x,&local_98,&local_bc,
             &local_170);
  return;
}
