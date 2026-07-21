// Name: wincore_winrun.cpp_setCursorPosition_FUN_00558d60
// Address: 00558d60
// Address Range: [[00558d60, 00558d83]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int param_1,int param_2)

{
  SetCursorPos(param_1,param_2);
  _DAT_01bd1d8c = param_1;
  _DAT_01bd1d90 = param_2;
  return;
}
