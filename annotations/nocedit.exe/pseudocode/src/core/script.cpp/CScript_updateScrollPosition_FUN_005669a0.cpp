// Name: core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
// Address: 005669a0
// Address Range: [[005669a0, 00566a81]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(CScript *this_ptr)

{
  int iVar1;
  
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  if (g_ScriptEditorVScrollBar.current_value - g_ScriptEditorVScrollBar.max_value <
      g_ScriptEditorVScrollBar.scroll_position) {
    g_ScriptEditorVScrollBar.scroll_position =
         g_ScriptEditorVScrollBar.current_value - g_ScriptEditorVScrollBar.max_value;
  }
  if (g_CurrentEditingLine < g_ScriptEditorVScrollBar.scroll_position) {
    g_ScriptEditorVScrollBar.scroll_position = g_CurrentEditingLine;
  }
  iVar1 = (g_CurrentEditingLine - g_ScriptEditorVScrollBar.max_value) + 1;
  if (g_ScriptEditorVScrollBar.scroll_position < iVar1) {
    g_ScriptEditorVScrollBar.scroll_position = iVar1;
  }
  if (g_ScriptEditorVScrollBar.scroll_position < 0) {
    g_ScriptEditorVScrollBar.scroll_position = 0;
  }
  if (g_ScriptEditorHScrollBar.current_value - g_ScriptEditorHScrollBar.max_value <
      g_ScriptEditorHScrollBar.scroll_position) {
    g_ScriptEditorHScrollBar.scroll_position =
         g_ScriptEditorHScrollBar.current_value - g_ScriptEditorHScrollBar.max_value;
  }
  if (g_CurrentEditingColumn < g_ScriptEditorHScrollBar.scroll_position) {
    g_ScriptEditorHScrollBar.scroll_position = g_CurrentEditingColumn;
  }
  iVar1 = (g_CurrentEditingColumn - g_ScriptEditorHScrollBar.max_value) + 1;
  if (g_ScriptEditorHScrollBar.scroll_position < iVar1) {
    g_ScriptEditorHScrollBar.scroll_position = iVar1;
  }
  if (-1 < g_ScriptEditorHScrollBar.scroll_position) {
    return;
  }
  g_ScriptEditorHScrollBar.scroll_position = 0;
  return;
}
