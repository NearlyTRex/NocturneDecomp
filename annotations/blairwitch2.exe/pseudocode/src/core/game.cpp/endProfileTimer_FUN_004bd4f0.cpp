// Name: core_game.cpp_endProfileTimer_FUN_004bd4f0
// Address: 004bd4f0
// Address Range: [[004bd4f0, 004bd561]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_endProfileTimer_FUN_004bd4f0(char *timer_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_endProfileTimer_FUN_004bd4f0(char *timer_name)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  wincore_winrun_cpp_getTime_FUN_0058e9e0();
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  return;
}
