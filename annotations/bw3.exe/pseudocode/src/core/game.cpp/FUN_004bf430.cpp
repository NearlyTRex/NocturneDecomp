// Name: core_game.cpp_FUN_004bf430
// Address: 004bf430
// Address Range: [[004bf430, 004bf4a1]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bf430(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bf430(uint param_1)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x230 != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_FUN_005806a0();
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"G%s : %3.2f ms\n" + 1,param_1,
             ((double)(iVar1 - _DAT_01d22c98) * _DAT_005c39c0 * _DAT_005c39c8 * _DAT_005c39d0) /
             (double)*(float *)&g_CGamePtr->field_0x314);
  return;
}
