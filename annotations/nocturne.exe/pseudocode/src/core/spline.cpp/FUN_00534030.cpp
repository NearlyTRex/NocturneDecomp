// Name: core_spline.cpp_FUN_00534030
// Address: 00534030
// Address Range: [[00534030, 0053406a]]
// Convention: unknown
// Signature: float core_spline_cpp_FUN_00534030(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_spline_cpp_FUN_00534030(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * *(float *)(in_stack_00000004 + 0x1c) +
         *in_stack_00000010 * *(float *)(in_stack_00000004 + 0x18) +
         *in_stack_0000000c * *(float *)(in_stack_00000004 + 0x14) +
         *in_stack_00000008 * *(float *)(in_stack_00000004 + 0x10);
}
