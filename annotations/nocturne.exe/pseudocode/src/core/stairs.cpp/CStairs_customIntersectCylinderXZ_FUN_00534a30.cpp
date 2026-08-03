// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30
// Address: 00534a30
// Address Range: [[00534a30, 00534a64]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  triangle = this_ptr->collision_triangles;
  for (iVar1 = 0; iVar1 < this_ptr->stair_count * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(triangle,cylinder);
    triangle = triangle + 1;
  }
  return;
}
