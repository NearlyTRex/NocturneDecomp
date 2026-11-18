// Name: wincore_winrun.cpp_clearController_FUN_005b42d0
// Address: 005b42d0
// Address Range: [[005b42d0, 005b42ed]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearController_FUN_005b42d0(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearController_FUN_005b42d0(int controller_index)

{
  memset((void *)(controller_index * 0xac + 0x2c9cf14),0,0xac);
  return;
}
