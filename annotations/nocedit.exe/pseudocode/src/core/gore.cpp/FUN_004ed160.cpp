// Name: core_gore.cpp_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed1bb]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004ed160(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ed160(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ed160(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%f,%f,%f\n",in_stack_00000004 + 4,in_stack_00000004 + 8,
             in_stack_00000004 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%d\n",in_stack_00000004,in_stack_00000004 + 0x10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%f,%d,%d,%d\n",in_stack_00000004 + 0x14,
             in_stack_00000004 + 0x18,in_stack_00000004 + 0x1c,in_stack_00000004 + 0x20,
             in_stack_00000004 + 0x24);
  return;
}
