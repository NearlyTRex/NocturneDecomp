// Name: core_script.cpp_CScript_setParameterValue_FUN_00565f70
// Address: 00565f70
// MANUAL RECONSTRUCTION
// Address Range: [[00565f70, 0056607b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_setParameterValue_FUN_00565f70(CScript *this_ptr,char *value)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_setParameterValue_FUN_00565f70(CScript *this_ptr,char *value)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint buffer_index;
  char **templates;
  int template_count;
  
  if (-1 < g_CurrentEditingLine) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (g_CurrentEditingLine < iVar2) {
      iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90
                        (this_ptr,g_CurrentEditingLine,g_CurrentEditingColumn);
      template_count = 0x78;
      templates = g_CommandTemplates;
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         (&this_ptr->script_text,g_CurrentEditingLine);
      iVar2 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                        (&CCmdParse_0310cb74,pcVar3,iVar2,templates,template_count);
      if (iVar2 < 0) {
        core_script_cpp_CScript_insertText_FUN_00566390(this_ptr,value,1);
        return;
      }
      pcVar3 = CCmdParse_0310cb74.params[iVar2].parsed_value;
      strcpy(pcVar3,value);
      core_script_cpp_CCmdParse_toString_FUN_005624f0(&CCmdParse_0310cb74,g_CurrentLineBuffer + 1);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,g_CurrentEditingLine);
      buffer_index = core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760
                               (&CCmdParse_0310cb74,iVar2);
      g_CurrentEditingColumn =
           core_script_cpp_CScript_editorIndex2X_FUN_00566b30
                     (this_ptr,g_CurrentEditingLine,buffer_index);
      core_script_cpp_clearSelections_FUN_005644e0();
      core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
      core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
      return;
    }
  }
  return;
}
