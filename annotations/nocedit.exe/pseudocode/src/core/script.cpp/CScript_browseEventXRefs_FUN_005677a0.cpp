// Name: core_script.cpp_CScript_browseEventXRefs_FUN_005677a0
// Address: 005677a0
// Address Range: [[005677a0, 00567bba]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  SScriptXRef *pSVar6;
  char *pcVar7;
  char *pcVar8;
  CActorPropertyList CStack_2c4c;
  CPickList local_748;
  char local_3a0 [500];
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_18;
  char *local_14;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_748);
  local_18 = 0;
  if (0 < this_ptr->xref_count) {
    local_1c = 0;
    do {
      local_14 = this_ptr->xref_entries->name + local_1c;
      iVar4 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,local_14);
      if (iVar4 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_748.base,local_14);
        iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
      }
      else {
        iVar4 = iVar4 + 1;
      }
      switch(*(int *)(local_14 + 0x100)) {
      case 0:
        pcVar7 = "Event tested";
        break;
      case 1:
        pcVar7 = "Event raised";
        break;
      case 2:
        pcVar7 = "Persistent event";
        break;
      case 3:
        pcVar7 = "Game flag";
        break;
      case 4:
        pcVar7 = "Timer";
        break;
      case 5:
      case 6:
        pcVar7 = "Counter";
        break;
      case 7:
        pcVar7 = "Actor referenced";
        break;
      case 8:
        pcVar7 = "Sfx set";
        break;
      case 9:
        pcVar7 = "Sfx referenced";
        break;
      case 10:
        pcVar7 = "Actor variable set";
        break;
      case 0xb:
        pcVar7 = "Actor variable referenced";
        break;
      case 0xc:
        pcVar7 = "Ini file variable";
        break;
      default:
        pcVar7 = "????";
      }
      pcVar8 = local_1ac;
      do {
        cVar1 = *pcVar7;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      if (*(CDemonActor **)(local_14 + 0x104) == (CDemonActor *)0x0) {
        _sprintf
                  (local_e4,"Script\tLn %d",*(int *)(local_14 + 0x10c));
      }
      else {
        core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&CStack_2c4c);
        (*(((*(CDemonActor **)(local_14 + 0x104))->vtable)._ub)->getPropertyList)
                  (*(CDemonActor **)(local_14 + 0x104),&CStack_2c4c);
        _sprintf
                  (local_e4,"%s\t%s",*(CDemonActor **)(local_14 + 0x104),
                   CStack_2c4c.properties[*(int *)(local_14 + 0x108)].name);
      }
      _sprintf(local_3a0,"\t%s\t%s",local_1ac,local_e4);
      shape_edittool_cpp_CPickList_insert_FUN_004a5670(&local_748,iVar4,(int)local_3a0);
      *(int *)(local_14 + 0x110) = iVar4;
      if (0 < local_18) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)((int)&this_ptr->xref_entries->display_index + iVar5);
          if (iVar4 <= iVar2) {
            *(int *)((int)&this_ptr->xref_entries->display_index + iVar5) = iVar2 + 1;
          }
          iVar5 = iVar5 + 0x114;
        } while (iVar5 < local_18 * 0x114);
      }
      local_1c = local_1c + 0x114;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->xref_count);
  }
  iVar4 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_748.base);
  if (iVar4 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to choose from!");
  }
  else {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_748,1);
    iVar5 = 0;
    iVar4 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base,selected_name);
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_748,dialog_title,iVar4,iVar5);
    if (-1 < iVar4) {
      iVar5 = 0;
      if (0 < this_ptr->xref_count) {
        pSVar6 = this_ptr->xref_entries;
        do {
          if (iVar4 == pSVar6->display_index) {
            pCVar3 = pSVar6->actor;
            if (pCVar3 == (CDemonActor *)0x0) {
              iVar4 = pSVar6->line_number + -1;
              if (iVar4 != g_CurrentEditingLine) {
                g_CurrentEditingColumn = (int)pCVar3;
                g_CurrentEditingLine = iVar4;
                core_script_cpp_clearSelections_FUN_005644e0();
                core_script_cpp_CScript_updateCursorBounds_FUN_00566910(this_ptr);
                core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(this_ptr);
              }
            }
            else {
              core_msnedit_cpp_CDemonMission_FUN_0053c140(g_CDemonMissionPtr,(int)pCVar3);
            }
            goto LAB_005679f9;
          }
          iVar5 = iVar5 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar5 < this_ptr->xref_count);
      }
      pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_748.base,iVar4);
      do {
        cVar1 = *pcVar7;
        *selected_name = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        selected_name[1] = cVar1;
        selected_name = selected_name + 2;
      } while (cVar1 != '\0');
      iVar4 = 1;
      goto LAB_00567a01;
    }
  }
LAB_005679f9:
  iVar4 = 0;
LAB_00567a01:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_748,0);
  return iVar4;
}
