// Name: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// Address: 0053f4b0
// Address Range: [[0053f4b0, 0053f541]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index)

{
  if ((index < 0) || (DAT_02f98ad0 <= index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x107;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
  }
  DAT_02f98ad0 = DAT_02f98ad0 + -1;
  memmove
            (&DAT_02f98ad4 + index * 0x45,&DAT_02f98ad4 + (index + 1) * 0x45,
             (DAT_02f98ad0 - index) * 0x114);
  return;
}
