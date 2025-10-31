// Name: core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
// Address: 005381e0
// Address Range: [[005381e0, 00538b93]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005078f2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_world_msn_0063b744
//   TerminatedCString s_world_0063b750
//   TerminatedCString s_Loading_s_0063b756
//   TerminatedCString s_Saving_s_0063b764
//   TerminatedCString s_Not_converting_local_fil_0063b771
//   TerminatedCString s_Sec_0063bd80
//   TerminatedCString s_Demented_R_Mission_edito_0063bd87
//   TerminatedCString s_Current_mission_s_msn_0063bda2
//   TerminatedCString s_No_misison_loaded_0063bdba
//   undefined4 s_o_misison_loaded_0063bdbb
//   undefined4 s_misison_loaded_0063bdbc
//   undefined4 s_misison_loaded_0063bdbd
//   TerminatedCString s_s_1_Load_mission_0063bdcc
//   TerminatedCString s_s_2_Save_mission_0063bddc
//   TerminatedCString s_s_3_Create_mission_from__0063bdec
//   TerminatedCString s_s_4_Add_set_0063be0e
//   TerminatedCString s_s_5_Remove_set_0063be19
//   TerminatedCString s_s_6_Edit_actors_in_a_set_0063be27
//   TerminatedCString s_s_7_Precompute_lights_fo_0063be3f
//   TerminatedCString s_s_8_Save_mission_with_a__0063be6b
//   TerminatedCString s_A_Play_mission_0063be91
//   TerminatedCString s_B_Enemy_randomizer_0063bea2
//   TerminatedCString s_C_Import_actors_from_ano_0063beb6
//   TerminatedCString s_D_Difficulty_statistics_0063bedc
//   TerminatedCString s_G_Gore_editor_0063bef5
//   TerminatedCString s_H_Display_actor_class_he_0063bf04
//   TerminatedCString s_U_Update_all_mission_fil_0063bf25
//   TerminatedCString s_S_Show_sound_files_neede_0063bf63
//   TerminatedCString s_W_Rebuild_waypoint_conne_0063bf7e
//   TerminatedCString s_Z_Display_memory_usage_i_0063bf9f
//   TerminatedCString s_Sets_in_mission_0063bfbc
//   TerminatedCString s_No_sets_defined_in_missi_0063bfcd
//   TerminatedCString s_msn_0063bfe8
//   TerminatedCString s_world_0063bfee
//   TerminatedCString s_Load_mission_0063bff4
//   TerminatedCString s_No_mission_loaded_0063c001
//   TerminatedCString s_s_msn_0063c014
//   TerminatedCString s_Save_mission_to_s_0063c01b
//   TerminatedCString s_Enter_mission_name_0063c02e
//   TerminatedCString s_set_0063c041
//   TerminatedCString s_models_0063c047
//   TerminatedCString s_Enter_set_name_0063c04e
//   TerminatedCString s_set_0063c05d
//   TerminatedCString s_models_0063c063
//   TerminatedCString s_Enter_set_name_to_add_0063c06a
//   TerminatedCString s_Select_set_to_delete_0063c080
//   TerminatedCString s_This_is_going_to_remove__0063c096
//   TerminatedCString s_Edit_actors_in_which_set_0063c0ec
//   TerminatedCString s_Preparing_actors_0063c106
//   TerminatedCString s_Loading_set_0063c118
//   TerminatedCString s_Precompute_lights_0063c125
//   TerminatedCString s_You_must_now_go_into_set_0063c138
//   TerminatedCString s_msn_0063c162
//   TerminatedCString s_world_0063c166
//   TerminatedCString s_Save_mission_to_new_name_0063c16c
//   TerminatedCString s_s_msn_0063c185
//   TerminatedCString s_Edit_gore_in_which_set_0063c18c
//   TerminatedCString s_Preparing_actors_0063c1a4
//   TerminatedCString s_Loading_set_0063c1b6
//   TerminatedCString s_Actor_class_heirarchy_0063c1c3
//   TerminatedCString s_Update_ALL_mission_files_0063c1da
//   TerminatedCString s_Cleaning_up_0063c206
//   TerminatedCString s_Deleting_actors_0063c215
//   TerminatedCString s_Freeing_models_0063c228
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   TerminatedCString s_UNDO_TMP_00680800
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_IncludeCommentsWhenWriting
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
//   CDemonPod g_CDemonPodInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_inivar.cpp_readIniData_FUN_004fbd90
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   core_mission.cpp_CDemonMission_FUN_005235b0
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_mission.cpp_CDemonMission_FUN_005243a0
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_save_FUN_00522e30
//   core_mission.cpp_FUN_005248e0
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
//   core_msnedit.cpp_FUN_00537330
//   core_msnedit.cpp_FUN_005379e0
//   core_msnedit.cpp_FUN_00538df0
//   core_msnedit.cpp_FUN_0053d3b0
//   core_msnedit.cpp_FUN_0053d7b0
//   core_msnedit.cpp_FUN_0053ec80
//   core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  CPodFile *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 in_stack_00000008;
  char *in_stack_00000054;
  char *in_stack_00000068;
  CDemonMission *in_stack_fffff8a8;
  CDemonMission *in_stack_fffff8ac;
  CDemonMission *in_stack_fffff8b0;
  CStrList_vtable *in_stack_fffff8b4;
  CDemonMission *in_stack_fffff8b8;
  undefined1 auStack_3b8 [8];
  CFileFinder CStack_3b0;
  char acStack_200 [96];
  char acStack_1a0 [8];
  char acStack_198 [248];
  char acStack_a0 [144];
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Sec...");
  core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
  core_mission_cpp_FUN_005248e0();
  crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
  core_inivar_cpp_readIniData_FUN_004fbd90();
  g_IncludeCommentsWhenWriting = 0;
  do {
    this_ptr->field0_0x0[4] = '\x01';
    this_ptr->field0_0x0[5] = '\0';
    this_ptr->field0_0x0[6] = '\0';
    this_ptr->field0_0x0[7] = '\0';
    this_ptr->field2_0xc[0x30] = '\0';
    this_ptr->field2_0xc[0x31] = '\0';
    this_ptr->field2_0xc[0x32] = '\0';
    this_ptr->field2_0xc[0x33] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented(R) Mission editor",0,0);
    if (this_ptr->field2_0xc[0x38] == '\0') {
      pcVar6 = "No misison loaded";
      pcVar7 = acStack_200;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_200,"Current mission: %s.msn",in_stack_00000008);
    }
    engine_2d_c_drawText_FUN_00401fd0(acStack_200 + 4,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("1. Load mission",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("2. Save mission",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("3. Create mission from single set",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("4. Add set",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("5. Remove set",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("6. Edit actors in a set",0,99);
    engine_2d_c_drawText_FUN_00401fd0("7. Precompute lights for rooms with mirrors",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("8. Save mission with a different name",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("A. Play mission.",0,0x8f);
    engine_2d_c_drawText_FUN_00401fd0("B. Enemy randomizer",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("C. Import actors from another mission",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("D. Difficulty statistics",0,0xb0);
    engine_2d_c_drawText_FUN_00401fd0("G. Gore editor",0,0xbb);
    engine_2d_c_drawText_FUN_00401fd0("H. Display actor class heirarchy",0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("U. Update all mission files to latest file and actor versions",0,0xd1);
    engine_2d_c_drawText_FUN_00401fd0("S. Show sound files needed",0,0xdc);
    engine_2d_c_drawText_FUN_00401fd0("W. Rebuild waypoint connectivity",0,0xe7);
    engine_2d_c_drawText_FUN_00401fd0("Z. Display memory usage info",0,0xf2);
    if ((int)this_ptr->set_list < 1) {
      engine_2d_c_drawText_FUN_00401fd0("No sets defined in mission",0,0xfd);
    }
    else {
      iVar5 = 0x113;
      iVar8 = 0;
      engine_2d_c_drawText_FUN_00401fd0("Sets in mission:",0,0xfd);
      pcVar7 = in_stack_00000054;
      if (0 < (int)this_ptr->set_list) {
        do {
          iVar8 = iVar8 + 1;
          engine_2d_c_drawText_FUN_00401fd0(pcVar7,0,iVar5);
          iVar5 = iVar5 + 0xb;
          pcVar7 = pcVar7 + 0x100;
        } while (iVar8 < (int)this_ptr->set_list);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar3 < 0x41) {
      if (uVar3 < 0x34) {
        if (uVar3 < 0x32) {
          if ((uVar3 == 0x31) &&
             (iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                (g_CEditorToolsPtr,"Load mission","world",
                                 "*.msn",(bool)((char)&CStack_3b0 + '\f')), iVar5 != 0)) {
            core_mission_cpp_CDemonMission_load_FUN_00522d90
                      (this_ptr,(char *)&CStack_3b0.search_handle,0);
            core_mission_cpp_CDemonMission_FUN_005235b0(this_ptr);
          }
        }
        else if (uVar3 < 0x33) {
          if (this_ptr->field2_0xc[0x38] == '\0') {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No mission loaded.");
          }
          else {
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)&CStack_3b0.has_results,"%s.msn");
            iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Save mission to %s");
            if (iVar5 != 0) {
              core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
            }
          }
        }
        else {
          iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Enter mission name",in_stack_00000068,0xf,0
                            );
          if ((iVar5 != 0) &&
             (iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                (g_CEditorToolsPtr,"Enter set name","models",
                                 "*.set",(bool)((char)&CStack_3b0 + '\x10')), iVar5 != 0)) {
            core_mission_cpp_CDemonMission_FUN_005243a0(this_ptr);
          }
        }
      }
      else if (uVar3 < 0x35) {
        iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Enter set name to add","models",
                           "*.set",(bool)((char)&CStack_3b0 + '\f'));
        if (iVar5 != 0) {
          core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60();
        }
      }
      else if (uVar3 < 0x36) {
        iVar5 = core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90();
        if ((-1 < iVar5) &&
           (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"This is going to remove set %s from the mission and delete all the actors in the set."), iVar5 != 0))
        {
          core_msnedit_cpp_FUN_00538df0();
        }
      }
      else if (uVar3 < 0x37) {
        iVar5 = core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90();
        if (-1 < iVar5) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Preparing actors.");
          core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Loading set.");
          core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
          in_stack_fffff8b0 = (CDemonMission *)&DAT_00000001;
          while( true ) {
            in_stack_fffff8a8 = (CDemonMission *)0x538712;
            in_stack_fffff8ac = this_ptr;
            iVar5 = core_msnedit_cpp_PrepareMissionMaybe_FUN_005390f0();
            if (iVar5 != 2) break;
            core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
            in_stack_fffff8b4 = (CStrList_vtable *)0x538735;
            in_stack_fffff8b8 = this_ptr;
            core_msnedit_cpp_WalkAroundOnSet_FUN_00538ba0();
            in_stack_fffff8b0 = (CDemonMission *)0x0;
          }
        }
      }
      else if (uVar3 < 0x38) {
        iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Precompute lights?");
        if (iVar5 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(g_CDemonSetPtr);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          in_stack_fffff8a8 = (CDemonMission *)0x0;
          engine_2d_c_drawText_FUN_00401fd0("You must now go into set editor and save!",0,0);
          in_stack_fffff8ac = (CDemonMission *)0x538786;
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          in_stack_fffff8b0 = (CDemonMission *)0x53878b;
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        }
      }
      else if ((uVar3 == 0x38) &&
              (bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                                 (g_CEditorToolsPtr,"Save mission to new name",
                                  "world",0x63c162,(bool)((char)&CStack_3b0 + '\f')),
              CONCAT31(extraout_var,bVar2) != 0)) {
        crt_string_c_splitpath_FUN_005ff178
                  ((char *)&CStack_3b0.has_results,(char *)0x0,(char *)0x0,acStack_a0,(char *)0x0);
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)&CStack_3b0.search_handle,"%s.msn");
        core_msnedit_cpp_OpenAndCreateWorld_FUN_00537f60();
      }
    }
    else if (uVar3 < 0x42) {
      core_msnedit_cpp_WalkAroundOnSet_FUN_00538ba0();
    }
    else if (uVar3 < 0x48) {
      if (uVar3 < 0x43) {
        core_msnedit_cpp_FUN_005379e0();
      }
      else if (uVar3 < 0x44) {
        core_msnedit_cpp_UserInputTempMission_FUN_0053ccf0();
      }
      else if (uVar3 < 0x45) {
        core_msnedit_cpp_FUN_0053d3b0();
      }
      else if ((uVar3 == 0x47) &&
              (iVar5 = core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(),
              -1 < iVar5)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Preparing actors.");
        core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Loading set.");
        in_stack_fffff8a8 = this_ptr;
        core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
        in_stack_fffff8ac = (CDemonMission *)0x5388a6;
        in_stack_fffff8b0 = this_ptr;
        core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220();
      }
    }
    else if (uVar3 < 0x49) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8a0);
      core_msnedit_cpp_FUN_00537330();
      shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff89c,1);
      shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
                ((CPickList *)&stack0xfffff8a0,(char *)0x0);
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xfffff8a4,"Actor class heirarchy.",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff8a8,0,(uint)in_stack_fffff8a8,(uint)in_stack_fffff8ac,
                 (uint)in_stack_fffff8b0,(uint)in_stack_fffff8b4,(uint)in_stack_fffff8b8);
    }
    else if (uVar3 < 0x55) {
      if (uVar3 == 0x53) {
        core_msnedit_cpp_FUN_0053ec80();
      }
    }
    else if (uVar3 < 0x56) {
      iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Update ALL mission files to latest version?");
      if (iVar5 != 0) {
        engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)auStack_3b8);
        engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
                  ((CFileFinder *)(auStack_3b8 + 4),"world\\*.msn");
        while (CStack_3b0.filename[0] != '\0') {
          pCVar4 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                             ((CPod *)g_CDemonPodPtr,"world",CStack_3b0.filename,(int *)0x0
                             );
          if (pCVar4 == (CPodFile *)0x0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s...");
            core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,auStack_3b8 + 4,0);
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Saving %s...");
            core_mission_cpp_CDemonMission_save_FUN_00522e30(g_CDemonMissionPtr);
          }
          else {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Not converting local file %s - it is also in a pod");
          }
          in_stack_fffff8ac = (CDemonMission *)(CStack_3b0.filename + 8);
          in_stack_fffff8a8 = (CDemonMission *)0x538a05;
          engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)in_stack_fffff8ac);
        }
        engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_3b0,0);
      }
    }
    else if (0x56 < uVar3) {
      if (uVar3 < 0x58) {
        core_msnedit_cpp_FUN_0053d7b0();
      }
      else if (uVar3 == 0x5a) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,acStack_1a0);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(g_CEditorToolsPtr,acStack_198);
      }
    }
    if (uVar3 == 0x1b) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Cleaning up...");
      crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
      this_ptr_00 = g_CEditorToolsPtr;
      this_ptr->field0_0x0[4] = '\0';
      this_ptr->field0_0x0[5] = '\0';
      this_ptr->field0_0x0[6] = '\0';
      this_ptr->field0_0x0[7] = '\0';
      this_ptr->field2_0xc[0x30] = '\0';
      this_ptr->field2_0xc[0x31] = '\0';
      this_ptr->field2_0xc[0x32] = '\0';
      this_ptr->field2_0xc[0x33] = '\0';
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (this_ptr_00,"Deleting actors...");
      core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Freeing models...");
      core_mission_cpp_FUN_005248e0();
      return;
    }
  } while( true );
}


// Assembly code:
// 005381e0: PUSH EBX
//   Label: core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
// 005381e1: PUSH ESI
// 005381e2: PUSH EDI
// 005381e3: PUSH EBP
// 005381e4: SUB ESP,0x7cc
// 005381ea: MOV EBP,dword ptr [ESP + 0x7e0]
//   XREF to: Stack[0x4] (READ)
// 005381f1: PUSH 0x63bd80
//   XREF to: 0063bd80 (DATA)
// 005381f6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005381fc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005381fd: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538202: ADD ESP,0x8
// 00538205: PUSH EBP
// 00538206: CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   XREF to: 00522d30 (UNCONDITIONAL_CALL)
// 0053820b: ADD ESP,0x4
// 0053820e: PUSH EBP
// 0053820f: CALL core_mission.cpp_FUN_005248e0
//   XREF to: 005248e0 (UNCONDITIONAL_CALL)
// 00538214: ADD ESP,0x4
// 00538217: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053821c: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00538221: ADD ESP,0x4
// 00538224: CALL core_inivar.cpp_readIniData_FUN_004fbd90
//   XREF to: 004fbd90 (UNCONDITIONAL_CALL)
// 00538229: LEA EAX,[EBP + 0x44]
// 0053822c: XOR ECX,ECX
// 0053822e: MOV dword ptr [ESP + 0x7c8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00538235: LEA EAX,[EBP + 0x148]
// 0053823b: MOV dword ptr [0x00822040],ECX
//   XREF to: 00822040 (WRITE)
// 00538241: MOV dword ptr [ESP + 0x7c4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00538248: MOV dword ptr [ESP + 0x7c0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053824f: MOV dword ptr [EBP + 0x4],0x1
//   Label: LAB_0053824f
// 00538256: MOV dword ptr [EBP + 0x3c],0x0
// 0053825d: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00538262: PUSH 0x0
// 00538264: PUSH 0x0
// 00538266: PUSH 0x63bd87
//   XREF to: 0063bd87 (DATA)
// 0053826b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00538270: MOV AH,byte ptr [EBP + 0x44]
// 00538273: ADD ESP,0xc
// 00538276: TEST AH,AH
// 00538278: JNZ 0x00538568
//   XREF to: 00538568 (CONDITIONAL_JUMP)
// 0053827e: MOV ESI,0x63bdba
//   XREF to: 0063bdba (DATA)
// 00538283: LEA EDI,[ESP + 0x5c0]
//   XREF to: Stack[-0x21c] (DATA)
// 0053828a: PUSH EDI
// 0053828b: MOV AL,byte ptr [ESI]
//   Label: LAB_0053828b
//   XREF to: 0063bdba (READ)
//   XREF to: 0063bdbc (READ)
// 0053828d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x21c] (DATA)
// 0053828f: CMP AL,0x0
// 00538291: JZ 0x005382a3
//   XREF to: 005382a3 (CONDITIONAL_JUMP)
// 00538293: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063bdbb (READ)
//   XREF to: 0063bdbd (READ)
// 00538296: ADD ESI,0x2
// 00538299: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x21b] (WRITE)
// 0053829c: ADD EDI,0x2
// 0053829f: CMP AL,0x0
// 005382a1: JNZ 0x0053828b
//   XREF to: 0053828b (CONDITIONAL_JUMP)
// 005382a3: POP EDI
//   Label: LAB_005382a3
// 005382a4: PUSH 0x16
//   Label: LAB_005382a4
// 005382a6: PUSH 0x0
// 005382a8: LEA EAX,[ESP + 0x5c8]
//   XREF to: Stack[-0x21c] (DATA)
// 005382af: PUSH EAX
// 005382b0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005382b5: ADD ESP,0xc
// 005382b8: PUSH 0x2c
// 005382ba: PUSH 0x0
// 005382bc: PUSH 0x63bdcc
//   XREF to: 0063bdcc (DATA)
// 005382c1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005382c6: ADD ESP,0xc
// 005382c9: PUSH 0x37
// 005382cb: PUSH 0x0
// 005382cd: PUSH 0x63bddc
//   XREF to: 0063bddc (DATA)
// 005382d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005382d7: ADD ESP,0xc
// 005382da: PUSH 0x42
// 005382dc: PUSH 0x0
// 005382de: PUSH 0x63bdec
//   XREF to: 0063bdec (DATA)
// 005382e3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005382e8: ADD ESP,0xc
// 005382eb: PUSH 0x4d
// 005382ed: PUSH 0x0
// 005382ef: PUSH 0x63be0e
//   XREF to: 0063be0e (DATA)
// 005382f4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005382f9: ADD ESP,0xc
// 005382fc: PUSH 0x58
// 005382fe: PUSH 0x0
// 00538300: PUSH 0x63be19
//   XREF to: 0063be19 (DATA)
// 00538305: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053830a: ADD ESP,0xc
// 0053830d: PUSH 0x63
// 0053830f: PUSH 0x0
// 00538311: PUSH 0x63be27
//   XREF to: 0063be27 (DATA)
// 00538316: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053831b: ADD ESP,0xc
// 0053831e: PUSH 0x6e
// 00538320: PUSH 0x0
// 00538322: PUSH 0x63be3f
//   XREF to: 0063be3f (DATA)
// 00538327: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053832c: ADD ESP,0xc
// 0053832f: PUSH 0x79
// 00538331: PUSH 0x0
// 00538333: PUSH 0x63be6b
//   XREF to: 0063be6b (DATA)
// 00538338: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053833d: ADD ESP,0xc
// 00538340: PUSH 0x8f
// 00538345: PUSH 0x0
// 00538347: PUSH 0x63be91
//   XREF to: 0063be91 (DATA)
// 0053834c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00538351: ADD ESP,0xc
// 00538354: PUSH 0x9a
// 00538359: PUSH 0x0
// 0053835b: PUSH 0x63bea2
//   XREF to: 0063bea2 (DATA)
// 00538360: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00538365: ADD ESP,0xc
// 00538368: PUSH 0xa5
// 0053836d: PUSH 0x0
// 0053836f: PUSH 0x63beb6
//   XREF to: 0063beb6 (DATA)
// 00538374: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00538379: ADD ESP,0xc
// 0053837c: PUSH 0xb0
// 00538381: PUSH 0x0
// 00538383: PUSH 0x63bedc
//   XREF to: 0063bedc (DATA)
// 00538388: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053838d: ADD ESP,0xc
// 00538390: PUSH 0xbb
// 00538395: PUSH 0x0
// 00538397: PUSH 0x63bef5
//   XREF to: 0063bef5 (DATA)
// 0053839c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005383a1: ADD ESP,0xc
// 005383a4: PUSH 0xc6
// 005383a9: PUSH 0x0
// 005383ab: PUSH 0x63bf04
//   XREF to: 0063bf04 (DATA)
// 005383b0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005383b5: ADD ESP,0xc
// 005383b8: PUSH 0xd1
// 005383bd: PUSH 0x0
// 005383bf: PUSH 0x63bf25
//   XREF to: 0063bf25 (DATA)
// 005383c4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005383c9: ADD ESP,0xc
// 005383cc: PUSH 0xdc
// 005383d1: PUSH 0x0
// 005383d3: PUSH 0x63bf63
//   XREF to: 0063bf63 (DATA)
// 005383d8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005383dd: ADD ESP,0xc
// 005383e0: PUSH 0xe7
// 005383e5: PUSH 0x0
// 005383e7: PUSH 0x63bf7e
//   XREF to: 0063bf7e (DATA)
// 005383ec: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005383f1: ADD ESP,0xc
// 005383f4: PUSH 0xf2
// 005383f9: PUSH 0x0
// 005383fb: PUSH 0x63bf9f
//   XREF to: 0063bf9f (DATA)
// 00538400: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00538405: MOV ESI,dword ptr [EBP + 0x144]
// 0053840b: ADD ESP,0xc
// 0053840e: TEST ESI,ESI
// 00538410: JLE 0x0053858a
//   XREF to: 0053858a (CONDITIONAL_JUMP)
// 00538416: PUSH 0xfd
// 0053841b: PUSH 0x0
// 0053841d: PUSH 0x63bfbc
//   XREF to: 0063bfbc (DATA)
// 00538422: MOV EBX,0x113
// 00538427: XOR EDI,EDI
// 00538429: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053842e: MOV EAX,dword ptr [EBP + 0x144]
// 00538434: ADD ESP,0xc
// 00538437: TEST EAX,EAX
// 00538439: JLE 0x00538462
//   XREF to: 00538462 (CONDITIONAL_JUMP)
// 0053843b: MOV ESI,dword ptr [ESP + 0x7c0]
//   XREF to: Stack[-0x1c] (READ)
// 00538442: PUSH EBX
//   Label: LAB_00538442
// 00538443: PUSH 0x0
// 00538445: PUSH ESI
// 00538446: INC EDI
// 00538447: ADD EBX,0xb
// 0053844a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053844f: ADD ESP,0xc
// 00538452: MOV EDX,dword ptr [EBP + 0x144]
// 00538458: ADD ESI,0x100
// 0053845e: CMP EDI,EDX
// 00538460: JL 0x00538442
//   XREF to: 00538442 (CONDITIONAL_JUMP)
// 00538462: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00538462
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00538467: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053846c: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 00538472: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 00538473: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00538478: ADD ESP,0x4
// 0053847b: MOV ESI,EAX
// 0053847d: MOV EBX,EAX
// 0053847f: CMP EAX,0x41
// 00538482: JNC 0x00538a86
//   XREF to: 00538a86 (CONDITIONAL_JUMP)
// 00538488: CMP EAX,0x34
// 0053848b: JNC 0x00538af3
//   XREF to: 00538af3 (CONDITIONAL_JUMP)
// 00538491: CMP EAX,0x32
// 00538494: JNC 0x00538b1f
//   XREF to: 00538b1f (CONDITIONAL_JUMP)
// 0053849a: CMP EAX,0x31
// 0053849d: JNZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 0053849f: PUSH 0x0
// 005384a1: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x320] (DATA)
// 005384a8: PUSH EAX
// 005384a9: MOV EAX,0x63bfe8
//   XREF to: 0063bfe8 (DATA)
// 005384ae: PUSH EAX
//   XREF to: 0063bfe8 (DATA)
// 005384af: MOV EAX,0x63bfee
//   XREF to: 0063bfee (DATA)
// 005384b4: PUSH EAX
//   XREF to: 0063bfee (DATA)
// 005384b5: MOV EAX,0x63bff4
//   XREF to: 0063bff4 (PARAM)
// 005384ba: PUSH EAX
//   XREF to: 0063bff4 (DATA)
// 005384bb: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005384c1: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005384c2: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 005384c7: ADD ESP,0x18
// 005384ca: TEST EAX,EAX
// 005384cc: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 005384ce: PUSH 0x0
// 005384d0: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x320] (DATA)
// 005384d7: PUSH EAX
// 005384d8: PUSH EBP
// 005384d9: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 005384de: ADD ESP,0xc
// 005384e1: PUSH 0x1
// 005384e3: PUSH EBP
// 005384e4: CALL core_mission.cpp_CDemonMission_FUN_005235b0
//   XREF to: 005235b0 (UNCONDITIONAL_CALL)
// 005384e9: ADD ESP,0x8
//   Label: LAB_005384e9
// 005384ec: CMP ESI,0x1b
//   Label: LAB_005384ec
// 005384ef: JNZ 0x0053824f
//   XREF to: 0053824f (CONDITIONAL_JUMP)
// 005384f5: PUSH 0x63c206
//   XREF to: 0063c206 (DATA)
// 005384fa: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538500: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00538501: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538506: ADD ESP,0x8
// 00538509: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053850e: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00538513: ADD ESP,0x4
// 00538516: PUSH 0x63c215
//   XREF to: 0063c215 (DATA)
// 0053851b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538521: MOV dword ptr [EBP + 0x4],0x0
// 00538528: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538529: MOV dword ptr [EBP + 0x3c],0x0
// 00538530: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538535: ADD ESP,0x8
// 00538538: PUSH EBP
// 00538539: CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   XREF to: 00522d30 (UNCONDITIONAL_CALL)
// 0053853e: ADD ESP,0x4
// 00538541: PUSH 0x63c228
//   XREF to: 0063c228 (DATA)
// 00538546: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053854b: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053854c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538551: ADD ESP,0x8
// 00538554: PUSH EBP
// 00538555: CALL core_mission.cpp_FUN_005248e0
//   XREF to: 005248e0 (UNCONDITIONAL_CALL)
// 0053855a: ADD ESP,0x4
// 0053855d: ADD ESP,0x7cc
// 00538563: POP EBP
// 00538564: POP EDI
// 00538565: POP ESI
// 00538566: POP EBX
// 00538567: RET
// 00538568: MOV EBX,dword ptr [ESP + 0x7c8]
//   Label: LAB_00538568
//   XREF to: Stack[-0x14] (READ)
// 0053856f: PUSH EBX
// 00538570: PUSH 0x63bda2
//   XREF to: 0063bda2 (DATA)
// 00538575: LEA EAX,[ESP + 0x5c8]
//   XREF to: Stack[-0x21c] (DATA)
// 0053857c: PUSH EAX
// 0053857d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00538582: ADD ESP,0xc
// 00538585: JMP 0x005382a4
//   XREF to: 005382a4 (UNCONDITIONAL_JUMP)
// 0053858a: PUSH 0xfd
//   Label: LAB_0053858a
// 0053858f: PUSH 0x0
// 00538591: PUSH 0x63bfcd
//   XREF to: 0063bfcd (DATA)
// 00538596: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053859b: ADD ESP,0xc
// 0053859e: JMP 0x00538462
//   XREF to: 00538462 (UNCONDITIONAL_JUMP)
// 005385a3: CMP byte ptr [EBP + 0x44],0x0
//   Label: LAB_005385a3
// 005385a7: JNZ 0x005385c0
//   XREF to: 005385c0 (CONDITIONAL_JUMP)
// 005385a9: MOV EAX,0x63c001
//   XREF to: 0063c001 (PARAM)
// 005385ae: PUSH EAX
//   XREF to: 0063c001 (DATA)
// 005385af: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005385b5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005385b6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005385bb: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 005385c0: MOV EDI,dword ptr [ESP + 0x7c8]
//   Label: LAB_005385c0
//   XREF to: Stack[-0x14] (READ)
// 005385c7: PUSH EDI
// 005385c8: MOV EAX,0x63c014
//   XREF to: 0063c014 (DATA)
// 005385cd: PUSH EAX
//   XREF to: 0063c014 (DATA)
// 005385ce: LEA EAX,[ESP + 0x4c4]
//   XREF to: Stack[-0x320] (DATA)
// 005385d5: PUSH EAX
// 005385d6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005385db: ADD ESP,0xc
// 005385de: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x320] (DATA)
// 005385e5: PUSH EAX
// 005385e6: MOV EAX,0x63c01b
//   XREF to: 0063c01b (DATA)
// 005385eb: PUSH EAX
//   XREF to: 0063c01b (DATA)
// 005385ec: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005385f1: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005385f2: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 005385f7: ADD ESP,0xc
// 005385fa: TEST EAX,EAX
// 005385fc: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538602: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x320] (DATA)
// 00538609: PUSH EAX
// 0053860a: PUSH EBP
// 0053860b: CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   XREF to: 0053d190 (UNCONDITIONAL_CALL)
// 00538610: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 00538615: PUSH 0x0
//   Label: LAB_00538615
// 00538617: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x320] (DATA)
// 0053861e: PUSH EAX
// 0053861f: MOV EAX,0x63c05d
//   XREF to: 0063c05d (DATA)
// 00538624: PUSH EAX
//   XREF to: 0063c05d (DATA)
// 00538625: MOV EAX,0x63c063
//   XREF to: 0063c063 (DATA)
// 0053862a: PUSH EAX
//   XREF to: 0063c063 (DATA)
// 0053862b: MOV EAX,0x63c06a
//   XREF to: 0063c06a (DATA)
// 00538630: PUSH EAX
//   XREF to: 0063c06a (DATA)
// 00538631: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538636: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00538637: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0053863c: ADD ESP,0x18
// 0053863f: TEST EAX,EAX
// 00538641: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538647: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x320] (DATA)
// 0053864e: PUSH EAX
// 0053864f: PUSH EBP
// 00538650: CALL core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
//   XREF to: 00538d60 (UNCONDITIONAL_CALL)
// 00538655: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 0053865a: MOV EDX,dword ptr [EBP]
//   Label: LAB_0053865a
// 0053865d: PUSH EDX
// 0053865e: MOV EAX,0x63c080
//   XREF to: 0063c080 (PARAM)
// 00538663: PUSH EAX
//   XREF to: 0063c080 (DATA)
// 00538664: PUSH EBP
// 00538665: CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
//   XREF to: 00538f90 (UNCONDITIONAL_CALL)
// 0053866a: ADD ESP,0xc
// 0053866d: MOV EBX,EAX
// 0053866f: TEST EAX,EAX
// 00538671: JL 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538677: MOV ECX,dword ptr [ESP + 0x7c4]
//   XREF to: Stack[-0x18] (READ)
// 0053867e: SHL EAX,0x8
// 00538681: ADD EAX,ECX
// 00538683: PUSH EAX
// 00538684: MOV EAX,0x63c096
//   XREF to: 0063c096 (PARAM)
// 00538689: PUSH EAX
//   XREF to: 0063c096 (DATA)
// 0053868a: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538690: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538691: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 00538696: ADD ESP,0xc
// 00538699: TEST EAX,EAX
// 0053869b: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 005386a1: PUSH EBX
// 005386a2: PUSH EBP
// 005386a3: CALL core_msnedit.cpp_FUN_00538df0
//   XREF to: 00538df0 (UNCONDITIONAL_CALL)
// 005386a8: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 005386ad: MOV EBX,dword ptr [EBP]
//   Label: LAB_005386ad
// 005386b0: PUSH EBX
// 005386b1: MOV EAX,0x63c0ec
//   XREF to: 0063c0ec (PARAM)
// 005386b6: PUSH EAX
//   XREF to: 0063c0ec (DATA)
// 005386b7: PUSH EBP
// 005386b8: CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
//   XREF to: 00538f90 (UNCONDITIONAL_CALL)
// 005386bd: ADD ESP,0xc
// 005386c0: MOV EBX,EAX
// 005386c2: TEST EAX,EAX
// 005386c4: JL 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 005386ca: MOV EAX,0x63c106
//   XREF to: 0063c106 (PARAM)
// 005386cf: PUSH EAX
//   XREF to: 0063c106 (DATA)
// 005386d0: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005386d6: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005386d7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005386dc: ADD ESP,0x8
// 005386df: PUSH EBP
// 005386e0: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 005386e5: ADD ESP,0x4
// 005386e8: MOV EAX,0x63c118
//   XREF to: 0063c118 (DATA)
// 005386ed: PUSH EAX
//   XREF to: 0063c118 (DATA)
// 005386ee: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005386f3: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005386f4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005386f9: ADD ESP,0x8
// 005386fc: PUSH EBX
// 005386fd: PUSH EBP
// 005386fe: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 00538703: MOV EAX,0x1
// 00538708: ADD ESP,0x8
// 0053870b: PUSH EAX
//   Label: LAB_0053870b
// 0053870c: PUSH EBP
// 0053870d: CALL core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
//   XREF to: 005390f0 (UNCONDITIONAL_CALL)
// 00538712: ADD ESP,0x8
// 00538715: CMP EAX,0x2
// 00538718: JNZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 0053871e: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x320] (DATA)
// 00538725: PUSH EAX
// 00538726: PUSH EBP
// 00538727: CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   XREF to: 0053d190 (UNCONDITIONAL_CALL)
// 0053872c: ADD ESP,0x8
// 0053872f: PUSH EBP
// 00538730: CALL core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
//   XREF to: 00538ba0 (UNCONDITIONAL_CALL)
// 00538735: ADD ESP,0x4
// 00538738: XOR EAX,EAX
// 0053873a: JMP 0x0053870b
//   XREF to: 0053870b (UNCONDITIONAL_JUMP)
// 0053873c: MOV EAX,0x63c125
//   Label: LAB_0053873c
//   XREF to: 0063c125 (PARAM)
// 00538741: PUSH EAX
//   XREF to: 0063c125 (DATA)
// 00538742: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538748: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00538749: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0053874e: ADD ESP,0x8
// 00538751: TEST EAX,EAX
// 00538753: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538759: PUSH -0x1
// 0053875b: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00538761: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00538762: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 00538767: ADD ESP,0x8
// 0053876a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053876f: PUSH 0x0
// 00538771: PUSH 0x0
// 00538773: MOV EAX,0x63c138
//   XREF to: 0063c138 (PARAM)
// 00538778: PUSH EAX
//   XREF to: 0063c138 (DATA)
// 00538779: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053877e: ADD ESP,0xc
// 00538781: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00538786: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0053878b: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538790: PUSH 0x0
//   Label: LAB_00538790
// 00538792: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x320] (DATA)
// 00538799: PUSH EAX
// 0053879a: MOV EAX,0x63c162
//   XREF to: 0063c162 (DATA)
// 0053879f: PUSH EAX
//   XREF to: 0063c162 (DATA)
// 005387a0: MOV EAX,0x63c166
//   XREF to: 0063c166 (DATA)
// 005387a5: PUSH EAX
//   XREF to: 0063c166 (DATA)
// 005387a6: MOV EAX,0x63c16c
//   XREF to: 0063c16c (DATA)
// 005387ab: PUSH EAX
//   XREF to: 0063c16c (DATA)
// 005387ac: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005387b1: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005387b2: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 005387b7: ADD ESP,0x18
// 005387ba: TEST EAX,EAX
// 005387bc: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 005387c2: PUSH 0x0
// 005387c4: LEA EAX,[ESP + 0x6c4]
//   XREF to: Stack[-0x11c] (DATA)
// 005387cb: PUSH EAX
// 005387cc: PUSH 0x0
// 005387ce: PUSH 0x0
// 005387d0: LEA EAX,[ESP + 0x4cc]
//   XREF to: Stack[-0x320] (DATA)
// 005387d7: PUSH EAX
// 005387d8: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005387dd: ADD ESP,0x14
// 005387e0: LEA EAX,[ESP + 0x6c0]
//   XREF to: Stack[-0x11c] (DATA)
// 005387e7: PUSH EAX
// 005387e8: MOV EAX,0x63c185
//   XREF to: 0063c185 (DATA)
// 005387ed: PUSH EAX
//   XREF to: 0063c185 (DATA)
// 005387ee: LEA EAX,[ESP + 0x4c4]
//   XREF to: Stack[-0x320] (DATA)
// 005387f5: PUSH EAX
// 005387f6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005387fb: ADD ESP,0xc
// 005387fe: LEA EAX,[ESP + 0x6c0]
//   XREF to: Stack[-0x11c] (DATA)
// 00538805: PUSH EAX
// 00538806: PUSH EBP
// 00538807: CALL core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
//   XREF to: 00537f60 (UNCONDITIONAL_CALL)
// 0053880c: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 00538811: PUSH EBP
//   Label: LAB_00538811
// 00538812: CALL core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
//   XREF to: 00538ba0 (UNCONDITIONAL_CALL)
// 00538817: ADD ESP,0x4
// 0053881a: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 0053881f: PUSH EBP
//   Label: LAB_0053881f
// 00538820: CALL core_msnedit.cpp_FUN_005379e0
//   XREF to: 005379e0 (UNCONDITIONAL_CALL)
// 00538825: ADD ESP,0x4
// 00538828: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 0053882d: PUSH EBP
//   Label: LAB_0053882d
// 0053882e: CALL core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0
//   XREF to: 0053ccf0 (UNCONDITIONAL_CALL)
// 00538833: ADD ESP,0x4
// 00538836: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 0053883b: PUSH EBP
//   Label: LAB_0053883b
// 0053883c: CALL core_msnedit.cpp_FUN_0053d3b0
//   XREF to: 0053d3b0 (UNCONDITIONAL_CALL)
// 00538841: ADD ESP,0x4
// 00538844: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538849: MOV EDX,dword ptr [EBP]
//   Label: LAB_00538849
// 0053884c: PUSH EDX
// 0053884d: PUSH 0x63c18c
//   XREF to: 0063c18c (DATA)
// 00538852: PUSH EBP
// 00538853: CALL core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
//   XREF to: 00538f90 (UNCONDITIONAL_CALL)
// 00538858: MOV EBX,EAX
// 0053885a: ADD ESP,0xc
// 0053885d: TEST EAX,EAX
// 0053885f: JL 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538865: PUSH 0x63c1a4
//   XREF to: 0063c1a4 (DATA)
// 0053886a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538870: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00538871: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538876: ADD ESP,0x8
// 00538879: PUSH EBP
// 0053887a: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053887f: ADD ESP,0x4
// 00538882: PUSH 0x63c1b6
//   XREF to: 0063c1b6 (DATA)
// 00538887: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053888d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053888e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538893: ADD ESP,0x8
// 00538896: PUSH EBX
// 00538897: PUSH EBP
// 00538898: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 0053889d: ADD ESP,0x8
// 005388a0: PUSH EBP
// 005388a1: CALL core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
//   XREF to: 0053e220 (UNCONDITIONAL_CALL)
// 005388a6: ADD ESP,0x4
// 005388a9: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 005388ae: MOV EAX,ESP
//   Label: LAB_005388ae
// 005388b0: PUSH EAX
// 005388b1: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005388b6: ADD ESP,0x4
// 005388b9: PUSH 0x0
// 005388bb: PUSH 0x0
// 005388bd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x7dc] (DATA)
// 005388c1: PUSH EAX
// 005388c2: CALL core_msnedit.cpp_FUN_00537330
//   XREF to: 00537330 (UNCONDITIONAL_CALL)
// 005388c7: ADD ESP,0xc
// 005388ca: PUSH 0x1
// 005388cc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7dc] (DATA)
// 005388d0: PUSH EAX
// 005388d1: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 005388d6: ADD ESP,0x8
// 005388d9: PUSH 0x0
// 005388db: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7dc] (DATA)
// 005388df: PUSH EAX
// 005388e0: CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   XREF to: 004a3d90 (UNCONDITIONAL_CALL)
// 005388e5: ADD ESP,0x8
// 005388e8: PUSH 0x0
// 005388ea: PUSH -0x1
// 005388ec: PUSH 0x63c1c3
//   XREF to: 0063c1c3 (DATA)
// 005388f1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x7dc] (DATA)
// 005388f5: PUSH EAX
// 005388f6: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005388fb: ADD ESP,0x10
// 005388fe: PUSH 0x0
// 00538900: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7dc] (DATA)
// 00538904: PUSH EAX
// 00538905: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053890a: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 0053890f: PUSH EBP
//   Label: LAB_0053890f
// 00538910: CALL core_msnedit.cpp_FUN_0053ec80
//   XREF to: 0053ec80 (UNCONDITIONAL_CALL)
// 00538915: ADD ESP,0x4
// 00538918: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 0053891d: PUSH 0x63c1da
//   Label: LAB_0053891d
//   XREF to: 0063c1da (DATA)
// 00538922: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538927: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00538928: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0053892d: ADD ESP,0x8
// 00538930: TEST EAX,EAX
// 00538932: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538938: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x434] (DATA)
// 0053893f: PUSH EAX
// 00538940: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 00538945: ADD ESP,0x4
// 00538948: PUSH 0x63b744
//   XREF to: 0063b744 (DATA)
// 0053894d: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x434] (DATA)
// 00538954: PUSH EAX
// 00538955: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 0053895a: ADD ESP,0x8
// 0053895d: CMP byte ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x434] (READ)
// 00538965: JZ 0x00538a16
//   XREF to: 00538a16 (CONDITIONAL_JUMP)
// 0053896b: PUSH 0x0
//   Label: LAB_0053896b
// 0053896d: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x434] (DATA)
// 00538974: PUSH EAX
// 00538975: PUSH 0x63b750
//   XREF to: 0063b750 (DATA)
// 0053897a: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 00538980: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 00538981: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 00538986: ADD ESP,0x10
// 00538989: TEST EAX,EAX
// 0053898b: JNZ 0x00538a2a
//   XREF to: 00538a2a (CONDITIONAL_JUMP)
// 00538991: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x434] (DATA)
// 00538998: PUSH EAX
// 00538999: PUSH 0x63b756
//   XREF to: 0063b756 (DATA)
// 0053899e: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005389a3: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005389a4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005389a9: ADD ESP,0xc
// 005389ac: PUSH 0x0
// 005389ae: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x434] (DATA)
// 005389b5: PUSH EAX
// 005389b6: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005389bc: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 005389bd: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 005389c2: ADD ESP,0xc
// 005389c5: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x434] (DATA)
// 005389cc: PUSH EAX
// 005389cd: PUSH 0x63b764
//   XREF to: 0063b764 (DATA)
// 005389d2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005389d8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005389d9: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005389de: ADD ESP,0xc
// 005389e1: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x434] (DATA)
// 005389e8: PUSH EAX
// 005389e9: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005389ef: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 005389f0: CALL core_mission.cpp_CDemonMission_save_FUN_00522e30
//   XREF to: 00522e30 (UNCONDITIONAL_CALL)
// 005389f5: ADD ESP,0x8
// 005389f8: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_005389f8
//   XREF to: Stack[-0x434] (DATA)
// 005389ff: PUSH EAX
// 00538a00: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 00538a05: ADD ESP,0x4
// 00538a08: CMP byte ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x434] (READ)
// 00538a10: JNZ 0x0053896b
//   XREF to: 0053896b (CONDITIONAL_JUMP)
// 00538a16: PUSH 0x0
//   Label: LAB_00538a16
// 00538a18: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x434] (DATA)
// 00538a1f: PUSH EAX
// 00538a20: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 00538a25: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 00538a2a: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_00538a2a
//   XREF to: Stack[-0x434] (DATA)
// 00538a31: PUSH EAX
// 00538a32: PUSH 0x63b771
//   XREF to: 0063b771 (DATA)
// 00538a37: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538a3d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538a3e: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00538a43: ADD ESP,0xc
// 00538a46: JMP 0x005389f8
//   XREF to: 005389f8 (UNCONDITIONAL_JUMP)
// 00538a48: PUSH EBP
//   Label: LAB_00538a48
// 00538a49: CALL core_msnedit.cpp_FUN_0053d7b0
//   XREF to: 0053d7b0 (UNCONDITIONAL_CALL)
// 00538a4e: ADD ESP,0x4
// 00538a51: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538a56: LEA EAX,[ESP + 0x5c0]
//   Label: LAB_00538a56
//   XREF to: Stack[-0x21c] (DATA)
// 00538a5d: PUSH EAX
// 00538a5e: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538a64: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00538a65: CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   XREF to: 004a2590 (UNCONDITIONAL_CALL)
// 00538a6a: ADD ESP,0x8
// 00538a6d: LEA EAX,[ESP + 0x5c0]
//   XREF to: Stack[-0x21c] (DATA)
// 00538a74: PUSH EAX
// 00538a75: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538a7b: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538a7c: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00538a81: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
// 00538a86: JBE 0x00538811
//   Label: LAB_00538a86
//   XREF to: 00538811 (CONDITIONAL_JUMP)
// 00538a8c: CMP EAX,0x48
// 00538a8f: JNC 0x00538ab7
//   XREF to: 00538ab7 (CONDITIONAL_JUMP)
// 00538a91: CMP EAX,0x43
// 00538a94: JC 0x0053881f
//   XREF to: 0053881f (CONDITIONAL_JUMP)
// 00538a9a: JBE 0x0053882d
//   XREF to: 0053882d (CONDITIONAL_JUMP)
// 00538aa0: CMP EAX,0x44
// 00538aa3: JBE 0x0053883b
//   XREF to: 0053883b (CONDITIONAL_JUMP)
// 00538aa9: CMP EAX,0x47
// 00538aac: JZ 0x00538849
//   XREF to: 00538849 (CONDITIONAL_JUMP)
// 00538ab2: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538ab7: JBE 0x005388ae
//   Label: LAB_00538ab7
//   XREF to: 005388ae (CONDITIONAL_JUMP)
// 00538abd: CMP EAX,0x55
// 00538ac0: JNC 0x00538ad0
//   XREF to: 00538ad0 (CONDITIONAL_JUMP)
// 00538ac2: CMP EAX,0x53
// 00538ac5: JZ 0x0053890f
//   XREF to: 0053890f (CONDITIONAL_JUMP)
// 00538acb: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538ad0: JBE 0x0053891d
//   Label: LAB_00538ad0
//   XREF to: 0053891d (CONDITIONAL_JUMP)
// 00538ad6: CMP EAX,0x57
// 00538ad9: JC 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538adf: JBE 0x00538a48
//   XREF to: 00538a48 (CONDITIONAL_JUMP)
// 00538ae5: CMP EAX,0x5a
// 00538ae8: JZ 0x00538a56
//   XREF to: 00538a56 (CONDITIONAL_JUMP)
// 00538aee: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538af3: JBE 0x00538615
//   Label: LAB_00538af3
//   XREF to: 00538615 (CONDITIONAL_JUMP)
// 00538af9: CMP EAX,0x36
// 00538afc: JC 0x0053865a
//   XREF to: 0053865a (CONDITIONAL_JUMP)
// 00538b02: JBE 0x005386ad
//   XREF to: 005386ad (CONDITIONAL_JUMP)
// 00538b08: CMP EAX,0x37
// 00538b0b: JBE 0x0053873c
//   XREF to: 0053873c (CONDITIONAL_JUMP)
// 00538b11: CMP EAX,0x38
// 00538b14: JZ 0x00538790
//   XREF to: 00538790 (CONDITIONAL_JUMP)
// 00538b1a: JMP 0x005384ec
//   XREF to: 005384ec (UNCONDITIONAL_JUMP)
// 00538b1f: JBE 0x005385a3
//   Label: LAB_00538b1f
//   XREF to: 005385a3 (CONDITIONAL_JUMP)
// 00538b25: PUSH 0x0
// 00538b27: PUSH 0xf
// 00538b29: MOV EDX,dword ptr [ESP + 0x7d0]
//   XREF to: Stack[-0x14] (READ)
// 00538b30: PUSH EDX
// 00538b31: MOV EAX,0x63c02e
//   XREF to: 0063c02e (PARAM)
// 00538b36: PUSH EAX
//   XREF to: 0063c02e (DATA)
// 00538b37: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538b3d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00538b3e: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00538b43: ADD ESP,0x14
// 00538b46: TEST EAX,EAX
// 00538b48: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538b4e: PUSH 0x0
// 00538b50: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x320] (DATA)
// 00538b57: PUSH EAX
// 00538b58: MOV EAX,0x63c041
//   XREF to: 0063c041 (DATA)
// 00538b5d: PUSH EAX
//   XREF to: 0063c041 (DATA)
// 00538b5e: MOV EAX,0x63c047
//   XREF to: 0063c047 (DATA)
// 00538b63: PUSH EAX
//   XREF to: 0063c047 (DATA)
// 00538b64: MOV EAX,0x63c04e
//   XREF to: 0063c04e (PARAM)
// 00538b69: PUSH EAX
//   XREF to: 0063c04e (DATA)
// 00538b6a: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538b70: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00538b71: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00538b76: ADD ESP,0x18
// 00538b79: TEST EAX,EAX
// 00538b7b: JZ 0x005384ec
//   XREF to: 005384ec (CONDITIONAL_JUMP)
// 00538b81: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x320] (DATA)
// 00538b88: PUSH EAX
// 00538b89: PUSH EBP
// 00538b8a: CALL core_mission.cpp_CDemonMission_FUN_005243a0
//   XREF to: 005243a0 (UNCONDITIONAL_CALL)
// 00538b8f: JMP 0x005384e9
//   XREF to: 005384e9 (UNCONDITIONAL_JUMP)
