// Name: core_manpuz.cpp_FUN_0050a490
// Address: 0050a490
// Address Range: [[0050a490, 0050a4e2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_FUN_0050a490(void)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_FUN_0050a490(void)

{
  float fVar1;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_00000008 - *in_stack_00000004 < -in_stack_0000000c) {
    fVar1 = *in_stack_00000004 - in_stack_0000000c;
  }
  else {
    if (in_stack_00000008 - *in_stack_00000004 <= in_stack_0000000c) {
      *in_stack_00000004 = in_stack_00000008;
      return 1;
    }
    fVar1 = *in_stack_00000004 + in_stack_0000000c;
  }
  *in_stack_00000004 = fVar1;
  return 0;
}
