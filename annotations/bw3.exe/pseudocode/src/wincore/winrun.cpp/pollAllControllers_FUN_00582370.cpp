// Name: wincore_winrun.cpp_pollAllControllers_FUN_00582370
// Address: 00582370
// Address Range: [[00582370, 0058239d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00582370(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00582370(void)

{
  int controller_index;
  
  controller_index = 0;
  do {
    wincore_winrun_cpp_pollController_FUN_00581f50(controller_index);
    controller_index = controller_index + 1;
  } while (controller_index < 4);
  wincore_winrun_cpp_updateInputIdleTimers_FUN_00582500
            ((float)g_GlobalDeltaTimeInt * 1.525879e-05f);
  return;
}
