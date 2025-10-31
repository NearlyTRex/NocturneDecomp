// Name: core_ladder.cpp_CLadder_load_FUN_005029c0
// Address: 005029c0
// Address Range: [[005029c0, 00502a35]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_CLadder_load_FUN_005029c0()
// Globals:
//   TerminatedCString s_model_00630e38
//   TerminatedCString s_ladderSize_00630e3e
//   TerminatedCString s_masterActor_00630e49
//   TerminatedCString s_groundType_00630e55
//   int g_CLadderClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_ladder.cpp_FUN_00502b80

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_CLadder_load(CLadder* pLadder) */

void core_ladder_cpp_CLadder_load_FUN_005029c0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"model");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)&in_stack_00000004[2].location.position.y,"ladderSize");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].orient,"masterActor");
  core_ladder_cpp_FUN_00502b80();
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].orient_matrix.m[1].y,"groundType");
  return;
}


// Assembly code:
// 005029c0: PUSH EBX
//   Label: core_ladder.cpp_CLadder_load_FUN_005029c0
// 005029c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005029c5: PUSH EBX
// 005029c6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005029cb: ADD ESP,0x4
// 005029ce: PUSH 0x630e38
//   XREF to: 00630e38 (DATA)
// 005029d3: LEA EAX,[EBX + 0x158]
// 005029d9: PUSH EAX
// 005029da: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005029df: ADD ESP,0x8
// 005029e2: PUSH 0x630e3e
//   XREF to: 00630e3e (DATA)
// 005029e7: LEA EAX,[EBX + 0x2d4]
// 005029ed: PUSH EAX
// 005029ee: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005029f3: ADD ESP,0x8
// 005029f6: PUSH 0x630e49
//   XREF to: 00630e49 (DATA)
// 005029fb: LEA EAX,[EBX + 0x2e0]
// 00502a01: PUSH EAX
// 00502a02: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00502a07: ADD ESP,0x8
// 00502a0a: PUSH EBX
// 00502a0b: CALL core_ladder.cpp_FUN_00502b80
//   XREF to: 00502b80 (UNCONDITIONAL_CALL)
// 00502a10: MOV EDX,dword ptr [0x0067cf48]
//   XREF to: 0067cf48 (READ)
// 00502a16: ADD ESP,0x4
// 00502a19: CMP EDX,0x2
// 00502a1c: JGE 0x00502a20
//   XREF to: 00502a20 (CONDITIONAL_JUMP)
// 00502a1e: POP EBX
// 00502a1f: RET
// 00502a20: PUSH 0x630e55
//   Label: LAB_00502a20
//   XREF to: 00630e55 (DATA)
// 00502a25: ADD EBX,0x2fc
// 00502a2b: PUSH EBX
// 00502a2c: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00502a31: ADD ESP,0x8
// 00502a34: POP EBX
// 00502a35: RET
