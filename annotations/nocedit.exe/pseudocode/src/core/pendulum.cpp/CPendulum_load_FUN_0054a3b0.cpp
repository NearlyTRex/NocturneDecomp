// Name: core_pendulum.cpp_CPendulum_load_FUN_0054a3b0
// Address: 0054a3b0
// Address Range: [[0054a3b0, 0054a54b]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_CPendulum_load_FUN_0054a3b0()
// Globals:
//   TerminatedCString s_modelName_0063ed11
//   TerminatedCString s_startEvent_0063ed1b
//   TerminatedCString s_moving_0063ed26
//   TerminatedCString s_param_0063ed2d
//   TerminatedCString s_maxAngle_0063ed33
//   TerminatedCString s_swooshSound_0063ed3c
//   TerminatedCString s_creak1Sound_0063ed48
//   TerminatedCString s_creak2Sound_0063ed54
//   TerminatedCString s_swooshPhaseBias_0063ed60
//   TerminatedCString s_killHero_0063ed70
//   TerminatedCString s_killEnemy_0063ed79
//   TerminatedCString s_decay_0063ed83
//   TerminatedCString s_decayTimer_0063ed89
//   TerminatedCString s_groundType_0063ed94
//   TerminatedCString s_stopEvent_0063ed9f
//   TerminatedCString s_oneShot_0063eda9
//   int g_CPendulumClassVersion = 0x8
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_CPendulum_load(CPendulum* pPendulum) */

void core_pendulum_cpp_CPendulum_load_FUN_0054a3b0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.y,"startEvent");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].field13_0xec,"moving");
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004[2].field13_0xec.y,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].field14_0xf8,"maxAngle");
  if (1 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].is_transparent,"swooshSound");
  }
  if (2 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].field22_0x120,"creak1Sound");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].previous_transform_state.dirty_flags,
               "creak2Sound");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].field21_0x11c,"swooshPhaseBias");
  }
  if (3 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].location,"killHero");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].location.position.y,"killEnemy");
  }
  if (4 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[3].location.position.z,"decay");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[3].location.area_id,"decayTimer");
  }
  if (5 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].orient,"groundType");
  }
  if (6 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[2].create_event + 0x10),"stopEvent");
  }
  if (g_CPendulumClassVersion < 8) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[3].orient.bank,"oneShot");
  return;
}


// Assembly code:
// 0054a3b0: PUSH EBX
//   Label: core_pendulum.cpp_CPendulum_load_FUN_0054a3b0
// 0054a3b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a3b5: PUSH EBX
// 0054a3b6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0054a3bb: ADD ESP,0x4
// 0054a3be: PUSH 0x63ed11
//   XREF to: 0063ed11 (DATA)
// 0054a3c3: LEA EAX,[EBX + 0x158]
// 0054a3c9: PUSH EAX
// 0054a3ca: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0054a3cf: ADD ESP,0x8
// 0054a3d2: PUSH 0x63ed1b
//   XREF to: 0063ed1b (DATA)
// 0054a3d7: LEA EAX,[EBX + 0x2d4]
// 0054a3dd: PUSH EAX
// 0054a3de: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054a3e3: ADD ESP,0x8
// 0054a3e6: PUSH 0x63ed26
//   XREF to: 0063ed26 (DATA)
// 0054a3eb: LEA EAX,[EBX + 0x39c]
// 0054a3f1: PUSH EAX
// 0054a3f2: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054a3f7: ADD ESP,0x8
// 0054a3fa: PUSH 0x63ed2d
//   XREF to: 0063ed2d (DATA)
// 0054a3ff: LEA EAX,[EBX + 0x3a0]
// 0054a405: PUSH EAX
// 0054a406: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054a40b: ADD ESP,0x8
// 0054a40e: PUSH 0x63ed33
//   XREF to: 0063ed33 (DATA)
// 0054a413: LEA EAX,[EBX + 0x3a8]
// 0054a419: PUSH EAX
// 0054a41a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054a41f: MOV EDX,dword ptr [0x00680c84]
//   XREF to: 00680c84 (READ)
// 0054a425: ADD ESP,0x8
// 0054a428: CMP EDX,0x2
// 0054a42b: JGE 0x0054a51d
//   XREF to: 0054a51d (CONDITIONAL_JUMP)
// 0054a431: CMP dword ptr [0x00680c84],0x3
//   Label: LAB_0054a431
//   XREF to: 00680c84 (READ)
// 0054a438: JL 0x0054a476
//   XREF to: 0054a476 (CONDITIONAL_JUMP)
// 0054a43a: PUSH 0x63ed48
//   XREF to: 0063ed48 (DATA)
// 0054a43f: LEA EAX,[EBX + 0x3d0]
// 0054a445: PUSH EAX
// 0054a446: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054a44b: ADD ESP,0x8
// 0054a44e: PUSH 0x63ed54
//   XREF to: 0063ed54 (DATA)
// 0054a453: LEA EAX,[EBX + 0x3f0]
// 0054a459: PUSH EAX
// 0054a45a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054a45f: ADD ESP,0x8
// 0054a462: PUSH 0x63ed60
//   XREF to: 0063ed60 (DATA)
// 0054a467: LEA EAX,[EBX + 0x3cc]
// 0054a46d: PUSH EAX
// 0054a46e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054a473: ADD ESP,0x8
// 0054a476: CMP dword ptr [0x00680c84],0x4
//   Label: LAB_0054a476
//   XREF to: 00680c84 (READ)
// 0054a47d: JL 0x0054a4a7
//   XREF to: 0054a4a7 (CONDITIONAL_JUMP)
// 0054a47f: PUSH 0x63ed70
//   XREF to: 0063ed70 (DATA)
// 0054a484: LEA EAX,[EBX + 0x428]
// 0054a48a: PUSH EAX
// 0054a48b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054a490: ADD ESP,0x8
// 0054a493: PUSH 0x63ed79
//   XREF to: 0063ed79 (DATA)
// 0054a498: LEA EAX,[EBX + 0x42c]
// 0054a49e: PUSH EAX
// 0054a49f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054a4a4: ADD ESP,0x8
// 0054a4a7: CMP dword ptr [0x00680c84],0x5
//   Label: LAB_0054a4a7
//   XREF to: 00680c84 (READ)
// 0054a4ae: JL 0x0054a4d8
//   XREF to: 0054a4d8 (CONDITIONAL_JUMP)
// 0054a4b0: PUSH 0x63ed83
//   XREF to: 0063ed83 (DATA)
// 0054a4b5: LEA EAX,[EBX + 0x430]
// 0054a4bb: PUSH EAX
// 0054a4bc: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054a4c1: ADD ESP,0x8
// 0054a4c4: PUSH 0x63ed89
//   XREF to: 0063ed89 (DATA)
// 0054a4c9: LEA EAX,[EBX + 0x434]
// 0054a4cf: PUSH EAX
// 0054a4d0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054a4d5: ADD ESP,0x8
// 0054a4d8: CMP dword ptr [0x00680c84],0x6
//   Label: LAB_0054a4d8
//   XREF to: 00680c84 (READ)
// 0054a4df: JL 0x0054a4f5
//   XREF to: 0054a4f5 (CONDITIONAL_JUMP)
// 0054a4e1: PUSH 0x63ed94
//   XREF to: 0063ed94 (DATA)
// 0054a4e6: LEA EAX,[EBX + 0x438]
// 0054a4ec: PUSH EAX
// 0054a4ed: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054a4f2: ADD ESP,0x8
// 0054a4f5: CMP dword ptr [0x00680c84],0x7
//   Label: LAB_0054a4f5
//   XREF to: 00680c84 (READ)
// 0054a4fc: JL 0x0054a512
//   XREF to: 0054a512 (CONDITIONAL_JUMP)
// 0054a4fe: PUSH 0x63ed9f
//   XREF to: 0063ed9f (DATA)
// 0054a503: LEA EAX,[EBX + 0x338]
// 0054a509: PUSH EAX
// 0054a50a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054a50f: ADD ESP,0x8
// 0054a512: CMP dword ptr [0x00680c84],0x8
//   Label: LAB_0054a512
//   XREF to: 00680c84 (READ)
// 0054a519: JGE 0x0054a536
//   XREF to: 0054a536 (CONDITIONAL_JUMP)
// 0054a51b: POP EBX
// 0054a51c: RET
// 0054a51d: PUSH 0x63ed3c
//   Label: LAB_0054a51d
//   XREF to: 0063ed3c (DATA)
// 0054a522: LEA EAX,[EBX + 0x3ac]
// 0054a528: PUSH EAX
// 0054a529: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054a52e: ADD ESP,0x8
// 0054a531: JMP 0x0054a431
//   XREF to: 0054a431 (UNCONDITIONAL_JUMP)
// 0054a536: PUSH 0x63eda9
//   Label: LAB_0054a536
//   XREF to: 0063eda9 (DATA)
// 0054a53b: ADD EBX,0x43c
// 0054a541: PUSH EBX
// 0054a542: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054a547: ADD ESP,0x8
// 0054a54a: POP EBX
// 0054a54b: RET
