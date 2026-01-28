// Name: core_script.cpp_FUN_005607e0
// Address: 005607e0
// Address Range: [[005607e0, 00560811]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_005607e0(void)

#include "nocturne.h"

/* Signature: void core_script.cpp_FUN_005607e0(FILE* param_1, int* param_2) */

void core_script_cpp_FUN_005607e0(void)

{
  FILE *in_stack_00000004;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"\"%s\"\n","(none)");
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"\"%s\"\n",*in_stack_00000008);
  return;
}
