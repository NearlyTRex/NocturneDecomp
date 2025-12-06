// Name: core_stairs.cpp_FUN_005ba660
// Address: 005ba660
// Address Range: [[005ba660, 005ba694]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba660()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba660(uint param_1, uint
   param_2) */

void core_stairs_cpp_FUN_005ba660(void)

{
  int iVar1;
  CDemonTriangle *triangle;
  int in_stack_00000004;
  SIntersectXZCylinder *in_stack_00000008;
  
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  for (iVar1 = 0;
      SBORROW /* signed borrow */4(iVar1,*(int *)(in_stack_00000004 + 0x16c) * 2) !=
      iVar1 + *(int *)(in_stack_00000004 + 0x16c) * -2 < 0; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(triangle,in_stack_00000008);
    triangle = triangle + 1;
  }
  return;
}
