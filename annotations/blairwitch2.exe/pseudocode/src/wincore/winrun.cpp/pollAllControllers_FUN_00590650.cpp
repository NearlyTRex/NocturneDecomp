// Name: wincore_winrun.cpp_pollAllControllers_FUN_00590650
// Address: 00590650
// Address Range: [[00590650, 0059067d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00590650(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00590650(void)

{
  int controller_index;
  
  controller_index = 0;
  do {
    wincore_winrun_cpp_pollController_FUN_005902a0(controller_index);
    controller_index = controller_index + 1;
  } while (controller_index < 4);
  wincore_winrun_cpp_updateInputIdleTimers_FUN_005907e0
            ((float)g_GlobalDeltaTimeInt * 1.525879e-05f);
  return;
}
