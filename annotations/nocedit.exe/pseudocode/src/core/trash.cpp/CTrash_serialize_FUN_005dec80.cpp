// Name: core_trash.cpp_CTrash_serialize_FUN_005dec80
// Address: 005dec80
// Address Range: [[005dec80, 005decb7]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_serialize_FUN_005dec80(CTrash * this_ptr)
// Globals:
//   TerminatedCString s_modelName_0065558c
//   TerminatedCString s_homePos_00655596
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_serialize_FUN_005dec80(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)&this_ptr->model_name,"modelName");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->home_pos,"homePos");
  return;
}


// Assembly code:
// 005dec80: PUSH EBX
//   Label: core_trash.cpp_CTrash_serialize_FUN_005dec80
// 005dec81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dec85: PUSH EBX
// 005dec86: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005dec8b: ADD ESP,0x4
// 005dec8e: PUSH 0x65558c
//   XREF to: 0065558c (DATA)
// 005dec93: LEA EAX,[EBX + 0x158]
// 005dec99: PUSH EAX
// 005dec9a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005dec9f: ADD ESP,0x8
// 005deca2: PUSH 0x655596
//   XREF to: 00655596 (DATA)
// 005deca7: LEA EAX,[EBX + 0x2d4]
// 005decad: PUSH EAX
// 005decae: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005decb3: ADD ESP,0x8
// 005decb6: POP EBX
// 005decb7: RET
