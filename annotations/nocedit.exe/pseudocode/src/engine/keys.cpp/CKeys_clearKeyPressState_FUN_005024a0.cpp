// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 005024ac]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)
// Cross-references:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 (004dbe60) at 004dc145 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_KeyboardState

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys *this,int keyCode)

{
  g_KeyboardState[keyCode] = '\0';
  return;
}


// Assembly code:
// 005024a0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: Stack[0x8] (READ)
// 005024a4: XOR DL,DL
// 005024a6: MOV byte ptr [EAX + 0x2d03e98],DL
//   XREF to: 02d03e98 (DATA)
// 005024ac: RET
