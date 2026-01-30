// Name: core_skeledit.cpp_FUN_00596860
// Address: 00596860
// Address Range: [[00596860, 005968a1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_00596860(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_00596860(void)

{
  int y_pos;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  __STK(0x14);
  y_pos = (in_stack_00000004 + 1) * 0xb;
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,7,y_pos);
  engine_2d_c_drawText_FUN_00401fd0(in_stack_0000000c,0x69,y_pos);
  return;
}
