// Name: wincore_windll.cpp_selectCard_FUN_005b7d90
// Address: 005b7d90
// Address Range: [[005b7d90, 005b7daa]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_selectCard_FUN_005b7d90(int card_index)
// Cross-references:
//   core_game.cpp_CGame_setGameRes_FUN_004dade0 (004dade0) at 004dae99 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 005117c8 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b71c0 [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_selectCard* g_APIDLL_selectCard
//   int g_ExternalRendererActive

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectCard_FUN_005b7d90(int card_index)

{
  int iVar1;
  
  if (g_ExternalRendererActive == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectCard)(card_index);
  return iVar1;
}


// Assembly code:
// 005b7d90: CMP dword ptr [0x03f6b978],0x0
//   Label: wincore_windll.cpp_selectCard_FUN_005b7d90
//   XREF to: 03f6b978 (READ)
// 005b7d97: JNZ 0x005b7d9c
//   XREF to: 005b7d9c (CONDITIONAL_JUMP)
// 005b7d99: XOR EAX,EAX
// 005b7d9b: RET
// 005b7d9c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005b7d9c
//   XREF to: Stack[0x4] (READ)
// 005b7da0: PUSH ECX
// 005b7da1: CALL dword ptr [g_APIDLL_selectCard]
//   XREF to: 03f6b918 (READ)
// 005b7da7: ADD ESP,0x4
// 005b7daa: RET
