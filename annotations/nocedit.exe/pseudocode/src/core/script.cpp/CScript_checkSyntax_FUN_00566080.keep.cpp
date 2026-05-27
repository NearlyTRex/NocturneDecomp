// Name: core_script.cpp_CScript_checkSyntax_FUN_00566080
// Address: 00566080
// MANUAL RECONSTRUCTION
// Address Range: [[00566080, 0056617a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_checkSyntax_FUN_00566080(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_checkSyntax_FUN_00566080(CScript *this_ptr)

{
  char *piVar2;
  int iVar3;
  int iStack_10;

  core_script_cpp_CScript_buildParsedLines_FUN_0055a370(this_ptr);
  piVar2 = core_script_cpp_CScript_validateSyntax_FUN_0055a4b0(this_ptr,&iStack_10);
  if (piVar2 != (char *)0x0) {
    core_script_cpp_clearSelections_FUN_005644e0();
    g_CurrentEditingLine = iStack_10;
    g_CurrentEditingColumn = 0;
    core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
    core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
    strcpy(g_ScriptEditorStatusText,piVar2);
    return;
  }
  iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&g_ScriptPickList.base);
  if (iVar3 < 1) {
    strcpy(g_ScriptEditorStatusText,"Syntax check OK.");
    return;
  }
  iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&g_ScriptPickList.base);
  _sprintf(g_ScriptEditorStatusText,"%d sound files missing.",iVar3);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            (&g_ScriptPickList,"The following sound files are missing.",-1,0);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_ScriptPickList);
  return;
}
