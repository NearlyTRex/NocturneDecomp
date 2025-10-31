// Name: core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0
// Address: 0047f7b0
// Address Range: [[0047f7b0, 0047f81c]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog * this_ptr)
// Globals:
//   TerminatedCString s_speed_00621039
//   TerminatedCString s_modelName_0062103f
//   TerminatedCString s_guardDistance_00621049
//   TerminatedCString s_motion_state_00621057
//   undefined4 g_CZombieDogClassVersion
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base_enemy).base_character.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base_enemy).guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(this_ptr->base_enemy).base_character.model,"motion state");
  return;
}


// Assembly code:
// 0047f7b0: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0
// 0047f7b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047f7b5: PUSH EBX
// 0047f7b6: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0047f7bb: ADD ESP,0x4
// 0047f7be: PUSH 0x621039
//   XREF to: 00621039 (DATA)
// 0047f7c3: LEA EAX,[EBX + 0xbe24]
// 0047f7c9: PUSH EAX
// 0047f7ca: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0047f7cf: ADD ESP,0x8
// 0047f7d2: PUSH 0x62103f
//   XREF to: 0062103f (DATA)
// 0047f7d7: LEA EAX,[EBX + 0x158]
// 0047f7dd: PUSH EAX
// 0047f7de: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 0047f7e3: MOV EDX,dword ptr [0x006702e8]
//   XREF to: 006702e8 (READ)
// 0047f7e9: ADD ESP,0x8
// 0047f7ec: CMP EDX,0x2
// 0047f7ef: JL 0x0047f807
//   XREF to: 0047f807 (CONDITIONAL_JUMP)
// 0047f7f1: PUSH 0x621057
//   Label: LAB_0047f7f1
//   XREF to: 00621057 (DATA)
// 0047f7f6: ADD EBX,0x158
// 0047f7fc: PUSH EBX
// 0047f7fd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 0047f802: ADD ESP,0x8
// 0047f805: POP EBX
// 0047f806: RET
// 0047f807: PUSH 0x621049
//   Label: LAB_0047f807
//   XREF to: 00621049 (DATA)
// 0047f80c: LEA EAX,[EBX + 0xbe34]
// 0047f812: PUSH EAX
// 0047f813: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0047f818: ADD ESP,0x8
// 0047f81b: JMP 0x0047f7f1
//   XREF to: 0047f7f1 (UNCONDITIONAL_JUMP)
