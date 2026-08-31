// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// Address: 0049e130
// MANUAL RECONSTRUCTION
// Address Range: [[0049e130, 0049e404]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)

{
  int iVar1;
  int iVar5;
  int iVar2;
  int iVar3;
  int iVar6;
  int left;
  int iVar4;
  int iVar7;
  int iVar8;
  CEdButton local_108;
  int local_14;

  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_WindowHeight / 0x60;
  iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar2 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar8 = iVar1 * 2 + iVar2;
  local_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,title);
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message);
  if (local_14 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < iVar5) {
    local_14 = iVar5;
  }
  iVar5 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,g_FontCharacterHeight * 4 + local_14,
             iVar5 + g_FontCharacterWidth * 2 + iVar8,title,0);
  iVar6 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  left = ((g_ClipRight + g_ClipLeft) - iVar6) / 2 + 1;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar7 = g_ClipBottom - iVar4;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            (&local_108,left,iVar7 + 1,left + iVar6 + -1,g_ClipBottom,"OK");
  engine_2d_c_clearInputAndWait_FUN_00403260();
  while( true ) {
    iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar6 != 0) break;
    iVar6 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_108);
    if (iVar6 != 0) break;
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_EditorFont,message,((g_ClipLeft + g_ClipRight) - iVar3) / 2,
               (((g_ClipTop + g_ClipBottom) - iVar5) - iVar8) / 2,color,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_108,1);
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
#if !NOCTURNE_AUTHENTIC_NETPLAY
    nocturne_net_keepalive();
#endif
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_108,0);
  return;
}
