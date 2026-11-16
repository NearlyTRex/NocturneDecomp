// Name: core_hero.cpp_CHero_toggleLeverNow_FUN_004cf440
// Address: 004cf440
// Address Range: [[004cf440, 004cf4dc]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(CHero *this_ptr)

{
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"@CHero::toggleLeverNow\n" + 1)
  ;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&(this_ptr->base).model.base);
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"  current motion is %s\n");
  if (this_ptr->lever_to_pull != (CLever *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"  toggling lever %s\n");
    core_lever_cpp_CLever_activate_FUN_004e20e0(this_ptr->lever_to_pull);
    this_ptr->lever_to_pull = (CLever *)0x0;
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"  but no lever set!\n");
  return 0;
}
