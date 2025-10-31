// Name: core_bride.cpp_CBride_load_FUN_00424560
// Address: 00424560
// Address Range: [[00424560, 004245e7]]
// Convention: unknown
// Signature: undefined core_bride.cpp_CBride_load_FUN_00424560()
// Globals:
//   TerminatedCString s_speed_00616c45
//   TerminatedCString s_modelName_00616c4b
//   TerminatedCString s_guardDistance_00616c55
//   TerminatedCString s_state_00616c63
//   int g_CBrideClassVersion = 0x4
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: void actors_enemy_bride.cpp_CBride_load(CBride* param_1, char* param_2) */

void core_bride_cpp_CBride_load_FUN_00424560(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model,"state");
  return;
}


// Assembly code:
// 00424560: PUSH EBX
//   Label: core_bride.cpp_CBride_load_FUN_00424560
// 00424561: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00424565: PUSH EBX
// 00424566: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0042456b: MOV EDX,dword ptr [0x0066e648]
//   XREF to: 0066e648 (READ)
// 00424571: ADD ESP,0x4
// 00424574: CMP EDX,0x2
// 00424577: JL 0x004245bc
//   XREF to: 004245bc (CONDITIONAL_JUMP)
// 00424579: PUSH 0x616c4b
//   Label: LAB_00424579
//   XREF to: 00616c4b (DATA)
// 0042457e: LEA EAX,[EBX + 0x158]
// 00424584: PUSH EAX
// 00424585: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 0042458a: MOV ECX,dword ptr [0x0066e648]
//   XREF to: 0066e648 (READ)
// 00424590: ADD ESP,0x8
// 00424593: CMP ECX,0x2
// 00424596: JL 0x004245b1
//   XREF to: 004245b1 (CONDITIONAL_JUMP)
// 00424598: CMP ECX,0x4
// 0042459b: JGE 0x004245b1
//   XREF to: 004245b1 (CONDITIONAL_JUMP)
// 0042459d: PUSH 0x616c55
//   XREF to: 00616c55 (DATA)
// 004245a2: LEA EAX,[EBX + 0xbe34]
// 004245a8: PUSH EAX
// 004245a9: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004245ae: ADD ESP,0x8
// 004245b1: CMP dword ptr [0x0066e648],0x3
//   Label: LAB_004245b1
//   XREF to: 0066e648 (READ)
// 004245b8: JGE 0x004245d2
//   XREF to: 004245d2 (CONDITIONAL_JUMP)
// 004245ba: POP EBX
// 004245bb: RET
// 004245bc: PUSH 0x616c45
//   Label: LAB_004245bc
//   XREF to: 00616c45 (DATA)
// 004245c1: LEA EAX,[EBX + 0xbe24]
// 004245c7: PUSH EAX
// 004245c8: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004245cd: ADD ESP,0x8
// 004245d0: JMP 0x00424579
//   XREF to: 00424579 (UNCONDITIONAL_JUMP)
// 004245d2: PUSH 0x616c63
//   Label: LAB_004245d2
//   XREF to: 00616c63 (DATA)
// 004245d7: ADD EBX,0x158
// 004245dd: PUSH EBX
// 004245de: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004245e3: ADD ESP,0x8
// 004245e6: POP EBX
// 004245e7: RET
