// Name: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
// Address: 0040a030
// Address Range: [[0040a030, 0040a084]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030(CDemonActor * this_ptr, SInteractionInfo * out_info)
// Cross-references:
//   core_manpuz.cpp_FUN_0050b2f0 (0050b2f0) at 0050b2fb [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3440 (005e3440) at 005e344c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_006139d1
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030
          (CDemonActor *this_ptr,SInteractionInfo *out_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x58c);
  out_info->can_interact = 0;
  out_info->reference_data = 0;
  out_info->yaw_min = 0.0;
  out_info->yaw_max = 0.0;
  out_info->pitch_min = 0.0;
  out_info->pitch_max = 0.0;
  out_info->distance_min = -2.0;
  out_info->distance_max = 4.0;
  return;
}


// Assembly code:
// 0040a030: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
// 0040a031: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0040a035: PUSH 0x58c
// 0040a03a: PUSH 0x6139d1
//   XREF to: 006139d1 (DATA)
// 0040a03f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040a043: PUSH EDX
// 0040a044: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a049: MOV dword ptr [EBX],0x0
// 0040a04f: MOV dword ptr [EBX + 0x4],0x0
// 0040a056: MOV dword ptr [EBX + 0x10],0x0
// 0040a05d: MOV dword ptr [EBX + 0x14],0x0
// 0040a064: MOV dword ptr [EBX + 0x18],0x0
// 0040a06b: MOV dword ptr [EBX + 0x1c],0x0
// 0040a072: MOV dword ptr [EBX + 0x8],0xc0000000
// 0040a079: ADD ESP,0xc
// 0040a07c: MOV dword ptr [EBX + 0xc],0x40800000
// 0040a083: POP EBX
// 0040a084: RET
