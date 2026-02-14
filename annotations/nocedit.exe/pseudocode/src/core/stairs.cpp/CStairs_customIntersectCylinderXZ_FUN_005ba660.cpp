// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660
// Address: 005ba660
// Address Range: [[005ba660, 005ba694]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  triangle = (CDemonTriangle *)this_ptr->unk2;
  for (iVar1 = 0; iVar1 < this_ptr->stair_count * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(triangle,cylinder);
    triangle = triangle + 1;
  }
  return;
}
