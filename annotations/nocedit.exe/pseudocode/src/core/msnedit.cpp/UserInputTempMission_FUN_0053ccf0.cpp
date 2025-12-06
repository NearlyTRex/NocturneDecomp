// Name: core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
// Address: 0053ccf0
// Address Range: [[0053ccf0, 0053d183]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_UserInputTempMission(uint param_1) */

void core_msnedit_cpp_UserInputTempMission_FUN_0053ccf0(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  void *pvVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  uint *puVar7;
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
  byte auStack_3e8 [876];
  uint auStack_7c [6];
  char acStack_64 [4];
  char acStack_60 [40];
  byte auStack_38 [28];
  char acStack_1c [16];
  
  bVar8 = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Use a saved game file instead of a mission?");
  if (iVar1 == 0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","world",
                       "*.msn",SUB41 /* extract 2-byte value */(auStack_38,0));
  }
  else {
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission file to import actors from","save",
                       "*.noc",SUB41 /* extract 2-byte value */(auStack_38,0));
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
