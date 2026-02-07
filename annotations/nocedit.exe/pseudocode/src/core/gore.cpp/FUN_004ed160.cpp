// Name: core_gore.cpp_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed1bb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ed160(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed160(void)

{
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  
  _fscanf(in_stack_00000008,"%f,%f,%f\n",in_stack_00000004 + 4,in_stack_00000004 + 8,
             in_stack_00000004 + 0xc);
  _fscanf(in_stack_00000008,"%d,%d\n");
  _fscanf(in_stack_00000008,"%d,%f,%d,%d,%d\n",in_stack_00000004 + 0x14,
             in_stack_00000004 + 0x18,in_stack_00000004 + 0x1c,in_stack_00000004 + 0x20,
             in_stack_00000004 + 0x24);
  return;
}
