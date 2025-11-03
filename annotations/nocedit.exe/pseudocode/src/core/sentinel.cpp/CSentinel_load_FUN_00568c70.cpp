// Name: core_sentinel.cpp_CSentinel_load_FUN_00568c70
// Address: 00568c70
// Address Range: [[00568c70, 00568cc8]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_CSentinel_load_FUN_00568c70()
// Globals:
//   TerminatedCString s_modelName_0064588e
//   TerminatedCString s_guardDistance_00645898
//   TerminatedCString s_motion_state_006458a6
//   int g_CSentinelClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_CSentinel_load(CSentinel* param_1) */

void core_sentinel_cpp_CSentinel_load_FUN_00568c70(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model.motion_controller,"motion state");
  return;
}


// Assembly code:
// 00568c70: PUSH EBX
//   Label: core_sentinel.cpp_CSentinel_load_FUN_00568c70
// 00568c71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00568c75: PUSH EBX
// 00568c76: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 00568c7b: ADD ESP,0x4
// 00568c7e: PUSH 0x64588e
//   XREF to: 0064588e (DATA)
// 00568c83: LEA EAX,[EBX + 0x158]
// 00568c89: PUSH EAX
// 00568c8a: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00568c8f: MOV EDX,dword ptr [0x00681070]
//   XREF to: 00681070 (READ)
// 00568c95: ADD ESP,0x8
// 00568c98: CMP EDX,0x2
// 00568c9b: JL 0x00568cb3
//   XREF to: 00568cb3 (CONDITIONAL_JUMP)
// 00568c9d: PUSH 0x6458a6
//   Label: LAB_00568c9d
//   XREF to: 006458a6 (DATA)
// 00568ca2: ADD EBX,0x158
// 00568ca8: PUSH EBX
// 00568ca9: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00568cae: ADD ESP,0x8
// 00568cb1: POP EBX
// 00568cb2: RET
// 00568cb3: PUSH 0x645898
//   Label: LAB_00568cb3
//   XREF to: 00645898 (DATA)
// 00568cb8: LEA EAX,[EBX + 0xbe34]
// 00568cbe: PUSH EAX
// 00568cbf: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00568cc4: ADD ESP,0x8
// 00568cc7: JMP 0x00568c9d
//   XREF to: 00568c9d (UNCONDITIONAL_JUMP)
