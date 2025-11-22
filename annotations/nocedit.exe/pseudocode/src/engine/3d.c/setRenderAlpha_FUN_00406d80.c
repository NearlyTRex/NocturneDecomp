// Name: engine_3d.c_setRenderAlpha_FUN_00406d80
// Address: 00406d80
// Address Range: [[00406d80, 00406dc4]]
// Convention: __cdecl
// Signature: void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
// Cross-references:
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413b75 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3ad0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3f47 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d8431 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4163 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d89ec [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500ee0 [UNCONDITIONAL_CALL]
//   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 (00510000) at 00510206 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559cc1 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0 (004060a0) at 004060e7 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290 (00406290) at 004062f0 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405ada [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonVertexLit_FUN_00404120 (00404120) at 00404167 [UNCONDITIONAL_CALL]
//   engine_3d.c_setRenderAlpha_FUN_00406d60 (00406d60) at 00406d68 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 (0048ca60) at 0048ca65 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 (0048ca70) at 0048ca89 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 (004ce2d0) at 004ce718 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e7f0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1e5d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e8d9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a112e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fd29 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a07e2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049d9e6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a5111 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e323 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentRenderColor = 0xffffff
//   int g_CurrentAlphaValue = 0xff
//   int g_CurrentInvertedColor
//   undefined4 DAT_00ffffff

#include "nocturne.h"

void __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value)

{
  g_CurrentAlphaValue = alpha_color_value >> 8;
  if (g_CurrentAlphaValue < 0) {
    g_CurrentAlphaValue = 0;
  }
  else if (0xff < g_CurrentAlphaValue) {
    g_CurrentAlphaValue = 0xff;
  }
  g_CurrentRenderColor =
       g_CurrentAlphaValue | g_CurrentAlphaValue << 8 | g_CurrentAlphaValue << 0x10;
  g_CurrentInvertedColor = g_CurrentRenderColor ^ 0xffffff;
  return;
}


// Assembly code:
// 00406d80: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: Stack[0x4] (READ)
// 00406d84: SAR EDX,0x8
// 00406d87: TEST EDX,EDX
// 00406d89: JL 0x00406dc1
//   XREF to: 00406dc1 (CONDITIONAL_JUMP)
// 00406d8b: CMP EDX,0xff
// 00406d91: JLE 0x00406d98
//   XREF to: 00406d98 (CONDITIONAL_JUMP)
// 00406d93: MOV EDX,0xff
// 00406d98: MOV EAX,EDX
//   Label: LAB_00406d98
// 00406d9a: MOV ECX,EDX
// 00406d9c: SHL EAX,0x8
// 00406d9f: OR ECX,EAX
// 00406da1: MOV EAX,EDX
// 00406da3: SHL EAX,0x10
// 00406da6: OR ECX,EAX
// 00406da8: MOV EAX,ECX
// 00406daa: XOR EAX,0xffffff
//   XREF to: 00ffffff (DATA)
// 00406daf: MOV dword ptr [0x0066df84],ECX
//   XREF to: 0066df84 (WRITE)
// 00406db5: MOV [0x00772a80],EAX
//   XREF to: 00772a80 (WRITE)
// 00406dba: MOV dword ptr [0x006793b4],EDX
//   XREF to: 006793b4 (WRITE)
// 00406dc0: RET
// 00406dc1: XOR EDX,EDX
//   Label: LAB_00406dc1
// 00406dc3: JMP 0x00406d98
//   XREF to: 00406d98 (UNCONDITIONAL_JUMP)
