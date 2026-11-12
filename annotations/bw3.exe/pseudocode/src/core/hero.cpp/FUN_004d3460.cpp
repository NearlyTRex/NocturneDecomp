// Name: core_hero.cpp_FUN_004d3460
// Address: 004d3460
// Address Range: [[004d3460, 004d34fc]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d3460(int param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d3460(int param_1)

{
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"@CHero::toggleLeverNow\n" + 1)
  ;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
            ((CMotionController *)(param_1 + 0x158));
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n");
  if (*(int *)(param_1 + 0x20ba0) != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  toggling lever %s\n");
    core_lever_cpp_CLever_activate_FUN_004e0630(*(CLever **)(param_1 + 0x20ba0));
    *(uint *)(param_1 + 0x20ba0) = 0;
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
