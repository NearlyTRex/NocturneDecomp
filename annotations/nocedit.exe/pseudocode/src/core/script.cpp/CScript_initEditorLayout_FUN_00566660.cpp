// Name: core_script.cpp_CScript_initEditorLayout_FUN_00566660
// Address: 00566660
// Address Range: [[00566660, 005667f9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_initEditorLayout_FUN_00566660(CScript *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_initEditorLayout_FUN_00566660(CScript *this_ptr,int x,int y,int width,int height)

{
  int iVar1;
  int iVar2;
  
  g_ScriptEditorFont = g_ConsoleFont;
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ConsoleFont,0x4d);
  iVar2 = shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(g_ScriptEditorFont);
  g_ScriptEditorCharWidth = iVar1 + iVar2;
  g_ScriptEditorLineHeight = shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(g_ScriptEditorFont)
  ;
  g_ScriptEditorTop = y;
  g_ScriptEditorRight = width + 1;
  g_ScriptEditorBottom = height + 1;
  g_ScriptEditorLeft = x;
  g_ScriptStatusBarY = g_ScriptEditorBottom - g_ScriptEditorLineHeight;
  g_ScriptStatusBarX = x;
  g_ScriptStatusBarRight = g_ScriptEditorRight;
  g_ScriptStatusBarBottom = g_ScriptEditorBottom;
  iVar1 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  g_ScriptTextAreaLeft = g_ScriptEditorLeft;
  g_ScriptTextAreaTop = g_ScriptEditorTop + 1;
  g_ScriptTextAreaRight = g_ScriptEditorRight - iVar2;
  g_ScriptTextAreaBottom = g_ScriptStatusBarY - iVar1;
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&g_ScriptEditorHScrollBar,g_ScriptEditorLeft,g_ScriptTextAreaBottom,
             g_ScriptTextAreaRight,g_ScriptStatusBarY);
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&g_ScriptEditorVScrollBar,g_ScriptTextAreaRight,g_ScriptTextAreaTop,g_ScriptEditorRight
             ,g_ScriptTextAreaBottom);
  g_ScriptEditorVScrollBar.max_value =
       (g_ScriptTextAreaBottom - g_ScriptTextAreaTop) / g_ScriptEditorLineHeight;
  g_ScriptEditorHScrollBar.max_value =
       (g_ScriptTextAreaRight - g_ScriptTextAreaLeft) / g_ScriptEditorCharWidth;
  iVar1 = 0;
  g_ScriptEditorHScrollBar.current_value = 0;
  g_ScriptEditorVScrollBar.current_value =
       shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
  while( true ) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (iVar2 <= iVar1) break;
    core_script_cpp_CScript_updateLineMetrics_FUN_00566800(this_ptr,iVar1);
    iVar1 = iVar1 + 1;
  }
  core_script_cpp_clearSelections_FUN_005644e0();
  return;
}
