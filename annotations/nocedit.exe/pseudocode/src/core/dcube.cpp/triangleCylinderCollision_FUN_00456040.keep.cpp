// Name: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
// Address: 00456040
// MANUAL RECONSTRUCTION
// Address Range: [[00456040, 004563f6]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

{
  float fVar6;
  float fVar7;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar8;
  uint uVar9;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34 [3];
  float fVar1;
  float fVar3;
  float fVar2;
  float fVar5;
  float fVar4;
  
  if ((triangle->triangle).normal.y <= (float)-0.34000000000000002) {
    fVar6 = (triangle->triangle).vertices[0]->x - cylinder_center->x;
    fVar8 = (triangle->triangle).vertices[0]->y;
    fVar2 = (triangle->triangle).vertices[0]->z - cylinder_center->z;
    local_4c.x = (triangle->triangle).vertices[1]->x - cylinder_center->x;
    local_4c.y = (triangle->triangle).vertices[1]->y;
    local_4c.z = (triangle->triangle).vertices[1]->z - cylinder_center->z;
    local_40.x = (triangle->triangle).vertices[2]->x - cylinder_center->x;
    local_40.y = (triangle->triangle).vertices[2]->y;
    local_40.z = (triangle->triangle).vertices[2]->z - cylinder_center->z;
    local_58.x = fVar6;
    local_58.y = fVar8;
    local_58.z = fVar2;
    if (fVar8 < local_4c.y) {
      local_58 = local_4c;
      local_70.x = fVar6;
      local_70.y = fVar8;
      local_70.z = fVar2;
      if (&local_4c != &local_70) {
        local_4c.x = fVar6;
        local_4c.y = fVar8;
        local_4c.z = fVar2;
      }
    }
    fVar5 = local_4c.z;
    fVar4 = local_4c.y;
    fVar3 = local_4c.x;
    fVar7 = local_58.z;
    fVar6 = local_58.y;
    fVar8 = local_58.x;
    if (local_4c.y < local_40.y) {
      local_7c = local_4c;
      local_4c = local_40;
      if (&local_40 != &local_7c) {
        local_40.x = fVar3;
        local_40.y = fVar4;
        local_40.z = fVar5;
      }
    }
    if (local_40.y <= cylinder_center->y) {
      if (local_58.y < local_4c.y) {
        local_64 = local_58;
        local_58 = local_4c;
        if (&local_4c != &local_64) {
          local_4c.x = fVar8;
          local_4c.y = fVar6;
          local_4c.z = fVar7;
        }
      }
      if (*out_height <= local_58.y) {
        if (local_58.x * local_58.x + local_58.z * local_58.z < cylinder_radius * cylinder_radius) {
          *out_height = local_58.y;
          return 1;
        }
        uVar6 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          (&local_58,&local_4c,cylinder_radius,out_height);
        uVar7 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          (&local_4c,&local_40,cylinder_radius,out_height);
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          (&local_40,&local_58,cylinder_radius,out_height);
        fVar8 = (triangle->triangle).normal.x;
        fVar1 = (triangle->triangle).normal.z;
        uVar9 = uVar6 | uVar7 | uVar8;
        fVar8 = SQRT(fVar1 * fVar1 + fVar8 * fVar8);
        if ((g_DownwardRayInitialized & 1) == 0) {
          g_DownwardRayInitialized = g_DownwardRayInitialized | 1;
          g_DownwardRayDirection.y = -100.0;
          g_DownwardRayDirection.x = 0.0;
          g_DownwardRayDirection.z = 0.0;
        }
        if (0.01 <= (double)fVar8) {
          fVar8 = cylinder_radius / fVar8;
          local_34[0].x = (triangle->triangle).normal.x * fVar8 + cylinder_center->x;
          local_34[0].z = fVar8 * (triangle->triangle).normal.z + cylinder_center->z;
          local_34[0].y = cylinder_center->y;
          fVar8 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                            (triangle,local_34,&g_DownwardRayDirection);
          if ((0.0 <= fVar8) &&
             (fVar8 = fVar8 * g_DownwardRayDirection.y + local_34[0].y, *out_height < fVar8)) {
            *out_height = fVar8;
            return 1;
          }
        }
        else if (uVar9 == 0) {
          fVar9 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                            (triangle,cylinder_center,&g_DownwardRayDirection);
          if (0.0 <= fVar9) {
            uVar9 = 1;
            *out_height = local_58.y;
          }
        }
        return uVar9;
      }
    }
  }
  return 0;
}
