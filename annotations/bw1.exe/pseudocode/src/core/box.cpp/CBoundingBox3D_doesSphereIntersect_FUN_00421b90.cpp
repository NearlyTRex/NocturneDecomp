// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_00421b90
// Address: 00421b90
// Address Range: [[00421b90, 00421bf4]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_00421b90(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_00421b90(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  byte bVar1;
  float afStackY_101c [1016];
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28 [2];
  
  bVar1 = 0;
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421af0(this_ptr,sphere_center,local_28);
  local_34 = local_28[0].x;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)((int)local_28 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)local_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  local_34 = local_34 - sphere_center->x;
  local_30 = local_30 - sphere_center->y;
  local_2c = local_2c - sphere_center->z;
  return (uint)(local_2c * local_2c + local_30 * local_30 + local_34 * local_34 <= radius * radius);
}
