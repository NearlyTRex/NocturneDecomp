// Name: core_bugs.cpp_crossVector_FUN_00423be0
// Address: 00423be0
// Address Range: [[00423be0, 00423c1c]]
// Convention: unknown
// Signature: float * core_bugs_cpp_crossVector_FUN_00423be0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * core_bugs_cpp_crossVector_FUN_00423be0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_00000004[1] * in_stack_0000000c[2] - in_stack_00000004[2] * in_stack_0000000c[1];
  in_stack_00000008[1] =
       in_stack_00000004[2] * *in_stack_0000000c - *in_stack_00000004 * in_stack_0000000c[2];
  in_stack_00000008[2] =
       *in_stack_00000004 * in_stack_0000000c[1] - in_stack_00000004[1] * *in_stack_0000000c;
  return in_stack_00000008;
}
