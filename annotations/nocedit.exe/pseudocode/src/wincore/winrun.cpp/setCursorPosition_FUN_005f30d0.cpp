// Name: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
// Address: 005f30d0
// Address Range: [[005f30d0, 005f30f3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x,int y)

{
  (*g_SetCursorPosFunc)(x,y);
  g_MouseX = x;
  g_MouseY = y;
  return;
}
