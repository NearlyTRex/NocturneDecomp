// Name: core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990
// Address: 00412990
// Address Range: [[00412990, 004129e8]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00614e5e
//   TerminatedCString s_collideWithMe_00614e68
//   TerminatedCString s_groundType_00614e76
//   int g_CBackgroundActorClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->collide_with_me,"collideWithMe");
  if (g_CBackgroundActorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  return;
}


// Assembly code:
// 00412990: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990
// 00412991: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412995: PUSH EBX
// 00412996: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0041299b: ADD ESP,0x4
// 0041299e: PUSH 0x614e5e
//   XREF to: 00614e5e (DATA)
// 004129a3: LEA EAX,[EBX + 0x158]
// 004129a9: PUSH EAX
// 004129aa: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004129af: ADD ESP,0x8
// 004129b2: PUSH 0x614e68
//   XREF to: 00614e68 (DATA)
// 004129b7: LEA EAX,[EBX + 0x2d4]
// 004129bd: PUSH EAX
// 004129be: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004129c3: MOV EDX,dword ptr [0x0066e440]
//   XREF to: 0066e440 (READ)
// 004129c9: ADD ESP,0x8
// 004129cc: CMP EDX,0x2
// 004129cf: JGE 0x004129d3
//   XREF to: 004129d3 (CONDITIONAL_JUMP)
// 004129d1: POP EBX
// 004129d2: RET
// 004129d3: PUSH 0x614e76
//   Label: LAB_004129d3
//   XREF to: 00614e76 (DATA)
// 004129d8: ADD EBX,0x2d8
// 004129de: PUSH EBX
// 004129df: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004129e4: ADD ESP,0x8
// 004129e7: POP EBX
// 004129e8: RET
