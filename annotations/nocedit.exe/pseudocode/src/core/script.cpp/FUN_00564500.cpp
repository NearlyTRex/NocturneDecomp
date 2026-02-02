// Name: core_script.cpp_FUN_00564500
// Address: 00564500
// Address Range: [[00564500, 0056455d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00564500(void)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00564500(void)

{
  if ((DAT_0310fd4c < 0) || (DAT_0310fd50 < 0)) {
    g_SelectionEndLine = -1;
    g_SelectionEndColumn = -1;
    g_SelectionStartColumn = -1;
    g_SelectionStartLine = -1;
  }
  else {
    g_SelectionEndLine = g_CurrentEditingLine;
    g_SelectionEndColumn = g_CurrentEditingColumn;
    g_SelectionStartColumn = DAT_0310fd4c;
    g_SelectionStartLine = DAT_0310fd50;
    if (((g_CurrentEditingLine <= DAT_0310fd50) &&
        (g_SelectionEndLine = DAT_0310fd50, g_SelectionEndColumn = DAT_0310fd4c,
        g_SelectionStartColumn = g_CurrentEditingColumn, g_SelectionStartLine = g_CurrentEditingLine
        , DAT_0310fd50 <= g_CurrentEditingLine)) &&
       (g_SelectionStartLine = DAT_0310fd50, DAT_0310fd4c < g_CurrentEditingColumn)) {
      g_SelectionEndColumn = g_CurrentEditingColumn;
      g_SelectionStartColumn = DAT_0310fd4c;
    }
  }
  return;
}
