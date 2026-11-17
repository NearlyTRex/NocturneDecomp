// Name: core_netgame.cpp_removeChatOut_FUN_004e9640
// Address: 004e9640
// Address Range: [[004e9640, 004e96d1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_004e9640(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_004e9640(int index)

{
  if ((index < 0) || (g_INT_01d06610 <= index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 263;
    core_main_c_displayErrorAndQuit_FUN_004c8440("removeChatOut - invalid index");
  }
  g_INT_01d06610 = g_INT_01d06610 + -1;
  memmove
            (g_SChatOutMessage_ARRAY_01d06614 + index,g_SChatOutMessage_ARRAY_01d06614 + index + 1,
             (g_INT_01d06610 - index) * 0x114);
  return;
}
