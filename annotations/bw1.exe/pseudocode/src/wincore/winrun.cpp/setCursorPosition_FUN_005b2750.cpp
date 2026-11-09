// Name: wincore_winrun.cpp_setCursorPosition_FUN_005b2750
// Address: 005b2750
// Address Range: [[005b2750, 005b2773]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005b2750(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005b2750(int x,int y)

{
  SetCursorPos(x,y);
  _DAT_01c4353c = x;
  _DAT_01c43540 = y;
  return;
}
