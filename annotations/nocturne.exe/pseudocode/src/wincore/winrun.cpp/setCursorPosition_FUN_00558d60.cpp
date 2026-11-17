// Name: wincore_winrun.cpp_setCursorPosition_FUN_00558d60
// Address: 00558d60
// Address Range: [[00558d60, 00558d83]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int x,int y)

{
  SetCursorPos(x,y);
  g_MouseX = x;
  g_MouseY = y;
  return;
}
