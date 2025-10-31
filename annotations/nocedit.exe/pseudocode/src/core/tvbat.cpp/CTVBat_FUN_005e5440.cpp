// Name: core_tvbat.cpp_CTVBat_FUN_005e5440
// Address: 005e5440
// Address Range: [[005e5440, 005e5452]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e5440(CTVBat * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5440(CTVBat *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  return;
}


// Assembly code:
// 005e5440: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_tvbat.cpp_CTVBat_FUN_005e5440
//   XREF to: Stack[0x8] (READ)
// 005e5444: PUSH EDX
// 005e5445: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e5449: PUSH ECX
// 005e544a: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005e544f: ADD ESP,0x8
// 005e5452: RET
