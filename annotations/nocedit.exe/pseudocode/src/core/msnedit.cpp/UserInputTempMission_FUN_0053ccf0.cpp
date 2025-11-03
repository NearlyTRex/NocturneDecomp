// Name: core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
// Address: 0053ccf0
// Address Range: [[0053ccf0, 0053d183]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053882e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Use_a_saved_game_file_in_0063c8ea
//   TerminatedCString s_noc_0063c916
//   TerminatedCString s_save_0063c91c
//   TerminatedCString s_Select_mission_file_to_i_0063c921
//   TerminatedCString s_msn_0063c94b
//   TerminatedCString s_world_0063c951
//   TerminatedCString s_Select_mission_file_to_i_0063c957
//   TerminatedCString s_Creating_temp_mission_0063c981
//   TerminatedCString s_core_msnedit_cpp_0063c997
//   TerminatedCString s_core_msnedit_cpp_0063c9ab
//   TerminatedCString s_Can_t_create_temp_missio_0063c9bf
//   TerminatedCString s_Loading_s_0063c9da
//   TerminatedCString s_No_more_actors_to_import_0063c9e5
//   TerminatedCString s_Import_by_choosing_from__0063ca11
//   TerminatedCString s_Import_using_wildcard_on_0063ca35
//   TerminatedCString s_Import_actors_0063ca5a
//   TerminatedCString s_Import_actor_0063ca69
//   TerminatedCString s_core_msnedit_cpp_0063ca76
//   TerminatedCString s_Hell_froze_finding_actor_0063ca8a
//   TerminatedCString s_Enter_actor_name_wildcar_0063cab4
//   TerminatedCString s_Imported_d_actors_from_s_0063cad6
//   TerminatedCString s_Cleaning_up_0063caf2
//   TerminatedCString s_core_msnedit_cpp_0063caff
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 DAT_00680970
//   undefined4 DAT_00680974
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
//   core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_FUN_00523cc0
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   core_msnedit.cpp_FUN_00538ea0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_UserInputTempMission(undefined4 param_1) */

void core_msnedit_cpp_UserInputTempMission_FUN_0053ccf0(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  void *pvVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  CDemonMission *in_stack_00000004;
  CDemonMission *in_stack_00000008;
  CDemonMission *in_stack_00000010;
  CDemonMission *in_stack_00000014;
  CDemonMission *in_stack_00000018;
  CDemonMission *in_stack_00000020;
  CDemonMission *in_stack_00000034;
  CDemonMission *in_stack_00000038;
  CDemonMission *in_stack_00000040;
  int in_stack_00000050;
  int in_stack_00000054;
  char *in_stack_fffffbd4;
  CPickList *in_stack_fffffbf0;
  CStrList_vtable *in_stack_fffffbf4;
  CStrList_vtable *in_stack_fffffbf8;
  CStrList_vtable *in_stack_fffffbfc;
  CDemonMission *in_stack_fffffc00;
  CStrList_vtable *in_stack_fffffc04;
  CPickList *in_stack_fffffc08;
  undefined1 auStack_3e8 [876];
  undefined4 auStack_7c [6];
  char acStack_64 [4];
  char acStack_60 [40];
  undefined1 auStack_38 [28];
  char acStack_1c [16];
  
  bVar8 = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Use a saved game file instead of a mission?");
  if (iVar1 == 0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","world",
                       "*.msn",SUB41(auStack_38,0));
  }
  else {
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","save",
                       "*.noc",SUB41(auStack_38,0));
  }
  if (iVar2 == 0) {
    return;
  }
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temp mission");
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x27d0,"..\\core\\msnedit.cpp",0xbef);
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xbf0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create temp mission!");
  }
  core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(in_stack_00000008);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Loading %s");
  in_stack_00000004->field2_0xc[0x30] = '\x01';
  in_stack_00000004->field2_0xc[0x31] = '\0';
  in_stack_00000004->field2_0xc[0x32] = '\0';
  in_stack_00000004->field2_0xc[0x33] = '\0';
  g_CDemonMissionPtr = in_stack_00000010;
  if (iVar1 == 0) {
    core_mission_cpp_CDemonMission_load_FUN_00522d90(in_stack_00000010,acStack_1c,1);
  }
  else {
    core_game_cpp_CGame_loadSaveGame_FUN_004e12b0(g_CGamePtr,acStack_1c,0,in_stack_fffffbd4);
  }
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000014);
  in_stack_00000004->field2_0xc[0x30] = '\0';
  in_stack_00000004->field2_0xc[0x31] = '\0';
  in_stack_00000004->field2_0xc[0x32] = '\0';
  in_stack_00000004->field2_0xc[0x33] = '\0';
  g_CDemonMissionPtr = in_stack_00000004;
  puVar6 = &DAT_00680970;
  puVar7 = auStack_7c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  do {
    iVar1 = core_mission_cpp_CDemonMission_FUN_00523cc0(in_stack_00000018);
    if (iVar1 < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No more actors to import from this mission.");
LAB_0053ce9f:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Cleaning up.");
      for (pCVar4 = in_stack_00000034->first_actor; pCVar4 != (CDemonActor *)0x0;
          pCVar4 = pCVar4->next_actor) {
        core_msnedit_cpp_FUN_00538ea0();
      }
      g_CDemonMissionPtr = in_stack_00000034;
      core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(in_stack_00000034);
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      g_CurrentDebugLine = 0xc85;
      shape_memdbg_cpp_debugFree_FUN_0050f210(in_stack_00000034);
      g_CDemonMissionPtr = in_stack_00000004;
      return;
    }
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffbe4);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffffbe8,"Import by choosing from actor list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffffbec,"Import using wildcard on actor name.");
    iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffbf0,"Import actors.",-1,0);
    if (iVar1 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffbf4,0,(uint)in_stack_fffffbf0,(uint)in_stack_fffffbf4,
                 (uint)in_stack_fffffbf8,(uint)in_stack_fffffbfc,(uint)in_stack_fffffc00);
      goto LAB_0053ce9f;
    }
    if (iVar1 == 0) {
      while( true ) {
        shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)auStack_3e8);
        for (pcVar5 = *(char **)(in_stack_00000054 + 0x548); pcVar5 != (char *)0x0;
            pcVar5 = *(char **)(pcVar5 + 0x14c)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_3e8 + 4),pcVar5);
        }
        if ((int)auStack_3e8._4_4_ <= in_stack_00000050) {
          in_stack_00000050 = auStack_3e8._4_4_ + -1;
        }
        in_stack_fffffc08 = (CPickList *)(auStack_3e8 + 4);
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (in_stack_fffffc08,"Import actor",in_stack_00000050,0);
        if (iVar1 < 0) break;
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffbfc,iVar1);
        pCVar4 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000038);
        if (pCVar4 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xc2b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding actor in temp mission!");
        }
        in_stack_fffffbf8 = (CStrList_vtable *)0x53d064;
        core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(in_stack_00000040,pCVar4);
        in_stack_fffffbfc = (CStrList_vtable *)0x53d06e;
        in_stack_fffffc00 = in_stack_00000004;
        pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
        if (pcVar5 != (char *)0x0) {
          in_stack_fffffc00 = (CDemonMission *)0x53d0a3;
          core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
        }
        in_stack_fffffc04 = (CStrList_vtable *)0x53d07c;
        core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
      }
LAB_0053d103:
      in_stack_fffffbf4 = (CStrList_vtable *)0x0;
      in_stack_fffffbf0 = (CPickList *)&stack0xfffffbfc;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (in_stack_fffffbf0,0,(uint)in_stack_fffffbf8,(uint)in_stack_fffffbfc,
                 (uint)in_stack_fffffc00,(uint)in_stack_fffffc04,(uint)in_stack_fffffc08);
    }
    else {
      if (iVar1 != 1) goto LAB_0053d103;
      in_stack_fffffbf0 =
           (CPickList *)
           shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                     (g_CEditorToolsPtr,"Enter actor name wildcard pattern",acStack_64,100,1);
      if (in_stack_fffffbf0 != (CPickList *)0x0) {
        pCVar4 = in_stack_00000018->first_actor;
        while ((actor_ptr = pCVar4, actor_ptr != (CDemonActor *)0x0 &&
               (pCVar4 = actor_ptr->next_actor, actor_ptr != (CDemonActor *)0x0))) {
          iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (acStack_60,actor_ptr->actor_name,0);
          if (iVar1 != 0) {
            core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(in_stack_00000020,actor_ptr)
            ;
            pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
            if (pcVar5 != (char *)0x0) {
              core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
            }
            core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
          }
        }
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Imported %d actors from %s.");
        goto LAB_0053d103;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffbf8,0,(uint)in_stack_fffffbf4,(uint)in_stack_fffffbf8,
                 (uint)in_stack_fffffbfc,(uint)in_stack_fffffc00,(uint)in_stack_fffffc04);
    }
  } while( true );
}


// Assembly code:
// 0053ccf0: PUSH EBX
//   Label: core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
// 0053ccf1: PUSH ESI
// 0053ccf2: PUSH EBP
// 0053ccf3: SUB ESP,0x43c
// 0053ccf9: MOV EBP,dword ptr [ESP + 0x44c]
//   XREF to: Stack[0x4] (READ)
// 0053cd00: PUSH 0x63c8ea
//   XREF to: 0063c8ea (DATA)
// 0053cd05: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053cd0b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053cd0c: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0053cd11: ADD ESP,0x8
// 0053cd14: MOV EBX,EAX
// 0053cd16: TEST EAX,EAX
// 0053cd18: JZ 0x0053cd50
//   XREF to: 0053cd50 (CONDITIONAL_JUMP)
// 0053cd1a: PUSH 0x0
// 0053cd1c: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x3c] (DATA)
// 0053cd23: PUSH EAX
// 0053cd24: PUSH 0x63c916
//   XREF to: 0063c916 (DATA)
// 0053cd29: PUSH 0x63c91c
//   XREF to: 0063c91c (DATA)
// 0053cd2e: PUSH 0x63c921
//   XREF to: 0063c921 (DATA)
// 0053cd33: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053cd39: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053cd3a: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0053cd3f: ADD ESP,0x18
// 0053cd42: TEST EAX,EAX
// 0053cd44: JNZ 0x0053cd7b
//   XREF to: 0053cd7b (CONDITIONAL_JUMP)
// 0053cd46: ADD ESP,0x43c
//   Label: LAB_0053cd46
// 0053cd4c: POP EBP
// 0053cd4d: POP ESI
// 0053cd4e: POP EBX
// 0053cd4f: RET
// 0053cd50: PUSH EAX
//   Label: LAB_0053cd50
// 0053cd51: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x3c] (DATA)
// 0053cd58: PUSH EAX
// 0053cd59: PUSH 0x63c94b
//   XREF to: 0063c94b (DATA)
// 0053cd5e: PUSH 0x63c951
//   XREF to: 0063c951 (DATA)
// 0053cd63: PUSH 0x63c957
//   XREF to: 0063c957 (DATA)
// 0053cd68: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053cd6e: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053cd6f: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0053cd74: ADD ESP,0x18
// 0053cd77: TEST EAX,EAX
// 0053cd79: JZ 0x0053cd46
//   XREF to: 0053cd46 (CONDITIONAL_JUMP)
// 0053cd7b: PUSH EDI
//   Label: LAB_0053cd7b
// 0053cd7c: PUSH EBP
// 0053cd7d: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053cd82: ADD ESP,0x4
// 0053cd85: PUSH 0x63c981
//   XREF to: 0063c981 (DATA)
// 0053cd8a: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053cd90: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053cd91: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053cd96: ADD ESP,0x8
// 0053cd99: PUSH 0xbef
// 0053cd9e: PUSH 0x63c997
//   XREF to: 0063c997 (DATA)
// 0053cda3: PUSH 0x27d0
// 0053cda8: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0053cdad: ADD ESP,0xc
// 0053cdb0: MOV dword ptr [ESP + 0x43c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0053cdb7: TEST EAX,EAX
// 0053cdb9: JNZ 0x0053cddd
//   XREF to: 0053cddd (CONDITIONAL_JUMP)
// 0053cdbb: MOV EAX,0x63c9ab
//   XREF to: 0063c9ab (PARAM)
// 0053cdc0: MOV EDX,0xbf0
// 0053cdc5: PUSH 0x63c9bf
//   XREF to: 0063c9bf (DATA)
// 0053cdca: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0053cdcf: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0053cdd5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053cdda: ADD ESP,0x4
// 0053cddd: MOV ECX,dword ptr [ESP + 0x43c]
//   Label: LAB_0053cddd
//   XREF to: Stack[-0x10] (READ)
// 0053cde4: PUSH ECX
// 0053cde5: CALL core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
//   XREF to: 00522c80 (UNCONDITIONAL_CALL)
// 0053cdea: ADD ESP,0x4
// 0053cded: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x3c] (DATA)
// 0053cdf4: PUSH EAX
// 0053cdf5: PUSH 0x63c9da
//   XREF to: 0063c9da (DATA)
// 0053cdfa: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ce00: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053ce01: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053ce06: ADD ESP,0xc
// 0053ce09: MOV EAX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0x10] (READ)
// 0053ce10: MOV dword ptr [EBP + 0x3c],0x1
// 0053ce17: MOV [0x0067d550],EAX
//   XREF to: 0067d550 (WRITE)
// 0053ce1c: TEST EBX,EBX
// 0053ce1e: JZ 0x0053cf29
//   XREF to: 0053cf29 (CONDITIONAL_JUMP)
// 0053ce24: PUSH 0x0
// 0053ce26: LEA EAX,[ESP + 0x414]
//   XREF to: Stack[-0x3c] (DATA)
// 0053ce2d: PUSH EAX
// 0053ce2e: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0053ce33: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0053ce34: CALL core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   XREF to: 004e12b0 (UNCONDITIONAL_CALL)
// 0053ce39: ADD ESP,0xc
//   Label: LAB_0053ce39
// 0053ce3c: MOV EDX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0x10] (READ)
// 0053ce43: PUSH EDX
// 0053ce44: LEA EDI,[ESP + 0x3b0]
//   XREF to: Stack[-0xa0] (DATA)
// 0053ce4b: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053ce50: ADD ESP,0x4
// 0053ce53: XOR ECX,ECX
// 0053ce55: MOV ESI,0x680970
//   XREF to: 00680970 (DATA)
// 0053ce5a: MOV dword ptr [ESP + 0x438],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0053ce61: MOV ECX,0x19
// 0053ce66: MOV dword ptr [EBP + 0x3c],0x0
// 0053ce6d: MOV dword ptr [0x0067d550],EBP
//   XREF to: 0067d550 (WRITE)
// 0053ce73: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680970 (READ)
//   XREF to: 00680974 (READ)
// 0053ce75: MOV EBX,dword ptr [ESP + 0x43c]
//   Label: LAB_0053ce75
//   XREF to: Stack[-0x10] (READ)
// 0053ce7c: PUSH EBX
// 0053ce7d: CALL core_mission.cpp_CDemonMission_FUN_00523cc0
//   XREF to: 00523cc0 (UNCONDITIONAL_CALL)
// 0053ce82: ADD ESP,0x4
// 0053ce85: CMP EAX,0x1
// 0053ce88: JGE 0x0053cf45
//   XREF to: 0053cf45 (CONDITIONAL_JUMP)
// 0053ce8e: PUSH 0x63c9e5
//   XREF to: 0063c9e5 (DATA)
// 0053ce93: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ce99: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053ce9a: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053ce9f: ADD ESP,0x8
//   Label: LAB_0053ce9f
// 0053cea2: PUSH 0x63caf2
//   XREF to: 0063caf2 (DATA)
// 0053cea7: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ceac: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053cead: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053ceb2: ADD ESP,0x8
// 0053ceb5: MOV EBX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0x10] (READ)
// 0053cebc: MOV EBX,dword ptr [EBX + 0x548]
// 0053cec2: TEST EBX,EBX
// 0053cec4: JZ 0x0053cee0
//   XREF to: 0053cee0 (CONDITIONAL_JUMP)
// 0053cec6: PUSH EBX
//   Label: LAB_0053cec6
// 0053cec7: PUSH EBP
// 0053cec8: CALL core_msnedit.cpp_FUN_00538ea0
//   XREF to: 00538ea0 (UNCONDITIONAL_CALL)
// 0053cecd: MOV EBX,dword ptr [EBX + 0x14c]
// 0053ced3: ADD ESP,0x8
// 0053ced6: TEST EBX,EBX
// 0053ced8: JNZ 0x0053cec6
//   XREF to: 0053cec6 (CONDITIONAL_JUMP)
// 0053ceda: LEA EAX,[EAX]
// 0053cee0: MOV EAX,dword ptr [ESP + 0x43c]
//   Label: LAB_0053cee0
//   XREF to: Stack[-0x10] (READ)
// 0053cee7: MOV ESI,0x63caff
//   XREF to: 0063caff (DATA)
// 0053ceec: PUSH EAX
// 0053ceed: MOV [0x0067d550],EAX
//   XREF to: 0067d550 (WRITE)
// 0053cef2: MOV EBX,EAX
// 0053cef4: CALL core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
//   XREF to: 00522d20 (UNCONDITIONAL_CALL)
// 0053cef9: ADD ESP,0x4
// 0053cefc: MOV EAX,EBX
// 0053cefe: MOV EDI,0xc85
// 0053cf03: PUSH EAX
// 0053cf04: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0053cf0a: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 0053cf10: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0053cf15: ADD ESP,0x4
// 0053cf18: MOV dword ptr [0x0067d550],EBP
//   XREF to: 0067d550 (WRITE)
// 0053cf1e: POP EDI
// 0053cf1f: ADD ESP,0x43c
// 0053cf25: POP EBP
// 0053cf26: POP ESI
// 0053cf27: POP EBX
// 0053cf28: RET
// 0053cf29: PUSH 0x1
//   Label: LAB_0053cf29
// 0053cf2b: LEA EAX,[ESP + 0x414]
//   XREF to: Stack[-0x3c] (DATA)
// 0053cf32: PUSH EAX
// 0053cf33: MOV EDI,dword ptr [ESP + 0x444]
//   XREF to: Stack[-0x10] (READ)
// 0053cf3a: PUSH EDI
// 0053cf3b: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 0053cf40: JMP 0x0053ce39
//   XREF to: 0053ce39 (UNCONDITIONAL_JUMP)
// 0053cf45: LEA EAX,[ESP + 0x4]
//   Label: LAB_0053cf45
//   XREF to: Stack[-0x448] (DATA)
// 0053cf49: PUSH EAX
// 0053cf4a: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053cf4f: ADD ESP,0x4
// 0053cf52: PUSH 0x63ca11
//   XREF to: 0063ca11 (DATA)
// 0053cf57: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053cf5b: PUSH EAX
// 0053cf5c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053cf61: ADD ESP,0x8
// 0053cf64: PUSH 0x63ca35
//   XREF to: 0063ca35 (DATA)
// 0053cf69: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053cf6d: PUSH EAX
// 0053cf6e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053cf73: ADD ESP,0x8
// 0053cf76: PUSH 0x0
// 0053cf78: PUSH -0x1
// 0053cf7a: PUSH 0x63ca5a
//   XREF to: 0063ca5a (DATA)
// 0053cf7f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x448] (DATA)
// 0053cf83: PUSH EAX
// 0053cf84: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053cf89: ADD ESP,0x10
// 0053cf8c: TEST EAX,EAX
// 0053cf8e: JL 0x0053d08b
//   XREF to: 0053d08b (CONDITIONAL_JUMP)
// 0053cf94: JNZ 0x0053d0a8
//   XREF to: 0053d0a8 (CONDITIONAL_JUMP)
// 0053cf9a: MOV EDI,0x63ca76
//   XREF to: 0063ca76 (DATA)
// 0053cf9f: LEA EAX,[ESP + 0x4]
//   Label: LAB_0053cf9f
//   XREF to: Stack[-0x448] (DATA)
// 0053cfa3: PUSH EAX
// 0053cfa4: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0053cfa9: ADD ESP,0x4
// 0053cfac: MOV EBX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0x10] (READ)
// 0053cfb3: MOV EBX,dword ptr [EBX + 0x548]
// 0053cfb9: TEST EBX,EBX
// 0053cfbb: JZ 0x0053cfd5
//   XREF to: 0053cfd5 (CONDITIONAL_JUMP)
// 0053cfbd: PUSH EBX
//   Label: LAB_0053cfbd
// 0053cfbe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053cfc2: PUSH EAX
// 0053cfc3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053cfc8: MOV EBX,dword ptr [EBX + 0x14c]
// 0053cfce: ADD ESP,0x8
// 0053cfd1: TEST EBX,EBX
// 0053cfd3: JNZ 0x0053cfbd
//   XREF to: 0053cfbd (CONDITIONAL_JUMP)
// 0053cfd5: MOV EAX,dword ptr [ESP + 0x438]
//   Label: LAB_0053cfd5
//   XREF to: Stack[-0x14] (READ)
// 0053cfdc: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x448] (READ)
// 0053cfe0: CMP EAX,EDX
// 0053cfe2: JL 0x0053cfee
//   XREF to: 0053cfee (CONDITIONAL_JUMP)
// 0053cfe4: LEA EAX,[EDX + -0x1]
// 0053cfe7: MOV dword ptr [ESP + 0x438],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053cfee: PUSH 0x0
//   Label: LAB_0053cfee
// 0053cff0: MOV ECX,dword ptr [ESP + 0x43c]
//   XREF to: Stack[-0x14] (READ)
// 0053cff7: PUSH ECX
// 0053cff8: PUSH 0x63ca69
//   XREF to: 0063ca69 (DATA)
// 0053cffd: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x448] (DATA)
// 0053d001: PUSH EAX
// 0053d002: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d007: ADD ESP,0x10
// 0053d00a: MOV ESI,EAX
// 0053d00c: TEST EAX,EAX
// 0053d00e: JL 0x0053d103
//   XREF to: 0053d103 (CONDITIONAL_JUMP)
// 0053d014: PUSH EAX
// 0053d015: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053d019: PUSH EAX
// 0053d01a: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053d01f: ADD ESP,0x8
// 0053d022: PUSH EAX
// 0053d023: MOV EBX,dword ptr [ESP + 0x440]
//   XREF to: Stack[-0x10] (READ)
// 0053d02a: PUSH EBX
// 0053d02b: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053d030: ADD ESP,0x8
// 0053d033: MOV EBX,EAX
// 0053d035: TEST EAX,EAX
// 0053d037: JNZ 0x0053d056
//   XREF to: 0053d056 (CONDITIONAL_JUMP)
// 0053d039: MOV EAX,0xc2b
// 0053d03e: PUSH 0x63ca8a
//   XREF to: 0063ca8a (DATA)
// 0053d043: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0053d049: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0053d04e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053d053: ADD ESP,0x4
// 0053d056: PUSH EBX
//   Label: LAB_0053d056
// 0053d057: MOV EDX,dword ptr [ESP + 0x440]
//   XREF to: Stack[-0x10] (READ)
// 0053d05e: PUSH EDX
// 0053d05f: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 0053d064: ADD ESP,0x8
// 0053d067: PUSH EBX
// 0053d068: PUSH EBP
// 0053d069: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053d06e: ADD ESP,0x8
// 0053d071: TEST EAX,EAX
// 0053d073: JNZ 0x0053d09c
//   XREF to: 0053d09c (CONDITIONAL_JUMP)
// 0053d075: PUSH EBX
//   Label: LAB_0053d075
// 0053d076: PUSH EBP
// 0053d077: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053d07c: ADD ESP,0x8
// 0053d07f: MOV dword ptr [ESP + 0x438],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0053d086: JMP 0x0053cf9f
//   XREF to: 0053cf9f (UNCONDITIONAL_JUMP)
// 0053d08b: PUSH 0x0
//   Label: LAB_0053d08b
// 0053d08d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053d091: PUSH EAX
// 0053d092: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d097: JMP 0x0053ce9f
//   XREF to: 0053ce9f (UNCONDITIONAL_JUMP)
// 0053d09c: PUSH EBX
//   Label: LAB_0053d09c
// 0053d09d: PUSH EBP
// 0053d09e: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 0053d0a3: ADD ESP,0x8
// 0053d0a6: JMP 0x0053d075
//   XREF to: 0053d075 (UNCONDITIONAL_JUMP)
// 0053d0a8: CMP EAX,0x1
//   Label: LAB_0053d0a8
// 0053d0ab: JNZ 0x0053d103
//   XREF to: 0053d103 (CONDITIONAL_JUMP)
// 0053d0ad: PUSH EAX
// 0053d0ae: PUSH 0x64
// 0053d0b0: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0xa0] (DATA)
// 0053d0b7: PUSH EAX
// 0053d0b8: PUSH 0x63cab4
//   XREF to: 0063cab4 (DATA)
// 0053d0bd: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053d0c3: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053d0c4: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053d0c9: ADD ESP,0x14
// 0053d0cc: TEST EAX,EAX
// 0053d0ce: JZ 0x0053d117
//   XREF to: 0053d117 (CONDITIONAL_JUMP)
// 0053d0d0: MOV EBX,dword ptr [EBX + 0x548]
// 0053d0d6: XOR EDI,EDI
// 0053d0d8: TEST EBX,EBX
// 0053d0da: JZ 0x0053d0e6
//   XREF to: 0053d0e6 (CONDITIONAL_JUMP)
// 0053d0dc: MOV ESI,dword ptr [EBX + 0x14c]
//   Label: LAB_0053d0dc
// 0053d0e2: TEST EBX,EBX
// 0053d0e4: JNZ 0x0053d12a
//   XREF to: 0053d12a (CONDITIONAL_JUMP)
// 0053d0e6: LEA EAX,[ESP + 0x410]
//   Label: LAB_0053d0e6
//   XREF to: Stack[-0x3c] (DATA)
// 0053d0ed: PUSH EAX
// 0053d0ee: PUSH EDI
// 0053d0ef: PUSH 0x63cad6
//   XREF to: 0063cad6 (DATA)
// 0053d0f4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053d0fa: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053d0fb: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053d100: ADD ESP,0x10
// 0053d103: PUSH 0x0
//   Label: LAB_0053d103
// 0053d105: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053d109: PUSH EAX
// 0053d10a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d10f: ADD ESP,0x8
// 0053d112: JMP 0x0053ce75
//   XREF to: 0053ce75 (UNCONDITIONAL_JUMP)
// 0053d117: PUSH EAX
//   Label: LAB_0053d117
// 0053d118: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x448] (DATA)
// 0053d11c: PUSH EAX
// 0053d11d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d122: ADD ESP,0x8
// 0053d125: JMP 0x0053ce75
//   XREF to: 0053ce75 (UNCONDITIONAL_JUMP)
// 0053d12a: PUSH 0x0
//   Label: LAB_0053d12a
// 0053d12c: PUSH EBX
// 0053d12d: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0xa0] (DATA)
// 0053d134: PUSH EAX
// 0053d135: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 0053d13a: ADD ESP,0xc
// 0053d13d: TEST EAX,EAX
// 0053d13f: JZ 0x0053d175
//   XREF to: 0053d175 (CONDITIONAL_JUMP)
// 0053d141: PUSH EBX
// 0053d142: MOV EDX,dword ptr [ESP + 0x440]
//   XREF to: Stack[-0x10] (READ)
// 0053d149: PUSH EDX
// 0053d14a: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 0053d14f: ADD ESP,0x8
// 0053d152: PUSH EBX
// 0053d153: PUSH EBP
// 0053d154: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053d159: ADD ESP,0x8
// 0053d15c: TEST EAX,EAX
// 0053d15e: JZ 0x0053d16a
//   XREF to: 0053d16a (CONDITIONAL_JUMP)
// 0053d160: PUSH EBX
// 0053d161: PUSH EBP
// 0053d162: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 0053d167: ADD ESP,0x8
// 0053d16a: PUSH EBX
//   Label: LAB_0053d16a
// 0053d16b: PUSH EBP
// 0053d16c: INC EDI
// 0053d16d: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053d172: ADD ESP,0x8
// 0053d175: MOV EBX,ESI
//   Label: LAB_0053d175
// 0053d177: TEST ESI,ESI
// 0053d179: JNZ 0x0053d0dc
//   XREF to: 0053d0dc (CONDITIONAL_JUMP)
// 0053d17f: JMP 0x0053d0e6
//   XREF to: 0053d0e6 (UNCONDITIONAL_JUMP)
