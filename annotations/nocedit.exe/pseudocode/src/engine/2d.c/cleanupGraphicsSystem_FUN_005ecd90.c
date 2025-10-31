// Name: engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
// Address: 00401130
// Address Range: [[00401130, 00401134]]
// Convention: __cdecl
// Signature: void engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90(void)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 0050701d [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087ff [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_005ecd90(void)

{
  wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ecd90();
  return;
}


// Assembly code:
// 00401130: JMP 0x005ecd90
//   Label: engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
//   XREF to: 005ecd90 (UNCONDITIONAL_JUMP)
