// Name: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
// Address: 00456040
// Address Range: [[00456040, 004563f6]]
// Convention: __cdecl
// Signature: uint core_dcube.cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_triangleCylinderCollision_FUN_00456040
          (CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,
          float *out_height)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  BADSPACEBASE *in_ESP;
  ulonglong local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  byte local_58 [12];
  byte local_4c [8];
  float local_44;
  float local_40;
  byte local_3c [20];
  CVector3f aCStack_28 [2];
  
  if ((triangle->normal).y <= (float)-0.34000000000000002) {
    fVar1 = triangle->vertices[0]->x - cylinder_center->x;
    fVar11 = triangle->vertices[0]->y;
    fVar2 = triangle->vertices[0]->z - cylinder_center->z;
    local_4c._0_4_ = triangle->vertices[1]->x - cylinder_center->x;
    local_4c._4_4_ = triangle->vertices[1]->y;
    local_44 = triangle->vertices[1]->z - cylinder_center->z;
    local_40 = triangle->vertices[2]->x - cylinder_center->x;
    local_3c._0_4_ = triangle->vertices[2]->y;
    local_3c._4_4_ = triangle->vertices[2]->z - cylinder_center->z;
    local_58._0_4_ = fVar1;
    local_58._4_4_ = fVar11;
    local_58._8_4_ = fVar2;
    if (fVar11 < (float)local_4c._4_4_) {
      if (local_58 != local_4c) {
        local_58._0_4_ = local_4c._0_4_;
        local_58._4_4_ = local_4c._4_4_;
        local_58._8_4_ = local_44;
      }
      local_70 = fVar1;
      local_6c = fVar11;
      local_68 = fVar2;
      if ((float *)local_4c != &local_70) {
        local_4c._0_4_ = fVar1;
        local_4c._4_4_ = fVar11;
        local_44 = fVar2;
      }
    }
    fVar11 = local_44;
    uVar7 = local_4c._4_4_;
    uVar6 = local_4c._0_4_;
    uVar5 = local_58._8_4_;
    uVar4 = local_58._4_4_;
    uVar3 = local_58._0_4_;
    if ((float)local_4c._4_4_ < (float)local_3c._0_4_) {
      local_7c = (double)CONCAT44 /* combine 2-byte values */(local_4c._4_4_,local_4c._0_4_);
      local_74 = local_44;
      if ((float *)local_4c != &local_40) {
        local_4c._0_4_ = local_40;
        local_4c._4_4_ = local_3c._0_4_;
        local_44 = (float)local_3c._4_4_;
      }
      if (&local_40 != (float *)&local_7c) {
        local_40 = (float)uVar6;
        local_3c._0_4_ = uVar7;
        local_3c._4_4_ = fVar11;
      }
    }
    if ((float)local_3c._0_4_ <= cylinder_center->y) {
      if ((float)local_58._4_4_ < (float)local_4c._4_4_) {
        local_64 = (float)local_58._0_4_;
        local_60 = (float)local_58._4_4_;
        local_5c = (float)local_58._8_4_;
        if (local_58 != local_4c) {
          local_58._0_4_ = local_4c._0_4_;
          local_58._4_4_ = local_4c._4_4_;
          local_58._8_4_ = local_44;
        }
        if ((float *)local_4c != &local_64) {
          local_4c._0_4_ = uVar3;
          local_4c._4_4_ = uVar4;
          local_44 = (float)uVar5;
        }
      }
      if (*out_height <= (float)local_58._4_4_) {
        if ((float)local_58._0_4_ * (float)local_58._0_4_ +
            (float)local_58._8_4_ * (float)local_58._8_4_ < cylinder_radius * cylinder_radius) {
          *out_height = (float)local_58._4_4_;
          return 1;
        }
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          ((CVector3f *)local_58,(CVector3f *)local_4c,cylinder_radius,out_height);
        uVar9 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          ((CVector3f *)(local_4c + 4),(CVector3f *)local_3c,cylinder_radius,
                           out_height);
        uVar10 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                           ((CVector3f *)(local_3c + 4),(CVector3f *)(local_58 + 8),cylinder_radius,
                            out_height);
        fVar11 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar10 = uVar8 | uVar9 | uVar10;
        fVar11 = SQRT(fVar1 * fVar1 + fVar11 * fVar11);
        local_7c = (double)fVar11;
        if ((g_DownwardRayInitialized & 1) == 0) {
          g_DownwardRayInitialized = g_DownwardRayInitialized | 1;
          g_DownwardRayDirection.y = -100.0;
          g_DownwardRayDirection.x = 0.0;
          g_DownwardRayDirection.z = 0.0;
        }
        if (0.01 <= local_7c) {
          fVar11 = cylinder_radius / fVar11;
          aCStack_28[0].x = (triangle->normal).x * fVar11 + cylinder_center->x;
          aCStack_28[0].z = fVar11 * (triangle->normal).z + cylinder_center->z;
          aCStack_28[0].y = cylinder_center->y;
          fVar11 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                             (triangle,aCStack_28,&g_DownwardRayDirection);
          if ((0.0 <= fVar11) &&
             (aCStack_28[0].z = fVar11 * g_DownwardRayDirection.y + aCStack_28[0].z,
             *out_height < aCStack_28[0].z)) {
            *out_height = aCStack_28[0].z;
            return 1;
          }
        }
        else if (uVar10 == 0) {
          fVar11 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                             (triangle,cylinder_center,&g_DownwardRayDirection);
          if (0.0 <= fVar11) {
            uVar10 = 1;
            *out_height = local_44;
          }
        }
        return uVar10;
      }
    }
  }
  return 0;
}
