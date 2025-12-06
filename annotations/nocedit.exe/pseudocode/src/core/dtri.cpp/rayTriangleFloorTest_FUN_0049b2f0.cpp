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
  byte local_6c [20];
  byte local_58 [8];
  float local_50;
  byte local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if ((triangle->normal).y <= (float)-0.34000000000000002) {
    fVar1 = (triangle->vertex1).x - *(float *)x;
    fVar11 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - *(float *)((int)x + 8);
    local_58._0_4_ = (triangle->vertex2).x - *(float *)x;
    local_58._4_4_ = (triangle->vertex2).y;
    local_50 = (triangle->vertex2).z - *(float *)((int)x + 8);
    local_70 = (triangle->vertex3).x - *(float *)x;
    local_6c._0_4_ = (triangle->vertex3).y;
    local_6c._4_4_ = (triangle->vertex3).z - *(float *)((int)x + 8);
    local_4c._0_4_ = fVar1;
    local_4c._4_4_ = fVar11;
    local_4c._8_4_ = fVar2;
    if (fVar11 < (float)local_58._4_4_) {
      if (local_4c != local_58) {
        local_4c._0_4_ = local_58._0_4_;
        local_4c._4_4_ = local_58._4_4_;
        local_4c._8_4_ = local_50;
      }
      local_40 = fVar1;
      local_3c = fVar11;
      local_38 = fVar2;
      if ((float *)local_58 != &local_40) {
        local_58._0_4_ = fVar1;
        local_58._4_4_ = fVar11;
        local_50 = fVar2;
      }
    }
    uVar7 = local_4c._8_4_;
    uVar6 = local_4c._4_4_;
    uVar5 = local_4c._0_4_;
    fVar11 = local_50;
    uVar4 = local_58._4_4_;
    uVar3 = local_58._0_4_;
    if ((float)local_58._4_4_ < (float)local_6c._0_4_) {
      local_34 = (float)local_58._0_4_;
      local_30 = (float)local_58._4_4_;
      local_2c = local_50;
      if ((float *)local_58 != &local_70) {
        local_58._0_4_ = local_70;
        local_58._4_4_ = local_6c._0_4_;
        local_50 = (float)local_6c._4_4_;
      }
      if (&local_70 != &local_34) {
        local_70 = (float)uVar3;
        local_6c._0_4_ = uVar4;
        local_6c._4_4_ = fVar11;
      }
    }
    if ((float)local_6c._0_4_ <= *(float *)((int)x + 4)) {
      if ((float)local_4c._4_4_ < (float)local_58._4_4_) {
        local_7c = (double)CONCAT44 /* combine 2-byte values */(local_4c._4_4_,local_4c._0_4_);
        local_74 = (float)local_4c._8_4_;
        if (local_4c != local_58) {
          local_4c._0_4_ = local_58._0_4_;
          local_4c._4_4_ = local_58._4_4_;
          local_4c._8_4_ = local_50;
        }
        if ((ulonglong *)local_58 != &local_7c) {
          local_58._0_4_ = uVar5;
          local_58._4_4_ = uVar6;
          local_50 = (float)uVar7;
        }
      }
      if (*out_height <= (float)local_4c._4_4_) {
        if ((float)local_4c._0_4_ * (float)local_4c._0_4_ +
            (float)local_4c._8_4_ * (float)local_4c._8_4_ < z * z) {
          *out_height = (float)local_4c._4_4_;
          return 1;
        }
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          ((CVector3f *)local_4c,(CVector3f *)local_58,z,out_height);
        uVar9 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          ((CVector3f *)(local_58 + 4),(CVector3f *)local_6c,z,out_height);
        uVar10 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                           ((CVector3f *)(local_6c + 4),(CVector3f *)(local_4c + 8),z,out_height);
        fVar11 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar10 = uVar8 | uVar9 | uVar10;
        fVar11 = SQRT(fVar1 * fVar1 + fVar11 * fVar11);
        local_7c = (double)fVar11;
        if ((g_FloorCacheValid & 1) == 0) {
          g_FloorCacheValid = g_FloorCacheValid | 1;
          g_FloorRayDirection.y = -100.0;
          g_FloorRayDirection.x = 0.0;
          g_FloorRayDirection.z = 0.0;
        }
        if (0.01 <= local_7c) {
          fVar11 = z / fVar11;
          local_58._0_4_ = (triangle->normal).x * fVar11 + *(float *)x;
          local_50 = fVar11 * (triangle->normal).z + *(float *)((int)x + 8);
          local_58._4_4_ = *(float *)((int)x + 4);
          fVar11 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                             (triangle,(CVector3f *)local_58,&g_FloorRayDirection);
          if ((0.0 <= fVar11) &&
             (local_50 = fVar11 * g_FloorRayDirection.y + local_50, *out_height < local_50)) {
            *out_height = local_50;
            return 1;
          }
        }
        else if (uVar10 == 0) {
          fVar11 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                             (triangle,(CVector3f *)x,&g_FloorRayDirection);
          if (0.0 <= fVar11) {
            uVar10 = 1;
            *out_height = local_38;
          }
        }
        return uVar10;
      }
    }
  }
  return 0;
}
