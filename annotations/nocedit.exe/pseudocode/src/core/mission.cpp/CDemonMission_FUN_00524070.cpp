// Name: core_mission.cpp_CDemonMission_FUN_00524070
// Address: 00524070
// Address Range: [[00524070, 0052409b]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00524070(CDemonMission * this_ptr)
// Cross-references:
//   core_teleport.cpp_CTeleport_process_FUN_005daa20 (005daa20) at 005daabb [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524070(CDemonMission *this_ptr)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field6_0x54c + 4) = *in_stack_00000008;
  *(undefined4 *)(this_ptr->field6_0x54c + 8) = in_stack_00000008[1];
  *(undefined4 *)(this_ptr->field6_0x54c + 0xc) = in_stack_00000008[2];
  *(undefined4 *)(this_ptr->field6_0x54c + 0x10) = in_stack_00000008[3];
  return;
}


// Assembly code:
// 00524070: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_mission.cpp_CDemonMission_FUN_00524070
//   XREF to: Stack[0x8] (READ)
// 00524074: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00524078: MOV ECX,dword ptr [EDX]
// 0052407a: MOV dword ptr [EAX + 0x550],ECX
// 00524080: MOV ECX,dword ptr [EDX + 0x4]
// 00524083: MOV dword ptr [EAX + 0x554],ECX
// 00524089: MOV ECX,dword ptr [EDX + 0x8]
// 0052408c: MOV dword ptr [EAX + 0x558],ECX
// 00524092: MOV EDX,dword ptr [EDX + 0xc]
// 00524095: MOV dword ptr [EAX + 0x55c],EDX
// 0052409b: RET
