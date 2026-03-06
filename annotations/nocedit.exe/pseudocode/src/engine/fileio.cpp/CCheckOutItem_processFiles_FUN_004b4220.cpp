// Name: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
// Address Range: [[004b4220, 004b502e]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem *this_ptr,int operation_mode,char *filename)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b4aea) */

int __cdecl engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem *this_ptr,int operation_mode,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  int *piVar4;
  _tm *p_Var5;
  int iVar6;
  SFoundFileInfo *pSVar7;
  SFoundFileInfo *pSVar8;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  char *pcVar13;
  CPickList local_13c8;
  SFoundFileInfo local_1020;
  SFoundFileInfo local_e0c;
  char local_bf8 [400];
  char local_a68 [260];
  char local_964 [260];
  char local_860 [260];
  char local_75c [260];
  char local_658 [260];
  char local_554 [260];
  char local_450 [256];
  char local_350 [256];
  char local_250 [256];
  char local_150 [256];
  CCheckOutList local_50;
  _FILE *local_48;
  time_t local_44;
  int local_40;
  int local_3c;
  char *local_38;
  _FILE *local_34;
  int local_30;
  _FILE *local_2c;
  _FILE *local_28;
  _FILE *local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  SFoundFileInfo *pSVar9;
  
  bVar12 = 0;
  pcVar10 = g_DefaultCheckOutPath;
  pcVar13 = local_a68;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pcVar13 = *(uint *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  local_48 = (_FILE *)0x0;
  local_2c = (_FILE *)0x0;
  local_28 = (_FILE *)0x0;
  iVar6 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,local_e0c.found_path,
                     "Select file to check in","*");
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_e0c);
  if (iVar6 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_e0c);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_20,local_250);
  engine_dosio_c_makePath_FUN_00481f50
            (local_1020.found_path,local_20,local_250,(char *)0x0,(char *)0x0);
  pSVar7 = &local_e0c;
  iVar6 = -1;
  pSVar9 = &local_1020;
  do {
    pSVar8 = pSVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pSVar8 = (SFoundFileInfo *)((int)pSVar9 + (uint)bVar12 * -2 + 1);
    pcVar10 = pSVar9->found_path;
    pSVar9 = pSVar8;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)((int)&pSVar8[-1].container_timestamp + 3);
  do {
    cVar1 = pSVar7->found_path[0];
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar7->found_path[1];
    pSVar7 = (SFoundFileInfo *)(pSVar7->found_path + 2);
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  iVar6 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_1020);
  if (iVar6 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_1020);
    return 0;
  }
  if (((local_e0c.file_size == local_1020.file_size) &&
      (local_e0c.timestamp < (char *)(local_1020.timestamp + 2))) &&
     (local_1020.timestamp < (char *)(local_e0c.timestamp + 2))) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_13c8);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_13c8.base,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_13c8.base,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_13c8.base,"Oops.  Keep the file checked out.");
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_13c8,"Checking in file that didn't change.",-1,0);
    if ((iVar6 < 0) || (iVar6 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_13c8,0);
      return 0;
    }
    if (iVar6 == 0) {
      iVar6 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr,(char *)operation_mode,local_658,
                         "Select file to undo check out","*");
      if ((iVar6 == 0) ||
         (iVar6 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            (this_ptr,local_658), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(this_ptr->name,local_658)
        ;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_13c8,0);
      return iVar6;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_13c8,0);
  }
  local_34 = (_FILE *)shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                (g_CEditorToolsPtr,"Keep %s checked out after updating to network?",&local_e0c);
  local_38 = "history";
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  _sprintf(local_75c,"history\\%s.%s",operation_mode,local_38);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_1c,local_150);
  engine_dosio_c_makePath_FUN_00481f50(local_964,local_1c,local_150,(char *)0x0,(char *)0x0);
  pcVar10 = local_75c;
  iVar6 = -1;
  pcVar13 = local_964;
  do {
    pcVar11 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar11 = pcVar13 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar11;
  } while (cVar1 != '\0');
  pcVar11 = pcVar11 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  local_3c = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640((char *)operation_mode);
  if (local_3c < 0) {
    return 0;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  local_24 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_e0c.found_path,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                        0x567);
  if (local_24 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",&local_e0c);
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar6 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar6 == 0) goto LAB_004b4768;
  }
  _sprintf(local_554,"$$$.%s.$$$",&local_e0c);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_14,local_450);
  engine_dosio_c_makePath_FUN_00481f50(local_a68,local_14,local_450,(char *)0x0,(char *)0x0);
  pcVar10 = local_554;
  iVar6 = -1;
  pcVar13 = local_a68;
  do {
    pcVar11 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar11 = pcVar13 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar11;
  } while (cVar1 != '\0');
  pcVar11 = pcVar11 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(local_a68,0);
  remove(local_a68);
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_a68,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_2c = p_Var2;
  if (local_24 == (_FILE *)0x0) {
    pcVar10 = local_a68;
    pcVar13 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar10 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                        (local_24,p_Var2,local_e0c.found_path,"network",local_e0c.file_size
                        );
    if (local_24 != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\engine\\fileio.cpp",0xc4);
      local_24 = (_FILE *)0x0;
    }
    if (local_2c != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\engine\\fileio.cpp",0xc4);
      local_2c = (_FILE *)0x0;
    }
    if (pcVar10 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_18,local_350);
      engine_dosio_c_makePath_FUN_00481f50(local_860,local_18,local_350,(char *)0x0,(char *)0x0);
      pcVar13 = "checkout.txt";
      iVar6 = -1;
      pcVar10 = local_860;
      do {
        pcVar11 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      iVar6 = 0;
      local_50.count = 0;
      local_50.items = (CCheckOutItem *)0x0;
      if (local_34 == (_FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_860,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                              0x153);
          if (p_Var2 != (_FILE *)0x0) {
            _setvbuf(p_Var2,(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar4 = (int *)_errno();
          if (*piVar4 != 6) break;
          iVar6 = iVar6 + 1;
          (*g_SleepFunc)(500);
        } while (iVar6 < 10);
        p_Var2 = (_FILE *)0x0;
LAB_004b4ad9:
        local_48 = p_Var2;
        if (p_Var2 == (_FILE *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",local_860);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          goto LAB_004b4768;
        }
        iVar6 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_50,&local_48);
        if (iVar6 != 0) {
          local_40 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                               (&local_50,local_e0c.found_path);
          if (-1 < local_40) goto LAB_004b4980;
          if (local_48 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
            local_48 = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
      }
      else {
LAB_004b4980:
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finalizing %s to network...");
        engine_2d_c_clearInputAndWait_FUN_00403260();
        iVar6 = 0;
        while( true ) {
          engine_dosio_c_setFileAttributes_FUN_004819f0(local_1020.found_path,0);
          remove(local_1020.found_path);
          iVar3 = rename(local_a68,local_1020.found_path);
          if (iVar3 == 0) break;
          if (0x27 < iVar6) {
            if (local_48 != (_FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (_FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",local_a68,&local_1020);
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
            goto LAB_004b4768;
          }
          iVar6 = iVar6 + 1;
          if (iVar6 == 1) {
            _sprintf
                      (local_bf8,"Waiting for %s to become available.\nPress ESC to cancel check in.",&local_1020);
            shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                      (g_CEditorToolsPtr,local_bf8);
          }
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
          local_30 = iVar6;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)iVar6,40.0);
          iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
          if (iVar3 != 0) {
            iVar6 = 0x28;
          }
        }
        if (0 < iVar6) {
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        }
        iVar6 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                          (local_1020.found_path,(char *)local_e0c.timestamp);
        if (iVar6 == 0) {
          if (local_48 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
            local_48 = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_1020);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
        }
        else {
          iVar6 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_1020.found_path,8);
          if (iVar6 == 0) {
            if (local_48 != (_FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (_FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_1020);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          }
          else {
            iVar6 = 0;
            do {
              p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                 (local_964,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                  0x153);
              if (p_Var2 != (_FILE *)0x0) {
                _setvbuf(p_Var2,(char *)0x0,0,0x400);
                goto LAB_004b4d50;
              }
              piVar4 = (int *)_errno();
              if (*piVar4 != 6) break;
              iVar6 = iVar6 + 1;
              (*g_SleepFunc)(500);
            } while (iVar6 < 10);
            p_Var2 = (_FILE *)0x0;
LAB_004b4d50:
            local_28 = p_Var2;
            if (p_Var2 != (_FILE *)0x0) {
              local_44 = _time((int *)0x0);
              p_Var5 = _localtime(&local_44);
              _fprintf(p_Var2,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_3c + 1,
                         p_Var5->tm_year + 0x76c,p_Var5->tm_mon + 1,p_Var5->tm_mday,p_Var5->tm_hour,
                         p_Var5->tm_min,p_Var5->tm_sec,&g_VersionControlSession);
              _fflush(p_Var2);
              if ((p_Var2->_flag & 0x20) == 0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\engine\\fileio.cpp",0xc4);
                p_Var2 = local_34;
                local_28 = (_FILE *)0x0;
                engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
                if (p_Var2 != (_FILE *)0x0) {
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
                  return 2;
                }
                iVar6 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(&local_50,local_40);
                if (iVar6 == 0) {
                  if (local_48 != (_FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (local_48,"..\\engine\\fileio.cpp",0xc4);
                    local_48 = p_Var2;
                  }
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
                }
                else {
                  iVar6 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_50,&local_48);
                  if (iVar6 != 0) {
                    if (local_48 != (_FILE *)0x0) {
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (local_48,"..\\engine\\fileio.cpp",0xc4);
                      local_48 = (_FILE *)0x0;
                    }
                    iVar6 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                      ((char *)0x0,local_e0c.found_path);
                    if (((-1 < iVar6) &&
                        (iVar3 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                           (local_e0c.found_path,(byte)iVar6 | 8), iVar3 == 0)) ||
                       (iVar6 < 0)) {
                      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                                (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",&local_e0c);
                    }
                    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
                    return 1;
                  }
                }
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
                goto LAB_004b4768;
              }
            }
            if (local_48 != (_FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (_FILE *)0x0;
            }
            if (local_28 != (_FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\engine\\fileio.cpp",0xc4);
              local_28 = (_FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",local_964);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          }
        }
      }
      goto LAB_004b4768;
    }
    pcVar13 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar13,pcVar10);
LAB_004b4768:
  if (local_48 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\engine\\fileio.cpp",0xc4);
    local_48 = (_FILE *)0x0;
  }
  if (local_2c != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_24 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_28 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_a68[0] != '\0') {
    remove(local_a68);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
