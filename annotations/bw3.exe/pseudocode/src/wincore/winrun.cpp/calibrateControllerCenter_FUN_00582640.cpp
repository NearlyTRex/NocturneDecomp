// Name: wincore_winrun.cpp_calibrateControllerCenter_FUN_00582640
// Address: 00582640
// Address Range: [[00582640, 00582670]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00582640(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_calibrateControllerCenter_FUN_00582640(int controller_index)

{
  _DAT_02d22fa4 = 1;
  wincore_winrun_cpp_pollController_FUN_00581f50(controller_index);
  _DAT_02d22fa4 = 0;
  return;
}
