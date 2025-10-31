// Name: core_litecone.cpp_FUN_00506d00
// Address: 00506d00
// Address Range: [[00506d00, 00506d80]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506d00()
// Globals:
//   TerminatedCString s_fov_0063156e
//   TerminatedCString s_falloff_00631572
//   TerminatedCString s_state_0063157a
//   TerminatedCString s_onEvent_00631580
//   TerminatedCString s_offEvent_00631588
//   int g_CLightConeClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void core_litecone_cpp_FUN_00506d00(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000004 + 1),"fov");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].actor_name + 4),"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 8),"state");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0xc),"onEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].was_created,"offEvent");
  return;
}


// Assembly code:
// 00506d00: PUSH EBX
//   Label: core_litecone.cpp_FUN_00506d00
// 00506d01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00506d05: PUSH EBX
// 00506d06: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00506d0b: ADD ESP,0x4
// 00506d0e: PUSH 0x63156e
//   XREF to: 0063156e (DATA)
// 00506d13: LEA EAX,[EBX + 0x158]
// 00506d19: PUSH EAX
// 00506d1a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00506d1f: ADD ESP,0x8
// 00506d22: PUSH 0x631572
//   XREF to: 00631572 (DATA)
// 00506d27: LEA EAX,[EBX + 0x15c]
// 00506d2d: PUSH EAX
// 00506d2e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00506d33: MOV EDX,dword ptr [0x0067cff0]
//   XREF to: 0067cff0 (READ)
// 00506d39: ADD ESP,0x8
// 00506d3c: CMP EDX,0x2
// 00506d3f: JGE 0x00506d43
//   XREF to: 00506d43 (CONDITIONAL_JUMP)
// 00506d41: POP EBX
// 00506d42: RET
// 00506d43: PUSH 0x63157a
//   Label: LAB_00506d43
//   XREF to: 0063157a (DATA)
// 00506d48: LEA EAX,[EBX + 0x160]
// 00506d4e: PUSH EAX
// 00506d4f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00506d54: ADD ESP,0x8
// 00506d57: PUSH 0x631580
//   XREF to: 00631580 (DATA)
// 00506d5c: LEA EAX,[EBX + 0x164]
// 00506d62: PUSH EAX
// 00506d63: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00506d68: ADD ESP,0x8
// 00506d6b: PUSH 0x631588
//   XREF to: 00631588 (DATA)
// 00506d70: ADD EBX,0x1c8
// 00506d76: PUSH EBX
// 00506d77: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00506d7c: ADD ESP,0x8
// 00506d7f: POP EBX
// 00506d80: RET
