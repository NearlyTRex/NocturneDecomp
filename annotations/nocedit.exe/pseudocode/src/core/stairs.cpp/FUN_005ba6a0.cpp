// Name: core_stairs.cpp_FUN_005ba6a0
// Address: 005ba6a0
// Address Range: [[005ba6a0, 005ba6ea]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba6a0()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba6a0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

uint core_stairs_cpp_FUN_005ba6a0(void)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  uint uVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  uVar3 = 0;
  for (iVar2 = 0;
      SBORROW /* signed borrow */4(iVar2,*(int *)(in_stack_00000004 + 0x16c) * 2) !=
      iVar2 + *(int *)(in_stack_00000004 + 0x16c) * -2 < 0; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                      (triangle,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return uVar3;
}
