// Name: core_conveyor.cpp_FUN_004424a0
// Address: 004424a0
// Address Range: [[004424a0, 004424b8]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004424a0()

#include "nocturne.h"

void core_conveyor_cpp_FUN_004424a0(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000004);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
