// Name: core_filmreel.cpp_serialize_FUN_004bede0
// Address: 004bede0
// Address Range: [[004bede0, 004bee24]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_serialize_FUN_004bede0()
// Globals:
//   TerminatedCString s_keyReel_00629bcd
//   TerminatedCString s_keyEvent_00629bd5
//   int g_CFilmProjectorClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_dest.cpp_CActorDestination_load_FUN_0046fdb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_KeyReelAndEvent(undefined4 param_1) */

void core_filmreel_cpp_serialize_FUN_004bede0(void)

{
  int in_stack_00000004;
  
  core_dest_cpp_CActorDestination_load_FUN_0046fdb0();
  if (g_CFilmProjectorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004 + 0x370),"keyReel");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004 + 0x374),"keyEvent");
  return;
}


// Assembly code:
// 004bede0: PUSH EBX
//   Label: core_filmreel.cpp_serialize_FUN_004bede0
// 004bede1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bede5: PUSH EBX
// 004bede6: CALL core_dest.cpp_CActorDestination_load_FUN_0046fdb0
//   XREF to: 0046fdb0 (UNCONDITIONAL_CALL)
// 004bedeb: MOV EDX,dword ptr [0x0067a2fc]
//   XREF to: 0067a2fc (READ)
// 004bedf1: ADD ESP,0x4
// 004bedf4: CMP EDX,0x2
// 004bedf7: JGE 0x004bedfb
//   XREF to: 004bedfb (CONDITIONAL_JUMP)
// 004bedf9: POP EBX
// 004bedfa: RET
// 004bedfb: PUSH 0x629bcd
//   Label: LAB_004bedfb
//   XREF to: 00629bcd (DATA)
// 004bee00: LEA EAX,[EBX + 0x370]
// 004bee06: PUSH EAX
// 004bee07: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004bee0c: ADD ESP,0x8
// 004bee0f: PUSH 0x629bd5
//   XREF to: 00629bd5 (DATA)
// 004bee14: LEA EAX,[EBX + 0x374]
// 004bee1a: PUSH EAX
// 004bee1b: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004bee20: ADD ESP,0x8
// 004bee23: POP EBX
// 004bee24: RET
