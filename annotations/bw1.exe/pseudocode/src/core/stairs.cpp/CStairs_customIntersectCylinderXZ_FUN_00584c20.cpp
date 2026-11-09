// Name: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00584c20
// Address: 00584c20
// Address Range: [[00584c20, 00584c54]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00584c20(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00584c20(CStairs *this_ptr,SIntersectXZCylinder *cylinder)

{
  int iVar1;
  byte *puVar2;
  
  puVar2 = &this_ptr->field_0x170;
  for (iVar1 = 0; iVar1 < *(int *)&this_ptr->field_0x16c * 2; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(puVar2,cylinder);
    puVar2 = puVar2 + 0x38;
  }
  return;
}
