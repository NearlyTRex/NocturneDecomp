// Name: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
// Address: 00409ec0
// Address Range: [[00409ec0, 00409f10]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor * this_ptr, uint * out_crc)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042dde0 (0042dde0) at 0042dded [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613904
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_FUN_0040cf50
//   core_actor.cpp_FUN_0040cf70
//   core_actor.cpp_FUN_0040cf90

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor *this_ptr,uint *out_crc)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x522);
  core_actor_cpp_FUN_0040cf90();
  core_actor_cpp_FUN_0040cf70();
  core_actor_cpp_FUN_0040cf70();
  core_actor_cpp_FUN_0040cf50();
  return;
}


// Assembly code:
// 00409ec0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
// 00409ec1: PUSH ESI
// 00409ec2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00409ec6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00409eca: PUSH 0x522
// 00409ecf: PUSH 0x613904
//   XREF to: 00613904 (DATA)
// 00409ed4: PUSH EBX
// 00409ed5: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409eda: ADD ESP,0xc
// 00409edd: PUSH EBX
// 00409ede: PUSH ESI
// 00409edf: CALL core_actor.cpp_FUN_0040cf90
//   XREF to: 0040cf90 (UNCONDITIONAL_CALL)
// 00409ee4: ADD ESP,0x8
// 00409ee7: LEA EAX,[EBX + 0x20]
// 00409eea: PUSH EAX
// 00409eeb: PUSH ESI
// 00409eec: CALL core_actor.cpp_FUN_0040cf70
//   XREF to: 0040cf70 (UNCONDITIONAL_CALL)
// 00409ef1: ADD ESP,0x8
// 00409ef4: LEA EAX,[EBX + 0x30]
// 00409ef7: PUSH EAX
// 00409ef8: PUSH ESI
// 00409ef9: CALL core_actor.cpp_FUN_0040cf70
//   XREF to: 0040cf70 (UNCONDITIONAL_CALL)
// 00409efe: ADD ESP,0x8
// 00409f01: MOV EDX,dword ptr [EBX + 0x70]
// 00409f04: PUSH EDX
// 00409f05: PUSH ESI
// 00409f06: CALL core_actor.cpp_FUN_0040cf50
//   XREF to: 0040cf50 (UNCONDITIONAL_CALL)
// 00409f0b: ADD ESP,0x8
// 00409f0e: POP ESI
// 00409f0f: POP EBX
// 00409f10: RET
