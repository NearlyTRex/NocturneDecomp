// Name: wincore_winrun.cpp_setCursorPosition_FUN_005b2750
// Address: 005b2750
// Address Range: [[005b2750, 005b2773]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005b2750(int x,int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005b2750(int x,int y)

{
  SetCursorPos(x,y);
  g_MouseX = x;
  g_MouseY = y;
  return;
}
