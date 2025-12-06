// Name: core_set.cpp_FUN_0056fba0
// Address: 0056fba0
// Address Range: [[0056fba0, 0056fbcc]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056fba0()

#include "nocturne.h"

uint core_set_cpp_FUN_0056fba0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(float *)(in_stack_00000008 + 4) < *(float *)(in_stack_00000004 + 4)) {
    return 1;
  }
  if (*(float *)(in_stack_00000004 + 4) < *(float *)(in_stack_00000008 + 4)) {
    return 0xffffffff;
  }
  return 0;
}
