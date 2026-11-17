// Name: core_netgame.cpp_removeChatOut_FUN_0052c240
// Address: 0052c240
// Address Range: [[0052c240, 0052c2d1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

{
  if ((index < 0) || (g_INT_01d6dfb8 <= index)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
    g_INT_01d1d404 = 0x107;
    core_main_c_displayErrorAndQuit_FUN_005030e0("removeChatOut - invalid index");
  }
  g_INT_01d6dfb8 = g_INT_01d6dfb8 + -1;
  memmove
            (g_SChatOutMessage_ARRAY_01d6dfbc + index,g_SChatOutMessage_ARRAY_01d6dfbc + index + 1,
             (g_INT_01d6dfb8 - index) * 0x114);
  return;
}
