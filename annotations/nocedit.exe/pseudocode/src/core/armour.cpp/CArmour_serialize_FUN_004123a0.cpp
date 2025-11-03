// Name: core_armour.cpp_CArmour_serialize_FUN_004123a0
// Address: 004123a0
// Address Range: [[004123a0, 004123fb]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_serialize_FUN_004123a0(CArmour * this_ptr)
// Globals:
//   TerminatedCString s_speed_00614de0
//   TerminatedCString s_modelName_00614de6
//   TerminatedCString s_motion_state_00614df0
//   TerminatedCString s_fallApartEvent_00614dfd
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_serialize_FUN_004123a0(CArmour *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  model_ptr = &(this_ptr->base_enemy).base_character.model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field1_0xbeb4 + 8),"fallApartEvent");
  return;
}


// Assembly code:
// 004123a0: PUSH EBX
//   Label: core_armour.cpp_CArmour_serialize_FUN_004123a0
// 004123a1: PUSH ESI
// 004123a2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004123a6: PUSH ESI
// 004123a7: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004123ac: ADD ESP,0x4
// 004123af: PUSH 0x614de0
//   XREF to: 00614de0 (DATA)
// 004123b4: LEA EBX,[ESI + 0xbe24]
// 004123ba: PUSH EBX
// 004123bb: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004123c0: ADD ESP,0x8
// 004123c3: PUSH 0x614de6
//   XREF to: 00614de6 (DATA)
// 004123c8: LEA EBX,[ESI + 0x158]
// 004123ce: PUSH EBX
// 004123cf: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004123d4: ADD ESP,0x8
// 004123d7: PUSH 0x614df0
//   XREF to: 00614df0 (DATA)
// 004123dc: PUSH EBX
// 004123dd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004123e2: ADD ESP,0x8
// 004123e5: PUSH 0x614dfd
//   XREF to: 00614dfd (DATA)
// 004123ea: ADD ESI,0xbebc
// 004123f0: PUSH ESI
// 004123f1: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004123f6: ADD ESP,0x8
// 004123f9: POP ESI
// 004123fa: POP EBX
// 004123fb: RET
