// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// Address: 00502430
// Address Range: [[00502430, 00502446]]
// Convention: __cdecl
// Signature: char engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys * this, int keyCode)
// Globals:
//   char[256] g_KeyboardState

#include "nocturne.h"

char __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys *this,int keyCode)

{
  char cVar1;
  
  cVar1 = g_KeyboardState[keyCode];
  g_KeyboardState[keyCode] = '\0';
  return cVar1;
}


// Assembly code:
// 00502430: PUSH EBX
//   Label: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// 00502431: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00502435: XOR EAX,EAX
// 00502437: XOR BL,BL
// 00502439: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 0050243f: MOV byte ptr [EDX + 0x2d03e98],BL
//   XREF to: 02d03e98 (DATA)
// 00502445: POP EBX
// 00502446: RET
