// Name: core_netgame.cpp_removeChatOut_FUN_00503b50
// Address: 00503b50
// Address Range: [[00503b50, 00503be1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_00503b50(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_00503b50(int index)

{
  if ((index < 0) || (g_INT_01dc2690 <= index)) {
    g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
    g_INT_01d71de4 = 0x107;
    core_main_c_displayErrorAndQuit_FUN_004e4330("removeChatOut - invalid index");
  }
  g_INT_01dc2690 = g_INT_01dc2690 + -1;
  memmove
            (g_SChatOutMessage_ARRAY_01dc2694 + index,g_SChatOutMessage_ARRAY_01dc2694 + index + 1,
             (g_INT_01dc2690 - index) * 0x114);
  return;
}
