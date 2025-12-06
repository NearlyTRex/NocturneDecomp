// Name: core_skeledit.cpp_FUN_00596860
// Address: 00596860
// Address Range: [[00596860, 005968a1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00596860()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00596860(void)

{
  int y_pos;
  int in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000018;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  y_pos = (in_stack_0000000c + 1) * 0xb;
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000010,7,y_pos);
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000018,0x69,y_pos);
  return;
}
