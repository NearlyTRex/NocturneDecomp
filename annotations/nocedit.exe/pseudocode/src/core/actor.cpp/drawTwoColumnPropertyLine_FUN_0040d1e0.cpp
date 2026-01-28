// Name: core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
// Address: 0040d1e0
// Address Range: [[0040d1e0, 0040d235]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 (int *y_position,char *left_text,char *right_text)

#include "nocturne.h"

void __cdecl
core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
          (int *y_position,char *left_text,char *right_text)

{
  engine_2d_c_drawText_FUN_00401fd0(left_text,g_ClipLeft,*y_position);
  engine_2d_c_drawText_FUN_00401fd0
            (right_text,
             ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                   (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*y_position);
  *y_position = *y_position + 0xb;
  return;
}
