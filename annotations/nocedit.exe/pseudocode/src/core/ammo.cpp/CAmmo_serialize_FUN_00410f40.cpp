// Name: core_ammo.cpp_CAmmo_serialize_FUN_00410f40
// Address: 00410f40
// Address Range: [[00410f40, 00410f9f]]
// Convention: __cdecl
// Signature: void core_ammo.cpp_CAmmo_serialize_FUN_00410f40(CAmmo * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00614944
//   TerminatedCString s_weaponClassName_0061494e
//   TerminatedCString s_ammoCount_0061495e
//   TerminatedCString s_ammoType_00614968
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_serialize_FUN_00410f40(CAmmo *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_type,"ammoType");
  return;
}


// Assembly code:
// 00410f40: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_serialize_FUN_00410f40
// 00410f41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00410f45: PUSH EBX
// 00410f46: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00410f4b: ADD ESP,0x4
// 00410f4e: PUSH 0x614944
//   XREF to: 00614944 (DATA)
// 00410f53: LEA EAX,[EBX + 0x158]
// 00410f59: PUSH EAX
// 00410f5a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 00410f5f: ADD ESP,0x8
// 00410f62: PUSH 0x61494e
//   XREF to: 0061494e (DATA)
// 00410f67: LEA EAX,[EBX + 0x2d4]
// 00410f6d: PUSH EAX
// 00410f6e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00410f73: ADD ESP,0x8
// 00410f76: PUSH 0x61495e
//   XREF to: 0061495e (DATA)
// 00410f7b: LEA EAX,[EBX + 0x314]
// 00410f81: PUSH EAX
// 00410f82: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00410f87: ADD ESP,0x8
// 00410f8a: PUSH 0x614968
//   XREF to: 00614968 (DATA)
// 00410f8f: ADD EBX,0x318
// 00410f95: PUSH EBX
// 00410f96: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00410f9b: ADD ESP,0x8
// 00410f9e: POP EBX
// 00410f9f: RET
