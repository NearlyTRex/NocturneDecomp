// Name: core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
// Address: 00522d30
// Address Range: [[00522d30, 00522d8c]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20 (00522d20) at 00522d25 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00522ec2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005244cd [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538206 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_0063899d
//   TerminatedCString s_core_mission_cpp_006389b1
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00523f50
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission *this_ptr)

{
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x84);
  core_mission_cpp_CDemonMission_FUN_00523f50(this_ptr);
  this_ptr->set_list = (void *)0x0;
  this_ptr->field2_0xc[0x38] = '\0';
  this_ptr->field2_0xc[0] = '\0';
  this_ptr->field2_0xc[1] = '\0';
  this_ptr->field2_0xc[2] = '\0';
  this_ptr->field2_0xc[3] = '\0';
  this_ptr->field6_0x54c[0x33c] = '\0';
  this_ptr->field6_0x54c[0x33d] = '\0';
  this_ptr->field6_0x54c[0x33e] = '\0';
  this_ptr->field6_0x54c[0x33f] = '\0';
  this_ptr->actorCountMaybe = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x8f);
  return;
}


// Assembly code:
// 00522d30: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
// 00522d31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00522d35: PUSH 0x84
// 00522d3a: PUSH 0x63899d
//   XREF to: 0063899d (DATA)
// 00522d3f: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00522d44: ADD ESP,0x8
// 00522d47: PUSH EBX
// 00522d48: CALL core_mission.cpp_CDemonMission_FUN_00523f50
//   XREF to: 00523f50 (UNCONDITIONAL_CALL)
// 00522d4d: MOV dword ptr [EBX + 0x144],0x0
// 00522d57: MOV byte ptr [EBX + 0x44],0x0
// 00522d5b: ADD ESP,0x4
// 00522d5e: MOV dword ptr [EBX + 0xc],0x0
// 00522d65: PUSH 0x8f
// 00522d6a: MOV dword ptr [EBX + 0x888],0x0
// 00522d74: PUSH 0x6389b1
//   XREF to: 006389b1 (DATA)
// 00522d79: MOV dword ptr [EBX + 0x88c],0x0
// 00522d83: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00522d88: ADD ESP,0x8
// 00522d8b: POP EBX
// 00522d8c: RET
