// Name: core_script.cpp_CScript_updateLineMetrics_FUN_00566800
// Address: 00566800
// Address Range: [[00566800, 0056687c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_updateLineMetrics_FUN_00566800(CScript *this_ptr,int line_number)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_updateLineMetrics_FUN_00566800(CScript *this_ptr,int line_number)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (-1 < line_number) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line_number < iVar2) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         (&this_ptr->script_text,line_number);
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar4 - 1;
      if (line_number != g_CurrentEditingLine) {
        pcVar5 = pcVar3 + iVar2;
        while ((0 < iVar2 && ((g_CharacterClassificationTable[(byte)(pcVar5[-1] + 1)] & 2) != 0))) {
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar5 + -1;
        }
        pcVar3[iVar2] = '\0';
      }
      if (g_ScriptEditorHScrollBar.current_value < iVar2) {
        g_ScriptEditorHScrollBar.current_value = iVar2;
        return;
      }
    }
  }
  return;
}
