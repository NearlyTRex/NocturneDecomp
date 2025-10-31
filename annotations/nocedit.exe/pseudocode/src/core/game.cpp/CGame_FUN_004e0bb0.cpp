// Name: core_game.cpp_CGame_FUN_004e0bb0
// Address: 004e0bb0
// Address Range: [[004e0bb0, 004e0bcc]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e0bb0(CGame * this_ptr)
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d33df [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e0bb0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
            (&g_HeroActors[g_LocalHeroIndex]->inventory,0);
  return;
}


// Assembly code:
// 004e0bb0: MOV EAX,[0x02db87d0]
//   Label: core_game.cpp_CGame_FUN_004e0bb0
//   XREF to: 02db87d0 (READ)
// 004e0bb5: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e0bbc: PUSH 0x0
// 004e0bbe: ADD EAX,0x1f738
// 004e0bc3: PUSH EAX
// 004e0bc4: CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
// 004e0bc9: ADD ESP,0x8
// 004e0bcc: RET
