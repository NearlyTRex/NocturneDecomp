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
  uint in_stack_ffffda04;
  uint in_stack_ffffda08;
  uint in_stack_ffffda0c;
  uint in_stack_ffffda10;
  uint in_stack_ffffda14;
  int local_21ec;
  CPodDirectoryEntry *pCStack_21e8;
  CPickList CStack_21d0;
  CPickList CStack_1e28;
  CPickList CStack_1a80;
  SFoundFileInfo SStack_16d8;
  SFoundFileInfo SStack_14c4;
  SFoundFileInfo SStack_12b0;
  char acStack_109c [500];
  char acStack_ea8 [400];
  char acStack_d18 [400];
  char acStack_b88 [260];
  char acStack_a84 [260];
  char acStack_980 [260];
  char acStack_87c [260];
  char acStack_778 [260];
  char acStack_674 [260];
  char acStack_570 [260];
  char acStack_46c [256];
  char acStack_36c [256];
  char acStack_26c [256];
  char acStack_16c [256];
  CStrList CStack_6c;
  CCheckOutList local_5c;
  time_t local_54;
  FILE *local_50;
  char *local_4c;
  int local_48;
  int local_44;
  FILE *local_40;
  FILE *local_3c;
  char *local_38;
  FILE *local_34;
  FILE *local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char acStack_14 [4];
  SFoundFileInfo *pSVar12;
  
  bVar14 = 0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,timestamp_file,acStack_778,
                     "Select file to check in","*.pod");
  if (iVar3 == 0) {
    return 0;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffda04);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffda04,acStack_778);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status",acStack_778);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
    return 0;
  }
  local_2c = 0;
  if (0 < local_21ec) {
    local_28 = 0;
    do {
      puVar8 = (uint *)((int)&pCStack_21e8->name_or_offset + local_28);
      pSVar10 = &SStack_14c4;
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
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_14c4);
      if ((((iVar3 == 0) || (puVar8[3] + 2 < SStack_14c4.timestamp)) ||
          (SStack_14c4.timestamp < puVar8[3] - 2)) || (SStack_14c4.file_size != puVar8[1])) break;
      local_28 = local_28 + 0x14;
      local_2c = local_2c + 1;
    } while (local_2c < local_21ec);
  }
  if (local_2c != local_21ec) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_1e28);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1e28.base_strlist,"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1e28.base_strlist,"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1e28.base_strlist,"Show local file differences.");
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ea8,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)",acStack_778);
    while( true ) {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_1e28,acStack_ea8,1,0);
      if ((iVar3 < 0) || (iVar3 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_1e28,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
                   in_stack_ffffda10,in_stack_ffffda14);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
        return 0;
      }
      if (iVar3 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,acStack_778);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&CStack_1e28,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
               in_stack_ffffda10,in_stack_ffffda14);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,acStack_778),
     iVar3 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in",acStack_778);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
    return 0;
  }
  local_4c = checkout_item_name;
  local_38 = acStack_778;
  local_50 = (FILE *)0x0;
  local_34 = (FILE *)0x0;
  local_30 = (FILE *)0x0;
  pcVar9 = g_DefaultCheckOutPath;
  pcVar15 = acStack_87c;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar15 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
    pcVar15 = pcVar15 + ((uint)bVar14 * -2 + 1) * 4;
  }
  iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,acStack_778,SStack_12b0.found_path,
                     "Select file to check in","*");
  if (iVar3 == 0) goto LAB_004bb1fa;
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_12b0);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&SStack_12b0);
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,local_1c,acStack_36c);
  engine_dosio_c_makePath_FUN_00481f50
            (SStack_16d8.found_path,local_1c,acStack_36c,(char *)0x0,(char *)0x0);
  pSVar10 = &SStack_12b0;
  iVar3 = -1;
  pSVar12 = &SStack_16d8;
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
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_16d8);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",&SStack_16d8);
    goto LAB_004bb1fa;
  }
  if (((SStack_12b0.file_size == SStack_16d8.file_size) &&
      (SStack_12b0.timestamp < (char *)(SStack_16d8.timestamp + 2))) &&
     (SStack_16d8.timestamp < (char *)(SStack_12b0.timestamp + 2))) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_1a80);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1a80.base_strlist,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1a80.base_strlist,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&CStack_1a80.base_strlist,"Oops.  Keep the file checked out.");
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&CStack_1a80,"Checking in file that didn't change.",-1,0);
    if ((iVar3 < 0) || (iVar3 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_1a80,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
                 in_stack_ffffda10,in_stack_ffffda14);
      goto LAB_004bb1fa;
    }
    if (iVar3 == 0) {
      iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)checkout_item_name,acStack_778,acStack_a84,
                         "Select file to undo check out","*");
      if ((iVar3 == 0) ||
         (iVar3 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)checkout_item_name,acStack_a84), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (checkout_item_name,acStack_a84);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_1a80,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
                 in_stack_ffffda10,in_stack_ffffda14);
      if (iVar3 == 0) goto LAB_004bb1fa;
      if (iVar3 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&CStack_1a80,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
               in_stack_ffffda10,in_stack_ffffda14);
  }
  local_40 = (FILE *)shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                               (g_CEditorToolsPtr,"Keep %s checked out after updating to network?",&SStack_12b0);
  pcVar9 = local_38;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b88,"history\\%s.%s",pcVar9,"history");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_20,acStack_16c);
  engine_dosio_c_makePath_FUN_00481f50(acStack_980,local_20,acStack_16c,(char *)0x0,(char *)0x0);
  pcVar9 = acStack_b88;
  iVar3 = -1;
  pcVar15 = acStack_980;
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
  local_48 = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(local_38);
  if (local_48 < 0) goto LAB_004bb1fa;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  local_3c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (SStack_12b0.found_path,(char *)0x0,"rb",
                        "..\\engine\\fileio.cpp",0x567);
  if (local_3c == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",&SStack_12b0);
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
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_570,"$$$.%s.$$$",&SStack_12b0);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(local_4c,local_18,acStack_26c);
  engine_dosio_c_makePath_FUN_00481f50(acStack_87c,local_18,acStack_26c,(char *)0x0,(char *)0x0);
  pcVar9 = acStack_570;
  iVar3 = -1;
  pcVar15 = acStack_87c;
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
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_87c,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_87c);
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_87c,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_34 = pFVar4;
  if (local_3c == (FILE *)0x0) {
    pcVar9 = acStack_87c;
    pcVar15 = "Can't create %s.\nGet Fletch.";
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar15,pcVar9);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar9 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (local_3c,pFVar4,SStack_12b0.found_path,"network",
                        SStack_12b0.file_size);
    if (local_3c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_3c,"..\\engine\\fileio.cpp",0xc4);
      local_3c = (FILE *)0x0;
    }
    if (local_34 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
      local_34 = (FILE *)0x0;
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
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,acStack_14,acStack_46c);
    engine_dosio_c_makePath_FUN_00481f50(acStack_674,acStack_14,acStack_46c,(char *)0x0,(char *)0x0)
    ;
    pcVar15 = "checkout.txt";
    iVar3 = -1;
    pcVar9 = acStack_674;
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
    local_5c.count = 0;
    local_5c.items = (CCheckOutItem *)0x0;
    if (local_40 == (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_674,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                            0x153);
        if (pFVar4 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar4,(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar5 != 6) break;
        iVar3 = iVar3 + 1;
        (*Sleep)(500);
      } while (iVar3 < 10);
      pFVar4 = (FILE *)0x0;
LAB_004bbc40:
      local_50 = pFVar4;
      if (pFVar4 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",acStack_674);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
        goto LAB_004bb847;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_5c,&local_50);
      if (iVar3 != 0) {
        local_44 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                             (&local_5c,SStack_12b0.found_path);
        if (-1 < local_44) goto LAB_004bba53;
        if (local_50 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
          local_50 = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
    }
    else {
LAB_004bba53:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      iVar3 = 0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(SStack_16d8.found_path,0);
        crt_io_c_deleteFile_FUN_005ff9d0(SStack_16d8.found_path);
        iVar7 = crt_stdio_c_rename_FUN_006015d0(acStack_87c,SStack_16d8.found_path);
        if (iVar7 == 0) break;
        if (0x27 < iVar3) {
          if (local_50 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
            local_50 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",acStack_87c,&SStack_16d8)
          ;
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
          goto LAB_004bb847;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_d18,"Waiting for %s to become available.\nPress ESC to cancel check in.",&SStack_16d8);
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_d18);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        local_24 = iVar3;
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
                        (SStack_16d8.found_path,(char *)SStack_12b0.timestamp);
      if (iVar3 == 0) {
        if (local_50 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
          local_50 = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&SStack_16d8);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
      }
      else {
        bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(SStack_16d8.found_path,8);
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
          if (local_50 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
            local_50 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",&SStack_16d8);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
        }
        else {
          iVar3 = 0;
          do {
            pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (acStack_980,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                0x153);
            if (pFVar4 != (FILE *)0x0) {
              crt_stdio_c_setvbuf_FUN_00601490(pFVar4,(char *)0x0,0,0x400);
              goto LAB_004bbb45;
            }
            piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
            if (*piVar5 != 6) break;
            iVar3 = iVar3 + 1;
            (*Sleep)(500);
          } while (iVar3 < 10);
          pFVar4 = (FILE *)0x0;
LAB_004bbb45:
          local_30 = pFVar4;
          if (pFVar4 != (FILE *)0x0) {
            local_54 = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
            ptVar6 = crt_time_c_localtime_FUN_00600288(&local_54);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar4,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_48 + 1,
                       ptVar6->tm_year + 0x76c,ptVar6->tm_mon + 1,ptVar6->tm_mday,ptVar6->tm_hour,
                       ptVar6->tm_min,ptVar6->tm_sec,&g_VersionControlSession);
            crt_stdio_c_fflush_FUN_00601540(pFVar4);
            if ((pFVar4->_flag & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\engine\\fileio.cpp",0xc4);
              pFVar4 = local_40;
              local_30 = (FILE *)0x0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if (pFVar4 != (FILE *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
                return 2;
              }
              iVar3 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(&local_5c,local_44);
              if (iVar3 == 0) {
                if (local_50 != (FILE *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            (local_50,"..\\engine\\fileio.cpp",0xc4);
                  local_50 = pFVar4;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_5c,&local_50);
                if (iVar3 != 0) {
                  if (local_50 != (FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (local_50,"..\\engine\\fileio.cpp",0xc4);
                    local_50 = (FILE *)0x0;
                  }
                  iVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,SStack_12b0.found_path);
                  if (((-1 < iVar3) &&
                      (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (SStack_12b0.found_path,(byte)iVar3 | 8),
                      CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar3 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",&SStack_12b0);
                  }
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_6c);
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                            (this_ptr,&CStack_6c);
                  iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (this_ptr,&CStack_6c,acStack_778);
                  if (iVar3 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_21d0);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&CStack_21d0.base_strlist,"Delete local files and mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&CStack_21d0.base_strlist,"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (&CStack_21d0.base_strlist,"Keep files extracted and pod dismounted");
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (acStack_109c,"%s checked in",acStack_778);
                    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      (&CStack_21d0,acStack_109c,-1,0);
                    if (iVar3 == 0) {
                      iVar7 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (this_ptr,acStack_778);
                      if (iVar7 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_21d0,0,in_stack_ffffda04,in_stack_ffffda08,
                                   in_stack_ffffda0c,in_stack_ffffda10,in_stack_ffffda14);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                  (&CStack_6c,0,in_stack_ffffda04);
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_6c,acStack_778);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (this_ptr,&CStack_6c);
                    }
                    if ((iVar3 == 1) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,acStack_778), iVar3 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_21d0,0,in_stack_ffffda04,in_stack_ffffda08,
                                 in_stack_ffffda0c,in_stack_ffffda10,in_stack_ffffda14);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_6c,0,in_stack_ffffda04);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_21d0,0,in_stack_ffffda04,in_stack_ffffda08,in_stack_ffffda0c,
                               in_stack_ffffda10,in_stack_ffffda14);
                  }
                  else {
                    iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar3 != 0) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,acStack_778), iVar3 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_6c,0,in_stack_ffffda04);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_6c,0,in_stack_ffffda04);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
              goto LAB_004bb847;
            }
          }
          if (local_50 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
            local_50 = (FILE *)0x0;
          }
          if (local_30 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\engine\\fileio.cpp",0xc4);
            local_30 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",acStack_980);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_5c);
        }
      }
    }
  }
LAB_004bb847:
  if (local_50 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_50,"..\\engine\\fileio.cpp",0xc4);
    local_50 = (FILE *)0x0;
  }
  if (local_34 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_3c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_3c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_30 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_87c[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_87c);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
  return 0;
}
