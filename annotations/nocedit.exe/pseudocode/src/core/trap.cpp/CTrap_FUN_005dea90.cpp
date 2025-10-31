// Name: core_trap.cpp_CTrap_FUN_005dea90
// Address: 005dea90
// Address Range: [[005dea90, 005deaa2]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_FUN_005dea90(CTrap * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_FUN_005dea90(CTrap *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  return;
}


// Assembly code:
// 005dea90: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_trap.cpp_CTrap_FUN_005dea90
//   XREF to: Stack[0x8] (READ)
// 005dea94: PUSH EDX
// 005dea95: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dea99: PUSH ECX
// 005dea9a: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005dea9f: ADD ESP,0x8
// 005deaa2: RET
