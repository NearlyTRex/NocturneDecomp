// Name: wincore_winrun.cpp_calibrateControllerCenter_FUN_005b4460
// Address: 005b4460
// Address Range: [[005b4460, 005b4490]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_005b4460(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_005b4460(int controller_index)

{
  g_INT_02c9d294 = 1;
  wincore_winrun_cpp_pollController_FUN_005b3d70(controller_index);
  g_INT_02c9d294 = 0;
  return;
}
