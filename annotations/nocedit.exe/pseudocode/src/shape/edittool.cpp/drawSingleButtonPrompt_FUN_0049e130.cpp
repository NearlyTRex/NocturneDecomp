// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// Address: 0049e130
// Address Range: [[0049e130, 0049e404]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CEdButton local_108;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_WindowHeight / 0x60;
  local_18 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar2 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,title);
  local_14 = iVar1;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,g_FontCharacterHeight * 4 + local_14,
             iVar1 + g_FontCharacterWidth * 2 + iVar2,title,0);
  local_1c = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  local_24 = ((g_ClipRight + g_ClipLeft) - local_1c) / 2 + 1;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  local_20 = (g_ClipBottom - iVar4) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            (&local_108,local_24,local_20,local_24 + local_1c + -1,g_ClipBottom,"OK");
  engine_2d_c_clearInputAndWait_FUN_00403260();
  while( true ) {
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar4 != 0) break;
    iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_108);
    if (iVar4 != 0) break;
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,message,((g_ClipLeft + g_ClipRight) - iVar3) / 2,
               (((g_ClipTop + g_ClipBottom) - iVar1) - iVar2) / 2,color,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_108,1);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_108);
  return;
}
