// Name: core_mission.cpp_CDemonMission_FUN_00523f50
// Address: 00523f50
// Address Range: [[00523f50, 00523fad]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523f50(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_005243a0 (005243a0) at 005243dc [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 (00522d30) at 00522d48 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_HeroCount
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_setcolid.cpp_CDemonSet_FUN_00574560

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523f50(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *this_ptr_00;
  
  pCVar1 = this_ptr->first_actor;
  while (pCVar1 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
    pCVar1 = this_ptr->first_actor;
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  g_HeroCount = 0;
  this_ptr->field6_0x54c[0x338] = '\0';
  this_ptr->field6_0x54c[0x339] = '\0';
  this_ptr->field6_0x54c[0x33a] = '\0';
  this_ptr->field6_0x54c[0x33b] = '\0';
  core_setcolid_cpp_CDemonSet_FUN_00574560(this_ptr_00);
  this_ptr->field6_0x54c[0x14] = '\0';
  this_ptr->field6_0x54c[0x15] = '\0';
  this_ptr->field6_0x54c[0x16] = '\0';
  this_ptr->field6_0x54c[0x17] = '\0';
  return;
}


// Assembly code:
// 00523f50: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00523f50
// 00523f51: PUSH EDI
// 00523f52: PUSH EBP
// 00523f53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00523f57: CMP dword ptr [EBX + 0x548],0x0
// 00523f5e: JZ 0x00523f7e
//   XREF to: 00523f7e (CONDITIONAL_JUMP)
// 00523f60: PUSH ESI
// 00523f61: PUSH 0x1
//   Label: LAB_00523f61
// 00523f63: MOV ECX,dword ptr [EBX + 0x548]
// 00523f69: PUSH ECX
// 00523f6a: PUSH EBX
// 00523f6b: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 00523f70: MOV ESI,dword ptr [EBX + 0x548]
// 00523f76: ADD ESP,0xc
// 00523f79: TEST ESI,ESI
// 00523f7b: JNZ 0x00523f61
//   XREF to: 00523f61 (CONDITIONAL_JUMP)
// 00523f7d: POP ESI
// 00523f7e: PUSH EBX
//   Label: LAB_00523f7e
// 00523f7f: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 00523f84: ADD ESP,0x4
// 00523f87: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00523f8d: XOR EDI,EDI
// 00523f8f: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00523f90: MOV dword ptr [0x02db87bc],EDI
//   XREF to: 02db87bc (WRITE)
// 00523f96: MOV dword ptr [EBX + 0x884],EDI
// 00523f9c: CALL core_setcolid.cpp_CDemonSet_FUN_00574560
//   XREF to: 00574560 (UNCONDITIONAL_CALL)
// 00523fa1: ADD ESP,0x4
// 00523fa4: MOV dword ptr [EBX + 0x560],EDI
// 00523faa: POP EBP
// 00523fab: POP EDI
// 00523fac: POP EBX
// 00523fad: RET
