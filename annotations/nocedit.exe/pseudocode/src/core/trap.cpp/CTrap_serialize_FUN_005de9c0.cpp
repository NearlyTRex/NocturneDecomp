// Name: core_trap.cpp_CTrap_serialize_FUN_005de9c0
// Address: 005de9c0
// Address Range: [[005de9c0, 005de9f7]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_serialize_FUN_005de9c0(CTrap * this_ptr)
// Globals:
//   TerminatedCString s_modelName_0065553f
//   TerminatedCString s_wolfInTrap_00655549
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_serialize_FUN_005de9c0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)&this_ptr->model_name,"modelName");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}


// Assembly code:
// 005de9c0: PUSH EBX
//   Label: core_trap.cpp_CTrap_serialize_FUN_005de9c0
// 005de9c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005de9c5: PUSH EBX
// 005de9c6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005de9cb: ADD ESP,0x4
// 005de9ce: PUSH 0x65553f
//   XREF to: 0065553f (DATA)
// 005de9d3: LEA EAX,[EBX + 0x158]
// 005de9d9: PUSH EAX
// 005de9da: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005de9df: ADD ESP,0x8
// 005de9e2: PUSH 0x655549
//   XREF to: 00655549 (DATA)
// 005de9e7: LEA EAX,[EBX + 0x2d8]
// 005de9ed: PUSH EAX
// 005de9ee: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005de9f3: ADD ESP,0x8
// 005de9f6: POP EBX
// 005de9f7: RET
