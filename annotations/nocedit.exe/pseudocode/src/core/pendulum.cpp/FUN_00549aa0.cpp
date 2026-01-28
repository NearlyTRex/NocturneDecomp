// Name: core_pendulum.cpp_FUN_00549aa0
// Address: 00549aa0
// Address Range: [[00549aa0, 00549b82]]
// Convention: unknown
// Signature: bool core_pendulum_cpp_FUN_00549aa0(void)

#include "nocturne.h"

bool core_pendulum_cpp_FUN_00549aa0(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_00000008 < in_stack_00000004 + (float)-0.5) {
    in_stack_00000008 = in_stack_00000008 + 1.0;
  }
  if (in_stack_00000004 + (float)0.5 < in_stack_00000008) {
    in_stack_00000008 = in_stack_00000008 + -1.0f;
  }
  if (in_stack_00000008 <= in_stack_00000004) {
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_0000000c < in_stack_00000008) {
      in_stack_0000000c = in_stack_0000000c + 1.0;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + -1.0f;
    }
    if (in_stack_00000008 + 1.0 < in_stack_0000000c) {
      in_stack_0000000c = in_stack_0000000c + -1.0f;
    }
    return in_stack_00000004 < in_stack_0000000c;
  }
  return false;
}
