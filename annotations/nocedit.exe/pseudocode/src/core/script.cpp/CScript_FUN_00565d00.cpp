// Name: core_script.cpp_CScript_FUN_00565d00
// Address: 00565d00
// Address Range: [[00565d00, 00565e6f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565d00(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565d00(CScript *this_ptr,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char **templates;
  int iVar3;
  
  if (-1 < param_3) {
    iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (param_3 < iVar1) {
      iVar1 = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,param_3,param_2);
      iVar3 = 0x78;
      templates = g_CommandTemplates;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&this_ptr->script_text,param_3);
      iVar1 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                        ((CCmdParse *)&DAT_0310aa4c,pcVar2,iVar1,templates,iVar3);
      if (-1 < iVar1) {
        switch(*(uint *)(&DAT_0310ad74 + iVar1 * 0x328)) {
        case 3:
          pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
          if (pcVar2 == (char *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No such actor %s",iVar1 * 0x328 + 0x310ab80);
            return;
          }
          core_msnedit_cpp_CDemonMission_FUN_0053c140(g_CDemonMissionPtr,(int)pcVar2);
          return;
        case 5:
          core_script_cpp_CScript_FUN_0055a370(this_ptr);
          iVar3 = core_script_cpp_CScript_findLabelIndex_FUN_00560160
                            (this_ptr,(char *)(iVar1 * 0x328 + 0x310ab80));
          if (-1 < iVar3) {
            g_CurrentEditingLine = this_ptr->parsed_lines[iVar3].line_number + -1;
            g_CurrentEditingColumn = 0;
            core_script_cpp_FUN_005644e0();
            core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
            core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
            return;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No such label %s",iVar1 * 0x328 + 0x310ab80);
          return;
        case 0xd:
        case 0x19:
          core_msnedit_cpp_CDemonMission_FUN_0053eb40
                    (g_CDemonMissionPtr,(char *)(iVar1 * 0x328 + 0x310ab80));
          return;
        }
      }
    }
  }
  return;
}
