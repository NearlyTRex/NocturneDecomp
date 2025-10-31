// Name: core_drip.cpp_CDrip_load_FUN_0048e170
// Address: 0048e170
// Address Range: [[0048e170, 0048e295]]
// Convention: unknown
// Signature: undefined core_drip.cpp_CDrip_load_FUN_0048e170()
// Globals:
//   TerminatedCString s_modelName_00622239
//   TerminatedCString s_type_00622243
//   TerminatedCString s_autoDrop_00622248
//   TerminatedCString s_homePos_00622251
//   TerminatedCString s_vel_00622259
//   TerminatedCString s_minAutoDripTime_0062225d
//   TerminatedCString s_maxAutoDripTime_0062226d
//   TerminatedCString s_dripRadius_0062227d
//   TerminatedCString s_damage_00622288
//   TerminatedCString s_hitSound_0062228f
//   TerminatedCString s_noRockFlag_00622298
//   undefined4 g_CDripClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_CDrip_load(CDrip* pDrip) */

void core_drip_cpp_CDrip_load_FUN_0048e170(void)

{
  CDemonActor *in_stack_00000004;
  
  if (1 < g_CDripClassVersion) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  }
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"type");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"autoDrop");
  core_actor_cpp_serializeVector_FUN_0040b340
            (in_stack_00000004[2].orient_matrix.m + 1,"homePos");
  core_actor_cpp_serializeVector_FUN_0040b340
            (in_stack_00000004[2].orient_matrix.m + 2,"vel");
  if (2 < g_CDripClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.pitch,"minAutoDripTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.bank,"maxAutoDripTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.heading,"dripRadius");
  }
  if (3 < g_CDripClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].runtime_state,"damage");
  }
  if (4 < g_CDripClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].health,"hitSound");
  }
  if (g_CDripClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[2].create_event + 0xc),"noRockFlag");
  return;
}


// Assembly code:
// 0048e170: PUSH EBX
//   Label: core_drip.cpp_CDrip_load_FUN_0048e170
// 0048e171: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048e175: CMP dword ptr [0x00672334],0x2
//   XREF to: 00672334 (READ)
// 0048e17c: JGE 0x0048e272
//   XREF to: 0048e272 (CONDITIONAL_JUMP)
// 0048e182: PUSH 0x622239
//   Label: LAB_0048e182
//   XREF to: 00622239 (DATA)
// 0048e187: LEA EAX,[EBX + 0x158]
// 0048e18d: PUSH EAX
// 0048e18e: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0048e193: ADD ESP,0x8
// 0048e196: PUSH 0x622243
//   XREF to: 00622243 (DATA)
// 0048e19b: LEA EAX,[EBX + 0x2d4]
// 0048e1a1: PUSH EAX
// 0048e1a2: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0048e1a7: ADD ESP,0x8
// 0048e1aa: PUSH 0x622248
//   XREF to: 00622248 (DATA)
// 0048e1af: LEA EAX,[EBX + 0x2d8]
// 0048e1b5: PUSH EAX
// 0048e1b6: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0048e1bb: ADD ESP,0x8
// 0048e1be: PUSH 0x622251
//   XREF to: 00622251 (DATA)
// 0048e1c3: LEA EAX,[EBX + 0x2f8]
// 0048e1c9: PUSH EAX
// 0048e1ca: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0048e1cf: ADD ESP,0x8
// 0048e1d2: PUSH 0x622259
//   XREF to: 00622259 (DATA)
// 0048e1d7: LEA EAX,[EBX + 0x304]
// 0048e1dd: PUSH EAX
// 0048e1de: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0048e1e3: MOV ECX,dword ptr [0x00672334]
//   XREF to: 00672334 (READ)
// 0048e1e9: ADD ESP,0x8
// 0048e1ec: CMP ECX,0x3
// 0048e1ef: JL 0x0048e22d
//   XREF to: 0048e22d (CONDITIONAL_JUMP)
// 0048e1f1: PUSH 0x62225d
//   XREF to: 0062225d (DATA)
// 0048e1f6: LEA EAX,[EBX + 0x2e0]
// 0048e1fc: PUSH EAX
// 0048e1fd: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048e202: ADD ESP,0x8
// 0048e205: PUSH 0x62226d
//   XREF to: 0062226d (DATA)
// 0048e20a: LEA EAX,[EBX + 0x2e4]
// 0048e210: PUSH EAX
// 0048e211: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048e216: ADD ESP,0x8
// 0048e219: PUSH 0x62227d
//   XREF to: 0062227d (DATA)
// 0048e21e: LEA EAX,[EBX + 0x2e8]
// 0048e224: PUSH EAX
// 0048e225: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048e22a: ADD ESP,0x8
// 0048e22d: CMP dword ptr [0x00672334],0x4
//   Label: LAB_0048e22d
//   XREF to: 00672334 (READ)
// 0048e234: JL 0x0048e24a
//   XREF to: 0048e24a (CONDITIONAL_JUMP)
// 0048e236: PUSH 0x622288
//   XREF to: 00622288 (DATA)
// 0048e23b: LEA EAX,[EBX + 0x310]
// 0048e241: PUSH EAX
// 0048e242: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048e247: ADD ESP,0x8
// 0048e24a: CMP dword ptr [0x00672334],0x5
//   Label: LAB_0048e24a
//   XREF to: 00672334 (READ)
// 0048e251: JL 0x0048e267
//   XREF to: 0048e267 (CONDITIONAL_JUMP)
// 0048e253: PUSH 0x62228f
//   XREF to: 0062228f (DATA)
// 0048e258: LEA EAX,[EBX + 0x314]
// 0048e25e: PUSH EAX
// 0048e25f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0048e264: ADD ESP,0x8
// 0048e267: CMP dword ptr [0x00672334],0x6
//   Label: LAB_0048e267
//   XREF to: 00672334 (READ)
// 0048e26e: JGE 0x0048e280
//   XREF to: 0048e280 (CONDITIONAL_JUMP)
// 0048e270: POP EBX
// 0048e271: RET
// 0048e272: PUSH EBX
//   Label: LAB_0048e272
// 0048e273: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0048e278: ADD ESP,0x4
// 0048e27b: JMP 0x0048e182
//   XREF to: 0048e182 (UNCONDITIONAL_JUMP)
// 0048e280: PUSH 0x622298
//   Label: LAB_0048e280
//   XREF to: 00622298 (DATA)
// 0048e285: ADD EBX,0x334
// 0048e28b: PUSH EBX
// 0048e28c: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0048e291: ADD ESP,0x8
// 0048e294: POP EBX
// 0048e295: RET
