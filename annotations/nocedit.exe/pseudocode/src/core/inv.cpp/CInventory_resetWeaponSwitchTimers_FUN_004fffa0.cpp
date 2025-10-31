// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
// Address: 004fffa0
// Address Range: [[004fffa0, 004fffe0]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
// Cross-references:
//   core_game.cpp_CGame_FUN_004e0bb0 (004e0bb0) at 004e0bc4 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 (004fed10) at 004fed1e [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 (004feb10) at 004feb38 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500 (00501500) at 0050155a [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 (004ffad0) at 004ffb0f [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory *this_ptr,int reset_both)

{
  if ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}


// Assembly code:
// 004fffa0: PUSH ESI
//   Label: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
// 004fffa1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fffa5: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004fffab: MOV ECX,dword ptr [EAX + 0x4]
// 004fffae: CMP ECX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004fffb5: JNZ 0x004fffd3
//   XREF to: 004fffd3 (CONDITIONAL_JUMP)
// 004fffb7: MOV dword ptr [EAX + 0x33c],0x0
// 004fffc1: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004fffc5: MOV dword ptr [EAX + 0x338],0x40a00000
// 004fffcf: TEST ESI,ESI
// 004fffd1: JNZ 0x004fffd5
//   XREF to: 004fffd5 (CONDITIONAL_JUMP)
// 004fffd3: POP ESI
//   Label: LAB_004fffd3
// 004fffd4: RET
// 004fffd5: MOV dword ptr [EAX + 0x348],0x40a00000
//   Label: LAB_004fffd5
// 004fffdf: POP ESI
// 004fffe0: RET
