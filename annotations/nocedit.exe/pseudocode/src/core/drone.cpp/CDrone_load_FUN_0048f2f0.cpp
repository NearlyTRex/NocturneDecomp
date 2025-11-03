// Name: core_drone.cpp_CDrone_load_FUN_0048f2f0
// Address: 0048f2f0
// Address Range: [[0048f2f0, 0048f35c]]
// Convention: unknown
// Signature: undefined core_drone.cpp_CDrone_load_FUN_0048f2f0()
// Globals:
//   TerminatedCString s_speed_0062240c
//   TerminatedCString s_modelName_00622412
//   TerminatedCString s_guardDistance_0062241c
//   TerminatedCString s_motion_state_0062242a
//   undefined4 g_CDroneClassVersion
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_CDrone_load(CDrone* param_1) */

void core_drone_cpp_CDrone_load_FUN_0048f2f0(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CDroneClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model.motion_controller,"motion state");
  return;
}


// Assembly code:
// 0048f2f0: PUSH EBX
//   Label: core_drone.cpp_CDrone_load_FUN_0048f2f0
// 0048f2f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048f2f5: PUSH EBX
// 0048f2f6: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0048f2fb: ADD ESP,0x4
// 0048f2fe: PUSH 0x62240c
//   XREF to: 0062240c (DATA)
// 0048f303: LEA EAX,[EBX + 0xbe24]
// 0048f309: PUSH EAX
// 0048f30a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048f30f: ADD ESP,0x8
// 0048f312: PUSH 0x622412
//   XREF to: 00622412 (DATA)
// 0048f317: LEA EAX,[EBX + 0x158]
// 0048f31d: PUSH EAX
// 0048f31e: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 0048f323: MOV EDX,dword ptr [0x00672348]
//   XREF to: 00672348 (READ)
// 0048f329: ADD ESP,0x8
// 0048f32c: CMP EDX,0x2
// 0048f32f: JL 0x0048f347
//   XREF to: 0048f347 (CONDITIONAL_JUMP)
// 0048f331: PUSH 0x62242a
//   Label: LAB_0048f331
//   XREF to: 0062242a (DATA)
// 0048f336: ADD EBX,0x158
// 0048f33c: PUSH EBX
// 0048f33d: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 0048f342: ADD ESP,0x8
// 0048f345: POP EBX
// 0048f346: RET
// 0048f347: PUSH 0x62241c
//   Label: LAB_0048f347
//   XREF to: 0062241c (DATA)
// 0048f34c: LEA EAX,[EBX + 0xbe34]
// 0048f352: PUSH EAX
// 0048f353: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0048f358: ADD ESP,0x8
// 0048f35b: JMP 0x0048f331
//   XREF to: 0048f331 (UNCONDITIONAL_JUMP)
