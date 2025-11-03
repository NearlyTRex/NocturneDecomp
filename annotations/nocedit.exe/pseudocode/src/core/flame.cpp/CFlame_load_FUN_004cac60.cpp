// Name: core_flame.cpp_CFlame_load_FUN_004cac60
// Address: 004cac60
// Address Range: [[004cac60, 004cad7a]]
// Convention: unknown
// Signature: undefined core_flame.cpp_CFlame_load_FUN_004cac60()
// Globals:
//   TerminatedCString s_flameSize_0062a156
//   TerminatedCString s_whichFlame_0062a160
//   TerminatedCString s_globeScalar_0062a16b
//   TerminatedCString s_onEvent_0062a177
//   TerminatedCString s_onEvent_0062a17f
//   TerminatedCString s_flameState_0062a187
//   TerminatedCString s_intensity_0062a192
//   TerminatedCString s_randomness_0062a19c
//   TerminatedCString s_burnHero_0062a1a7
//   TerminatedCString s_burnEnemy_0062a1b0
//   int g_CFlameClassVersion = 0x7
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_CFlame_load(CFlame* pFlame) */

void core_flame_cpp_CFlame_load_FUN_004cac60(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"flameSize");
  if (1 < g_CFlameClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient_matrix.m[1].z,"whichFlame");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].orient_matrix.m[2].x,"globeScalar");
  }
  if (2 < g_CFlameClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].runtime_state,"onEvent");
  }
  if (3 < g_CFlameClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].create_event + 0x4c),"onEvent");
  }
  if (4 < g_CFlameClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].orient_matrix.m[2].z,"flameState");
  }
  if (5 < g_CFlameClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[1].previous_transform_state,"intensity");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].previous_transform_state.position.y,"randomness");
  }
  if (g_CFlameClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.position.z,"burnHero");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].previous_transform_state.orientation,"burnEnemy")
  ;
  return;
}


// Assembly code:
// 004cac60: PUSH EBX
//   Label: core_flame.cpp_CFlame_load_FUN_004cac60
// 004cac61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cac65: PUSH EBX
// 004cac66: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004cac6b: ADD ESP,0x4
// 004cac6e: PUSH 0x62a156
//   XREF to: 0062a156 (DATA)
// 004cac73: LEA EAX,[EBX + 0x158]
// 004cac79: PUSH EAX
// 004cac7a: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 004cac7f: MOV EDX,dword ptr [0x0067b4c0]
//   XREF to: 0067b4c0 (READ)
// 004cac85: ADD ESP,0x8
// 004cac88: CMP EDX,0x2
// 004cac8b: JGE 0x004cad24
//   XREF to: 004cad24 (CONDITIONAL_JUMP)
// 004cac91: CMP dword ptr [0x0067b4c0],0x3
//   Label: LAB_004cac91
//   XREF to: 0067b4c0 (READ)
// 004cac98: JL 0x004cacae
//   XREF to: 004cacae (CONDITIONAL_JUMP)
// 004cac9a: PUSH 0x62a177
//   XREF to: 0062a177 (DATA)
// 004cac9f: LEA EAX,[EBX + 0x1b8]
// 004caca5: PUSH EAX
// 004caca6: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004cacab: ADD ESP,0x8
// 004cacae: CMP dword ptr [0x0067b4c0],0x4
//   Label: LAB_004cacae
//   XREF to: 0067b4c0 (READ)
// 004cacb5: JL 0x004caccb
//   XREF to: 004caccb (CONDITIONAL_JUMP)
// 004cacb7: PUSH 0x62a17f
//   XREF to: 0062a17f (DATA)
// 004cacbc: LEA EAX,[EBX + 0x21c]
// 004cacc2: PUSH EAX
// 004cacc3: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004cacc8: ADD ESP,0x8
// 004caccb: CMP dword ptr [0x0067b4c0],0x5
//   Label: LAB_004caccb
//   XREF to: 0067b4c0 (READ)
// 004cacd2: JL 0x004cace8
//   XREF to: 004cace8 (CONDITIONAL_JUMP)
// 004cacd4: PUSH 0x62a187
//   XREF to: 0062a187 (DATA)
// 004cacd9: LEA EAX,[EBX + 0x1b4]
// 004cacdf: PUSH EAX
// 004cace0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cace5: ADD ESP,0x8
// 004cace8: CMP dword ptr [0x0067b4c0],0x6
//   Label: LAB_004cace8
//   XREF to: 0067b4c0 (READ)
// 004cacef: JL 0x004cad19
//   XREF to: 004cad19 (CONDITIONAL_JUMP)
// 004cacf1: PUSH 0x62a192
//   XREF to: 0062a192 (DATA)
// 004cacf6: LEA EAX,[EBX + 0x280]
// 004cacfc: PUSH EAX
// 004cacfd: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004cad02: ADD ESP,0x8
// 004cad05: PUSH 0x62a19c
//   XREF to: 0062a19c (DATA)
// 004cad0a: LEA EAX,[EBX + 0x284]
// 004cad10: PUSH EAX
// 004cad11: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004cad16: ADD ESP,0x8
// 004cad19: CMP dword ptr [0x0067b4c0],0x7
//   Label: LAB_004cad19
//   XREF to: 0067b4c0 (READ)
// 004cad20: JGE 0x004cad51
//   XREF to: 004cad51 (CONDITIONAL_JUMP)
// 004cad22: POP EBX
// 004cad23: RET
// 004cad24: PUSH 0x62a160
//   Label: LAB_004cad24
//   XREF to: 0062a160 (DATA)
// 004cad29: LEA EAX,[EBX + 0x1a8]
// 004cad2f: PUSH EAX
// 004cad30: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cad35: ADD ESP,0x8
// 004cad38: PUSH 0x62a16b
//   XREF to: 0062a16b (DATA)
// 004cad3d: LEA EAX,[EBX + 0x1ac]
// 004cad43: PUSH EAX
// 004cad44: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004cad49: ADD ESP,0x8
// 004cad4c: JMP 0x004cac91
//   XREF to: 004cac91 (UNCONDITIONAL_JUMP)
// 004cad51: PUSH 0x62a1a7
//   Label: LAB_004cad51
//   XREF to: 0062a1a7 (DATA)
// 004cad56: LEA EAX,[EBX + 0x288]
// 004cad5c: PUSH EAX
// 004cad5d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cad62: ADD ESP,0x8
// 004cad65: PUSH 0x62a1b0
//   XREF to: 0062a1b0 (DATA)
// 004cad6a: ADD EBX,0x28c
// 004cad70: PUSH EBX
// 004cad71: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cad76: ADD ESP,0x8
// 004cad79: POP EBX
// 004cad7a: RET
