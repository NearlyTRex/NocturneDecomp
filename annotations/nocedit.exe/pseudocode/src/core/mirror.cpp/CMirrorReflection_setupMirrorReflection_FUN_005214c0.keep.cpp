// Name: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0
// Address: 005214c0
// MANUAL RECONSTRUCTION
// Address Range: [[005214c0, 005222ed] [03fc1b1e, 03fc1e10]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)

{
  float fVar2;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f local_4a4;
  CMatrix3x4f local_444;
  CMatrix3x4f local_414;
  CMatrix3x4f local_3e4;
  CMatrix3x4f local_354;
  CMatrix3x4f local_2f4;
  CMatrix3x4f local_2c4;
  CMatrix3x4f local_294;
  CMatrix3x4f local_264;
  CMatrix3x4f local_204;
  SClipPlane local_1a4;
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
  float fVar1;
  
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            (&local_1a4,&this_ptr->corner1,&this_ptr->corner2,&this_ptr->corner3);
  if ((ABS(local_1a4.A.f) <= ABS(local_1a4.B.f)) || (ABS(local_1a4.A.f) <= ABS(local_1a4.C.f))) {
    if ((ABS(local_1a4.B.f) <= ABS(local_1a4.A.f)) || (ABS(local_1a4.B.f) <= ABS(local_1a4.C.f))) {
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
  local_14c = local_1a4.A.f;
  local_148 = local_1a4.B.f;
  local_b0 = local_160 * local_1a4.C.f - local_15c * local_1a4.B.f;
  local_ac = local_15c * local_1a4.A.f - local_1a4.C.f * 0.0;
  local_a8 = local_1a4.B.f * 0.0 - local_160 * local_1a4.A.f;
  local_144 = local_1a4.C.f;
  local_194 = local_b0;
  local_190 = local_ac;
  local_18c = local_a8;
  fVar1 = SQRT(local_18c * local_18c + local_194 * local_194 + local_190 * local_190);
  if (fVar1 <= 0.0) {
    local_190 = 0.0;
    local_194 = 0.0;
    local_18c = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar1;
    local_194 = local_194 * fVar2;
    local_190 = local_190 * fVar2;
    local_18c = local_18c * fVar2;
  }
  local_158 = local_1a4.B.f * local_18c - local_1a4.C.f * local_190;
  local_154 = local_1a4.C.f * local_194 - local_1a4.A.f * local_18c;
  local_150 = local_1a4.A.f * local_190 - local_1a4.B.f * local_194;
  local_164 = local_158;
  local_160 = local_154;
  local_15c = local_150;
  fVar2 = SQRT(local_15c * local_15c + local_164 * local_164 + local_160 * local_160);
  if (fVar2 <= 0.0) {
    local_160 = 0.0;
    local_164 = 0.0;
    local_15c = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_164 = local_164 * fVar2;
    local_160 = local_160 * fVar2;
    local_15c = local_15c * fVar2;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_3e4);
  local_3e4.m[0].z = -(this_ptr->corner1).x;
  local_3e4.m[1].z = -(this_ptr->corner1).y;
  local_2c4.m[0].w = local_194;
  local_2c4.m[0].x = local_190;
  local_2c4.m[0].y = local_18c;
  local_2c4.m[1].w = local_164;
  local_2c4.m[1].x = local_160;
  local_2c4.m[1].y = local_15c;
  local_2c4.m[2].w = local_14c;
  local_3e4.m[2].z = -(this_ptr->corner1).z;
  local_2c4.m[2].x = local_148;
  local_2c4.m[2].y = local_144;
  local_2c4.m[0].z = 0.0;
  local_2c4.m[1].z = 0.0;
  local_2c4.m[2].z = 0.0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_354);
  local_354.m[2].y = -1.0;
  core_xform_cpp_inverse_FUN_005f6210(&local_3e4,&local_264);
  core_xform_cpp_inverse_FUN_005f6210(&local_2c4,&local_204);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_3e4,&local_2c4,&local_2f4);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2f4,&local_354,&local_414);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_414,&local_204,&local_444);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_444,&local_264,&local_294);
  this_ptr->mirror_transform_matrix = local_294;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_8c,camera_position,&this_ptr->mirror_transform_matrix);
  if ((CVector3f *)&this_ptr->camera_origin != pCVar2) {
    (this_ptr->camera_origin).x = (int)pCVar2->x;
    (this_ptr->camera_origin).y = (int)pCVar2->y;
    (this_ptr->camera_origin).z = (int)pCVar2->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->reflection_matrix,camera_rotation);
  local_128.x = (this_ptr->reflection_matrix).m[0].y;
  local_128.y = (this_ptr->reflection_matrix).m[1].y;
  local_128.z = (this_ptr->reflection_matrix).m[2].y;
  local_e0.x = (this_ptr->reflection_matrix).m[0].x;
  local_e0.y = (this_ptr->reflection_matrix).m[1].x;
  local_e0.z = (this_ptr->reflection_matrix).m[2].x;
  local_5c.x = (this_ptr->reflection_matrix).m[0].z;
  local_5c.y = (this_ptr->reflection_matrix).m[1].z;
  local_5c.z = (this_ptr->reflection_matrix).m[2].z;
  local_104.x = local_128.x + camera_position->x;
  local_104.y = local_128.y + camera_position->y;
  local_104.z = local_128.z + camera_position->z;
  local_128 = local_104;
  local_c8.x = local_e0.x + camera_position->x;
  local_c8.y = local_e0.y + camera_position->y;
  local_c8.z = local_e0.z + camera_position->z;
  local_e0 = local_c8;
  local_ec.x = local_5c.x + camera_position->x;
  local_ec.y = local_5c.y + camera_position->y;
  local_ec.z = local_5c.z + camera_position->z;
  local_5c = local_ec;
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_80,&local_128,&this_ptr->mirror_transform_matrix);
  if (&local_128 != pCVar3) {
    local_128 = *pCVar3;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_110,&local_e0,&this_ptr->mirror_transform_matrix);
  if (&local_e0 != pCVar3) {
    local_e0 = *pCVar3;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_68,&local_5c,&this_ptr->mirror_transform_matrix);
  if (&local_5c != pCVar3) {
    local_5c = *pCVar3;
  }
  local_f8.x = local_128.x - (float)(this_ptr->camera_origin).x;
  local_f8.y = local_128.y - (float)(this_ptr->camera_origin).y;
  local_f8.z = local_128.z - (float)(this_ptr->camera_origin).z;
  local_128 = local_f8;
  local_44.x = local_e0.x - (float)(this_ptr->camera_origin).x;
  local_44.y = local_e0.y - (float)(this_ptr->camera_origin).y;
  local_44.z = local_e0.z - (float)(this_ptr->camera_origin).z;
  local_e0 = local_44;
  local_134.x = local_5c.x - (float)(this_ptr->camera_origin).x;
  local_134.y = local_5c.y - (float)(this_ptr->camera_origin).y;
  local_134.z = local_5c.z - (float)(this_ptr->camera_origin).z;
  local_5c = local_134;
  (this_ptr->reflection_matrix).m[0].x = local_e0.x;
  (this_ptr->reflection_matrix).m[1].x = local_e0.y;
  (this_ptr->reflection_matrix).m[2].x = local_e0.z;
  (this_ptr->reflection_matrix).m[0].y = local_128.x;
  (this_ptr->reflection_matrix).m[1].y = local_128.y;
  (this_ptr->reflection_matrix).m[2].y = local_128.z;
  (this_ptr->reflection_matrix).m[0].z = local_5c.x;
  (this_ptr->reflection_matrix).m[1].z = local_5c.y;
  (this_ptr->reflection_matrix).m[2].z = local_5c.z;
  this_ptr->projection_scale = projection_scale;
  core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480(this_ptr);
  core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_3e4);
  local_3e4.m[0].z = -(float)(this_ptr->camera_origin).x;
  local_3e4.m[1].z = -(float)(this_ptr->camera_origin).y;
  local_3e4.m[2].z = -(float)(this_ptr->camera_origin).z;
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
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_50,&this_ptr->corner1,&local_4a4);
  if (&local_170 != pCVar3) {
    local_170 = *pCVar3;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_74,&this_ptr->corner2,&local_4a4);
  if (&local_d4 != pCVar3) {
    local_d4 = *pCVar3;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_140,&this_ptr->corner3,&local_4a4);
  if (&local_a4 != pCVar3) {
    local_a4 = *pCVar3;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_188,&this_ptr->corner4,&local_4a4);
  if (&local_bc != pCVar3) {
    local_bc = *pCVar3;
  }
  pCVar9 = &local_4a4;
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_17c,camera_position,&this_ptr->mirror_transform_matrix);
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_11c,pCVar3,pCVar9);
  if (&local_98 != pCVar3) {
    local_98 = *pCVar3;
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&this_ptr[1].corner1.y,&local_170,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&this_ptr[1].corner2.z,&local_98,&local_170,&local_d4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&this_ptr[1].corner4,&local_98,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[0].x,&local_98,&local_a4,&local_bc
            );
  core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
            ((SClipPlane *)&this_ptr[1].mirror_transform_matrix.m[1].x,&local_98,&local_bc,
             &local_170);
  return;
}
