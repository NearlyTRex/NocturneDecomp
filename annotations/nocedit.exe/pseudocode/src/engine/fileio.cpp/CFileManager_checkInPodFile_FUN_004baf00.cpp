// Name: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// Address: 004baf00
// Address Range: [[004baf00, 004bc2af]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00(CFileManager * this_ptr, char * checkout_item_name, char * timestamp_file, char * pod_filename)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bbc51) */

int __cdecl
engine_fileio_cpp_CFileManager_checkInPodFile_FUN_004baf00
          (CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  undefined3 extraout_var;
  int *piVar5;
  tm *ptVar6;
  undefined3 extraout_var_00;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  SFoundFileInfo *pSVar10;
  SFoundFileInfo *pSVar11;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;
  uint in_stack_ffffda00;
  uint in_stack_ffffda04;
  uint in_stack_ffffda08;
  uint in_stack_ffffda0c;
  uint in_stack_ffffda10;
  int local_21f0;
  CPodDirectoryEntry *local_21ec;
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
  FILE *local_54;
  char *local_50;
  int local_4c;
  int local_48;
  FILE *local_44;
  FILE *local_40;
  char *local_3c;
  FILE *local_38;
  FILE *local_34;
  int local_30;
  int local_2c;
  int local_28;
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [8];
  SFoundFileInfo *pSVar12;
  
  bVar14 = 0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,timestamp_file,local_77c,
                     "Select file to check in","*.pod");
  if (iVar3 == 0) {
    return 0;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffda00);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xffffda00,local_77c)
  ;
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status",local_77c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
    return 0;
  }
  local_30 = 0;
  if (0 < local_21f0) {
    local_2c = 0;
    do {
      puVar8 = (uint *)((int)&local_21ec->name_or_offset + local_2c);
      pSVar10 = &local_14c8;
      pcVar9 = (char *)*puVar8;
      do {
        cVar1 = *pcVar9;
        pSVar10->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pSVar10->found_path[1] = cVar1;
        pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_14c8);
      if ((((iVar3 == 0) || (puVar8[3] + 2 < local_14c8.timestamp)) ||
          (local_14c8.timestamp < puVar8[3] - 2)) || (local_14c8.file_size != puVar8[1])) break;
      local_2c = local_2c + 0x14;
      local_30 = local_30 + 1;
    } while (local_30 < local_21f0);
  }
  if (local_30 != local_21f0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e2c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base_strlist,"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base_strlist,"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1e2c.base_strlist,"Show local file differences.");
    crt_stdio_c_sprintf_FUN_005fdbd0(local_eac,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)",local_77c);
    while( true ) {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1e2c,local_eac,1,0);
      if ((iVar3 < 0) || (iVar3 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_1e2c,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,
                   in_stack_ffffda0c,in_stack_ffffda10);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
        return 0;
      }
      if (iVar3 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,local_77c);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1e2c,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c
               ,in_stack_ffffda10);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,local_77c),
     iVar3 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in",local_77c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
    return 0;
  }
  local_50 = checkout_item_name;
  local_3c = local_77c;
  local_54 = (FILE *)0x0;
  local_38 = (FILE *)0x0;
  local_34 = (FILE *)0x0;
  pcVar9 = g_DefaultCheckOutPath;
  pcVar15 = local_880;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar15 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
    pcVar15 = pcVar15 + ((uint)bVar14 * -2 + 1) * 4;
  }
  iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,local_77c,local_12b4.found_path,
                     "Select file to check in","*");
  if (iVar3 == 0) goto LAB_004bb1fa;
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_12b4);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_12b4);
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,local_20,local_370);
  engine_dosio_c_makePath_FUN_00481f50
            (local_16dc.found_path,local_20,local_370,(char *)0x0,(char *)0x0);
  pSVar10 = &local_12b4;
  iVar3 = -1;
  pSVar12 = &local_16dc;
  do {
    pSVar11 = pSVar12;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pSVar11 = (SFoundFileInfo *)((int)pSVar12 + (uint)bVar14 * -2 + 1);
    pcVar9 = pSVar12->found_path;
    pSVar12 = pSVar11;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)((int)&pSVar11[-1].container_size + 3);
  do {
    cVar1 = pSVar10->found_path[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar10->found_path[1];
    pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_16dc);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&local_16dc);
    goto LAB_004bb1fa;
  }
  if (((local_12b4.file_size == local_16dc.file_size) &&
      (local_12b4.timestamp < (char *)(local_16dc.timestamp + 2))) &&
     (local_16dc.timestamp < (char *)(local_12b4.timestamp + 2))) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1a84);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1a84.base_strlist,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1a84.base_strlist,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_1a84.base_strlist,"Oops.  Keep the file checked out.");
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_1a84,"Checking in file that didn't change.",-1,0);
    if ((iVar3 < 0) || (iVar3 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1a84,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,
                 in_stack_ffffda0c,in_stack_ffffda10);
      goto LAB_004bb1fa;
    }
    if (iVar3 == 0) {
      iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)checkout_item_name,local_77c,local_a88,
                         "Select file to undo check out","*");
      if ((iVar3 == 0) ||
         (iVar3 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)checkout_item_name,local_a88), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (checkout_item_name,local_a88);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1a84,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,
                 in_stack_ffffda0c,in_stack_ffffda10);
      if (iVar3 == 0) goto LAB_004bb1fa;
      if (iVar3 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1a84,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c
               ,in_stack_ffffda10);
  }
  local_44 = (FILE *)shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                               (g_CEditorToolsPtr,"Keep %s checked out after updating to network?",&local_12b4);
  pcVar9 = local_3c;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_b8c,"history\\%s.%s",pcVar9,"history");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_24,local_170);
  engine_dosio_c_makePath_FUN_00481f50(local_984,local_24,local_170,(char *)0x0,(char *)0x0);
  pcVar9 = local_b8c;
  iVar3 = -1;
  pcVar15 = local_984;
  do {
    pcVar13 = pcVar15;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar13 = pcVar15 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
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
  if (local_40 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",&local_12b4);
    goto LAB_004bb1fa;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar3 != 0) goto LAB_004bb723;
    goto LAB_004bb847;
  }
LAB_004bb723:
  crt_stdio_c_sprintf_FUN_005fdbd0(local_574,"$$$.%s.$$$",&local_12b4);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(local_50,local_1c,local_270);
  engine_dosio_c_makePath_FUN_00481f50(local_880,local_1c,local_270,(char *)0x0,(char *)0x0);
  pcVar9 = local_574;
  iVar3 = -1;
  pcVar15 = local_880;
  do {
    pcVar13 = pcVar15;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar13 = pcVar15 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(local_880,0);
  crt_io_c_deleteFile_FUN_005ff9d0(local_880);
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_880,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_38 = pFVar4;
  if (local_40 == (FILE *)0x0) {
    pcVar9 = local_880;
    pcVar15 = "Can't create %s.\nGet Fletch.";
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar15,pcVar9);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar9 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (local_40,pFVar4,local_12b4.found_path,"network",
                        local_12b4.file_size);
    if (local_40 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\engine\\fileio.cpp",0xc4);
      local_40 = (FILE *)0x0;
    }
    if (local_38 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\engine\\fileio.cpp",0xc4);
      local_38 = (FILE *)0x0;
    }
    if (pcVar9 != (char *)0x0) {
      pcVar15 = "%s\nGet Fletch.";
      goto LAB_004bb83f;
    }
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_18,local_470);
    engine_dosio_c_makePath_FUN_00481f50(local_678,local_18,local_470,(char *)0x0,(char *)0x0);
    pcVar15 = "checkout.txt";
    iVar3 = -1;
    pcVar9 = local_678;
    do {
      pcVar13 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar13 = pcVar9 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
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
    iVar3 = 0;
    local_60.count = 0;
    local_60.items = (CCheckOutItem *)0x0;
    if (local_44 == (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_678,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
        ;
        if (pFVar4 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar4,(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar5 != 6) break;
        iVar3 = iVar3 + 1;
        (*g_SleepFunc)(500);
      } while (iVar3 < 10);
      pFVar4 = (FILE *)0x0;
LAB_004bbc40:
      local_54 = pFVar4;
      if (pFVar4 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",local_678);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        goto LAB_004bb847;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_60,&local_54);
      if (iVar3 != 0) {
        local_48 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                             (&local_60,local_12b4.found_path);
        if (-1 < local_48) goto LAB_004bba53;
        if (local_54 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
          local_54 = (FILE *)0x0;
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
      iVar3 = 0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(local_16dc.found_path,0);
        crt_io_c_deleteFile_FUN_005ff9d0(local_16dc.found_path);
        iVar7 = crt_stdio_c_rename_FUN_006015d0(local_880,local_16dc.found_path);
        if (iVar7 == 0) break;
        if (0x27 < iVar3) {
          if (local_54 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",local_880,&local_16dc);
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
          goto LAB_004bb847;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_d1c,"Waiting for %s to become available.\nPress ESC to cancel check in.",&local_16dc);
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,local_d1c);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        local_28 = iVar3;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar3,40.0);
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar7 != 0) {
          iVar3 = 0x28;
        }
      }
      if (0 < iVar3) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (local_16dc.found_path,(char *)local_12b4.timestamp);
      if (iVar3 == 0) {
        if (local_54 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
          local_54 = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_16dc);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
      }
      else {
        bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_16dc.found_path,8);
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
          if (local_54 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&local_16dc);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        }
        else {
          iVar3 = 0;
          do {
            pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_984,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                0x153);
            if (pFVar4 != (FILE *)0x0) {
              crt_stdio_c_setvbuf_FUN_00601490(pFVar4,(char *)0x0,0,0x400);
              goto LAB_004bbb45;
            }
            piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
            if (*piVar5 != 6) break;
            iVar3 = iVar3 + 1;
            (*g_SleepFunc)(500);
          } while (iVar3 < 10);
          pFVar4 = (FILE *)0x0;
LAB_004bbb45:
          local_34 = pFVar4;
          if (pFVar4 != (FILE *)0x0) {
            local_58 = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
            ptVar6 = crt_time_c_localtime_FUN_00600288(&local_58);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar4,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_4c + 1,
                       ptVar6->tm_year + 0x76c,ptVar6->tm_mon + 1,ptVar6->tm_mday,ptVar6->tm_hour,
                       ptVar6->tm_min,ptVar6->tm_sec,&g_VersionControlSession);
            crt_stdio_c_fflush_FUN_00601540(pFVar4);
            if ((pFVar4->_flag & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\fileio.cpp",0xc4);
              pFVar4 = local_44;
              local_34 = (FILE *)0x0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if (pFVar4 != (FILE *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
                return 2;
              }
              iVar3 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(&local_60,local_48);
              if (iVar3 == 0) {
                if (local_54 != (FILE *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            (local_54,"..\\engine\\fileio.cpp",0xc4);
                  local_54 = pFVar4;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_60,&local_54);
                if (iVar3 != 0) {
                  if (local_54 != (FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (local_54,"..\\engine\\fileio.cpp",0xc4);
                    local_54 = (FILE *)0x0;
                  }
                  iVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,local_12b4.found_path);
                  if (((-1 < iVar3) &&
                      (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (local_12b4.found_path,(byte)iVar3 | 8),
                      CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar3 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",&local_12b4);
                  }
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_70);
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_70)
                  ;
                  iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (this_ptr,&local_70,local_77c);
                  if (iVar3 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_21d4);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base_strlist,"Delete local files and mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base_strlist,"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&local_21d4.base_strlist,"Keep files extracted and pod dismounted");
                    crt_stdio_c_sprintf_FUN_005fdbd0(local_10a0,"%s checked in",local_77c);
                    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      (&local_21d4,local_10a0,-1,0);
                    if (iVar3 == 0) {
                      iVar7 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (this_ptr,local_77c);
                      if (iVar7 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&local_21d4,0,in_stack_ffffda00,in_stack_ffffda04,
                                   in_stack_ffffda08,in_stack_ffffda0c,in_stack_ffffda10);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0,in_stack_ffffda00)
                        ;
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_70,local_77c);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (this_ptr,&local_70);
                    }
                    if ((iVar3 == 1) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,local_77c), iVar3 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_21d4,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08
                                 ,in_stack_ffffda0c,in_stack_ffffda10);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0,in_stack_ffffda00);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&local_21d4,0,in_stack_ffffda00,in_stack_ffffda04,in_stack_ffffda08,
                               in_stack_ffffda0c,in_stack_ffffda10);
                  }
                  else {
                    iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar3 != 0) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,local_77c), iVar3 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0,in_stack_ffffda00);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_70,0,in_stack_ffffda00);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
              goto LAB_004bb847;
            }
          }
          if (local_54 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
            local_54 = (FILE *)0x0;
          }
          if (local_34 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
            local_34 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",local_984);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_60);
        }
      }
    }
  }
LAB_004bb847:
  if (local_54 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_54,"..\\engine\\fileio.cpp",0xc4);
    local_54 = (FILE *)0x0;
  }
  if (local_38 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_40 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_34 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_880[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(local_880);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda00);
  return 0;
}
