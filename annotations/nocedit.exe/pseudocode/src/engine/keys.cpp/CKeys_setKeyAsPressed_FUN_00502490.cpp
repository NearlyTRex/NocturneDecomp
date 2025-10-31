// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
// Address: 00502490
// Address Range: [[00502490, 0050249b]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this, int keyCode)
// Cross-references:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 (004dbe60) at 004dbea2 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_KeyboardState

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys *this,int keyCode)

{
  g_KeyboardState[keyCode] = '\x01';
  return;
}


// Assembly code:
// 00502490: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: Stack[0x8] (READ)
// 00502494: MOV byte ptr [EAX + 0x2d03e98],0x1
//   XREF to: 02d03e98 (DATA)
// 0050249b: RET
