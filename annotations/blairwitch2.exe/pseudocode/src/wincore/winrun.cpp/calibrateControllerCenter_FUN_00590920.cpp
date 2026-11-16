// Name: wincore_winrun.cpp_calibrateControllerCenter_FUN_00590920
// Address: 00590920
// Address Range: [[00590920, 00590950]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00590920(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00590920(int controller_index)

{
  _DAT_02665a44 = 1;
  wincore_winrun_cpp_pollController_FUN_005902a0(controller_index);
  _DAT_02665a44 = 0;
  return;
}
