// Name: core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0
// Address: 0053ccf0
// MANUAL RECONSTRUCTION
// Address Range: [[0053ccf0, 0053d183]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_importActors_FUN_0053ccf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_importActors_FUN_0053ccf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar2;
  CDemonActor *actor_ptr;
  int iVar2;
  int iVar3;
  CDemonMission *this_ptr_00;
  char *pcVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int iVar4;
  CDemonActor *pCVar7;
  int iVar5;
  CPickList local_448;
  char local_a0 [100];
  char local_3c [40];
  int local_14;
  byte bVar9;
  
  bVar9 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Use a saved game file instead of a mission?");
  if (iVar2 == 0) {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","world",
                       "*.msn",local_3c,0);
  }
  else {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","save",
                       "*.noc",local_3c,0);
  }
  if (iVar3 == 0) {
    return;
  }
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temp mission");
  this_ptr_00 = (CDemonMission *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (0x27d0,"..\\core\\msnedit.cpp",0xbef);
  if (this_ptr_00 == (CDemonMission *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xbf0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create temp mission!");
  }
  core_mission_cpp_CDemonMission_reset_FUN_00522c80(this_ptr_00);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Loading %s",local_3c);
  this_ptr->skip_gore_load_flag = 1;
  g_CDemonMissionPtr = this_ptr_00;
  if (iVar2 == 0) {
    core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr_00,local_3c,1);
  }
  else {
    core_game_cpp_CGame_loadGame_FUN_004e12b0(g_CGamePtr,local_3c,0);
  }
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr_00);
  local_14 = 0;
  this_ptr->skip_gore_load_flag = 0;
  g_CDemonMissionPtr = this_ptr;
  memcpy(local_a0,g_MsnEditImportWildcardPattern,100);
  do {
    iVar5 = core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(this_ptr_00);
    if (iVar5 < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No more actors to import from this mission.");
LAB_0053ce9f:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Cleaning up.");
      for (pCVar2 = this_ptr_00->first_actor; pCVar2 != (CDemonActor *)0x0;
          pCVar2 = pCVar2->next_actor) {
        core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(this_ptr,pCVar2);
      }
      g_CDemonMissionPtr = this_ptr_00;
      core_mission_cpp_CDemonMission_clearMission_FUN_00522d20(this_ptr_00);
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      g_CurrentDebugLine = 0xc85;
      shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(this_ptr_00);
      g_CDemonMissionPtr = this_ptr;
      return;
    }
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_448);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_448.base,"Import by choosing from actor list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_448.base,"Import using wildcard on actor name.");
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_448,"Import actors.",-1,0);
    if (iVar5 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_448,0);
      goto LAB_0053ce9f;
    }
    if (iVar5 == 0) {
      while( true ) {
        shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_448);
        for (pCVar2 = this_ptr_00->first_actor; pCVar2 != (CDemonActor *)0x0;
            pCVar2 = pCVar2->next_actor) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_448.base,pCVar2->actor_name);
        }
        if (local_448.base.item_count <= local_14) {
          local_14 = local_448.base.item_count + -1;
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_448,"Import actor",local_14,0);
        if (iVar5 < 0) break;
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_448.base,iVar5);
        pCVar5 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr_00,pcVar4);
        if (pCVar5 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xc2b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding actor in temp mission!");
        }
        core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(this_ptr_00,pCVar5);
        pCVar6 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                           (this_ptr,pCVar5->actor_name);
        if (pCVar6 != (CDemonActor *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,pCVar5);
        }
        core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,pCVar5);
        local_14 = iVar5;
      }
LAB_0053d103:
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_448,0);
    }
    else {
      if (iVar5 != 1) goto LAB_0053d103;
      iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter actor name wildcard pattern",local_a0,100,1);
      if (iVar5 != 0) {
        iVar5 = 0;
        pCVar2 = this_ptr_00->first_actor;
        while ((actor_ptr = pCVar2, actor_ptr != (CDemonActor *)0x0 &&
               (pCVar2 = actor_ptr->next_actor, actor_ptr != (CDemonActor *)0x0))) {
          iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (local_a0,actor_ptr->actor_name,0);
          if (iVar4 != 0) {
            core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(this_ptr_00,actor_ptr);
            pCVar7 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                               (this_ptr,actor_ptr->actor_name);
            if (pCVar7 != (CDemonActor *)0x0) {
              core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,actor_ptr);
            }
            iVar5 = iVar5 + 1;
            core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,actor_ptr);
          }
        }
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Imported %d actors from %s.",iVar5,local_3c);
        goto LAB_0053d103;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_448,0);
    }
  } while( true );
}
