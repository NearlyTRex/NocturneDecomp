// Name: core_hero.cpp_FUN_004eb7f0
// Address: 004eb7f0
// Address Range: [[004eb7f0, 004eb88c]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004eb7f0(int param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004eb7f0(int param_1)

{
  SMotion *pSVar1;
  
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"CHero::toggleLeverNow\n");
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 0x158));
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"  current motion is %s\n",pSVar1);
  if (*(int *)(param_1 + 0x1ff80) != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"  toggling lever %s\n",*(int *)(param_1 + 0x1ff80));
    core_lever_cpp_CLever_activate_FUN_004ff570(*(CLever **)(param_1 + 0x1ff80));
    *(uint *)(param_1 + 0x1ff80) = 0;
    return 1;
  }
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
