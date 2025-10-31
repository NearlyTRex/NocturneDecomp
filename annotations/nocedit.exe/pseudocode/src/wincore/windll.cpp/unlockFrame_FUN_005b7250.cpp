// Name: wincore_windll.cpp_unlockFrame_FUN_005b7250
// Address: 005b7250
// Address Range: [[005b7250, 005b727b]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 00451233 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2aea [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab10 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ac97 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464bdf [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464e7e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410 (0049e410) at 0049e4af [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0 (0049e4d0) at 0049e56f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 (004a0dd0) at 004a0e6f [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 (005b7c30) at 005b7cd2 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 (005b7460) at 005b7538 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_UseExternalRenderer
//   APIDLL_unlockFrame* g_APIDLL_unlockFrame
//   int g_SavedBitsPerPixel
//   int g_ExternalFrameLocked

#include "nocturne.h"

void __cdecl wincore_windll_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)

{
  if (g_UseExternalRenderer != 0) {
    g_BitsPerPixel = g_SavedBitsPerPixel;
    if (clear_lock_flag != 0) {
      g_ExternalFrameLocked = 0;
    }
    (*g_APIDLL_unlockFrame)();
    return;
  }
  return;
}


// Assembly code:
// 005b7250: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 02d03e94 (READ)
// 005b7257: JZ 0x005b7219
//   XREF to: 005b7219 (CONDITIONAL_JUMP)
// 005b7259: MOV EAX,[0x03f6b998]
//   XREF to: 03f6b998 (READ)
// 005b725e: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b7262: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 005b7267: TEST ECX,ECX
// 005b7269: JZ 0x005b7275
//   XREF to: 005b7275 (CONDITIONAL_JUMP)
// 005b726b: PUSH EBX
// 005b726c: XOR EBX,EBX
// 005b726e: MOV dword ptr [0x03f6b99c],EBX
//   XREF to: 03f6b99c (WRITE)
// 005b7274: POP EBX
// 005b7275: CALL dword ptr [g_APIDLL_unlockFrame]
//   Label: LAB_005b7275
//   XREF to: 03f6b8b0 (READ)
// 005b727b: RET
