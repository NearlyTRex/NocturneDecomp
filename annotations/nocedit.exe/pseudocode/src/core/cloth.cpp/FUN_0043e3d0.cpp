// Name: core_cloth.cpp_FUN_0043e3d0
// Address: 0043e3d0
// Address Range: [[0043e3d0, 0043e3f2]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043e3d0(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_0043e3d0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000004 = *in_stack_0000000c * *in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c[1] * *in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c[2] * *in_stack_00000008;
  return;
}
