// Name: core_skeledit.cpp_FUN_00589fe0
// Address: 00589fe0
// Address Range: [[00589fe0, 0058a0e5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589fe0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589fe0(void)

{
  byte *in_stack_0000000c;
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  core_skeledit_cpp_FUN_00589fc0();
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  *in_stack_0000000c = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  in_stack_0000000c[0x100] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  in_stack_0000000c[0x200] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  return;
}
