// Name: core_netgame.cpp_removeChatOut_FUN_0052c240
// Address: 0052c240
// Address Range: [[0052c240, 0052c2d1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

{
  if ((index < 0) || (g_ChatOutCount <= index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 263;
    core_main_c_displayErrorAndQuit_FUN_005030e0("removeChatOut - invalid index");
  }
  g_ChatOutCount = g_ChatOutCount + -1;
  memmove
            (g_ChatOutMessages + index,g_ChatOutMessages + index + 1,
             (g_ChatOutCount - index) * 0x114);
  return;
}
