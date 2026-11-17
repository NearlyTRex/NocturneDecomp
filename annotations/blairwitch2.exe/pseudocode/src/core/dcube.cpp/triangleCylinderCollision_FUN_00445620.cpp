// Name: core_dcube.cpp_triangleCylinderCollision_FUN_00445620
// Address: 00445620
// Address Range: [[00445620, 004459c5]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00445620(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00445620(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34 [3];
  
  if ((triangle->triangle).normal.y <= (float)-0.34000000000000002) {
    fVar1 = (triangle->triangle).vertices[0]->x - cylinder_center->x;
    fVar9 = (triangle->triangle).vertices[0]->y;
    fVar2 = (triangle->triangle).vertices[0]->z - cylinder_center->z;
    local_58.x = (triangle->triangle).vertices[1]->x - cylinder_center->x;
    local_58.y = (triangle->triangle).vertices[1]->y;
    local_58.z = (triangle->triangle).vertices[1]->z - cylinder_center->z;
    local_64.x = (triangle->triangle).vertices[2]->x - cylinder_center->x;
    local_64.y = (triangle->triangle).vertices[2]->y;
    local_64.z = (triangle->triangle).vertices[2]->z - cylinder_center->z;
    local_40.x = fVar1;
    local_40.y = fVar9;
    local_40.z = fVar2;
    if (fVar9 < local_58.y) {
      if (&local_40 != &local_58) {
        local_40.x = local_58.x;
        local_40.y = local_58.y;
        local_40.z = local_58.z;
      }
      local_34[0].x = fVar1;
      local_34[0].y = fVar9;
      local_34[0].z = fVar2;
      if (&local_58 != local_34) {
        local_58.x = fVar1;
        local_58.y = fVar9;
        local_58.z = fVar2;
      }
    }
    fVar5 = local_40.z;
    fVar4 = local_40.y;
    fVar3 = local_40.x;
    fVar2 = local_58.z;
    fVar1 = local_58.y;
    fVar9 = local_58.x;
    if (local_58.y < local_64.y) {
      local_4c.x = local_58.x;
      local_4c.y = local_58.y;
      local_4c.z = local_58.z;
      if (&local_58 != &local_64) {
        local_58.x = local_64.x;
        local_58.y = local_64.y;
        local_58.z = local_64.z;
      }
      if (&local_64 != &local_4c) {
        local_64.x = fVar9;
        local_64.y = fVar1;
        local_64.z = fVar2;
      }
    }
    if (local_64.y <= cylinder_center->y) {
      if (local_40.y < local_58.y) {
        local_7c.x = local_40.x;
        local_7c.y = local_40.y;
        local_7c.z = local_40.z;
        if (&local_40 != &local_58) {
          local_40.x = local_58.x;
          local_40.y = local_58.y;
          local_40.z = local_58.z;
        }
        if (&local_58 != &local_7c) {
          local_58.x = fVar3;
          local_58.y = fVar4;
          local_58.z = fVar5;
        }
      }
      if (*out_height <= local_40.y) {
        if (local_40.x * local_40.x + local_40.z * local_40.z < cylinder_radius * cylinder_radius) {
          *out_height = local_40.y;
          return 1;
        }
        uVar6 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_40,&local_58,cylinder_radius,out_height);
        uVar7 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_58,&local_64,cylinder_radius,out_height);
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_64,&local_40,cylinder_radius,out_height);
        fVar9 = (triangle->triangle).normal.x;
        fVar1 = (triangle->triangle).normal.z;
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(fVar1 * fVar1 + fVar9 * fVar9);
        if ((g_UCHAR_01510838 & 1) == 0) {
          g_UCHAR_01510838 = g_UCHAR_01510838 | 1;
          g_CVector3f_0151082c.x = 0.0;
          g_CVector3f_0151082c.z = 0.0;
          g_CVector3f_0151082c.y = -100.0;
        }
        if (0.01 <= (double)fVar9) {
          fVar9 = cylinder_radius / fVar9;
          local_70.x = (triangle->triangle).normal.x * fVar9 + cylinder_center->x;
          local_70.z = fVar9 * (triangle->triangle).normal.z + cylinder_center->z;
          local_70.y = cylinder_center->y;
          fVar9 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00444a40
                            (triangle,&local_70,&g_CVector3f_0151082c);
          if ((0.0 <= fVar9) &&
             (local_70.y = fVar9 * g_CVector3f_0151082c.y + local_70.y, *out_height < local_70.y)) {
            *out_height = local_70.y;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00444a40
                            (triangle,cylinder_center,&g_CVector3f_0151082c);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *out_height = local_40.y;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
