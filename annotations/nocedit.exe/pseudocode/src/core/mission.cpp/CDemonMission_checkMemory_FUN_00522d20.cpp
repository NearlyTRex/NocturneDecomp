// Name: core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
// Address: 00522d20
// Address Range: [[00522d20, 00522d2d]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission * this_ptr)
// Cross-references:
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087cf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cef4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission *this_ptr)

{
  core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
  return;
}


// Assembly code:
// 00522d20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
//   XREF to: Stack[0x4] (READ)
// 00522d24: PUSH EDX
// 00522d25: CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   XREF to: 00522d30 (UNCONDITIONAL_CALL)
// 00522d2a: ADD ESP,0x4
// 00522d2d: RET
