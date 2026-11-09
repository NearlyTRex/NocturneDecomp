// Name: wincore_winrun.cpp_setCursorPosition_FUN_005809d0
// Address: 005809d0
// Address Range: [[005809d0, 005809f3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005809d0(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005809d0(int x,int y)

{
  SetCursorPos(x,y);
  _DAT_01c5fadc = x;
  _DAT_01c5fae0 = y;
  return;
}
