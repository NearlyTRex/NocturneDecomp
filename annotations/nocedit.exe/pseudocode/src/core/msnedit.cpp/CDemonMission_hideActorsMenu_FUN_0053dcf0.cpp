// Name: core_msnedit.cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0
// Address: 0053dcf0
// Address Range: [[0053dcf0, 0053df8c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar2;
  char *name;
  CDemonActor *pCVar1;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar3;
  int initial_selected_index;
  CPickList local_760;
  CPickList local_3b8;
  
  initial_selected_index = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_760);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_760.base,"Hide actors using list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_760.base,"Hide actors using wildcard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_760.base,"Hide actors by type");
    initial_selected_index =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                   (&local_760,"Hide actors",initial_selected_index,0);
    if (initial_selected_index < 0) break;
    if (initial_selected_index == 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b8);
      for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor
          ) {
        if (pCVar2->is_editor_hidden == 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b8.base,pCVar2->actor_name);
        }
      }
      iVar3 = 0;
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_3b8.base);
      while (iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_3b8,"Hide actors.  Press ESC When done.",iVar3,0), -1 < iVar3)
      {
        name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,iVar3);
        pCVar1 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,name);
        if (pCVar1 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xdd9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        pCVar1->is_editor_hidden = 1;
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_3b8.base,iVar3);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b8,0);
    }
    if ((initial_selected_index == 1) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Hide actors by name using wildcard",
                           g_HideActorsWildcardBuffer,100,1), iVar4 != 0)) {
      iVar4 = 0;
      for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor
          ) {
        if ((pCVar2->is_editor_hidden == 0) &&
           (iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                              (g_HideActorsWildcardBuffer,pCVar2->actor_name,0), iVar5 != 0)) {
          iVar4 = iVar4 + 1;
          pCVar2->is_editor_hidden = 1;
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors hidden",iVar4);
    }
    if ((initial_selected_index == 2) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Hide actors by type",
                           g_MsnEditHideByTypeBuffer,100,1), iVar4 != 0)) {
      iVar4 = 0;
      for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor
          ) {
        if ((pCVar2->is_editor_hidden == 0) &&
           (iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,g_MsnEditHideByTypeBuffer),
           iVar2 != 0)) {
          iVar4 = iVar4 + 1;
          pCVar2->is_editor_hidden = 1;
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors hidden",iVar4);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
    }
    else {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
  return;
}
