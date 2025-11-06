// Name: core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70
// Address: 00415d70
// Address Range: [[00415d70, 00415db7]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature * this_ptr)
// Globals:
//   TerminatedCString s_speed_00615661
//   TerminatedCString s_modelName_00615667
//   TerminatedCString s_motion_state_00615671
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature *this_ptr)

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
// 00415d70: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70
// 00415d71: PUSH ESI
// 00415d72: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00415d76: PUSH ESI
// 00415d77: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 00415d7c: ADD ESP,0x4
// 00415d7f: PUSH 0x615661
//   XREF to: 00615661 (DATA)
// 00415d84: LEA EBX,[ESI + 0xbe24]
// 00415d8a: PUSH EBX
// 00415d8b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00415d90: ADD ESP,0x8
// 00415d93: PUSH 0x615667
//   XREF to: 00615667 (DATA)
// 00415d98: LEA EBX,[ESI + 0x158]
// 00415d9e: PUSH EBX
// 00415d9f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00415da4: ADD ESP,0x8
// 00415da7: PUSH 0x615671
//   XREF to: 00615671 (DATA)
// 00415dac: PUSH EBX
// 00415dad: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00415db2: ADD ESP,0x8
// 00415db5: POP ESI
// 00415db6: POP EBX
// 00415db7: RET
