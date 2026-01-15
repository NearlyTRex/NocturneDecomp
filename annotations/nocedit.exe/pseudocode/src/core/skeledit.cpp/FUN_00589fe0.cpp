// Name: core_skeledit.cpp_FUN_00589fe0
// Address: 00589fe0
// Address Range: [[00589fe0, 0058a0e5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589fe0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589fe0(void)

{
  byte *in_stack_00000004;
  FILE *in_stack_00000008;
  byte auStack_c [4];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  core_skeledit_cpp_FUN_00589fc0();
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",auStack_c);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  *in_stack_00000004 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008," \"%[^\"]",in_stack_00000004);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  in_stack_00000004[0x100] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008," \"%[^\"]",in_stack_00000004 + 0x100);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  in_stack_00000004[0x200] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008," \"%[^\"]",in_stack_00000004 + 0x200);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",in_stack_00000004 + 0x30c);
  return;
}
