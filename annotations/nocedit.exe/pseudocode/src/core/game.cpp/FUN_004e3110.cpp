// Name: core_game.cpp_FUN_004e3110
// Address: 004e3110
// Address Range: [[004e3110, 004e3181]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004e3110 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, undefined4 param_5)

#include "nocturne.h"

void core_game_cpp_FUN_004e3110
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               uint param_5)

{
  int iVar1;
  
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s : %3.2f ms\n",param_5,
             ((double)(iVar1 - g_ProfileStartTime) * 0.055555555555555601 * 1.52587890625e-05 *
             1000) / (double)g_CGamePtr->delta_time_float,unaff_EBX);
  return;
}
