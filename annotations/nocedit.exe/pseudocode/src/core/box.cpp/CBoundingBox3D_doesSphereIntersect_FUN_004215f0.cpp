// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 00421647]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f local_20 [2];
  
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,local_20,sphere_center);
  fVar1 = local_20[0].x - sphere_center->x;
  fVar3 = local_20[0].y - sphere_center->y;
  fVar2 = local_20[0].z - sphere_center->z;
  return (uint)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= radius * radius);
}
