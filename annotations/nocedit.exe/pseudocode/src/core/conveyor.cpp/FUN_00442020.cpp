// Name: core_conveyor.cpp_FUN_00442020
// Address: 00442020
// Address Range: [[00442020, 004420b4]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00442020()
// Globals:
//   TerminatedCString s_size_00618e44
//   TerminatedCString s_direction_00618e49
//   TerminatedCString s_startEvent_00618e53
//   TerminatedCString s_stopEvent_00618e5e
//   TerminatedCString s_state_00618e68
//   TerminatedCString s_actorClass_00618e6e
//   int g_CConveyorClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_00442020(undefined4 param_1) */

void core_conveyor_cpp_FUN_00442020(void)

{
  int in_stack_00000004;
  
  core_platfrm_cpp_CPlatform_load_FUN_0054dbc0();
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 0x72c),"size");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 0x738),"direction");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x744),"startEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x7a8),"stopEvent");
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(in_stack_00000004 + 0x80c),"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x810),"actorClass");
  return;
}


// Assembly code:
// 00442020: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00442020
// 00442021: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00442025: PUSH EBX
// 00442026: CALL core_platfrm.cpp_CPlatform_load_FUN_0054dbc0
//   XREF to: 0054dbc0 (UNCONDITIONAL_CALL)
// 0044202b: ADD ESP,0x4
// 0044202e: PUSH 0x618e44
//   XREF to: 00618e44 (DATA)
// 00442033: LEA EAX,[EBX + 0x72c]
// 00442039: PUSH EAX
// 0044203a: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0044203f: ADD ESP,0x8
// 00442042: PUSH 0x618e49
//   XREF to: 00618e49 (DATA)
// 00442047: LEA EAX,[EBX + 0x738]
// 0044204d: PUSH EAX
// 0044204e: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00442053: ADD ESP,0x8
// 00442056: PUSH 0x618e53
//   XREF to: 00618e53 (DATA)
// 0044205b: LEA EAX,[EBX + 0x744]
// 00442061: PUSH EAX
// 00442062: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00442067: ADD ESP,0x8
// 0044206a: PUSH 0x618e5e
//   XREF to: 00618e5e (DATA)
// 0044206f: LEA EAX,[EBX + 0x7a8]
// 00442075: PUSH EAX
// 00442076: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0044207b: ADD ESP,0x8
// 0044207e: PUSH 0x618e68
//   XREF to: 00618e68 (DATA)
// 00442083: LEA EAX,[EBX + 0x80c]
// 00442089: PUSH EAX
// 0044208a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0044208f: MOV EDX,dword ptr [0x0066e910]
//   XREF to: 0066e910 (READ)
// 00442095: ADD ESP,0x8
// 00442098: CMP EDX,0x2
// 0044209b: JGE 0x0044209f
//   XREF to: 0044209f (CONDITIONAL_JUMP)
// 0044209d: POP EBX
// 0044209e: RET
// 0044209f: PUSH 0x618e6e
//   Label: LAB_0044209f
//   XREF to: 00618e6e (DATA)
// 004420a4: ADD EBX,0x810
// 004420aa: PUSH EBX
// 004420ab: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004420b0: ADD ESP,0x8
// 004420b3: POP EBX
// 004420b4: RET
