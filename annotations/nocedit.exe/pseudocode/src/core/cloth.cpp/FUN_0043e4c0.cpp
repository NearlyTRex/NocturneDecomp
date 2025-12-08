// Name: core_cloth.cpp_FUN_0043e4c0
// Address: 0043e4c0
// Address Range: [[0043e4c0, 0043e50a]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e4c0()

#include "nocturne.h"

uint core_cloth_cpp_FUN_0043e4c0(void)

{
  BADSPACEBASE *in_ESP;
  byte unaff_BP;
  FILE *in_stack_00000004;
  int *in_stack_00000008;
  uchar local_14 [4];
  
  if (0 < *in_stack_00000008) {
    crt_stdio_c_fgetc_outptr_FUN_005ff245(in_stack_00000004,local_14);
    if (*(int *)((int)&in_stack_00000004->_handle + *(int *)(in_stack_00000004->_ptr + 4)) == 0) {
      *in_stack_00000008 = *in_stack_00000008 + -1;
      return (uint)unaff_BP;
    }
  }
  return 0xffffffff;
}
