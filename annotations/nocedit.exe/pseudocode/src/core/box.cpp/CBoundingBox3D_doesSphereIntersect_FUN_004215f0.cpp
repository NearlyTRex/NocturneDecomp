// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 00421647]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 (CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

#include "nocturne.h"

int __cdecl
core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
          (CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  CVector3f local_20 [2];
  
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,local_20,sphere_center);
  local_20[0].x = local_20[0].x - sphere_center->x;
  local_20[0].y = local_20[0].y - sphere_center->y;
  local_20[0].z = local_20[0].z - sphere_center->z;
  return (uint)(local_20[0].z * local_20[0].z +
                local_20[0].y * local_20[0].y + local_20[0].x * local_20[0].x <= radius * radius);
}
