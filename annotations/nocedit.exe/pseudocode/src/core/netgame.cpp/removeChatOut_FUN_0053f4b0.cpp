// Name: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// Address: 0053f4b0
// Address Range: [[0053f4b0, 0053f541]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index)

{
  if ((index < 0) || (g_ChatOutCount <= index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 263;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
  }
  g_ChatOutCount = g_ChatOutCount + -1;
  memmove
            (g_ChatOutMessages + index,g_ChatOutMessages + index + 1,
             (g_ChatOutCount - index) * 0x114);
  return;
}
