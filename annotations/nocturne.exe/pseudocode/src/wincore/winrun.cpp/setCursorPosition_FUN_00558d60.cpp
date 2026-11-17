// Name: wincore_winrun.cpp_setCursorPosition_FUN_00558d60
// Address: 00558d60
// Address Range: [[00558d60, 00558d83]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int x,int y)

{
  SetCursorPos(x,y);
  g_INT_01bd1d8c = x;
  g_INT_01bd1d90 = y;
  return;
}
