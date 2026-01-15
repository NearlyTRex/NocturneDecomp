// Name: core_gore.cpp_FUN_004ecb00
// Address: 004ecb00
// Address Range: [[004ecb00, 004ecb81]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecb00()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ecb00(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ecb00(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%f,%f,%f\n",in_stack_00000004 + 4,in_stack_00000004 + 8,
             in_stack_00000004 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%d,%d\n",in_stack_00000004 + 0x10,in_stack_00000004 + 0x14,
             in_stack_00000004);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%f,%f,%f\n",in_stack_00000004 + 0x18,in_stack_00000004 + 0x20,
             in_stack_00000004 + 0x1c);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",in_stack_00000004 + 0x28,
             in_stack_00000004 + 0x2c,in_stack_00000004 + 0x30,in_stack_00000004 + 0x34,
             in_stack_00000004 + 0x38,in_stack_00000004 + 0x3c,in_stack_00000004 + 0x40);
  return;
}
