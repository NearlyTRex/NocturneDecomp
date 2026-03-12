// Name: core_stairs.cpp_CStairs_customRayIntersect_FUN_005ba590
// Address: 005ba590
// Address Range: [[005ba590, 005ba659]]
// Convention: __cdecl
// Signature: float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005ba590(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005ba590(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  CDemonTriangle *triangle;
  int iVar1;
  CVector3f local_24;
  float local_18;
  float local_14;
  
  local_18 = 1.01;
  triangle = this_ptr->collision_triangles;
  for (iVar1 = 0; iVar1 < this_ptr->stair_count * 2; iVar1 = iVar1 + 1) {
    fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,ray_origin,ray_direction);
    if (((0.0 <= fVar1) && (fVar1 < local_18)) && (fVar1 <= 1.0)) {
      local_24.x = -(triangle->normal).x;
      local_24.y = -(triangle->normal).y;
      local_24.z = -(triangle->normal).z;
      local_18 = fVar1;
      if (out_normal != &local_24) {
        out_normal->x = local_24.x;
        out_normal->y = local_24.y;
        out_normal->z = local_24.z;
      }
    }
    triangle = triangle + 1;
  }
  return local_18;
}
