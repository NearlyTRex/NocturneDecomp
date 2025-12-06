// Name: core_skeledit.cpp_FUN_0058a0f0
// Address: 0058a0f0
// Address Range: [[0058a0f0, 0058a1a8]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a0f0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058a0f0(void)

{
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// posFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// sklFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// s3dFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// forShadows\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"%d\n");
  return;
}
