// Name: core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
// Address: 005381e0
// Address Range: [[005381e0, 00538b93]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  uint uVar2;
  CPodFile *pCVar3;
  int iVar4;
  char *pcVar5;
  char (*text) [256];
  char *pcVar6;
  int iVar7;
  CPickList local_7dc;
  CFileFinder local_434;
  char local_320 [260];
  char local_21c [256];
  char local_11c [256];
  char (*local_1c) [256];
  char (*local_18) [256];
  char *local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Sec...");
  core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
  core_mission_cpp_CDemonMission_FUN_005248e0(this_ptr);
  remove("$$UNDO$$.TMP");
  core_inivar_cpp_readIniData_FUN_004fbd90();
  local_14 = this_ptr->mission_name;
  local_1c = this_ptr->set_names;
  g_IncludeCommentsWhenWriting = 0;
  local_18 = local_1c;
  do {
    this_ptr->is_in_editor = 1;
    this_ptr->skip_gore_load_flag = 0;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented(R) Mission editor",0,0);
    if (this_ptr->mission_name[0] == '\0') {
      pcVar5 = "No misison loaded";
      pcVar6 = local_21c;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    else {
      _sprintf(local_21c,"Current mission: %s.msn",local_14);
    }
    engine_2d_c_drawText_FUN_00401fd0(local_21c,0,0x16);
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
    if (this_ptr->num_sets < 1) {
      engine_2d_c_drawText_FUN_00401fd0("No sets defined in mission",0,0xfd);
    }
    else {
      iVar4 = 0x113;
      iVar7 = 0;
      engine_2d_c_drawText_FUN_00401fd0("Sets in mission:",0,0xfd);
      text = local_1c;
      if (0 < this_ptr->num_sets) {
        do {
          iVar7 = iVar7 + 1;
          engine_2d_c_drawText_FUN_00401fd0(*text,0,iVar4);
          iVar4 = iVar4 + 0xb;
          text = text + 1;
        } while (iVar7 < this_ptr->num_sets);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar2 < 0x41) {
      if (uVar2 < 0x34) {
        if (uVar2 < 0x32) {
          if ((uVar2 == 0x31) &&
             (iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                (g_CEditorToolsPtr,"Load mission","world",
                                 "*.msn",(int)local_320,0), iVar4 != 0)) {
            core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr,local_320,0);
            core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(this_ptr,1);
          }
        }
        else if (uVar2 < 0x33) {
          if (this_ptr->mission_name[0] == '\0') {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No mission loaded.");
          }
          else {
            _sprintf(local_320,"%s.msn",local_14);
            iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Save mission to %s",local_320);
            if (iVar4 != 0) {
              core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(this_ptr,local_320);
            }
          }
        }
        else {
          iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Enter mission name",local_14,0xf,0);
          if ((iVar4 != 0) &&
             (iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                (g_CEditorToolsPtr,"Enter set name","models",
                                 "*.set",(int)local_320,0), iVar4 != 0)) {
            core_mission_cpp_CDemonMission_createFromSingleSet_FUN_005243a0(this_ptr,local_320);
          }
        }
      }
      else if (uVar2 < 0x35) {
        iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Enter set name to add","models",
                           "*.set",(int)local_320,0);
        if (iVar4 != 0) {
          core_msnedit_cpp_CDemonMission_addSet_FUN_00538d60(this_ptr,local_320);
        }
      }
      else if (uVar2 < 0x36) {
        iVar4 = core_msnedit_cpp_CDemonMission_FUN_00538f90
                          (this_ptr,"Select set to delete.",this_ptr->current_set_index);
        if ((-1 < iVar4) &&
           (iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"This is going to remove set %s from the mission and delete all the actors in the set.",
                               local_18 + iVar4), iVar7 != 0)) {
          core_msnedit_cpp_CDemonMission_removeSet_FUN_00538df0(this_ptr,iVar4);
        }
      }
      else if (uVar2 < 0x37) {
        iVar4 = core_msnedit_cpp_CDemonMission_FUN_00538f90
                          (this_ptr,"Edit actors in which set?",this_ptr->current_set_index)
        ;
        if (-1 < iVar4) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Preparing actors.");
          core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Loading set.");
          core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,iVar4);
          iVar4 = 1;
          while (iVar4 = core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(this_ptr,iVar4)
                , iVar4 == 2) {
            core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(this_ptr,local_320);
            core_msnedit_cpp_CDemonMission_playMission_FUN_00538ba0(this_ptr);
            iVar4 = 0;
          }
        }
      }
      else if (uVar2 < 0x38) {
        iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Precompute lights?");
        if (iVar4 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(g_CDemonSetPtr,-1);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("You must now go into set editor and save!",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        }
      }
      else if ((uVar2 == 0x38) &&
              (iVar4 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                                 (g_CEditorToolsPtr,"Save mission to new name",
                                  "world",0x63c162,(int)local_320), iVar4 != 0)) {
        splitpath(local_320,(char *)0x0,(char *)0x0,local_11c,(char *)0x0)
        ;
        _sprintf(local_320,"%s.msn",local_11c);
        core_msnedit_cpp_CDemonMission_saveWithNewName_FUN_00537f60(this_ptr,local_11c);
      }
    }
    else if (uVar2 < 0x42) {
      core_msnedit_cpp_CDemonMission_playMission_FUN_00538ba0(this_ptr);
    }
    else if (uVar2 < 0x48) {
      if (uVar2 < 0x43) {
        core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(this_ptr);
      }
      else if (uVar2 < 0x44) {
        core_msnedit_cpp_CDemonMission_importActors_FUN_0053ccf0(this_ptr);
      }
      else if (uVar2 < 0x45) {
        core_msnedit_cpp_CDemonMission_FUN_0053d3b0(this_ptr);
      }
      else if ((uVar2 == 0x47) &&
              (iVar4 = core_msnedit_cpp_CDemonMission_FUN_00538f90
                                 (this_ptr,"Edit gore in which set?",
                                  this_ptr->current_set_index), -1 < iVar4)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Preparing actors.");
        core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Loading set.");
        core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,iVar4);
        core_msnedit_cpp_CDemonMission_FUN_0053e220(this_ptr);
      }
    }
    else if (uVar2 < 0x49) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_7dc);
      core_msnedit_cpp_FUN_00537330(&local_7dc.base,0,0);
      shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_7dc,1);
      shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&local_7dc,(char *)0x0);
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_7dc,"Actor class heirarchy.",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_7dc,0);
    }
    else if (uVar2 < 0x55) {
      if (uVar2 == 0x53) {
        core_msnedit_cpp_CDemonMission_FUN_0053ec80(this_ptr);
      }
    }
    else if (uVar2 < 0x56) {
      iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Update ALL mission files to latest version?");
      if (iVar4 != 0) {
        engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_434);
        engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_434,"world\\*.msn");
        while (local_434.filename[0] != '\0') {
          pCVar3 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                             ((CPod *)g_CDemonPodPtr,"world",local_434.filename,(int *)0x0)
          ;
          if (pCVar3 == (CPodFile *)0x0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Loading %s...");
            core_mission_cpp_CDemonMission_load_FUN_00522d90
                      (g_CDemonMissionPtr,local_434.filename,0);
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Saving %s...");
            core_mission_cpp_CDemonMission_save_FUN_00522e30(g_CDemonMissionPtr,local_434.filename);
          }
          else {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Not converting local file %s - it is also in a pod",&local_434);
          }
          engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_434);
        }
        engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_434,0);
      }
    }
    else if (0x56 < uVar2) {
      if (uVar2 < 0x58) {
        core_msnedit_cpp_CDemonMission_FUN_0053d7b0(this_ptr);
      }
      else if (uVar2 == 0x5a) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,local_21c);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(g_CEditorToolsPtr,local_21c);
      }
    }
    if (uVar2 == 0x1b) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Cleaning up...");
      remove("$$UNDO$$.TMP");
      this_ptr_00 = g_CEditorToolsPtr;
      this_ptr->is_in_editor = 0;
      this_ptr->skip_gore_load_flag = 0;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (this_ptr_00,"Deleting actors...");
      core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Freeing models...");
      core_mission_cpp_CDemonMission_FUN_005248e0(this_ptr);
      return;
    }
  } while( true );
}
