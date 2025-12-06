// Name: core_skeledit.cpp_FUN_0058a1b0
// Address: 0058a1b0
// Address Range: [[0058a1b0, 0058a25c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a1b0()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058a1b0(void)

{
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000000c;
  char *in_stack_00000010;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x58a1ba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x2c);
  puStack_8 = (uint *)0xffffffff;
  crt_stdio_c_sscanf_FUN_0060013c
            (in_stack_00000010,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"%n",in_stack_0000000c,in_stack_0000000c + 0x100,
             in_stack_0000000c + 0x200,&puStack_8);
  puStack_8 = (uint *)&stack0xfffffffc;
  if (unaff_EDI < 0) {
    crt_stdio_c_sscanf_FUN_0060013c
              (in_stack_00000010,"\"%[^\"]\", \"%[^\"]\"%n",in_stack_0000000c,in_stack_0000000c + 0x100);
    if (unaff_ESI < 0) {
      return 0;
    }
    *(byte *)(in_stack_0000000c + 0x200) = 0;
  }
  puStack_8 = (uint *)(in_stack_0000000c + 0x300);
  *puStack_8 = 0;
  *(uint *)(in_stack_0000000c + 0x304) = 0;
  crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000010 + unaff_ESI," , %d , %d");
  return 1;
}
