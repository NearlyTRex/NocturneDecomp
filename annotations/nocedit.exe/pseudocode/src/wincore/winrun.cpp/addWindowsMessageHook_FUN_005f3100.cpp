// Name: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
// Address Range: [[005f3100, 005f314b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100(void)

{
  MessageHandler in_stack_00000004;
  
  if (2 < g_NumWindowMessageHandlers) {
    g_CurrentFilename = "..\\wincore\\winrun.cpp";
    g_CurrentLineNumber = 0x62;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addWindowsMessageHook - too many!");
  }
  g_WindowMessageHandlers[g_NumWindowMessageHandlers] = in_stack_00000004;
  g_NumWindowMessageHandlers = g_NumWindowMessageHandlers + 1;
  return;
}
