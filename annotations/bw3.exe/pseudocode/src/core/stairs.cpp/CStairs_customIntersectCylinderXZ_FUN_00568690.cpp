// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00568690
// Address: 00568690
// Address Range: [[00568690, 005686c4]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00568690(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00568690(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

{
  int iVar1;
  CDemonTriangle *pCVar2;
  
  pCVar2 = this_ptr->collision_triangles;
  for (iVar1 = 0; iVar1 < this_ptr->stair_count * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_00479050(pCVar2,cylinder);
    pCVar2 = pCVar2 + 1;
  }
  return;
}
