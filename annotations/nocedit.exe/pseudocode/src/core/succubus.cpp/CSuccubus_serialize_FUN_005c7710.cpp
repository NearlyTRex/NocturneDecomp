// Name: core_succubus.cpp_CSuccubus_serialize_FUN_005c7710
// Address: 005c7710
// Address Range: [[005c7710, 005c7757]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_serialize_FUN_005c7710(CSuccubus * this_ptr)
// Globals:
//   TerminatedCString s_speed_006541b9
//   TerminatedCString s_modelName_006541bf
//   TerminatedCString s_motion_state_006541c9
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_serialize_FUN_005c7710(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  model_ptr = &(this_ptr->base_enemy).base_character.model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}


// Assembly code:
// 005c7710: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_serialize_FUN_005c7710
// 005c7711: PUSH ESI
// 005c7712: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c7716: PUSH ESI
// 005c7717: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005c771c: ADD ESP,0x4
// 005c771f: PUSH 0x6541b9
//   XREF to: 006541b9 (DATA)
// 005c7724: LEA EBX,[ESI + 0xbe24]
// 005c772a: PUSH EBX
// 005c772b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005c7730: ADD ESP,0x8
// 005c7733: PUSH 0x6541bf
//   XREF to: 006541bf (DATA)
// 005c7738: LEA EBX,[ESI + 0x158]
// 005c773e: PUSH EBX
// 005c773f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005c7744: ADD ESP,0x8
// 005c7747: PUSH 0x6541c9
//   XREF to: 006541c9 (DATA)
// 005c774c: PUSH EBX
// 005c774d: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005c7752: ADD ESP,0x8
// 005c7755: POP ESI
// 005c7756: POP EBX
// 005c7757: RET
