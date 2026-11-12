// Name: core_dtri.cpp_FUN_00478550
// Address: 00478550
// Address Range: [[00478550, 004788d9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_FUN_00478550(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_FUN_00478550(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

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
  
  if ((triangle->normal).y <= (float)_DAT_005d1df3) {
    fVar1 = (triangle->vertex1).x - position->x;
    fVar9 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - position->z;
    local_4c.x = (triangle->vertex2).x - position->x;
    local_4c.y = (triangle->vertex2).y;
    local_4c.z = (triangle->vertex2).z - position->z;
    local_7c.x = (triangle->vertex3).x - position->x;
    local_7c.y = (triangle->vertex3).y;
    local_7c.z = (triangle->vertex3).z - position->z;
    local_40.x = fVar1;
    local_40.y = fVar9;
    local_40.z = fVar2;
    if (fVar9 < local_4c.y) {
      if (&local_40 != &local_4c) {
        local_40.x = local_4c.x;
        local_40.y = local_4c.y;
        local_40.z = local_4c.z;
      }
      local_70.x = fVar1;
      local_70.y = fVar9;
      local_70.z = fVar2;
      if (&local_4c != &local_70) {
        local_4c.x = fVar1;
        local_4c.y = fVar9;
        local_4c.z = fVar2;
      }
    }
    fVar5 = local_40.z;
    fVar4 = local_40.y;
    fVar3 = local_40.x;
    fVar2 = local_4c.z;
    fVar1 = local_4c.y;
    fVar9 = local_4c.x;
    if (local_4c.y < local_7c.y) {
      local_64.x = local_4c.x;
      local_64.y = local_4c.y;
      local_64.z = local_4c.z;
      if (&local_4c != &local_7c) {
        local_4c.x = local_7c.x;
        local_4c.y = local_7c.y;
        local_4c.z = local_7c.z;
      }
      if (&local_7c != &local_64) {
        local_7c.x = fVar9;
        local_7c.y = fVar1;
        local_7c.z = fVar2;
      }
    }
    if (local_7c.y <= position->y) {
      if (local_40.y < local_4c.y) {
        local_58.x = local_40.x;
        local_58.y = local_40.y;
        local_58.z = local_40.z;
        if (&local_40 != &local_4c) {
          local_40.x = local_4c.x;
          local_40.y = local_4c.y;
          local_40.z = local_4c.z;
        }
        if (&local_4c != &local_58) {
          local_4c.x = fVar3;
          local_4c.y = fVar4;
          local_4c.z = fVar5;
        }
      }
      if (*out_height <= local_40.y) {
        if (local_40.x * local_40.x + local_40.z * local_40.z < search_radius * search_radius) {
          *out_height = local_40.y;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_40,&local_4c,search_radius,out_height);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_4c,&local_7c,search_radius,out_height);
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_7c,&local_40,search_radius,out_height);
        fVar9 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(fVar1 * fVar1 + fVar9 * fVar9);
        if ((DAT_01c21e80 & 1) == 0) {
          DAT_01c21e80 = DAT_01c21e80 | 1;
          _DAT_01c21e74 = 0;
          _DAT_01c21e7c = 0;
          _DAT_01c21e78 = -100.0;
        }
        if (_DAT_005d1dfb <= (double)fVar9) {
          fVar9 = search_radius / fVar9;
          local_34[0].x = (triangle->normal).x * fVar9 + position->x;
          local_34[0].z = fVar9 * (triangle->normal).z + position->z;
          local_34[0].y = position->y;
          fVar9 = core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                            (triangle,local_34,(CVector3f *)&DAT_01c21e74);
          if ((0.0 <= fVar9) &&
             (local_34[0].y = fVar9 * _DAT_01c21e78 + local_34[0].y, *out_height < local_34[0].y)) {
            *out_height = local_34[0].y;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                            (triangle,position,(CVector3f *)&DAT_01c21e74);
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
