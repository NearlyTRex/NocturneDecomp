// Name: core_script.cpp_updateSelection_FUN_00564500
// Address: 00564500
// Address Range: [[0056449b, 005644d0] [00564500, 0056455d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_updateSelection_FUN_00564500(void)

#include "nocturne.h"

void __cdecl core_script_cpp_updateSelection_FUN_00564500(void)

{
  if ((g_SelectionAnchorColumn < 0) || (g_SelectionAnchorLine < 0)) {
    g_SelectionEndLine = -1;
    g_SelectionEndColumn = -1;
    g_SelectionStartColumn = -1;
    g_SelectionStartLine = -1;
  }
  else {
    g_SelectionEndLine = g_CurrentEditingLine;
    g_SelectionEndColumn = g_CurrentEditingColumn;
    g_SelectionStartColumn = g_SelectionAnchorColumn;
    g_SelectionStartLine = g_SelectionAnchorLine;
    if (((g_CurrentEditingLine <= g_SelectionAnchorLine) &&
        (g_SelectionEndLine = g_SelectionAnchorLine, g_SelectionEndColumn = g_SelectionAnchorColumn,
        g_SelectionStartColumn = g_CurrentEditingColumn, g_SelectionStartLine = g_CurrentEditingLine
        , g_SelectionAnchorLine <= g_CurrentEditingLine)) &&
       (g_SelectionStartLine = g_SelectionAnchorLine,
       g_SelectionAnchorColumn < g_CurrentEditingColumn)) {
      g_SelectionEndColumn = g_CurrentEditingColumn;
      g_SelectionStartColumn = g_SelectionAnchorColumn;
    }
  }
  return;
}
