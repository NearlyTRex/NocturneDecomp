// Name: core_game.cpp_endProfileTimer_FUN_004bd4f0
// Address: 004bd4f0
// Address Range: [[004bd4f0, 004bd561]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_endProfileTimer_FUN_004bd4f0(char *timer_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_endProfileTimer_FUN_004bd4f0(char *timer_name)

{
  int iVar1;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  engine_console_cpp_FUN_00436710
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,timer_name,
             ((double)(iVar1 - _DAT_01cb8118) * _DAT_005d8863 * _DAT_005d886b * _DAT_005d8873) /
             (double)g_CGamePtr->delta_time_float);
  return;
}
