// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
// Address: 00500020
// Address Range: [[00500020, 00500041]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_FUN_004e0bd0 (004e0bd0) at 004e0be2 [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}


// Assembly code:
// 00500020: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
//   XREF to: Stack[0x4] (READ)
// 00500024: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0050002a: MOV EAX,dword ptr [ECX + 0x4]
// 0050002d: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00500034: JZ 0x00500037
//   XREF to: 00500037 (CONDITIONAL_JUMP)
// 00500036: RET
// 00500037: MOV dword ptr [ECX + 0x340],0x40a00000
//   Label: LAB_00500037
// 00500041: RET
