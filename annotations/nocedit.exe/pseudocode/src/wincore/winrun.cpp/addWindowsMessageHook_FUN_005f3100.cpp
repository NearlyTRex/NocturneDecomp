// Name: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
// Address: 005f3100
// Address Range: [[005f3100, 005f314b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100(SMessageHandler message_handler)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100(SMessageHandler message_handler)

{
  if (2 < g_NumWindowMessageHandlers) {
    g_CurrentFilename = "..\\wincore\\winrun.cpp";
    g_CurrentLineNumber = 98;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addWindowsMessageHook - too many!");
  }
  g_WindowMessageHandlers[g_NumWindowMessageHandlers] = message_handler;
  g_NumWindowMessageHandlers = g_NumWindowMessageHandlers + 1;
  return;
}
