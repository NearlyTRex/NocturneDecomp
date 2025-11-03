// Name: core_npc.cpp_CNPC_serialize_FUN_00544ba0
// Address: 00544ba0
// Address Range: [[00544ba0, 00544c44]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
// Cross-references:
//   core_hiram.cpp_CHiram_load_FUN_004f4690 (004f4690) at 004f4695 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6177 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0 (004f7bd0) at 004f7bd5 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_load_FUN_00546190 (00546190) at 00546197 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_hitPoints_0063e37c
//   TerminatedCString s_modelName_0063e386
//   TerminatedCString s_motion_state_0063e390
//   TerminatedCString s_shootMe_0063e39d
//   TerminatedCString s_poolMe_0063e3a5
//   undefined4 g_CNPCClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_serialize_FUN_00544ba0(CNPC *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base_character).hit_points,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_serialize_FUN_004283a0(&this_ptr->base_character);
  if (2 < g_CNPCClassVersion) {
    model_ptr = &(this_ptr->base_character).model;
    core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->shoot_me,"shootMe");
  }
  if (g_CNPCClassVersion < 5) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
  return;
}


// Assembly code:
// 00544ba0: PUSH EBX
//   Label: core_npc.cpp_CNPC_serialize_FUN_00544ba0
// 00544ba1: PUSH ESI
// 00544ba2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00544ba6: CMP dword ptr [0x00680b94],0x2
//   XREF to: 00680b94 (READ)
// 00544bad: JL 0x00544c0e
//   XREF to: 00544c0e (CONDITIONAL_JUMP)
// 00544baf: PUSH EBX
// 00544bb0: CALL core_charactr.cpp_CCharacter_serialize_FUN_004283a0
//   XREF to: 004283a0 (UNCONDITIONAL_CALL)
// 00544bb5: MOV ECX,dword ptr [0x00680b94]
//   XREF to: 00680b94 (READ)
// 00544bbb: ADD ESP,0x4
// 00544bbe: CMP ECX,0x3
// 00544bc1: JL 0x00544be5
//   XREF to: 00544be5 (CONDITIONAL_JUMP)
// 00544bc3: PUSH 0x63e386
//   XREF to: 0063e386 (DATA)
// 00544bc8: LEA ESI,[EBX + 0x158]
// 00544bce: PUSH ESI
// 00544bcf: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00544bd4: ADD ESP,0x8
// 00544bd7: PUSH 0x63e390
//   XREF to: 0063e390 (DATA)
// 00544bdc: PUSH ESI
// 00544bdd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00544be2: ADD ESP,0x8
// 00544be5: CMP dword ptr [0x00680b94],0x4
//   Label: LAB_00544be5
//   XREF to: 00680b94 (READ)
// 00544bec: JL 0x00544c02
//   XREF to: 00544c02 (CONDITIONAL_JUMP)
// 00544bee: PUSH 0x63e39d
//   XREF to: 0063e39d (DATA)
// 00544bf3: LEA ESI,[EBX + 0x1f700]
// 00544bf9: PUSH ESI
// 00544bfa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00544bff: ADD ESP,0x8
// 00544c02: CMP dword ptr [0x00680b94],0x5
//   Label: LAB_00544c02
//   XREF to: 00680b94 (READ)
// 00544c09: JGE 0x00544c2e
//   XREF to: 00544c2e (CONDITIONAL_JUMP)
// 00544c0b: POP ESI
// 00544c0c: POP EBX
// 00544c0d: RET
// 00544c0e: PUSH EBX
//   Label: LAB_00544c0e
// 00544c0f: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00544c14: ADD ESP,0x4
// 00544c17: PUSH 0x63e37c
//   XREF to: 0063e37c (DATA)
// 00544c1c: ADD EBX,0x243c
// 00544c22: PUSH EBX
// 00544c23: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00544c28: ADD ESP,0x8
// 00544c2b: POP ESI
// 00544c2c: POP EBX
// 00544c2d: RET
// 00544c2e: PUSH 0x63e3a5
//   Label: LAB_00544c2e
//   XREF to: 0063e3a5 (DATA)
// 00544c33: ADD EBX,0x1f704
// 00544c39: PUSH EBX
// 00544c3a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00544c3f: ADD ESP,0x8
// 00544c42: POP ESI
// 00544c43: POP EBX
// 00544c44: RET
