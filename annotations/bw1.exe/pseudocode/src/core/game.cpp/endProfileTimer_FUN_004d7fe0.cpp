// Name: core_game.cpp_endProfileTimer_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8051]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_endProfileTimer_FUN_004d7fe0(char *timer_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_endProfileTimer_FUN_004d7fe0(char *timer_name)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  wincore_winrun_cpp_getTime_FUN_005b2420();
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"G%s : %3.2f ms\n" + 1);
  return;
}
