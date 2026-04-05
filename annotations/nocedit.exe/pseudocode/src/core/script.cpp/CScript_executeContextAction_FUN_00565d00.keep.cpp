// Name: core_script.cpp_CScript_executeContextAction_FUN_00565d00
// Address: 00565d00
// MANUAL RECONSTRUCTION
// Address Range: [[00565d00, 00565e6f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeContextAction_FUN_00565d00(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_executeContextAction_FUN_00565d00(CScript *this_ptr,int column,int line)

{
  int iVar1;
  char *input_text;
  CDemonActor *actor;
  char **templates;
  int iVar2;
  
  if (-1 < line) {
    iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line < iVar1) {
      iVar1 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,line,column);
      iVar2 = 0x78;
      templates = g_CommandTemplates;
      input_text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,line)
      ;
      iVar1 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                        (&CCmdParse_0310aa4c,input_text,iVar1,templates,iVar2);
      if (-1 < iVar1) {
        switch(CCmdParse_0310aa4c.params[iVar1].param_type) {
        case PARM_TYPE_ACTOR:
          actor = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                            (g_CDemonMissionPtr,CCmdParse_0310aa4c.params[iVar1].parsed_value);
          if (actor == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No such actor %s",CCmdParse_0310aa4c.params[iVar1].parsed_value);
            return;
          }
          core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(g_CDemonMissionPtr,actor);
          return;
        case PARM_TYPE_LABEL:
          core_script_cpp_CScript_buildParsedLines_FUN_0055a370(this_ptr);
          iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_00560160
                            (this_ptr,CCmdParse_0310aa4c.params[iVar1].parsed_value);
          if (-1 < iVar2) {
            g_CurrentEditingLine = this_ptr->parsed_lines[iVar2].line_number + -1;
            g_CurrentEditingColumn = 0;
            core_script_cpp_clearSelections_FUN_005644e0();
            core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
            core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
            return;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No such label %s",CCmdParse_0310aa4c.params[iVar1].parsed_value);
          return;
        case PARM_TYPE_WAV:
        case PARM_TYPE_DB_TAG:
          core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40
                    (g_CDemonMissionPtr,CCmdParse_0310aa4c.params[iVar1].parsed_value);
          return;
        }
      }
    }
  }
  return;
}
