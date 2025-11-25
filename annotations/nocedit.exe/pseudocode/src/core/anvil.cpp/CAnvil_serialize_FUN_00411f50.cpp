// Name: core_anvil.cpp_CAnvil_serialize_FUN_00411f50
// Address: 00411f50
// Address Range: [[00411f50, 00411fc3]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_serialize_FUN_00411f50(CAnvil * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00614d3b
//   TerminatedCString s_dropCondition_00614d45
//   TerminatedCString s_dropHeight_00614d53
//   TerminatedCString s_triggered_00614d5e
//   TerminatedCString s_yvel_00614d68
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_serialize_FUN_00411f50(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->drop_condition,"dropCondition");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->drop_height,"dropHeight");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->triggered,"triggered");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->yvel,"yvel");
  return;
}


// Assembly code:
// 00411f50: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_serialize_FUN_00411f50
// 00411f51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411f55: PUSH EBX
// 00411f56: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00411f5b: ADD ESP,0x4
// 00411f5e: PUSH 0x614d3b
//   XREF to: 00614d3b (DATA)
// 00411f63: LEA EAX,[EBX + 0x158]
// 00411f69: PUSH EAX
// 00411f6a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 00411f6f: ADD ESP,0x8
// 00411f72: PUSH 0x614d45
//   XREF to: 00614d45 (DATA)
// 00411f77: LEA EAX,[EBX + 0x2d4]
// 00411f7d: PUSH EAX
// 00411f7e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00411f83: ADD ESP,0x8
// 00411f86: PUSH 0x614d53
//   XREF to: 00614d53 (DATA)
// 00411f8b: LEA EAX,[EBX + 0x338]
// 00411f91: PUSH EAX
// 00411f92: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00411f97: ADD ESP,0x8
// 00411f9a: PUSH 0x614d5e
//   XREF to: 00614d5e (DATA)
// 00411f9f: LEA EAX,[EBX + 0x33c]
// 00411fa5: PUSH EAX
// 00411fa6: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00411fab: ADD ESP,0x8
// 00411fae: PUSH 0x614d68
//   XREF to: 00614d68 (DATA)
// 00411fb3: ADD EBX,0x340
// 00411fb9: PUSH EBX
// 00411fba: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00411fbf: ADD ESP,0x8
// 00411fc2: POP EBX
// 00411fc3: RET
