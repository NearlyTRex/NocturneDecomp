// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
// Address: 004ffe10
// Address Range: [[004ffe10, 004ffe6f]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 (004fed10) at 004fedef [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff655 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 (004feb10) at 004febfb [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff86b [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_ammo.cpp_CAmmo_FUN_00410fd0

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory *this_ptr)

{
  if (this_ptr->selected_weapon == (CWeapon *)0x0) {
    return;
  }
  this_ptr->ammo_ptr->ammo_count = this_ptr->selected_weapon->ammo_count;
  this_ptr->ammo_ptr->ammo_type = this_ptr->selected_weapon->ammo_type;
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&this_ptr->selected_weapon->base_actor);
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  return;
}


// Assembly code:
// 004ffe10: PUSH EBX
//   Label: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
// 004ffe11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ffe15: MOV EDX,dword ptr [EBX + 0x330]
// 004ffe1b: TEST EDX,EDX
// 004ffe1d: JNZ 0x004ffe21
//   XREF to: 004ffe21 (CONDITIONAL_JUMP)
// 004ffe1f: POP EBX
// 004ffe20: RET
// 004ffe21: PUSH ESI
//   Label: LAB_004ffe21
// 004ffe22: MOV EAX,EDX
// 004ffe24: MOV EDX,dword ptr [EBX + 0x458]
// 004ffe2a: MOV EAX,dword ptr [EAX + 0x568]
// 004ffe30: MOV dword ptr [EDX + 0x314],EAX
// 004ffe36: MOV EAX,dword ptr [EBX + 0x330]
// 004ffe3c: MOV EDX,dword ptr [EBX + 0x458]
// 004ffe42: MOV EAX,dword ptr [EAX + 0x56c]
// 004ffe48: MOV dword ptr [EDX + 0x318],EAX
// 004ffe4e: MOV ECX,dword ptr [EBX + 0x330]
// 004ffe54: PUSH ECX
// 004ffe55: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004ffe5a: ADD ESP,0x4
// 004ffe5d: PUSH EAX
// 004ffe5e: MOV ESI,dword ptr [EBX + 0x458]
// 004ffe64: PUSH ESI
// 004ffe65: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 004ffe6a: ADD ESP,0x8
// 004ffe6d: POP ESI
// 004ffe6e: POP EBX
// 004ffe6f: RET
