// Name: core_setedit.cpp_FUN_00581520
// Address: 00581520
// Address Range: [[00581520, 00581583]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581520()

#include "nocturne.h"

void core_setedit_cpp_FUN_00581520(void)

{
  int x_pos;
  int in_stack_00000004;
  int in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000014;
  
  x_pos = (in_stack_00000004 * g_WindowWidth) / 2;
  engine_2d_c_drawText_FUN_00401fd0(in_stack_0000000c,x_pos,in_stack_00000008 * 0xb);
  engine_2d_c_drawText_FUN_00401fd0
            (in_stack_00000014,g_WindowWidth / 10 + x_pos,in_stack_00000008 * 0xb);
  return;
}
