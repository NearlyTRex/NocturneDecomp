// Name: wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
// Address: 005f30d0
// Address Range: [[005f30d0, 005f30f3]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x,int y)

{
  int in_stack_00000010;
  int in_stack_00000014;
  
  (*SetCursorPos)(x,y);
  g_MouseX = in_stack_00000010;
  g_MouseY = in_stack_00000014;
  return;
}
