// Name: core_game.cpp_CGame_FUN_004e07a0
// Address: 004e07a0
// Address Range: [[004e07a0, 004e07d4]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e07a0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db2a7 [UNCONDITIONAL_CALL]
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
//   core_gore.cpp_CGore_FUN_004ede60
//   core_inv.cpp_loadInventory_FUN_004fd220
//   core_set.cpp_CDemonSet_FUN_0056fb80

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e07a0(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_FUN_0056fb80(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(g_CFireEffectPtr);
  core_gore_cpp_CGore_FUN_004ede60(g_CGorePtr);
  core_inv_cpp_loadInventory_FUN_004fd220();
  return;
}


// Assembly code:
// 004e07a0: PUSH EBX
//   Label: core_game.cpp_CGame_FUN_004e07a0
// 004e07a1: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e07a7: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004e07a8: CALL core_set.cpp_CDemonSet_FUN_0056fb80
//   XREF to: 0056fb80 (UNCONDITIONAL_CALL)
// 004e07ad: ADD ESP,0x4
// 004e07b0: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004e07b6: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004e07b7: CALL core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
//   XREF to: 004c7ab0 (UNCONDITIONAL_CALL)
// 004e07bc: ADD ESP,0x4
// 004e07bf: MOV EBX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 004e07c5: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 004e07c6: CALL core_gore.cpp_CGore_FUN_004ede60
//   XREF to: 004ede60 (UNCONDITIONAL_CALL)
// 004e07cb: ADD ESP,0x4
// 004e07ce: CALL core_inv.cpp_loadInventory_FUN_004fd220
//   XREF to: 004fd220 (UNCONDITIONAL_CALL)
// 004e07d3: POP EBX
// 004e07d4: RET
