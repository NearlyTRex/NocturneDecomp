// Name: core_msnedit.cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90
// Address: 0053df90
// Address Range: [[0053df90, 0053e21c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90(CDemonMission *this_ptr)

{
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  char *name;
  CDemonActor *pCVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  int iVar4;
  CPickList local_764;
  CPickList local_3bc;
  int local_14;
  CDemonActor *pCVar1;
  
  local_14 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3bc);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_3bc.base,"Delete actors using list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_3bc.base,"Delete actors using wildcard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3bc.base,"Delete actors by type");
    local_14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_3bc,"Delete actors",local_14,0);
    if (local_14 < 0) break;
    if (local_14 == 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_764);
      for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor
          ) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_764.base,pCVar3->actor_name);
      }
      iVar4 = 0;
      shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_764.base);
      while (iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_764,"Delete actors.  Press ESC When done.",iVar4,0), -1 < iVar4)
      {
        name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_764.base,iVar4);
        pCVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,name);
        if (pCVar2 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xe1a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(this_ptr,pCVar2,1);
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_764.base,iVar4);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_764,0);
    }
    if ((local_14 == 1) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Delete actors by name using wildcard",
                           g_DeleteActorsWildcardBuffer,100,1), iVar5 != 0)) {
      iVar5 = 0;
      pCVar3 = this_ptr->first_actor;
      while (pCVar4 = pCVar3, pCVar4 != (CDemonActor *)0x0) {
        pCVar3 = pCVar4->next_actor;
        iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                          (g_DeleteActorsWildcardBuffer,pCVar4->actor_name,0);
        if (iVar3 != 0) {
          iVar5 = iVar5 + 1;
          core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(this_ptr,pCVar4,1);
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors deleted",iVar5);
    }
    if ((local_14 == 2) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Delete actors by type",
                           g_MsnEditDeleteByTypePattern,100,1), iVar5 != 0)) {
      iVar5 = 0;
      pCVar3 = this_ptr->first_actor;
      while (pCVar4 = pCVar3, pCVar4 != (CDemonActor *)0x0) {
        pCVar3 = pCVar4->next_actor;
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar4,g_MsnEditDeleteByTypePattern);
        if (iVar6 != 0) {
          iVar5 = iVar5 + 1;
          core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(this_ptr,pCVar4,1);
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors deleted",iVar5);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3bc,0);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3bc,0);
  return;
}
