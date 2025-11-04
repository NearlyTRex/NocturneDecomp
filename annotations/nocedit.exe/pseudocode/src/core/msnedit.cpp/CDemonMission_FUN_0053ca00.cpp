// Name: core_msnedit.cpp_CDemonMission_FUN_0053ca00
// Address: 0053ca00
// Address Range: [[0053ca00, 0053ca24]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_CDemonMission_FUN_0053ca00(CDemonMission * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 (0040d040) at 0040d0b0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MouseX
//   int g_MouseY
// Function calls:
//   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca00(CDemonMission *this_ptr)

{
  core_msnedit_cpp_BeginAndEndScene_FUN_0053c970();
  return;
}


// Assembly code:
// 0053ca00: PUSH EBX
//   Label: core_msnedit.cpp_CDemonMission_FUN_0053ca00
// 0053ca01: PUSH ESI
// 0053ca02: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0053ca08: PUSH EDX
// 0053ca09: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0053ca0f: PUSH ECX
// 0053ca10: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053ca14: PUSH EBX
// 0053ca15: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0053ca19: PUSH ESI
// 0053ca1a: CALL core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
//   XREF to: 0053c970 (UNCONDITIONAL_CALL)
// 0053ca1f: ADD ESP,0x10
// 0053ca22: POP ESI
// 0053ca23: POP EBX
// 0053ca24: RET
