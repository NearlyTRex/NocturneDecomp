// Name: core_script.cpp_CScript_splitLineAtColumn_FUN_00566330
// Address: 00566330
// Address Range: [[00566330, 0056638d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,line);
  uVar2 = 0xffffffff;
  pcVar3 = g_CurrentLineBuffer + 1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((int)(~uVar2 - 1) < column) {
    column = ~uVar2 - 1;
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            (&this_ptr->script_text,line + 1,g_CurrentLineBuffer + column + 1);
  g_CurrentLineBuffer[column + 1] = '\0';
  core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,line);
  return;
}
