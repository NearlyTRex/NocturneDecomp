// Name: core_ghoul.cpp_CGhoul_load_FUN_004e81c0
// Address: 004e81c0
// Address Range: [[004e81c0, 004e82c4]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_CGhoul_load_FUN_004e81c0()
// Globals:
//   TerminatedCString s_speed_0062ddfa
//   TerminatedCString s_modelName_0062de00
//   TerminatedCString s_guardDistance_0062de0a
//   TerminatedCString s_livesLeft_0062de18
//   TerminatedCString s_motion_state_0062de22
//   TerminatedCString s_partStatus_0062de2f
//   TerminatedCString s_spasmCount_0062de3a
//   TerminatedCString s_livesLeft_0062de45
//   TerminatedCString s_ariseTimer_0062de4f
//   int g_CGhoulClassVersion = 0x7
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_CGhoul_load(CGhoul* pGhoul) */

void core_ghoul_cpp_CGhoul_load_FUN_004e81c0(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CGhoulClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if ((1 < g_CGhoulClassVersion) && (g_CGhoulClassVersion < 7)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (2 < g_CGhoulClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_character.base_actor.location.position.y,
               "livesLeft");
  }
  if (4 < g_CGhoulClassVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(in_stack_00000004->base_character).model.motion_controller,"motion state")
    ;
  }
  if (g_CGhoulClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializePartStatus_FUN_0040bae0
            (&(in_stack_00000004->base_character).model,"partStatus");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.location.position.z,
             "spasmCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.location.position.y,
             "livesLeft");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14),
             "ariseTimer");
  return;
}


// Assembly code:
// 004e81c0: PUSH EBX
//   Label: core_ghoul.cpp_CGhoul_load_FUN_004e81c0
// 004e81c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e81c5: PUSH EBX
// 004e81c6: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004e81cb: MOV EDX,dword ptr [0x0067b92c]
//   XREF to: 0067b92c (READ)
// 004e81d1: ADD ESP,0x4
// 004e81d4: CMP EDX,0x4
// 004e81d7: JL 0x004e825a
//   XREF to: 004e825a (CONDITIONAL_JUMP)
// 004e81dd: PUSH 0x62de00
//   Label: LAB_004e81dd
//   XREF to: 0062de00 (DATA)
// 004e81e2: LEA EAX,[EBX + 0x158]
// 004e81e8: PUSH EAX
// 004e81e9: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004e81ee: MOV ECX,dword ptr [0x0067b92c]
//   XREF to: 0067b92c (READ)
// 004e81f4: ADD ESP,0x8
// 004e81f7: CMP ECX,0x2
// 004e81fa: JL 0x004e8215
//   XREF to: 004e8215 (CONDITIONAL_JUMP)
// 004e81fc: CMP ECX,0x7
// 004e81ff: JGE 0x004e8215
//   XREF to: 004e8215 (CONDITIONAL_JUMP)
// 004e8201: PUSH 0x62de0a
//   XREF to: 0062de0a (DATA)
// 004e8206: LEA EAX,[EBX + 0xbe34]
// 004e820c: PUSH EAX
// 004e820d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004e8212: ADD ESP,0x8
// 004e8215: CMP dword ptr [0x0067b92c],0x3
//   Label: LAB_004e8215
//   XREF to: 0067b92c (READ)
// 004e821c: JL 0x004e8232
//   XREF to: 004e8232 (CONDITIONAL_JUMP)
// 004e821e: PUSH 0x62de18
//   XREF to: 0062de18 (DATA)
// 004e8223: LEA EAX,[EBX + 0xbed8]
// 004e8229: PUSH EAX
// 004e822a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e822f: ADD ESP,0x8
// 004e8232: CMP dword ptr [0x0067b92c],0x5
//   Label: LAB_004e8232
//   XREF to: 0067b92c (READ)
// 004e8239: JL 0x004e824f
//   XREF to: 004e824f (CONDITIONAL_JUMP)
// 004e823b: PUSH 0x62de22
//   XREF to: 0062de22 (DATA)
// 004e8240: LEA EAX,[EBX + 0x158]
// 004e8246: PUSH EAX
// 004e8247: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004e824c: ADD ESP,0x8
// 004e824f: CMP dword ptr [0x0067b92c],0x6
//   Label: LAB_004e824f
//   XREF to: 0067b92c (READ)
// 004e8256: JGE 0x004e8273
//   XREF to: 004e8273 (CONDITIONAL_JUMP)
// 004e8258: POP EBX
// 004e8259: RET
// 004e825a: PUSH 0x62ddfa
//   Label: LAB_004e825a
//   XREF to: 0062ddfa (DATA)
// 004e825f: LEA EAX,[EBX + 0xbe24]
// 004e8265: PUSH EAX
// 004e8266: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004e826b: ADD ESP,0x8
// 004e826e: JMP 0x004e81dd
//   XREF to: 004e81dd (UNCONDITIONAL_JUMP)
// 004e8273: PUSH 0x62de2f
//   Label: LAB_004e8273
//   XREF to: 0062de2f (DATA)
// 004e8278: LEA EAX,[EBX + 0x158]
// 004e827e: PUSH EAX
// 004e827f: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 004e8284: ADD ESP,0x8
// 004e8287: PUSH 0x62de3a
//   XREF to: 0062de3a (DATA)
// 004e828c: LEA EAX,[EBX + 0xbedc]
// 004e8292: PUSH EAX
// 004e8293: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e8298: ADD ESP,0x8
// 004e829b: PUSH 0x62de45
//   XREF to: 0062de45 (DATA)
// 004e82a0: LEA EAX,[EBX + 0xbed8]
// 004e82a6: PUSH EAX
// 004e82a7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e82ac: ADD ESP,0x8
// 004e82af: PUSH 0x62de4f
//   XREF to: 0062de4f (DATA)
// 004e82b4: ADD EBX,0xbec8
// 004e82ba: PUSH EBX
// 004e82bb: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e82c0: ADD ESP,0x8
// 004e82c3: POP EBX
// 004e82c4: RET
