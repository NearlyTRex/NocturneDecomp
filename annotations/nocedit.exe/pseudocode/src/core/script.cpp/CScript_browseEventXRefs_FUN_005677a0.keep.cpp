// Name: core_script.cpp_CScript_browseEventXRefs_FUN_005677a0
// Address: 005677a0
// MANUAL RECONSTRUCTION
// Address Range: [[005677a0, 00567bba]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name)

{
  int iVar3;
  int iVar4;
  int iVar5;
  SScriptXRef *pSVar5;
  char *pcVar8;
  int iVar9;
  char *pcVar6;
  CActorPropertyList CStack_2c4c;
  CPickList local_748;
  char local_3a0 [500];
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_18;
  int iVar2;
  uint window_flags;
  CDemonActor *actor;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_748);
  local_18 = 0;
  if (0 < this_ptr->xref_count) {
    local_1c = 0;
    do {
      pcVar8 = this_ptr->xref_entries->name + local_1c;
      iVar3 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,pcVar8);
      if (iVar3 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_748.base,pcVar8);
        iVar5 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
      }
      else {
        iVar5 = iVar3 + 1;
      }
      switch(*(int *)(pcVar8 + 0x100)) {
      case 0:
        pcVar6 = "Event tested";
        break;
      case 1:
        pcVar6 = "Event raised";
        break;
      case 2:
        pcVar6 = "Persistent event";
        break;
      case 3:
        pcVar6 = "Game flag";
        break;
      case 4:
        pcVar6 = "Timer";
        break;
      case 5:
      case 6:
        pcVar6 = "Counter";
        break;
      case 7:
        pcVar6 = "Actor referenced";
        break;
      case 8:
        pcVar6 = "Sfx set";
        break;
      case 9:
        pcVar6 = "Sfx referenced";
        break;
      case 10:
        pcVar6 = "Actor variable set";
        break;
      case 0xb:
        pcVar6 = "Actor variable referenced";
        break;
      case 0xc:
        pcVar6 = "Ini file variable";
        break;
      default:
        pcVar6 = "????";
      }
      strcpy(local_1ac,pcVar6);
      if (*(CDemonActor **)(pcVar8 + 0x104) == (CDemonActor *)0x0) {
        _sprintf(local_e4,"Script\tLn %d",*(int *)(pcVar8 + 0x10c));
      }
      else {
        core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2c4c);
        (*(((*(CDemonActor **)(pcVar8 + 0x104))->vtable)._ub)->getPropertyList)
                  (*(CDemonActor **)(pcVar8 + 0x104),&CStack_2c4c);
        _sprintf
                  (local_e4,"%s\t%s",(*(CDemonActor **)(pcVar8 + 0x104))->actor_name,
                   CStack_2c4c.properties[*(int *)(pcVar8 + 0x108)].name);
      }
      _sprintf(local_3a0,"\t%s\t%s",local_1ac,local_e4);
      shape_edittool_cpp_CPickList_insert_FUN_004a5670(&local_748,iVar5,local_3a0);
      *(int *)(pcVar8 + 0x110) = iVar5;
      if (0 < local_18) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(this_ptr->xref_entries->name + iVar4 + 0x110);
          if (iVar5 <= iVar2) {
            *(int *)(this_ptr->xref_entries->name + iVar4 + 0x110) = iVar2 + 1;
          }
          iVar4 = iVar4 + 0x114;
        } while (iVar4 < local_18 * 0x114);
      }
      local_1c = local_1c + 0x114;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->xref_count);
  }
  iVar5 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
  if (iVar5 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to choose from!");
  }
  else {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_748,1);
    window_flags = 0;
    iVar5 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,selected_name);
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_748,dialog_title,iVar5,window_flags);
    if (-1 < iVar5) {
      iVar9 = 0;
      if (0 < this_ptr->xref_count) {
        pSVar5 = this_ptr->xref_entries;
        do {
          if (iVar5 == pSVar5->display_index) {
            actor = pSVar5->actor;
            if (actor == (CDemonActor *)0x0) {
              iVar5 = pSVar5->line_number + -1;
              if (iVar5 != g_CurrentEditingLine) {
                g_CurrentEditingColumn = 0;
                g_CurrentEditingLine = iVar5;
                core_script_cpp_clearSelections_FUN_005644e0();
                core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
                core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
              }
            }
            else {
              core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(g_CDemonMissionPtr,actor);
            }
            goto LAB_005679f9;
          }
          iVar9 = iVar9 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar9 < this_ptr->xref_count);
      }
      pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_748.base,iVar5);
      strcpy(selected_name,pcVar8);
      iVar5 = 1;
      goto LAB_00567a01;
    }
  }
LAB_005679f9:
  iVar5 = 0;
LAB_00567a01:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_748,0);
  return iVar5;
}
