// Name: core_hero.cpp_CHero_toggleLeverNow_FUN_004d3460
// Address: 004d3460
// Address Range: [[004d3460, 004d34fc]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004d3460(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004d3460(CHero *this_ptr)

{
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"@CHero::toggleLeverNow\n" + 1)
  ;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(this_ptr->base).model.base);
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n");
  if (this_ptr->lever_to_pull != (CLever *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  toggling lever %s\n");
    core_lever_cpp_CLever_activate_FUN_004e0630(this_ptr->lever_to_pull);
    this_ptr->lever_to_pull = (CLever *)0x0;
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
