// Name: core_weapon.cpp_CWeapon_FUN_005ee650
// Address: 005ee650
// Address Range: [[005ee650, 005ee662]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee650(CWeapon * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee650(CWeapon *this_ptr)

{
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(&this_ptr->base_actor,in_stack_00000008);
  return;
}


// Assembly code:
// 005ee650: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_weapon.cpp_CWeapon_FUN_005ee650
//   XREF to: Stack[0x8] (READ)
// 005ee654: PUSH EDX
// 005ee655: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ee659: PUSH ECX
// 005ee65a: CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
//   XREF to: 0040a010 (UNCONDITIONAL_CALL)
// 005ee65f: ADD ESP,0x8
// 005ee662: RET
