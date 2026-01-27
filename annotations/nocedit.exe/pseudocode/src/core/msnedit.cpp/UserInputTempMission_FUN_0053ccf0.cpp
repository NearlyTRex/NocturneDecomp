// Name: core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
// Address: 0053ccf0
// Address Range: [[0053ccf0, 0053d183]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_UserInputTempMission(uint param_1) */

void core_msnedit_cpp_UserInputTempMission_FUN_0053ccf0(void)

{
  CDemonMission *pCVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  uint *puVar6;
  char *unaff_EDI;
  byte bVar7;
  CDemonMission *in_stack_00000004;
  uint in_stack_fffffbb8;
  uint in_stack_fffffbbc;
  char **in_stack_fffffbc0;
  CStrList_vtable *in_stack_fffffbc4;
  char local_a0 [100];
  char local_3c [40];
  int local_14;
  CDemonMission *local_10;
  
  bVar7 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Use a saved game file instead of a mission?");
  if (iVar2 == 0) {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","world",
                       "*.msn",(int)local_3c);
  }
  else {
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","save",
                       "*.noc",(int)local_3c);
  }
  if (iVar3 == 0) {
    return;
  }
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temp mission");
  local_10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x27d0,"..\\core\\msnedit.cpp",0xbef);
  if (local_10 == (CDemonMission *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xbf0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create temp mission!");
  }
  core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(local_10);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Loading %s");
  in_stack_00000004->unk2[0x30] = '\x01';
  in_stack_00000004->unk2[0x31] = '\0';
  in_stack_00000004->unk2[0x32] = '\0';
  in_stack_00000004->unk2[0x33] = '\0';
  g_CDemonMissionPtr = local_10;
  if (iVar2 == 0) {
    core_mission_cpp_CDemonMission_load_FUN_00522d90(local_10,local_3c,1);
  }
  else {
    core_game_cpp_CGame_loadSaveGame_FUN_004e12b0(g_CGamePtr,local_3c,0,unaff_EDI);
  }
  core_mission_cpp_CDemonMission_FUN_00523cf0(local_10);
  local_14 = 0;
  in_stack_00000004->unk2[0x30] = '\0';
  in_stack_00000004->unk2[0x31] = '\0';
  in_stack_00000004->unk2[0x32] = '\0';
  in_stack_00000004->unk2[0x33] = '\0';
  g_CDemonMissionPtr = in_stack_00000004;
  puVar6 = &0x0000002A;
  pcVar5 = local_a0;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
  }
  do {
    pCVar1 = local_10;
    iVar2 = core_mission_cpp_CDemonMission_FUN_00523cc0(local_10);
    if (iVar2 < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No more actors to import from this mission.");
LAB_0053ce9f:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Cleaning up.");
      pCVar1 = local_10;
      for (pCVar4 = local_10->first_actor; local_10 = pCVar1, pCVar4 != (CDemonActor *)0x0;
          pCVar4 = pCVar4->next_actor) {
        core_msnedit_cpp_FUN_00538ea0();
        pCVar1 = local_10;
      }
      g_CDemonMissionPtr = pCVar1;
      core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(pCVar1);
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      g_CurrentDebugLine = 0xc85;
      shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
      g_CDemonMissionPtr = in_stack_00000004;
      return;
    }
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffbb8);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffffbb8,"Import by choosing from actor list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffffbb8,"Import using wildcard on actor name.");
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffbb8,"Import actors.",-1,0);
    if (iVar2 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffbb8,0,(uint)unaff_EDI,in_stack_fffffbb8,in_stack_fffffbbc
                 ,(uint)in_stack_fffffbc0,(uint)in_stack_fffffbc4);
      goto LAB_0053ce9f;
    }
    if (iVar2 == 0) {
      while( true ) {
        shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffffbb8);
        for (pCVar4 = local_10->first_actor; pCVar4 != (CDemonActor *)0x0;
            pCVar4 = pCVar4->next_actor) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffffbb8,pCVar4->actor_name);
        }
        if ((int)in_stack_fffffbb8 <= local_14) {
          local_14 = in_stack_fffffbb8 - 1;
        }
        iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffbb8,"Import actor",local_14,0);
        if (iVar2 < 0) break;
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffbb8,iVar2);
        pCVar4 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(local_10);
        if (pCVar4 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xc2b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding actor in temp mission!");
        }
        core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(local_10,pCVar4);
        pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
        if (pcVar5 != (char *)0x0) {
          core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
        }
        core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
        local_14 = iVar2;
      }
LAB_0053d103:
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffbb8,0,(uint)unaff_EDI,in_stack_fffffbb8,in_stack_fffffbbc
                 ,(uint)in_stack_fffffbc0,(uint)in_stack_fffffbc4);
    }
    else {
      if (iVar2 != 1) goto LAB_0053d103;
      iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter actor name wildcard pattern",local_a0,100,1);
      if (iVar2 != 0) {
        iVar2 = 0;
        pCVar4 = pCVar1->first_actor;
        while ((actor_ptr = pCVar4, actor_ptr != (CDemonActor *)0x0 &&
               (pCVar4 = actor_ptr->next_actor, actor_ptr != (CDemonActor *)0x0))) {
          iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (local_a0,actor_ptr->actor_name,0);
          if (iVar3 != 0) {
            core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(local_10,actor_ptr);
            pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
            if (pcVar5 != (char *)0x0) {
              core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
            }
            iVar2 = iVar2 + 1;
            core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
          }
        }
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Imported %d actors from %s.",iVar2,local_3c);
        goto LAB_0053d103;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffbb8,0,(uint)unaff_EDI,in_stack_fffffbb8,in_stack_fffffbbc
                 ,(uint)in_stack_fffffbc0,(uint)in_stack_fffffbc4);
    }
  } while( true );
}
