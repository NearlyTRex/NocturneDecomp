// Name: core_teleport.cpp_CTeleport_serialize_FUN_005dab30
// Address: 005dab30
// Address Range: [[005dab30, 005dab61]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_serialize_FUN_005dab30(CTeleport * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_serialize_FUN_005dab30(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeVector_FUN_0040b340((CVector3f *)this_ptr->field1_0x158,(char *)0x0);
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->field1_0x158 + 0xc),(char *)0x0);
  return;
}


// Assembly code:
// 005dab30: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_serialize_FUN_005dab30
// 005dab31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dab35: PUSH EBX
// 005dab36: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005dab3b: ADD ESP,0x4
// 005dab3e: PUSH 0x0
// 005dab40: LEA EAX,[EBX + 0x158]
// 005dab46: PUSH EAX
// 005dab47: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005dab4c: ADD ESP,0x8
// 005dab4f: PUSH 0x0
// 005dab51: LEA EAX,[EBX + 0x164]
// 005dab57: PUSH EAX
// 005dab58: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005dab5d: ADD ESP,0x8
// 005dab60: POP EBX
// 005dab61: RET
