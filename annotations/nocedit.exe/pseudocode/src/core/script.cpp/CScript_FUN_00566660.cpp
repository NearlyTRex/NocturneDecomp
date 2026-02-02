// Name: core_script.cpp_CScript_FUN_00566660
// Address: 00566660
// Address Range: [[00566660, 005667f9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566660 (CScript *this_ptr,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl
core_script_cpp_CScript_FUN_00566660
          (CScript *this_ptr,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  DAT_03114200 = g_ConsoleFont;
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ConsoleFont,0x4d);
  iVar2 = shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(DAT_03114200);
  INT_03114204 = iVar1 + iVar2;
  DAT_03114208 = shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(DAT_03114200);
  INT_031141d4 = param_3;
  INT_031141d8 = param_4 + 1;
  INT_031141dc = param_5 + 1;
  INT_031141d0 = param_2;
  DAT_031141f4 = INT_031141dc - DAT_03114208;
  DAT_031141f0 = param_2;
  DAT_031141f8 = INT_031141d8;
  INT_031141fc = INT_031141dc;
  iVar1 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  INT_031141e0 = INT_031141d0;
  INT_031141e4 = INT_031141d4 + 1;
  DAT_031141e8 = INT_031141d8 - iVar2;
  DAT_031141ec = DAT_031141f4 - iVar1;
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&g_ScriptEditorHScrollBar,INT_031141d0,DAT_031141ec,DAT_031141e8,DAT_031141f4);
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&g_ScriptEditorVScrollBar,DAT_031141e8,INT_031141e4,INT_031141d8,DAT_031141ec);
  g_ScriptEditorVScrollBar.max_value = (DAT_031141ec - INT_031141e4) / DAT_03114208;
  g_ScriptEditorHScrollBar.max_value = (DAT_031141e8 - INT_031141e0) / INT_03114204;
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
  core_script_cpp_FUN_005644e0();
  return;
}
