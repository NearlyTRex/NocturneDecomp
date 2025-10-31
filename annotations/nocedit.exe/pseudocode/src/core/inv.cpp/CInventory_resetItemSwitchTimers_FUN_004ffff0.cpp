// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
// Address: 004ffff0
// Address Range: [[004ffff0, 0050001b]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory * this_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_selectItem_FUN_004fec10 (004fec10) at 004fec19 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500 (00501500) at 0050154d [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}


// Assembly code:
// 004ffff0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
//   XREF to: Stack[0x4] (READ)
// 004ffff4: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004ffffa: MOV EAX,dword ptr [ECX + 0x4]
// 004ffffd: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00500004: JZ 0x00500007
//   XREF to: 00500007 (CONDITIONAL_JUMP)
// 00500006: RET
// 00500007: MOV dword ptr [ECX + 0x338],0x0
//   Label: LAB_00500007
// 00500011: MOV dword ptr [ECX + 0x33c],0x40a00000
// 0050001b: RET
