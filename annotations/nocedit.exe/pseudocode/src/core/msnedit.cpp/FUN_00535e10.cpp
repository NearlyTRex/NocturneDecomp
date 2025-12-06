// Name: core_msnedit.cpp_FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e65]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00535e10()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00535e10(uint param_1, uint param_2,
   uint param_3) */

void core_msnedit_cpp_FUN_00535e10(void)

{
  int *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,g_ClipLeft,*in_stack_00000004);
  engine_2d_c_drawText_FUN_00401fd0
            (in_stack_00000010,
             ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                   (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*in_stack_00000004);
  *in_stack_00000004 = *in_stack_00000004 + 0xb;
  return;
}
