// Name: core_game.cpp_CGame_FUN_004e0bd0
// Address: 004e0bd0
// Address Range: [[004e0bd0, 004e0bea]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e0bd0(CGame * this_ptr)
// Cross-references:
//   core_gabriela.cpp_CGabriella_FUN_004d6b30 (004d6b30) at 004d6d18 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4af3 [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e0bd0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
            (&g_HeroActors[g_LocalHeroIndex]->inventory);
  return;
}


// Assembly code:
// 004e0bd0: MOV EAX,[0x02db87d0]
//   Label: core_game.cpp_CGame_FUN_004e0bd0
//   XREF to: 02db87d0 (READ)
// 004e0bd5: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e0bdc: ADD EAX,0x1f738
// 004e0be1: PUSH EAX
// 004e0be2: CALL core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
//   XREF to: 00500020 (UNCONDITIONAL_CALL)
// 004e0be7: ADD ESP,0x4
// 004e0bea: RET
