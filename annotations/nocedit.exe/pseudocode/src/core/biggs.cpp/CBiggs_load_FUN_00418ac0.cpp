// Name: core_biggs.cpp_CBiggs_load_FUN_00418ac0
// Address: 00418ac0
// Address Range: [[00418ac0, 00418b43]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_CBiggs_load_FUN_00418ac0()
// Globals:
//   undefined4 s_speed_00615b19
//   TerminatedCString s_modelName_00615b1f
//   TerminatedCString s_motion_state_00615b29
//   TerminatedCString s_morphing_00615b36
//   TerminatedCString s_morphTimer_00615b3f
//   TerminatedCString s_morphEvent_00615b4a
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: void actors_enemy_biggs.cpp_CBiggs_load(CBiggs* param_1, char* param_2) */

void core_biggs_cpp_CBiggs_load_FUN_00418ac0(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"@@speed" + 2);
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0(model_ptr,"motion state");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x2c),
             "morphing");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base_character.model.padding_0x0 + 0x30),
             "morphTimer");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.model.padding_0x0 + 0xc60),
             "morphEvent");
  return;
}


// Assembly code:
// 00418ac0: PUSH EBX
//   Label: core_biggs.cpp_CBiggs_load_FUN_00418ac0
// 00418ac1: PUSH ESI
// 00418ac2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00418ac6: PUSH EBX
// 00418ac7: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 00418acc: ADD ESP,0x4
// 00418acf: PUSH 0x615b19
//   XREF to: 00615b19 (DATA)
// 00418ad4: LEA ESI,[EBX + 0xbe24]
// 00418ada: PUSH ESI
// 00418adb: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00418ae0: ADD ESP,0x8
// 00418ae3: PUSH 0x615b1f
//   XREF to: 00615b1f (DATA)
// 00418ae8: LEA ESI,[EBX + 0x158]
// 00418aee: PUSH ESI
// 00418aef: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00418af4: ADD ESP,0x8
// 00418af7: PUSH 0x615b29
//   XREF to: 00615b29 (DATA)
// 00418afc: PUSH ESI
// 00418afd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00418b02: ADD ESP,0x8
// 00418b05: PUSH 0x615b36
//   XREF to: 00615b36 (DATA)
// 00418b0a: LEA ESI,[EBX + 0xc038]
// 00418b10: PUSH ESI
// 00418b11: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00418b16: ADD ESP,0x8
// 00418b19: PUSH 0x615b3f
//   XREF to: 00615b3f (DATA)
// 00418b1e: LEA ESI,[EBX + 0xc03c]
// 00418b24: PUSH ESI
// 00418b25: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00418b2a: ADD ESP,0x8
// 00418b2d: PUSH 0x615b4a
//   XREF to: 00615b4a (DATA)
// 00418b32: ADD EBX,0xcc6c
// 00418b38: PUSH EBX
// 00418b39: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00418b3e: ADD ESP,0x8
// 00418b41: POP ESI
// 00418b42: POP EBX
// 00418b43: RET
