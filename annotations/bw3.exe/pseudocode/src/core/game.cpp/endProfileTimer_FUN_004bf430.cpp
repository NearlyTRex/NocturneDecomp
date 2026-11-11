// Name: core_game.cpp_endProfileTimer_FUN_004bf430
// Address: 004bf430
// Address Range: [[004bf430, 004bf4a1]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_endProfileTimer_FUN_004bf430(char *timer_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_endProfileTimer_FUN_004bf430(char *timer_name)

{
  int iVar1;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,timer_name,
             ((double)(iVar1 - _DAT_01d22c98) * _DAT_005c39c0 * _DAT_005c39c8 * _DAT_005c39d0) /
             (double)g_CGamePtr->delta_time_float);
  return;
}
