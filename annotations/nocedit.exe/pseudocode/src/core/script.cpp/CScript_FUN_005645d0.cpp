// Name: core_script.cpp_CScript_FUN_005645d0
// Address: 005645d0
// Address Range: [[005645d0, 005647cd]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005645d0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005645d0(CScript *this_ptr)

{
  int iVar1;
  int x1;
  int y;
  CDemonRenderer *in_stack_fffffdfc;
  
  core_script_cpp_updateSelection_FUN_00564500();
  engine_matrix_c_pushViewport_FUN_0050e320
            (g_ScriptEditorLeft,g_ScriptEditorTop,(g_ScriptEditorRight - g_ScriptEditorLeft) + -1,
             (g_ScriptEditorBottom - g_ScriptEditorTop) + -1);
  engine_2d_c_fillRectColor_FUN_00403170
            (g_ScriptEditorLeft,g_ScriptEditorTop,g_ScriptEditorRight + -1,g_ScriptEditorBottom + -1
             ,0);
  g_ActiveRenderColor = 7;
  engine_2d_c_drawHLine_FUN_00402ee0(g_ScriptEditorLeft,g_ScriptEditorTop,g_ScriptEditorRight + -1);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&g_ScriptEditorHScrollBar);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&g_ScriptEditorVScrollBar);
  engine_matrix_c_pushViewport_FUN_0050e320
            (g_ScriptTextAreaLeft,g_ScriptTextAreaTop,
             (g_ScriptTextAreaRight - g_ScriptTextAreaLeft) + -1,
             (g_ScriptTextAreaBottom - g_ScriptTextAreaTop) + -1);
  for (iVar1 = g_ScriptEditorVScrollBar.scroll_position;
      iVar1 <= g_ScriptEditorVScrollBar.scroll_position + g_ScriptEditorVScrollBar.max_value;
      iVar1 = iVar1 + 1) {
    core_script_cpp_CScript_FUN_005664d0(this_ptr,iVar1);
  }
  if ((INT_0310fd40._1_1_ & 0x40) == 0) {
    g_ActiveRenderColor = 0xff;
    iVar1 = (g_CurrentEditingLine - g_ScriptEditorVScrollBar.scroll_position) *
            g_ScriptEditorLineHeight + g_ScriptTextAreaTop;
    x1 = g_ScriptEditorCharWidth *
         (g_CurrentEditingColumn - g_ScriptEditorHScrollBar.scroll_position) + g_ScriptTextAreaLeft;
    y = iVar1 + g_ScriptEditorLineHeight + -1;
    if (g_AutoIndentEnabled == 0) {
      engine_2d_c_drawHLine_FUN_00402ee0(x1,y,g_ScriptEditorCharWidth + x1 + -1);
    }
    else {
      engine_2d_c_drawVLine_FUN_00402ff0(x1,iVar1,y);
    }
  }
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffdfc);
  _sprintf
            (&stack0xfffffdfc,"Ln %d, Col %d",g_CurrentEditingLine + 1,
             g_CurrentEditingColumn + 1);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            (g_ScriptEditorFont,g_ScriptStatusBarRight,g_ScriptStatusBarY,0xff,-1,&stack0xfffffdfc);
  engine_font_cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
            (g_ScriptEditorFont,g_ScriptStatusBarX,g_ScriptStatusBarY,0xff,-1,
             g_ScriptEditorStatusText);
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffdfc);
  return;
}
