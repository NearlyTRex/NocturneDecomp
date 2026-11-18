// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0
// Address: 0047c8e0
// Address Range: [[0047c8e0, 0047cbcd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0(char *title,char *message,int color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0(char *title,char *message,int color)

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
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  iVar1 = g_INT_005fba1c / 0x60;
  local_18 = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0("Cancel");
  iVar2 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,title);
  local_14 = iVar1;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,message);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(g_CBitFont_PTR_01c5b0e0,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (g_CEditorToolsPtr,g_EditorFontMaxCharWidth * 4 + local_14,
             iVar1 + g_INT_01c5bae4 * 2 + iVar2,title,0);
  local_1c = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0("Cancel");
  local_24 = ((g_INT_01c6b5b0 + g_INT_01c6b5a8) - local_1c) / 2 + 1;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  local_20 = (g_INT_01c6b5b4 - iVar4) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_00486020(&local_108);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0
            (&local_108,local_24,local_20,local_24 + local_1c + -1,g_INT_01c6b5b4,"OK");
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  while( true ) {
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
    if (iVar4 != 0) break;
    iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&local_108);
    if ((iVar4 != 0) || (g_InputDisabled != 0)) break;
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00480200(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01c5b0e0,message,((g_INT_01c6b5a8 + g_INT_01c6b5b0) - iVar3) / 2,
               (((g_INT_01c6b5ac + g_INT_01c6b5b4) - iVar1) - iVar2) / 2,color,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_00486120(&local_108,1);
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00480410(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047f970(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_00486050(&local_108,0);
  return;
}
