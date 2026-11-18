// Name: wincore_winrun.cpp_clearController_FUN_005824b0
// Address: 005824b0
// Address Range: [[005824b0, 005824cd]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearController_FUN_005824b0(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearController_FUN_005824b0(int controller_index)

{
  memset((void *)(controller_index * 0xac + 0x2d22c24),0,0xac);
  return;
}
