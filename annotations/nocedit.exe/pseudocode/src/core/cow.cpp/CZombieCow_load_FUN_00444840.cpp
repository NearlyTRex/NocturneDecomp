// Name: core_cow.cpp_CZombieCow_load_FUN_00444840
// Address: 00444840
// Address Range: [[00444840, 004448ac]]
// Convention: unknown
// Signature: undefined core_cow.cpp_CZombieCow_load_FUN_00444840()
// Globals:
//   undefined4 s_speed_0061955d
//   TerminatedCString s_modelName_00619563
//   TerminatedCString s_guardDistance_0061956d
//   TerminatedCString s_motion_state_0061957b
//   int g_CZombieCowClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: void actors_enemy_cow.cpp_CZombieCow_load(CZombieCow* param_1, char* param_2) */

void core_cow_cpp_CZombieCow_load_FUN_00444840(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"@@speed" + 2);
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model.motion_controller,"motion state");
  return;
}


// Assembly code:
// 00444840: PUSH EBX
//   Label: core_cow.cpp_CZombieCow_load_FUN_00444840
// 00444841: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00444845: PUSH EBX
// 00444846: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0044484b: ADD ESP,0x4
// 0044484e: PUSH 0x61955d
//   XREF to: 0061955d (DATA)
// 00444853: LEA EAX,[EBX + 0xbe24]
// 00444859: PUSH EAX
// 0044485a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0044485f: ADD ESP,0x8
// 00444862: PUSH 0x619563
//   XREF to: 00619563 (DATA)
// 00444867: LEA EAX,[EBX + 0x158]
// 0044486d: PUSH EAX
// 0044486e: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00444873: MOV EDX,dword ptr [0x0066ec60]
//   XREF to: 0066ec60 (READ)
// 00444879: ADD ESP,0x8
// 0044487c: CMP EDX,0x2
// 0044487f: JL 0x00444897
//   XREF to: 00444897 (CONDITIONAL_JUMP)
// 00444881: PUSH 0x61957b
//   Label: LAB_00444881
//   XREF to: 0061957b (DATA)
// 00444886: ADD EBX,0x158
// 0044488c: PUSH EBX
// 0044488d: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00444892: ADD ESP,0x8
// 00444895: POP EBX
// 00444896: RET
// 00444897: PUSH 0x61956d
//   Label: LAB_00444897
//   XREF to: 0061956d (DATA)
// 0044489c: LEA EAX,[EBX + 0xbe34]
// 004448a2: PUSH EAX
// 004448a3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004448a8: ADD ESP,0x8
// 004448ab: JMP 0x00444881
//   XREF to: 00444881 (UNCONDITIONAL_JUMP)
