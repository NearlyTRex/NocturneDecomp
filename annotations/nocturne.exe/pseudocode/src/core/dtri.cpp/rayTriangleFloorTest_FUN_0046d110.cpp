// Name: core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
// Address: 0046d110
// Address Range: [[0046d110, 0046d4b0]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0046d110(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

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
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34 [3];
  
  if ((triangle->normal).y <= (float)-0.34000000000000002) {
    fVar1 = (triangle->vertex1).x - position->x;
    fVar9 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - position->z;
    local_58.x = (triangle->vertex2).x - position->x;
    local_58.y = (triangle->vertex2).y;
    local_58.z = (triangle->vertex2).z - position->z;
    local_70.x = (triangle->vertex3).x - position->x;
    local_70.y = (triangle->vertex3).y;
    local_70.z = (triangle->vertex3).z - position->z;
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
    if (local_70.y <= position->y) {
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
        if (local_4c.x * local_4c.x + local_4c.z * local_4c.z < search_radius * search_radius) {
          *out_height = local_4c.y;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0
                          (&local_4c,&local_58,search_radius,out_height);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0
                          (&local_58,&local_70,search_radius,out_height);
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0
                          (&local_70,&local_4c,search_radius,out_height);
        fVar9 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(fVar1 * fVar1 + fVar9 * fVar9);
        if ((DAT_01bc9968 & 1) == 0) {
          DAT_01bc9968 = DAT_01bc9968 | 1;
          _DAT_01bc9960 = -100.0;
          _DAT_01bc995c = 0;
          _DAT_01bc9964 = 0;
        }
        if (0.01 <= (double)fVar9) {
          fVar9 = search_radius / fVar9;
          local_64 = (triangle->normal).x * fVar9 + position->x;
          local_5c = fVar9 * (triangle->normal).z + position->z;
          local_60 = position->y;
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                   (triangle,&local_64,&DAT_01bc995c);
          if ((0.0 <= fVar9) &&
             (local_60 = fVar9 * _DAT_01bc9960 + local_60, *out_height < local_60)) {
            *out_height = local_60;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                   (triangle,position,&DAT_01bc995c);
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
