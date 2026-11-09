// Name: core_hero.cpp_FUN_004cf440
// Address: 004cf440
// Address Range: [[004cf440, 004cf4dc]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004cf440(int param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004cf440(int param_1)

{
  uint uVar1;
  
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"@CHero::toggleLeverNow\n" + 1);
  uVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"  current motion is %s\n",uVar1);
  if (*(int *)(param_1 + 0x25610) != 0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"  toggling lever %s\n",*(int *)(param_1 + 0x25610));
    core_lever_cpp_FUN_004e20e0(*(CLever **)(param_1 + 0x25610));
    *(uint *)(param_1 + 0x25610) = 0;
    return 1;
  }
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
