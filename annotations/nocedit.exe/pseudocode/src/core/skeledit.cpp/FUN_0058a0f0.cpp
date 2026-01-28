// Name: core_skeledit.cpp_FUN_0058a0f0
// Address: 0058a0f0
// Address Range: [[0058a0f0, 0058a1a8]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058a0f0(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058a0f0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// posFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"\"%s\"\n",in_stack_00000004);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// sklFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"\"%s\"\n",in_stack_00000004 + 0x100);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// s3dFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"\"%s\"\n",in_stack_00000004 + 0x200);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// forShadows\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%d\n",*(uint *)(in_stack_00000004 + 0x30c));
  return;
}
