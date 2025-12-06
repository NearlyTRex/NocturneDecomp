// Name: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
// Address Range: [[005f3100, 005f314b]]
// Convention: unknown
// Signature: undefined wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100()

#include "nocturne.h"

void wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               uint param_5,WNDPROC param_6)

{
  if (2 < g_NumWindowMessageHandlers) {
    g_CurrentFilename = "..\\wincore\\winrun.cpp";
    g_CurrentLineNumber = 0x62;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addWindowsMessageHook - too many!",unaff_EBX);
  }
  g_WindowMessageHandlers[g_NumWindowMessageHandlers] = param_6;
  g_NumWindowMessageHandlers = g_NumWindowMessageHandlers + 1;
  return;
}
