// Name: core_netgame.cpp_removeChatOut_FUN_0050b070
// Address: 0050b070
// Address Range: [[0050b070, 0050b101]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0050b070(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_0050b070(int index)

{
  if ((index < 0) || (g_INT_01d51050 <= index)) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x107;
    core_main_c_displayErrorAndQuit_FUN_004e4500("removeChatOut - invalid index");
  }
  g_INT_01d51050 = g_INT_01d51050 + -1;
  memmove
            (g_SChatOutMessage_ARRAY_01d51054 + index,g_SChatOutMessage_ARRAY_01d51054 + index + 1,
             (g_INT_01d51050 - index) * 0x114);
  return;
}
