// Name: core_msnedit.cpp_drawPropertyRow_FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e65]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_drawPropertyRow_FUN_00535e10(int *y_pos,char *label,char *value)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_drawPropertyRow_FUN_00535e10(int *y_pos,char *label,char *value)

{
  engine_2d_c_drawText_FUN_00401fd0(label,g_ClipLeft,*y_pos);
  engine_2d_c_drawText_FUN_00401fd0
            (value,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                         (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*y_pos);
  *y_pos = *y_pos + 0xb;
  return;
}
