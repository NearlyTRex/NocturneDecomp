// Name: core_stairs.cpp_FUN_005ba590
// Address: 005ba590
// Address Range: [[005ba590, 005ba659]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba590()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba590(uint param_1, uint
   param_2, uint param_3, uint param_4) */

float core_stairs_cpp_FUN_005ba590(void)

{
  float fVar1;
  CDemonTriangle *triangle;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_18 = 1.01;
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  for (iVar2 = 0; iVar2 < *(int *)(in_stack_00000004 + 0x16c) * 2; iVar2 = iVar2 + 1) {
    fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                      (triangle,in_stack_00000008,in_stack_0000000c);
    if (((0.0 <= fVar1) && (fVar1 < local_18)) && (fVar1 <= 1.0)) {
      local_24 = -(triangle->normal).x;
      local_20 = -(triangle->normal).y;
      local_1c = -(triangle->normal).z;
      local_18 = fVar1;
      if (in_stack_00000010 != &local_24) {
        *in_stack_00000010 = local_24;
        in_stack_00000010[1] = local_20;
        in_stack_00000010[2] = local_1c;
      }
    }
    triangle = triangle + 1;
  }
  return local_18;
}
