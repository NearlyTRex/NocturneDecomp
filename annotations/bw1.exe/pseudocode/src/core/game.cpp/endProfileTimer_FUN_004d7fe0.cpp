// Name: core_game.cpp_endProfileTimer_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8051]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_endProfileTimer_FUN_004d7fe0(char *timer_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_endProfileTimer_FUN_004d7fe0(char *timer_name)

{
  int iVar1;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  engine_console_cpp_FUN_00445430
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,timer_name,
             ((double)(iVar1 - _DAT_01cd0c90) * _DAT_005e33bc * _DAT_005e33c4 * _DAT_005e33cc) /
             (double)g_CGamePtr->delta_time_float);
  return;
}
