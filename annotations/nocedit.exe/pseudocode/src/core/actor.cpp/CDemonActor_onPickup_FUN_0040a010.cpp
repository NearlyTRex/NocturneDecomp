// Name: core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
// Address: 0040a010
// Address Range: [[0040a010, 0040a027]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
// Cross-references:
//   core_boxactor.cpp_FUN_00422570 (00422570) at 0042257a [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f2020 (004f2020) at 004f202a [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501920 (00501920) at 0050192a [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee650 (005ee650) at 005ee65a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_006139bf
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x580);
  return;
}


// Assembly code:
// 0040a010: PUSH 0x580
//   Label: core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
// 0040a015: PUSH 0x6139bf
//   XREF to: 006139bf (DATA)
// 0040a01a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040a01e: PUSH EDX
// 0040a01f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a024: ADD ESP,0xc
// 0040a027: RET
