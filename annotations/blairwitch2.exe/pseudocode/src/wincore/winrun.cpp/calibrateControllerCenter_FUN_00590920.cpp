// Name: wincore_winrun.cpp_calibrateControllerCenter_FUN_00590920
// Address: 00590920
// Address Range: [[00590920, 00590950]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00590920(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00590920(int controller_index)

{
  g_INT_02665a44 = 1;
  wincore_winrun_cpp_pollController_FUN_005902a0(controller_index);
  g_INT_02665a44 = 0;
  return;
}
