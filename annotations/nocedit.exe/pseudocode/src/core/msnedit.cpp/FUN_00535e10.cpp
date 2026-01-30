// Name: core_msnedit.cpp_FUN_00535e10
// Address: 00535e10
// Address Range: [[00535e10, 00535e65]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_00535e10(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_00535e10(int *param_1,char *param_2,char *param_3)

{
  engine_2d_c_drawText_FUN_00401fd0(param_2,g_ClipLeft,*param_1);
  engine_2d_c_drawText_FUN_00401fd0
            (param_3,((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                           (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*param_1);
  *param_1 = *param_1 + 0xb;
  return;
}
