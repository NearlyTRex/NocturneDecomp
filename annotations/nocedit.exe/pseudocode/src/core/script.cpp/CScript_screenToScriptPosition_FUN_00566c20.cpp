// Name: core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20
// Address: 00566c20
// Address Range: [[00566c20, 00566cb3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20(CScript *this_ptr,int pixel_x,int pixel_y,int *column_out,int *line_out)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20(CScript *this_ptr,int pixel_x,int pixel_y,int *column_out,int *line_out)

{
  int iVar1;
  
  iVar1 = g_ScriptTextAreaTop;
  if ((((g_ScriptTextAreaLeft <= pixel_x) && (g_ScriptTextAreaTop <= pixel_y)) &&
      (pixel_x < g_ScriptTextAreaRight)) && (pixel_y < g_ScriptTextAreaBottom)) {
    *column_out = ((pixel_x - g_ScriptTextAreaLeft) + g_ScriptEditorCharWidth / 2) /
                  g_ScriptEditorCharWidth + g_ScriptEditorHScrollBar.scroll_position;
    *line_out = (pixel_y - iVar1) / g_ScriptEditorLineHeight +
                g_ScriptEditorVScrollBar.scroll_position;
    return 1;
  }
  return 0;
}
