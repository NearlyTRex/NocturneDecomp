// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// Address: 0049e130
// Address Range: [[0049e130, 0049e404]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  char *in_stack_00000014;
  char *in_stack_00000020;
  int in_stack_00000054;
  int iStack_dc;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar2 = g_WindowHeight / 0x60;
  shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar3 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar3 = iVar2 * 2 + iVar3;
  engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,in_stack_00000014);
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message);
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)(message + g_FontCharacterHeight * 4),
             iVar5 + g_FontCharacterWidth * 2 + iVar3,in_stack_00000020,0);
  shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar2 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar2 = (g_ClipBottom - iVar2) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)&stack0xffffff20);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)&iStack_dc,iVar2,color,iVar2 + in_stack_00000010 + -1,g_ClipBottom,
             "OK");
  iStack_dc = 0x49e2de;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  while( true ) {
    bVar1 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if ((CONCAT31 /* combine 2-byte values */(extraout_var,bVar1) != 0) ||
       (iVar2 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)&stack0xffffff30),
       iVar2 != 0)) break;
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iStack_dc = 0x49e376;
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,message,((g_ClipLeft + g_ClipRight) - iVar4) / 2,
               (((g_ClipTop + g_ClipBottom) - iVar5) - iVar3) / 2,in_stack_00000054,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)&stack0xffffff44,1);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)&stack0xffffff3c);
  return;
}
