// Name: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
// Address: 00502420
// Address Range: [[00502420, 0050242c]]
// Convention: __cdecl
// Signature: char engine_keys.cpp_CKeys_getKeyState_FUN_00502420(CKeys * this, int keyCode)
// Globals:
//   char[256] g_KeyboardState

#include "nocturne.h"

char __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys *this,int keyCode)

{
  return g_KeyboardState[keyCode];
}


// Assembly code:
// 00502420: MOV EDX,dword ptr [ESP + 0x8]
//   Label: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
//   XREF to: Stack[0x8] (READ)
// 00502424: XOR EAX,EAX
// 00502426: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 0050242c: RET
