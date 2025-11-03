// Name: core_actor.cpp_crc32ProcessInt_FUN_0040cf50
// Address: 0040cf50
// Address Range: [[0040cf50, 0040cf64]]
// Convention: __cdecl
// Signature: void core_actor.cpp_crc32ProcessInt_FUN_0040cf50(uint * crc_state, int value)
// Cross-references:
//   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 (00409ec0) at 00409f06 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042dde0 (0042dde0) at 0042de41 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf50(uint *crc_state,int value)

{
  BADSPACEBASE *in_ESP;
  
  core_actor_cpp_crc32ProcessBuffer_FUN_0040cf10(crc_state,(byte *)&value,4);
  return;
}


// Assembly code:
// 0040cf50: PUSH 0x4
//   Label: core_actor.cpp_crc32ProcessInt_FUN_0040cf50
// 0040cf52: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[0x8] (DATA)
// 0040cf56: PUSH EAX
// 0040cf57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040cf5b: PUSH EDX
// 0040cf5c: CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10
//   XREF to: 0040cf10 (UNCONDITIONAL_CALL)
// 0040cf61: ADD ESP,0xc
// 0040cf64: RET
