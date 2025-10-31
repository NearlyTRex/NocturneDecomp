// Name: wincore_windll.cpp_lockFrame_FUN_005b7210
// Address: 005b7210
// Address Range: [[005b7210, 005b7247]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_lockFrame_FUN_005b7210(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 004511ce [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ade [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da42c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aae0 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464c00 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464f53 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f54d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410 (0049e410) at 0049e450 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0 (0049e4d0) at 0049e510 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 (004a0dd0) at 004a0e10 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 (005b7c30) at 005b7c87 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 (005b7460) at 005b7502 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_UseExternalRenderer
//   APIDLL_lockFrame* g_APIDLL_lockFrame
//   int g_ExternalBitsPerPixel
//   int g_SavedBitsPerPixel
//   int g_ExternalFrameLocked

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockFrame_FUN_005b7210(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_lockFrame)();
    if (iVar1 != 0) {
      g_SavedBitsPerPixel = g_BitsPerPixel;
      g_ExternalFrameLocked = 1;
      g_BitsPerPixel = g_ExternalBitsPerPixel;
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 005b7210: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 02d03e94 (READ)
// 005b7217: JNZ 0x005b721c
//   XREF to: 005b721c (CONDITIONAL_JUMP)
// 005b7219: XOR EAX,EAX
//   Label: LAB_005b7219
// 005b721b: RET
//   Label: LAB_005b721b
// 005b721c: CALL dword ptr [g_APIDLL_lockFrame]
//   Label: LAB_005b721c
//   XREF to: 03f6b8ac (READ)
// 005b7222: TEST EAX,EAX
// 005b7224: JZ 0x005b721b
//   XREF to: 005b721b (CONDITIONAL_JUMP)
// 005b7226: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005b722b: MOV ECX,0x1
// 005b7230: MOV [0x03f6b998],EAX
//   XREF to: 03f6b998 (WRITE)
// 005b7235: MOV EAX,[0x03f6b990]
//   XREF to: 03f6b990 (READ)
// 005b723a: MOV dword ptr [0x03f6b99c],ECX
//   XREF to: 03f6b99c (WRITE)
// 005b7240: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 005b7245: MOV EAX,ECX
// 005b7247: RET
