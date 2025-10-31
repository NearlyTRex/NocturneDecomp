// Name: core_actor.cpp_FUN_0040cf70
// Address: 0040cf70
// Address Range: [[0040cf70, 0040cf84]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040cf70()
// Cross-references:
//   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 (00409ec0) at 00409eec [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040cf10

#include "nocturne.h"

void core_actor_cpp_FUN_0040cf70(void)

{
  core_actor_cpp_FUN_0040cf10();
  return;
}


// Assembly code:
// 0040cf70: PUSH 0xc
//   Label: core_actor.cpp_FUN_0040cf70
// 0040cf72: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0040cf76: PUSH EDX
// 0040cf77: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040cf7b: PUSH ECX
// 0040cf7c: CALL core_actor.cpp_FUN_0040cf10
//   XREF to: 0040cf10 (UNCONDITIONAL_CALL)
// 0040cf81: ADD ESP,0xc
// 0040cf84: RET
