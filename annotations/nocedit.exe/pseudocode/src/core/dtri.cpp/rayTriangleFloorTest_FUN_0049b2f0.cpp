// Name: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// Address: 0049b2f0
// Address Range: [[0049b2f0, 0049b690]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle *triangle,float x,float z,float *out_height)

#include "nocturne.h"

int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle *triangle,float x,float z,float *out_height)

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
  
  if ((triangle->normal).y <= (float)-0.34000000000000002) {
    fVar1 = (triangle->vertex1).x - *(float *)x;
    fVar9 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - *(float *)((int)x + 8);
    local_58.x = (triangle->vertex2).x - *(float *)x;
    local_58.y = (triangle->vertex2).y;
    local_58.z = (triangle->vertex2).z - *(float *)((int)x + 8);
    local_70.x = (triangle->vertex3).x - *(float *)x;
    local_70.y = (triangle->vertex3).y;
    local_70.z = (triangle->vertex3).z - *(float *)((int)x + 8);
    local_4c.x = fVar1;
    local_4c.y = fVar9;
    local_4c.z = fVar2;
    if (fVar9 < local_58.y) {
      if (&local_4c != &local_58) {
        local_4c.x = local_58.x;
        local_4c.y = local_58.y;
        local_4c.z = local_58.z;
      }
      local_40.x = fVar1;
      local_40.y = fVar9;
      local_40.z = fVar2;
      if (&local_58 != &local_40) {
        local_58.x = fVar1;
        local_58.y = fVar9;
        local_58.z = fVar2;
      }
    }
    fVar5 = local_4c.z;
    fVar4 = local_4c.y;
    fVar3 = local_4c.x;
    fVar2 = local_58.z;
    fVar1 = local_58.y;
    fVar9 = local_58.x;
    if (local_58.y < local_70.y) {
      local_34[0].x = local_58.x;
      local_34[0].y = local_58.y;
      local_34[0].z = local_58.z;
      if (&local_58 != &local_70) {
        local_58.x = local_70.x;
        local_58.y = local_70.y;
        local_58.z = local_70.z;
      }
      if (&local_70 != local_34) {
        local_70.x = fVar9;
        local_70.y = fVar1;
        local_70.z = fVar2;
      }
    }
    if (local_70.y <= *(float *)((int)x + 4)) {
      if (local_4c.y < local_58.y) {
        local_7c.x = local_4c.x;
        local_7c.y = local_4c.y;
        local_7c.z = local_4c.z;
        if (&local_4c != &local_58) {
          local_4c.x = local_58.x;
          local_4c.y = local_58.y;
          local_4c.z = local_58.z;
        }
        if (&local_58 != &local_7c) {
          local_58.x = fVar3;
          local_58.y = fVar4;
          local_58.z = fVar5;
        }
      }
      if (*out_height <= local_4c.y) {
        if (local_4c.x * local_4c.x + local_4c.z * local_4c.z < z * z) {
          *out_height = local_4c.y;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(&local_4c,&local_58,z,out_height);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(&local_58,&local_70,z,out_height);
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180(&local_70,&local_4c,z,out_height);
        fVar9 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(fVar1 * fVar1 + fVar9 * fVar9);
        if ((g_FloorCacheValid & 1) == 0) {
          g_FloorCacheValid = g_FloorCacheValid | 1;
          g_FloorRayDirection.y = -100.0;
          g_FloorRayDirection.x = 0.0;
          g_FloorRayDirection.z = 0.0;
        }
        if (0.01 <= (double)fVar9) {
          fVar9 = z / fVar9;
          local_64.x = (triangle->normal).x * fVar9 + *(float *)x;
          local_64.z = fVar9 * (triangle->normal).z + *(float *)((int)x + 8);
          local_64.y = *(float *)((int)x + 4);
          fVar9 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,&local_64,&g_FloorRayDirection);
          if ((0.0 <= fVar9) &&
             (local_64.y = fVar9 * g_FloorRayDirection.y + local_64.y, *out_height < local_64.y)) {
            *out_height = local_64.y;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,(CVector3f *)x,&g_FloorRayDirection);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *out_height = local_4c.y;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
