// Name: core_script.cpp_CScript_insertText_FUN_00566390
// Address: 00566390
// Address Range: [[00566390, 005664c4]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_insertText_FUN_00566390(CScript *this_ptr,char *text,int update_cursor)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_insertText_FUN_00566390(CScript *this_ptr,char *text,int update_cursor)

{
  char cVar2;
  uint buffer_index;
  SIZE_T n;
  uint uVar2;
  int iVar3;
  uint uVar3;
  char *pcVar5;
  char *pcVar4;
  byte bVar5;
  char *local_18;
  int local_14;
  char cVar1;
  
  bVar5 = 0;
  buffer_index = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                           (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
  cVar1 = *text;
  local_14 = g_CurrentEditingLine;
  do {
    if (cVar1 == '\0') {
      if (update_cursor != 0) {
        g_CurrentEditingColumn =
             core_script_cpp_CScript_editorIndex2X_FUN_00566b30(this_ptr,local_14,buffer_index);
        g_CurrentEditingLine = local_14;
        return;
      }
      return;
    }
    core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,local_14);
    uVar2 = 0xffffffff;
    pcVar5 = g_CurrentLineBuffer + 1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar5 * -2 + 1;
    } while (cVar2 != '\0');
    for (iVar3 = ~uVar2 - 1; iVar3 < (int)buffer_index; iVar3 = iVar3 + 1) {
      g_CurrentLineBuffer[iVar3 + 1] = ' ';
    }
    local_18 = g_CurrentLineBuffer + buffer_index + 2;
    pcVar4 = g_CurrentLineBuffer + buffer_index + 1;
    for (; (cVar2 = *text, cVar2 != '\0' && (cVar2 != '\n')); text = text + 1) {
      uVar3 = buffer_index;
      if (cVar2 != '\r') {
        n = iVar3 - buffer_index;
        iVar3 = iVar3 + 1;
        uVar3 = buffer_index + 1;
        memmove(local_18,pcVar4,n);
        pcVar4 = pcVar4 + 1;
        local_18 = local_18 + 1;
        g_CurrentLineBuffer[buffer_index + 1] = *text;
      }
      buffer_index = uVar3;
    }
    g_CurrentLineBuffer[iVar3 + 1] = '\0';
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,local_14);
    if (*text == '\n') {
      text = text + 1;
      core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(this_ptr,buffer_index,local_14);
      local_14 = local_14 + 1;
      buffer_index = 0;
    }
    cVar1 = *text;
  } while( true );
}
