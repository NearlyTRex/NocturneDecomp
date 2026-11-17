// Name: wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
// Address: 0058ed10
// Address Range: [[0058ed10, 0058ed33]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(int x,int y)

{
  SetCursorPos(x,y);
  g_INT_01c2a37c = x;
  g_INT_01c2a380 = y;
  return;
}
