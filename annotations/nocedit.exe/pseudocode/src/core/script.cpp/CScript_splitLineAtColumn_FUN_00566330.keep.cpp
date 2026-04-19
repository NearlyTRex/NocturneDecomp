// Name: core_script.cpp_CScript_splitLineAtColumn_FUN_00566330
// Address: 00566330
// MANUAL RECONSTRUCTION
// Address Range: [[00566330, 0056638d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line)

{
  int iLen;

  core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,line);
  iLen = strlen(g_CurrentLineBuffer + 1);
  if (iLen < column) {
    column = iLen;
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            (&this_ptr->script_text,line + 1,g_CurrentLineBuffer + column + 1);
  g_CurrentLineBuffer[column + 1] = '\0';
  core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,line);
  return;
}
