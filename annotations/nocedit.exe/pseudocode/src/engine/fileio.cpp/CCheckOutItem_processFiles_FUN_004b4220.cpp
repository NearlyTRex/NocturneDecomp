// Name: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
// Address Range: [[004b4220, 004b502e]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem * this_ptr, int operation_mode, char * filename)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b4aea) */

int __cdecl
engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220
          (CCheckOutItem *this_ptr,int operation_mode,char *filename)

{
  char cVar1;
  bool bVar2;
  FILE *pFVar3;
  int iVar4;
  CCheckOutItem *pCVar5;
  undefined3 extraout_var;
  int *piVar6;
  tm *ptVar7;
  undefined3 extraout_var_00;
  int iVar8;
  BADSPACEBASE *in_ESP;
  SFoundFileInfo *pSVar9;
  SFoundFileInfo *pSVar10;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;
  uint in_stack_ffffec38;
  uint in_stack_ffffec3c;
  char **in_stack_ffffec40;
  CStrList_vtable *in_stack_ffffec44;
  uint in_stack_ffffec48;
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
  byte local_50 [8];
  CCheckOutItem *local_48;
  time_t local_44;
  int local_40;
  int local_3c;
  char *local_38;
  CCheckOutItem *local_34;
  int local_30;
  FILE *local_2c;
  FILE *local_28;
  FILE *local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  SFoundFileInfo *pSVar11;
  
  bVar14 = 0;
  pcVar12 = g_DefaultCheckOutPath;
  pcVar15 = local_a68;
  for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pcVar15 = *(uint *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar15 = pcVar15 + 4;
  }
  local_48 = (CCheckOutItem *)0x0;
  local_2c = (FILE *)0x0;
  local_28 = (FILE *)0x0;
  iVar8 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,local_e0c.found_path,
                     "Select file to check in","*");
  if (iVar8 == 0) {
    return 0;
  }
  iVar8 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_e0c);
  if (iVar8 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_e0c);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_20,local_250);
  engine_dosio_c_makePath_FUN_00481f50
            (local_1020.found_path,local_20,local_250,(char *)0x0,(char *)0x0);
  pSVar9 = &local_e0c;
  iVar8 = -1;
  pSVar11 = &local_1020;
  do {
    pSVar10 = pSVar11;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pSVar10 = (SFoundFileInfo *)((int)pSVar11 + (uint)bVar14 * -2 + 1);
    pcVar12 = pSVar11->found_path;
    pSVar11 = pSVar10;
  } while (*pcVar12 != '\0');
  pcVar12 = (char *)((int)&pSVar10[-1].container_size + 3);
  do {
    cVar1 = pSVar9->found_path[0];
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar9->found_path[1];
    pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  iVar8 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_1020);
  if (iVar8 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_1020);
    return 0;
  }
  if (((local_e0c.file_size == local_1020.file_size) &&
      (local_e0c.timestamp < (char *)(local_1020.timestamp + 2))) &&
     (local_1020.timestamp < (char *)(local_e0c.timestamp + 2))) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffec38);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec38,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec38,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec38,"Oops.  Keep the file checked out.");
    iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xffffec38,"Checking in file that didn't change.",-1,0);
    if ((iVar8 < 0) || (iVar8 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec38,0,in_stack_ffffec38,in_stack_ffffec3c,
                 (uint)in_stack_ffffec40,(uint)in_stack_ffffec44,in_stack_ffffec48);
      return 0;
    }
    if (iVar8 == 0) {
      iVar8 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr,(char *)operation_mode,local_658,
                         "Select file to undo check out","*");
      if ((iVar8 == 0) ||
         (iVar8 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            (this_ptr,local_658), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(this_ptr->name,local_658)
        ;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec38,0,in_stack_ffffec38,in_stack_ffffec3c,
                 (uint)in_stack_ffffec40,(uint)in_stack_ffffec44,in_stack_ffffec48);
      return iVar8;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffec38,0,in_stack_ffffec38,in_stack_ffffec3c,
               (uint)in_stack_ffffec40,(uint)in_stack_ffffec44,in_stack_ffffec48);
  }
  local_34 = (CCheckOutItem *)
             shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Keep %s checked out after updating to network?",&local_e0c);
  local_38 = "history";
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_75c,"history\\%s.%s",operation_mode,local_38);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_1c,local_150);
  engine_dosio_c_makePath_FUN_00481f50(local_964,local_1c,local_150,(char *)0x0,(char *)0x0);
  pcVar12 = local_75c;
  iVar8 = -1;
  pcVar15 = local_964;
  do {
    pcVar13 = pcVar15;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar15 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
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
  if (local_24 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",&local_e0c);
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar8 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar8 == 0) goto LAB_004b4768;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_554,"$$$.%s.$$$",&local_e0c);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_14,local_450);
  engine_dosio_c_makePath_FUN_00481f50(local_a68,local_14,local_450,(char *)0x0,(char *)0x0);
  pcVar12 = local_554;
  iVar8 = -1;
  pcVar15 = local_a68;
  do {
    pcVar13 = pcVar15;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar15 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(local_a68,0);
  crt_io_c_deleteFile_FUN_005ff9d0(local_a68);
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_a68,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_2c = pFVar3;
  if (local_24 == (FILE *)0x0) {
    pcVar12 = local_a68;
    pcVar15 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar12 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                        (local_24,pFVar3,local_e0c.found_path,"network",local_e0c.file_size
                        );
    if (local_24 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\engine\\fileio.cpp",0xc4);
      local_24 = (FILE *)0x0;
    }
    if (local_2c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\engine\\fileio.cpp",0xc4);
      local_2c = (FILE *)0x0;
    }
    if (pcVar12 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_18,local_350);
      engine_dosio_c_makePath_FUN_00481f50(local_860,local_18,local_350,(char *)0x0,(char *)0x0);
      pcVar15 = "checkout.txt";
      iVar8 = -1;
      pcVar12 = local_860;
      do {
        pcVar13 = pcVar12;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar13 = pcVar12 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar15;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      iVar8 = 0;
      local_50._0_4_ = 0;
      local_50._4_4_ = (CCheckOutItem *)0x0;
      if (local_34 == (CCheckOutItem *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          pCVar5 = (CCheckOutItem *)
                   shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_860,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                              0x153);
          if (pCVar5 != (CCheckOutItem *)0x0) {
            crt_stdio_c_setvbuf_FUN_00601490((FILE *)pCVar5,(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
          if (*piVar6 != 6) break;
          iVar8 = iVar8 + 1;
          (*Sleep)(500);
        } while (iVar8 < 10);
        pCVar5 = (CCheckOutItem *)0x0;
LAB_004b4ad9:
        local_48 = pCVar5;
        if (pCVar5 == (CCheckOutItem *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",local_860);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
          goto LAB_004b4768;
        }
        iVar8 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                          ((CCheckOutList *)local_50,(FILE **)&local_48);
        if (iVar8 != 0) {
          local_40 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                               ((CCheckOutList *)local_50,local_e0c.found_path);
          if (-1 < local_40) goto LAB_004b4980;
          if (local_48 != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
            local_48 = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
      }
      else {
LAB_004b4980:
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finalizing %s to network...");
        engine_2d_c_clearInputAndWait_FUN_00403260();
        iVar8 = 0;
        while( true ) {
          engine_dosio_c_setFileAttributes_FUN_004819f0(local_1020.found_path,0);
          crt_io_c_deleteFile_FUN_005ff9d0(local_1020.found_path);
          iVar4 = crt_stdio_c_rename_FUN_006015d0(local_a68,local_1020.found_path);
          if (iVar4 == 0) break;
          if (0x27 < iVar8) {
            if (local_48 != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (CCheckOutItem *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",local_a68,&local_1020);
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
            goto LAB_004b4768;
          }
          iVar8 = iVar8 + 1;
          if (iVar8 == 1) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (local_bf8,"Waiting for %s to become available.\nPress ESC to cancel check in.",&local_1020);
            shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                      (g_CEditorToolsPtr,local_bf8);
          }
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
          local_30 = iVar8;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)iVar8,40.0);
          iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
          if (iVar4 != 0) {
            iVar8 = 0x28;
          }
        }
        if (0 < iVar8) {
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        }
        iVar8 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                          (local_1020.found_path,(char *)local_e0c.timestamp);
        if (iVar8 == 0) {
          if (local_48 != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
            local_48 = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_1020);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
        }
        else {
          bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_1020.found_path,8);
          if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
            if (local_48 != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (CCheckOutItem *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_1020);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
          }
          else {
            iVar8 = 0;
            do {
              pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                 (local_964,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                  0x153);
              if (pFVar3 != (FILE *)0x0) {
                crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
                goto LAB_004b4d50;
              }
              piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
              if (*piVar6 != 6) break;
              iVar8 = iVar8 + 1;
              (*Sleep)(500);
            } while (iVar8 < 10);
            pFVar3 = (FILE *)0x0;
LAB_004b4d50:
            local_28 = pFVar3;
            if (pFVar3 != (FILE *)0x0) {
              local_44 = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
              ptVar7 = crt_time_c_localtime_FUN_00600288(&local_44);
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar3,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_3c + 1,
                         ptVar7->tm_year + 0x76c,ptVar7->tm_mon + 1,ptVar7->tm_mday,ptVar7->tm_hour,
                         ptVar7->tm_min,ptVar7->tm_sec,&g_VersionControlSession);
              crt_stdio_c_fflush_FUN_00601540(pFVar3);
              if ((pFVar3->_flag & 0x20) == 0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\fileio.cpp",0xc4);
                pCVar5 = local_34;
                local_28 = (FILE *)0x0;
                engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
                if (pCVar5 != (CCheckOutItem *)0x0) {
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                            ((CCheckOutList *)(local_50 + 4));
                  return 2;
                }
                iVar8 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                  ((CCheckOutList *)(local_50 + 4),local_3c);
                if (iVar8 == 0) {
                  if (local_48 != (CCheckOutItem *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
                    local_48 = pCVar5;
                  }
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
                }
                else {
                  iVar8 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                    ((CCheckOutList *)local_50,(FILE **)&local_48);
                  if (iVar8 != 0) {
                    if (local_48 != (CCheckOutItem *)0x0) {
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
                      local_48 = (CCheckOutItem *)0x0;
                    }
                    iVar8 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                      ((char *)0x0,local_e0c.found_path);
                    if (((-1 < iVar8) &&
                        (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                           (local_e0c.found_path,(byte)iVar8 | 8),
                        CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar8 < 0)) {
                      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                                (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",&local_e0c);
                    }
                    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
                    return 1;
                  }
                }
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
                goto LAB_004b4768;
              }
            }
            if (local_48 != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
              local_48 = (CCheckOutItem *)0x0;
            }
            if (local_28 != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\engine\\fileio.cpp",0xc4);
              local_28 = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",local_964);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_50);
          }
        }
      }
      goto LAB_004b4768;
    }
    pcVar15 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar15,pcVar12);
LAB_004b4768:
  if (local_48 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_48,"..\\engine\\fileio.cpp",0xc4);
    local_48 = (CCheckOutItem *)0x0;
  }
  if (local_2c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_24 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_28 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_a68[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(local_a68);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
