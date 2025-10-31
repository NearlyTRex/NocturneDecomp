// Name: wincore_winrun.cpp_setValue_FUN_005f2f70
// Address: 005f2f70
// Address Range: [[005f2f70, 005f2f79]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setValue_FUN_005f2f70(int val)
// Globals:
//   int g_UnknownInputValue

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setValue_FUN_005f2f70(int val)

{
  g_UnknownInputValue = val;
  return;
}


// Assembly code:
// 005f2f70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: wincore_winrun.cpp_setValue_FUN_005f2f70
//   XREF to: Stack[0x4] (READ)
// 005f2f74: MOV [0x03f96c24],EAX
//   XREF to: 03f96c24 (WRITE)
// 005f2f79: RET
