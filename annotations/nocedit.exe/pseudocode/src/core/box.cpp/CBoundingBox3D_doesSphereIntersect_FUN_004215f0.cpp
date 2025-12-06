// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 00421647]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D * this_ptr, CVector3f * sphere_center, float radius)

#include "nocturne.h"

int __cdecl
core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
          (CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  BADSPACEBASE *in_ESP;
  float in_stack_00000010;
  CVector3f local_20;
  float fStack_14;
  
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,&local_20,sphere_center);
  local_20.y = local_20.y - sphere_center->x;
  local_20.z = local_20.z - sphere_center->y;
  fStack_14 = fStack_14 - sphere_center->z;
  return (uint)(fStack_14 * fStack_14 + local_20.z * local_20.z + local_20.y * local_20.y <=
               in_stack_00000010 * in_stack_00000010);
}
