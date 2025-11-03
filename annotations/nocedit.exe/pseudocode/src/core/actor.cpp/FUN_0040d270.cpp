// Name: core_actor.cpp_FUN_0040d270
// Address: 0040d270
// Address Range: [[0040d270, 0040d28b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_FUN_0040d270(void)
// Cross-references:
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 (0040d290) at 0040d29b [DATA]
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_msnedit.cpp_FUN_0053d220

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_0040d270(void)

{
  core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
  return;
}


// Assembly code:
// 0040d270: PUSH EBX
//   Label: core_actor.cpp_FUN_0040d270
// 0040d271: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0040d275: PUSH EDX
// 0040d276: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040d27a: PUSH ECX
// 0040d27b: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0040d281: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 0040d282: CALL core_msnedit.cpp_FUN_0053d220
//   XREF to: 0053d220 (UNCONDITIONAL_CALL)
// 0040d287: ADD ESP,0xc
// 0040d28a: POP EBX
// 0040d28b: RET
