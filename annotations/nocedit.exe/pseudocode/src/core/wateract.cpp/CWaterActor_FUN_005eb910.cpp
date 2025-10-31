// Name: core_wateract.cpp_CWaterActor_FUN_005eb910
// Address: 005eb910
// Address Range: [[005eb910, 005eb932]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005eb910(CWaterActor * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb910(CWaterActor *this_ptr)

{
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840
            (&this_ptr->base_actor,in_stack_00000008);
  in_stack_00000008->alpha_or_wetness = 0.3;
  in_stack_00000008->reflectivity = 0.8;
  return;
}


// Assembly code:
// 005eb910: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_FUN_005eb910
// 005eb911: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005eb915: PUSH EBX
// 005eb916: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005eb91a: PUSH EDX
// 005eb91b: CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   XREF to: 00409840 (UNCONDITIONAL_CALL)
// 005eb920: MOV dword ptr [EBX + 0x50],0x3e99999a
// 005eb927: ADD ESP,0x8
// 005eb92a: MOV dword ptr [EBX + 0x48],0x3f4ccccd
// 005eb931: POP EBX
// 005eb932: RET
