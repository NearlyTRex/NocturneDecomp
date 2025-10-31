// Name: core_stairs.cpp_FUN_005ba4f0
// Address: 005ba4f0
// Address Range: [[005ba4f0, 005ba563]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba4f0()
// Globals:
//   TerminatedCString s_rise_0065306a
//   TerminatedCString s_run_0065306f
//   TerminatedCString s_width_00653073
//   TerminatedCString s_count_00653079
//   TerminatedCString s_groundType_0065307f
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0

#include "nocturne.h"

void core_stairs_cpp_FUN_005ba4f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 1),"rise");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"run");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 8),"width");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0x14),"count");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[7].create_event + 0x50),"groundType");
  return;
}


// Assembly code:
// 005ba4f0: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba4f0
// 005ba4f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ba4f5: PUSH EBX
// 005ba4f6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005ba4fb: ADD ESP,0x4
// 005ba4fe: PUSH 0x65306a
//   XREF to: 0065306a (DATA)
// 005ba503: LEA EAX,[EBX + 0x158]
// 005ba509: PUSH EAX
// 005ba50a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005ba50f: ADD ESP,0x8
// 005ba512: PUSH 0x65306f
//   XREF to: 0065306f (DATA)
// 005ba517: LEA EAX,[EBX + 0x15c]
// 005ba51d: PUSH EAX
// 005ba51e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005ba523: ADD ESP,0x8
// 005ba526: PUSH 0x653073
//   XREF to: 00653073 (DATA)
// 005ba52b: LEA EAX,[EBX + 0x160]
// 005ba531: PUSH EAX
// 005ba532: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005ba537: ADD ESP,0x8
// 005ba53a: PUSH 0x653079
//   XREF to: 00653079 (DATA)
// 005ba53f: LEA EAX,[EBX + 0x16c]
// 005ba545: PUSH EAX
// 005ba546: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ba54b: ADD ESP,0x8
// 005ba54e: PUSH 0x65307f
//   XREF to: 0065307f (DATA)
// 005ba553: ADD EBX,0xa30
// 005ba559: PUSH EBX
// 005ba55a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ba55f: ADD ESP,0x8
// 005ba562: POP EBX
// 005ba563: RET
