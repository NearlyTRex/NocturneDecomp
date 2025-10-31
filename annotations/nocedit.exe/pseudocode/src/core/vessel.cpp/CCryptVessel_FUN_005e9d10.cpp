// Name: core_vessel.cpp_CCryptVessel_FUN_005e9d10
// Address: 005e9d10
// Address Range: [[005e9d10, 005e9d22]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_FUN_005e9d10(CCryptVessel * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9d10(CCryptVessel *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  return;
}


// Assembly code:
// 005e9d10: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9d10
//   XREF to: Stack[0x8] (READ)
// 005e9d14: PUSH EDX
// 005e9d15: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e9d19: PUSH ECX
// 005e9d1a: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005e9d1f: ADD ESP,0x8
// 005e9d22: RET
