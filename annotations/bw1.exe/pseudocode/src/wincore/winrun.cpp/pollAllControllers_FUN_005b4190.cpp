// Name: wincore_winrun.cpp_pollAllControllers_FUN_005b4190
// Address: 005b4190
// Address Range: [[005b4190, 005b41bd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_005b4190(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_005b4190(void)

{
  int controller_index;
  
  controller_index = 0;
  do {
    wincore_winrun_cpp_pollController_FUN_005b3d70(controller_index);
    controller_index = controller_index + 1;
  } while (controller_index < 4);
  wincore_winrun_cpp_updateInputIdleTimers_FUN_005b4320((float)g_INT_01c43530 * 1.525879e-05f);
  return;
}
