// Name: core_marquee.cpp_CMarquee_load_FUN_0050c2f0
// Address: 0050c2f0
// Address Range: [[0050c2f0, 0050c363]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_CMarquee_load_FUN_0050c2f0()
// Globals:
//   TerminatedCString s_courseName_006359c1
//   TerminatedCString s_totalTime_006359cc
//   TerminatedCString s_param_006359d6
//   TerminatedCString s_phase_006359dc
//   TerminatedCString s_type_006359e2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_CMarquee_load(CMarquee* pMarquee) */

void core_marquee_cpp_CMarquee_load_FUN_0050c2f0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 1),"courseName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[1].location,"totalTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[1].location.position.y,"param");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].location.position.z,"phase");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].orient_matrix.m + 1),"type");
  return;
}


// Assembly code:
// 0050c2f0: PUSH EBX
//   Label: core_marquee.cpp_CMarquee_load_FUN_0050c2f0
// 0050c2f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c2f5: PUSH EBX
// 0050c2f6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0050c2fb: ADD ESP,0x4
// 0050c2fe: PUSH 0x6359c1
//   XREF to: 006359c1 (DATA)
// 0050c303: LEA EAX,[EBX + 0x158]
// 0050c309: PUSH EAX
// 0050c30a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0050c30f: ADD ESP,0x8
// 0050c312: PUSH 0x6359cc
//   XREF to: 006359cc (DATA)
// 0050c317: LEA EAX,[EBX + 0x178]
// 0050c31d: PUSH EAX
// 0050c31e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050c323: ADD ESP,0x8
// 0050c326: PUSH 0x6359d6
//   XREF to: 006359d6 (DATA)
// 0050c32b: LEA EAX,[EBX + 0x17c]
// 0050c331: PUSH EAX
// 0050c332: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050c337: ADD ESP,0x8
// 0050c33a: PUSH 0x6359dc
//   XREF to: 006359dc (DATA)
// 0050c33f: LEA EAX,[EBX + 0x180]
// 0050c345: PUSH EAX
// 0050c346: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050c34b: ADD ESP,0x8
// 0050c34e: PUSH 0x6359e2
//   XREF to: 006359e2 (DATA)
// 0050c353: ADD EBX,0x1a0
// 0050c359: PUSH EBX
// 0050c35a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050c35f: ADD ESP,0x8
// 0050c362: POP EBX
// 0050c363: RET
