// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30
// Address: 00534a30
// Address Range: [[00534a30, 00534a64]]
// Convention: unknown
// Signature: void core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(int param_1,SIntersectXZCylinder *param_2)

#include "nocturne.h"

void core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(int param_1,SIntersectXZCylinder *param_2)

{
  int iVar1;
  CDemonTriangle *triangle;
  
  triangle = (CDemonTriangle *)(param_1 + 0x168);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x164) * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(triangle,param_2);
    triangle = triangle + 1;
  }
  return;
}
