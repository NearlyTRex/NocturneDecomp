// Name: core_game.cpp_FUN_004e3110
// Address: 004e3110
// Address Range: [[004e3110, 004e3181]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004e3110(void)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004e3110(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s : %3.2f ms\n",in_stack_00000004,
             ((double)(iVar1 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
             1000) / (double)g_CGamePtr->delta_time_float);
  return;
}
