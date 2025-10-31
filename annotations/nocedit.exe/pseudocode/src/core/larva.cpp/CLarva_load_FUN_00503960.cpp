// Name: core_larva.cpp_CLarva_load_FUN_00503960
// Address: 00503960
// Address Range: [[00503960, 005039cc]]
// Convention: unknown
// Signature: undefined core_larva.cpp_CLarva_load_FUN_00503960()
// Globals:
//   TerminatedCString s_speed_00630f93
//   TerminatedCString s_modelName_00630f99
//   TerminatedCString s_guardDistance_00630fa3
//   TerminatedCString s_motion_state_00630fb1
//   undefined4 g_CLarvaClassVersion
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_CLarva_load(CLarva* param_1) */

void core_larva_cpp_CLarva_load_FUN_00503960(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model,"motion state");
  return;
}


// Assembly code:
// 00503960: PUSH EBX
//   Label: core_larva.cpp_CLarva_load_FUN_00503960
// 00503961: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00503965: PUSH EBX
// 00503966: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0050396b: ADD ESP,0x4
// 0050396e: PUSH 0x630f93
//   XREF to: 00630f93 (DATA)
// 00503973: LEA EAX,[EBX + 0xbe24]
// 00503979: PUSH EAX
// 0050397a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0050397f: ADD ESP,0x8
// 00503982: PUSH 0x630f99
//   XREF to: 00630f99 (DATA)
// 00503987: LEA EAX,[EBX + 0x158]
// 0050398d: PUSH EAX
// 0050398e: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00503993: MOV EDX,dword ptr [0x0067cf5c]
//   XREF to: 0067cf5c (READ)
// 00503999: ADD ESP,0x8
// 0050399c: CMP EDX,0x2
// 0050399f: JL 0x005039b7
//   XREF to: 005039b7 (CONDITIONAL_JUMP)
// 005039a1: PUSH 0x630fb1
//   Label: LAB_005039a1
//   XREF to: 00630fb1 (DATA)
// 005039a6: ADD EBX,0x158
// 005039ac: PUSH EBX
// 005039ad: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005039b2: ADD ESP,0x8
// 005039b5: POP EBX
// 005039b6: RET
// 005039b7: PUSH 0x630fa3
//   Label: LAB_005039b7
//   XREF to: 00630fa3 (DATA)
// 005039bc: LEA EAX,[EBX + 0xbe34]
// 005039c2: PUSH EAX
// 005039c3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005039c8: ADD ESP,0x8
// 005039cb: JMP 0x005039a1
//   XREF to: 005039a1 (UNCONDITIONAL_JUMP)
