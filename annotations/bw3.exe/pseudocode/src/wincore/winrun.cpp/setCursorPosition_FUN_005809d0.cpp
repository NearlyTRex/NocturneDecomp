// Name: wincore_winrun.cpp_setCursorPosition_FUN_005809d0
// Address: 005809d0
// Address Range: [[005809d0, 005809f3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005809d0(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005809d0(int x,int y)

{
  SetCursorPos(x,y);
  g_MouseX = x;
  g_MouseY = y;
  return;
}
