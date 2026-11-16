// Name: wincore_winrun.cpp_pollAllControllers_FUN_00582370
// Address: 00582370
// Address Range: [[00582370, 0058239d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00582370(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00582370(void)

{
  int controller_index;
  
  controller_index = 0;
  do {
    wincore_winrun_cpp_pollController_FUN_00581f50(controller_index);
    controller_index = controller_index + 1;
  } while (controller_index < 4);
  wincore_winrun_cpp_updateInputIdleTimers_FUN_00582500((float)_DAT_01c5fad0 * _DAT_005d7f02);
  return;
}
