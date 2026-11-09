// Name: core_game.cpp_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8051]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d7fe0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d7fe0(uint param_1)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x228 != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_FUN_005b2420();
  engine_console_cpp_FUN_00445430
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,param_1,
             ((double)(iVar1 - _DAT_01cd0c90) * _DAT_005e33bc * _DAT_005e33c4 * _DAT_005e33cc) /
             (double)*(float *)&g_CGamePtr->field_0x294);
  return;
}
