// Name: core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
// Address: 004eb7f0
// Address Range: [[004eb7f0, 004eb88c]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero *this_ptr)

#include "nocturne.h"

uint __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero *this_ptr)

{
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"CHero::toggleLeverNow\n");
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&(this_ptr->base).model.base);
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  current motion is %s\n");
  if (this_ptr->lever_to_pull != (CLever *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  toggling lever %s\n");
    core_lever_cpp_CLever_activate_FUN_004ff570(this_ptr->lever_to_pull);
    this_ptr->lever_to_pull = (CLever *)0x0;
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
