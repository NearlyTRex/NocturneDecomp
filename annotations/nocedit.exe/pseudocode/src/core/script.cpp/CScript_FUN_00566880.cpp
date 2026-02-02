// Name: core_script.cpp_CScript_FUN_00566880
// Address: 00566880
// Address Range: [[00566880, 00566906]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566880(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566880(CScript *this_ptr)

{
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  if (g_ScriptEditorVScrollBar.scroll_position + g_ScriptEditorVScrollBar.max_value <=
      g_CurrentEditingLine) {
    g_CurrentEditingLine =
         g_ScriptEditorVScrollBar.scroll_position + g_ScriptEditorVScrollBar.max_value + -1;
  }
  if (g_CurrentEditingLine < g_ScriptEditorVScrollBar.scroll_position) {
    g_CurrentEditingLine = g_ScriptEditorVScrollBar.scroll_position;
  }
  if (g_ScriptEditorHScrollBar.scroll_position + g_ScriptEditorHScrollBar.max_value <=
      g_CurrentEditingColumn) {
    g_CurrentEditingColumn =
         g_ScriptEditorHScrollBar.scroll_position + g_ScriptEditorHScrollBar.max_value + -1;
  }
  if (g_CurrentEditingColumn < g_ScriptEditorHScrollBar.scroll_position) {
    g_CurrentEditingColumn = g_ScriptEditorHScrollBar.scroll_position;
  }
  core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
  return;
}
