// Name: core_game.cpp_FUN_004bd4f0
// Address: 004bd4f0
// Address Range: [[004bd4f0, 004bd561]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bd4f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bd4f0(uint param_1)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x228 != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  engine_console_cpp_FUN_00436710
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,param_1,
             ((double)(iVar1 - _DAT_01cb8118) * _DAT_005d8863 * _DAT_005d886b * _DAT_005d8873) /
             (double)*(float *)&g_CGamePtr->field_0x284);
  return;
}
