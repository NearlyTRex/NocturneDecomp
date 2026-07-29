// Name: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
// Address: 0044b290
// Address Range: [[0044b290, 0044b42b]]
// Convention: __cdecl
// Signature: float __cdecl core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material)

{
  float fVar1;
  float fVar2;
  CDemonCubeTriangle *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  CVector3f local_2c;
  int local_20;
  float local_1c;
  float local_18;
  
  iVar5 = 0;
  local_20 = -1;
  local_1c = 1.0001;
  if (0 < this_ptr->triangle_count) {
    iVar6 = 0;
    do {
      local_18 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
                           ((CDemonCubeTriangle *)
                            ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar6),ray_origin
                            ,ray_direction);
      if (((0.0 <= local_18) && (local_18 < local_1c)) && (local_18 <= 1.0)) {
        local_20 = iVar5;
        local_1c = local_18;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < this_ptr->triangle_count);
  }
  if (-1 < local_20) {
    pCVar3 = this_ptr->triangle_buffer;
    fVar1 = pCVar3[local_20].triangle.normal.y;
    fVar2 = pCVar3[local_20].triangle.normal.z;
    if (&local_2c != hit_normal) {
      hit_normal->x = -pCVar3[local_20].triangle.normal.x;
      hit_normal->y = -fVar1;
      hit_normal->z = -fVar2;
    }
    *hit_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + local_20);
    pCVar4 = this_ptr->triangle_buffer[local_20].triangle.vertices[0];
    if (pCVar4 != (CVector3f *)&DAT_014b89e8) {
      _DAT_014b89e8 = pCVar4->x;
      _DAT_014b89f0 = pCVar4->z;
      _DAT_014b89ec = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].triangle.vertices[1];
    if (pCVar4 != (CVector3f *)&DAT_014b89f4) {
      _DAT_014b89f4 = pCVar4->x;
      _DAT_014b89fc = pCVar4->z;
      _DAT_014b89f8 = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].triangle.vertices[2];
    if (pCVar4 != (CVector3f *)&DAT_014b8a00) {
      _DAT_014b8a04 = pCVar4->y;
      _DAT_014b8a08 = pCVar4->z;
      _DAT_014b8a00 = pCVar4->x;
      return local_1c;
    }
  }
  return local_1c;
}
