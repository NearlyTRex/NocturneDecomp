// Name: core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0
// Address: 004d19e0
// Address Range: [[004d19e0, 004d1a17]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0()
// Globals:
//   TerminatedCString s_whichPart_0062a9c2
//   TerminatedCString s_masterFrame_0062a9cc
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_CFrankenstienMachine_load(CFrankenstienMachine*
   pFrankMachine) */

void core_frankgen_cpp_CFrankenstienMachine_load_FUN_004d19e0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(in_stack_00000004 + 1),"whichPart");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"masterFrame");
  return;
}


// Assembly code:
// 004d19e0: PUSH EBX
//   Label: core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0
// 004d19e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d19e5: PUSH EBX
// 004d19e6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004d19eb: ADD ESP,0x4
// 004d19ee: PUSH 0x62a9c2
//   XREF to: 0062a9c2 (DATA)
// 004d19f3: LEA EAX,[EBX + 0x158]
// 004d19f9: PUSH EAX
// 004d19fa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004d19ff: ADD ESP,0x8
// 004d1a02: PUSH 0x62a9cc
//   XREF to: 0062a9cc (DATA)
// 004d1a07: LEA EAX,[EBX + 0x15c]
// 004d1a0d: PUSH EAX
// 004d1a0e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004d1a13: ADD ESP,0x8
// 004d1a16: POP EBX
// 004d1a17: RET
