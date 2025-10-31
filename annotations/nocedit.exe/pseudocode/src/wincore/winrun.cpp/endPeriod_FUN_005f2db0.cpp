// Name: wincore_winrun.cpp_endPeriod_FUN_005f2db0
// Address: 005f2db0
// Address Range: [[005f2db0, 005f2db9]]
// Convention: __watcallRegister
// Signature: void wincore_winrun.cpp_endPeriod_FUN_005f2db0(void)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00507022 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087fa [UNCONDITIONAL_CALL]
// Globals:
//   timeEndPeriod* PTR_timeEndPeriod_00611418 = 00211874
// Function calls:
//   timeEndPeriod

#include "nocturne.h"

void wincore_winrun_cpp_endPeriod_FUN_005f2db0(void)

{
  (*PTR_timeEndPeriod_00611418)(1);
  return;
}


// Assembly code:
// 005f2db0: PUSH 0x1
//   Label: wincore_winrun.cpp_endPeriod_FUN_005f2db0
// 005f2db2: CALL dword ptr CS:[0x611418]
//   XREF to: EXTERNAL:00000014 (COMPUTED_CALL)
//   XREF to: 00611418 (READ)
// 005f2db9: RET
