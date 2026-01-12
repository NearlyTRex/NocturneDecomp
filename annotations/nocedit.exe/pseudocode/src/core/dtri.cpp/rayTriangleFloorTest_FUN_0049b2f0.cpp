// Name: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// Address: 0049b2f0
// Address Range: [[0049b2f0, 0049b690]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)

#include "nocturne.h"

int __cdecl
core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
          (CDemonTriangle *triangle,float x,float z,float *out_height)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  BADSPACEBASE *in_ESP;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  byte local_60 [12];
  float local_54;
  float local_50;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34 [3];
  
  if ((triangle->normal).y <= (float)-0.34000000000000002) {
    fVar1 = (triangle->vertex1).x - *(float *)x;
    fVar9 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - *(float *)((int)x + 8);
    local_60._8_4_ = (triangle->vertex2).x - *(float *)x;
    local_54 = (triangle->vertex2).y;
    local_50 = (triangle->vertex2).z - *(float *)((int)x + 8);
    local_70.x = (triangle->vertex3).x - *(float *)x;
    local_70.y = (triangle->vertex3).y;
    local_70.z = (triangle->vertex3).z - *(float *)((int)x + 8);
    local_4c.x = fVar1;
    local_4c.y = fVar9;
    local_4c.z = fVar2;
    if (fVar9 < local_54) {
      if (&local_4c != (CVector3f *)(local_60 + 8)) {
        local_4c.x = (float)local_60._8_4_;
        local_4c.y = local_54;
        local_4c.z = local_50;
      }
      local_40 = fVar1;
      local_3c = fVar9;
      local_38 = fVar2;
      if ((float *)(local_60 + 8) != &local_40) {
        local_60._8_4_ = fVar1;
        local_54 = fVar9;
        local_50 = fVar2;
      }
    }
    fVar5 = local_4c.z;
    fVar4 = local_4c.y;
    fVar2 = local_4c.x;
    fVar1 = local_50;
    fVar9 = local_54;
    uVar3 = local_60._8_4_;
    if (local_54 < local_70.y) {
      local_34[0].x = (float)local_60._8_4_;
      local_34[0].y = local_54;
      local_34[0].z = local_50;
      if ((CVector3f *)(local_60 + 8) != &local_70) {
        local_60._8_4_ = local_70.x;
        local_54 = local_70.y;
        local_50 = local_70.z;
      }
      if (&local_70 != local_34) {
        local_70.x = (float)uVar3;
        local_70.y = fVar9;
        local_70.z = fVar1;
      }
    }
    if (local_70.y <= *(float *)((int)x + 4)) {
      if (local_4c.y < local_54) {
        local_7c = local_4c.x;
        local_78 = local_4c.y;
        local_74 = local_4c.z;
        if (&local_4c != (CVector3f *)(local_60 + 8)) {
          local_4c.x = (float)local_60._8_4_;
          local_4c.y = local_54;
          local_4c.z = local_50;
        }
        if ((float *)(local_60 + 8) != &local_7c) {
          local_60._8_4_ = fVar2;
          local_54 = fVar4;
          local_50 = fVar5;
        }
      }
      if (*out_height <= local_4c.y) {
        if (local_4c.x * local_4c.x + local_4c.z * local_4c.z < z * z) {
          *out_height = local_4c.y;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          (&local_4c,(CVector3f *)(local_60 + 8),z,out_height);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          ((CVector3f *)(local_60 + 8),&local_70,z,out_height);
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
          local_60._0_4_ = (triangle->normal).x * fVar9 + *(float *)x;
          local_60._8_4_ = fVar9 * (triangle->normal).z + *(float *)((int)x + 8);
          local_60._4_4_ = *(float *)((int)x + 4);
          fVar9 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,(CVector3f *)local_60,&g_FloorRayDirection);
          if ((0.0 <= fVar9) &&
             (local_60._0_4_ = fVar9 * g_FloorRayDirection.y + (float)local_60._0_4_,
             *out_height < (float)local_60._0_4_)) {
            *out_height = (float)local_60._0_4_;
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
