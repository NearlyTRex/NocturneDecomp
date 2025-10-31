// Name: core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
// Address: 00409840
// Address Range: [[00409840, 00409871]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
// Cross-references:
//   core_glass.cpp_FUN_004eb250 (004eb250) at 004eb261 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005097e0 (005097e0) at 005097f4 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b2c0 (0050b2c0) at 0050b2cb [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0a50 (005e0a50) at 005e0a5c [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb910 (005eb910) at 005eb91b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613886
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840
          (CDemonActor *this_ptr,SSurfaceInfo *surface_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x495);
  surface_info->reflectivity = 0.0;
  surface_info->alpha_or_wetness = 0.0;
  surface_info->angle_copy = surface_info->angle_or_rotation;
  return;
}


// Assembly code:
// 00409840: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
// 00409841: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00409845: PUSH 0x495
// 0040984a: PUSH 0x613886
//   XREF to: 00613886 (DATA)
// 0040984f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00409853: PUSH EDX
// 00409854: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409859: MOV dword ptr [EBX + 0x48],0x0
// 00409860: FLD float ptr [EBX + 0x44]
// 00409863: MOV dword ptr [EBX + 0x50],0x0
// 0040986a: ADD ESP,0xc
// 0040986d: FSTP float ptr [EBX + 0x4c]
// 00409870: POP EBX
// 00409871: RET
