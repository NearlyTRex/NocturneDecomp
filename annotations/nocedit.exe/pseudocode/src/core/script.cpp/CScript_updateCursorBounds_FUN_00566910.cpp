// Name: core_script.cpp_CScript_updateCursorBounds_FUN_00566910
// Address: 00566910
// Address Range: [[00566910, 0056699e]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_updateCursorBounds_FUN_00566910(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_updateCursorBounds_FUN_00566910(CScript *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
  g_ScriptEditorVScrollBar.current_value = iVar1 + 2;
  if (g_ScriptEditorVScrollBar.current_value <= g_CurrentEditingLine) {
    g_CurrentEditingLine = iVar1 + 1;
  }
  if (g_CurrentEditingLine < 0) {
    g_CurrentEditingLine = 0;
  }
  if (g_CurrentEditingColumn < 0) {
    g_CurrentEditingColumn = 0;
  }
  g_CurrentEditingColumn =
       core_script_cpp_CScript_editorX2Index_FUN_00566a90
                 (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
  g_CurrentEditingColumn =
       core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                 (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
  return;
}
