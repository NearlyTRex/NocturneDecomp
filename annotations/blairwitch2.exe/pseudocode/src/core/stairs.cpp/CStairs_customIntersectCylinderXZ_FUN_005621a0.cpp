// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_005621a0
// Address: 005621a0
// Address Range: [[005621a0, 005621d4]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005621a0(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005621a0(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  triangle = this_ptr->collision_triangles;
  for (iVar1 = 0; iVar1 < this_ptr->stair_count * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_00477fe0(triangle,cylinder);
    triangle = triangle + 1;
  }
  return;
}
