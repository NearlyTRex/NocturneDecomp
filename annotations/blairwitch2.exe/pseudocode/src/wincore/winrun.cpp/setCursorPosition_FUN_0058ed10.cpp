// Name: wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
// Address: 0058ed10
// Address Range: [[0058ed10, 0058ed33]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(int x,int y)

{
  SetCursorPos(x,y);
  _DAT_01c2a37c = x;
  _DAT_01c2a380 = y;
  return;
}
