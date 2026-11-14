// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20
// Address: 0041bc20
// Address Range: [[0041bc20, 0041bc84]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041bc20(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  byte bVar1;
  float afStackY_101c [1016];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  bVar1 = 0;
  core_box_cpp_FUN_0041bb80(this_ptr,sphere_center);
  local_34 = local_28;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  local_34 = local_34 - sphere_center->x;
  local_30 = local_30 - sphere_center->y;
  local_2c = local_2c - sphere_center->z;
  return (uint)(local_2c * local_2c + local_30 * local_30 + local_34 * local_34 <= radius * radius);
}
