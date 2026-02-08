// Name: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// Address: 004baf00
// Address Range: [[004baf00, 004bc2af]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CFileManager_checkInPodFile_FUN_004baf00 (CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file,char *pod_filename)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bbc51) */

int __cdecl
engine_fileio_cpp_CFileManager_checkInPodFile_FUN_004baf00
          (CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file,char *pod_filename)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  int *piVar4;
  _tm *p_Var5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  SFoundFileInfo *pSVar9;
  SFoundFileInfo *pSVar10;
  char *pcVar12;
  byte bVar13;
  char *pcVar14;
  CPodFile local_2600;
  CPickList local_21d4;
  CPickList local_1e2c;
  CPickList local_1a84;
  SFoundFileInfo local_16dc;
  SFoundFileInfo local_14c8;
  SFoundFileInfo local_12b4;
  char local_10a0 [500];
  char local_eac [400];
  char local_d1c [400];
  char local_b8c [260];
  char local_a88 [260];
  char local_984 [260];
  char local_880 [260];
  char local_77c [260];
  char local_678 [260];
  char local_574 [260];
  char local_470 [256];
  char local_370 [256];
  char local_270 [256];
  char local_170 [256];
  CStrList local_70;
  CCheckOutList local_60;
  time_t local_58;
  _FILE *local_54;
  char *local_50;
  int local_4c;
  int local_48;
  _FILE *local_44;
  _FILE *local_40;
  char *local_3c;
  _FILE *local_38;
  _FILE *local_34;
  int local_30;
  int local_2c;
  int local_28;
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [8];
  SFoundFileInfo *pSVar11;
  
  bVar13 = 0;
  iVar2 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,timestamp_file,local_77c,
                     "Select file to check in","*.pod");
  if (iVar2 == 0) {
    return 0;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_2600);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_2600,local_77c);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status",local_77c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
    return 0;
  }
  local_30 = 0;
  if (0 < local_2600.file_count) {
    local_2c = 0;
    do {
      puVar7 = (uint *)((int)&(local_2600.directory_entries)->name_or_offset + local_2c);
      pSVar9 = &local_14c8;
      pcVar8 = (char *)*puVar7;
      do {
        cVar1 = *pcVar8;
        pSVar9->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pSVar9->found_path[1] = cVar1;
        pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
      } while (cVar1 != '\0');
      iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_14c8);
      if ((((iVar2 == 0) || (puVar7[3] + 2 < local_14c8.timestamp)) ||
          (local_14c8.timestamp < puVar7[3] - 2)) || (local_14c8.file_size != puVar7[1])) break;
      local_2c = local_2c + 0x14;
      local_30 = local_30 + 1;
    } while (local_30 < local_2600.file_count);
  }
  if (local_30 != local_2600.file_count) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e2c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base,"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base,"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base,"Show local file differences.");
    _sprintf(local_eac,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)",local_77c);
    while( true ) {
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1e2c,local_eac,1,0);
      if ((iVar2 < 0) || (iVar2 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1e2c,0);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
        return 0;
      }
      if (iVar2 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,local_77c);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1e2c,0);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar2 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,local_77c),
     iVar2 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in",local_77c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
    return 0;
  }
  local_50 = checkout_item_name;
  local_3c = local_77c;
  local_54 = (_FILE *)0x0;
  local_38 = (_FILE *)0x0;
  local_34 = (_FILE *)0x0;
  pcVar8 = g_DefaultCheckOutPath;
  pcVar14 = local_880;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar14 = *(uint *)pcVar8;
    pcVar8 = pcVar8 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar14 = pcVar14 + ((uint)bVar13 * -2 + 1) * 4;
  }
  iVar2 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,local_77c,local_12b4.found_path,
                     "Select file to check in","*");
  if (iVar2 == 0) goto LAB_004bb1fa;
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_12b4);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_12b4);
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,local_20,local_370);
  engine_dosio_c_makePath_FUN_00481f50
            (local_16dc.found_path,local_20,local_370,(char *)0x0,(char *)0x0);
  pSVar9 = &local_12b4;
  iVar2 = -1;
  pSVar11 = &local_16dc;
  do {
    pSVar10 = pSVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pSVar10 = (SFoundFileInfo *)((int)pSVar11 + (uint)bVar13 * -2 + 1);
    pcVar8 = pSVar11->found_path;
    pSVar11 = pSVar10;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)((int)&pSVar10[-1].container_size + 3);
  do {
    cVar1 = pSVar9->found_path[0];
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar9->found_path[1];
    pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_16dc);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_16dc);
    goto LAB_004bb1fa;
  }
  if (((local_12b4.file_size == local_16dc.file_size) &&
      (local_12b4.timestamp < (char *)(local_16dc.timestamp + 2))) &&
     (local_16dc.timestamp < (char *)(local_12b4.timestamp + 2))) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1a84);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a84.base,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1a84.base,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1a84.base,"Oops.  Keep the file checked out.");
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_1a84,"Checking in file that didn't change.",-1,0);
    if ((iVar2 < 0) || (iVar2 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1a84,0);
      goto LAB_004bb1fa;
    }
    if (iVar2 == 0) {
      iVar2 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)checkout_item_name,local_77c,local_a88,
                         "Select file to undo check out","*");
      if ((iVar2 == 0) ||
         (iVar2 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)checkout_item_name,local_a88), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (checkout_item_name,local_a88);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1a84,0);
      if (iVar2 == 0) goto LAB_004bb1fa;
      if (iVar2 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1a84,0);
  }
  local_44 = (_FILE *)shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                (g_CEditorToolsPtr,"Keep %s checked out after updating to network?",&local_12b4);
  pcVar8 = local_3c;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  _sprintf(local_b8c,"history\\%s.%s",pcVar8,"history");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_24,local_170);
  engine_dosio_c_makePath_FUN_00481f50(local_984,local_24,local_170,(char *)0x0,(char *)0x0);
  pcVar8 = local_b8c;
  iVar2 = -1;
  pcVar14 = local_984;
  do {
    pcVar12 = pcVar14;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar12 = pcVar14 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar12;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  local_4c = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(local_3c);
  if (local_4c < 0) goto LAB_004bb1fa;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  local_40 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_12b4.found_path,(char *)0x0,"rb","..\\engine\\fileio.cpp"
                        ,0x567);
  if (local_40 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",&local_12b4);
    goto LAB_004bb1fa;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar2 != 0) goto LAB_004bb723;
    goto LAB_004bb847;
  }
LAB_004bb723:
  _sprintf(local_574,"$$$.%s.$$$",&local_12b4);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(local_50,local_1c,local_270);
  engine_dosio_c_makePath_FUN_00481f50(local_880,local_1c,local_270,(char *)0x0,(char *)0x0);
  pcVar8 = local_574;
  iVar2 = -1;
  pcVar14 = local_880;
  do {
    pcVar12 = pcVar14;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar12 = pcVar14 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar12;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(local_880,0);
  remove(local_880);
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_880,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_38 = p_Var3;
  if (local_40 == (_FILE *)0x0) {
    pcVar8 = local_880;
    pcVar14 = "Can't create %s.\nGet Fletch.";
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar14,pcVar8);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar8 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (local_40,p_Var3,local_12b4.found_path,"network",
                        local_12b4.file_size);
    if (local_40 != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\engine\\fileio.cpp",0xc4);
      local_40 = (_FILE *)0x0;
    }
    if (local_38 != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\engine\\fileio.cpp",0xc4);
      local_38 = (_FILE *)0x0;
    }
    if (pcVar8 != (char *)0x0) {
      pcVar14 = "%s\nGet Fletch.";
      goto LAB_004bb83f;
    }
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_18,local_470);
    engine_dosio_c_makePath_FUN_00481f50(local_678,local_18,local_470,(char *)0x0,(char *)0x0);
    pcVar14 = "checkout.txt";
    iVar2 = -1;
    pcVar8 = local_678;
    do {
      pcVar12 = pcVar8;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar12 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = 0;
    local_60.count = 0;
    local_60.items = (CCheckOutItem *)0x0;
    if (local_44 == (_FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_678,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
        ;
        if (p_Var3 != (_FILE *)0x0) {
          _setvbuf(p_Var3,(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar4 = (int *)_errno();
        if (*piVar4 != 6) break;
        iVar2 = iVar2 + 1;
        (*g_SleepFunc)(500);
      } while (iVar2 < 10);
      p_Var3 = (_FILE *)0x0;
LAB_004bbc40:
      local_54 = p_Var3;
      if (p_Var3 == (_FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",local_678);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        goto LAB_004bb847;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_60,&local_54);
      if (iVar2 != 0) {
        local_48 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                             (&local_60,local_12b4.found_path);
        if (-1 < local_48) goto LAB_004bba53;
        if (local_54 != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
          local_54 = (_FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
    }
    else {
LAB_004bba53:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      iVar2 = 0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(local_16dc.found_path,0);
        remove(local_16dc.found_path);
        iVar6 = rename(local_880,local_16dc.found_path);
        if (iVar6 == 0) break;
        if (0x27 < iVar2) {
          if (local_54 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",local_880,&local_16dc);
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
          goto LAB_004bb847;
        }
        iVar2 = iVar2 + 1;
        if (iVar2 == 1) {
          _sprintf
                    (local_d1c,"Waiting for %s to become available.\nPress ESC to cancel check in.",&local_16dc);
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,local_d1c);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        local_28 = iVar2;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar2,40.0);
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar6 != 0) {
          iVar2 = 0x28;
        }
      }
      if (0 < iVar2) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar2 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (local_16dc.found_path,(char *)local_12b4.timestamp);
      if (iVar2 == 0) {
        if (local_54 != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
          local_54 = (_FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_16dc);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
      }
      else {
        iVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_16dc.found_path,8);
        if (iVar2 == 0) {
          if (local_54 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_16dc);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        }
        else {
          iVar2 = 0;
          do {
            p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_984,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                0x153);
            if (p_Var3 != (_FILE *)0x0) {
              _setvbuf(p_Var3,(char *)0x0,0,0x400);
              goto LAB_004bbb45;
            }
            piVar4 = (int *)_errno();
            if (*piVar4 != 6) break;
            iVar2 = iVar2 + 1;
            (*g_SleepFunc)(500);
          } while (iVar2 < 10);
          p_Var3 = (_FILE *)0x0;
LAB_004bbb45:
          local_34 = p_Var3;
          if (p_Var3 != (_FILE *)0x0) {
            local_58 = time((time_t *)0x0);
            p_Var5 = _localtime(&local_58);
            _fprintf(p_Var3,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_4c + 1,
                       p_Var5->tm_year + 0x76c,p_Var5->tm_mon + 1,p_Var5->tm_mday,p_Var5->tm_hour,
                       p_Var5->tm_min,p_Var5->tm_sec,&g_VersionControlSession);
            _fflush(p_Var3);
            if ((p_Var3->_flag & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\fileio.cpp",0xc4);
              p_Var3 = local_44;
              local_34 = (_FILE *)0x0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if (p_Var3 != (_FILE *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
                return 2;
              }
              iVar2 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(&local_60,local_48);
              if (iVar2 == 0) {
                if (local_54 != (_FILE *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            (local_54,"..\\engine\\fileio.cpp",0xc4);
                  local_54 = p_Var3;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar2 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_60,&local_54);
                if (iVar2 != 0) {
                  if (local_54 != (_FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (local_54,"..\\engine\\fileio.cpp",0xc4);
                    local_54 = (_FILE *)0x0;
                  }
                  iVar2 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,local_12b4.found_path);
                  if (((-1 < iVar2) &&
                      (iVar6 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (local_12b4.found_path,(byte)iVar2 | 8), iVar6 == 0)) ||
                     (iVar2 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",&local_12b4);
                  }
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_70);
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_70)
                  ;
                  iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (this_ptr,&local_70,local_77c);
                  if (iVar2 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_21d4);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base,"Delete local files and mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base,"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base,"Keep files extracted and pod dismounted");
                    _sprintf(local_10a0,"%s checked in",local_77c);
                    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      (&local_21d4,local_10a0,-1,0);
                    if (iVar2 == 0) {
                      iVar6 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (this_ptr,local_77c);
                      if (iVar6 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21d4,0);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0);
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_70,local_77c);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (this_ptr,&local_70);
                    }
                    if ((iVar2 == 1) &&
                       (iVar2 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,local_77c), iVar2 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21d4,0);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_21d4,0);
                  }
                  else {
                    iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar2 != 0) &&
                       (iVar2 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,local_77c), iVar2 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
              goto LAB_004bb847;
            }
          }
          if (local_54 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (_FILE *)0x0;
          }
          if (local_34 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
            local_34 = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",local_984);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        }
      }
    }
  }
LAB_004bb847:
  if (local_54 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
    local_54 = (_FILE *)0x0;
  }
  if (local_38 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_40 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_34 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_880[0] != '\0') {
    remove(local_880);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_2600);
  return 0;
}
