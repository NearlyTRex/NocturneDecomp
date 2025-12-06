// Name: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
// Address Range: [[004b4220, 004b502e]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem * this_ptr, int operation_mode, char * filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220
          (CCheckOutItem *this_ptr,int operation_mode,char *filename)

{
  char cVar1;
  CCheckOutItem *this_ptr_00;
  bool bVar2;
  FILE *pFVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined3 extraout_var_00;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  FILE *in_stack_00000010;
  CCheckOutItem *in_stack_00000014;
  CCheckOutItem *in_stack_00000018;
  CCheckOutItem *in_stack_0000001c;
  CCheckOutItem *in_stack_00000020;
  time_t in_stack_00000028;
  FILE *pFStack0000002c;
  FILE *in_stack_00000030;
  CCheckOutItem *in_stack_00000034;
  CCheckOutItem *in_stack_0000003c;
  FILE *in_stack_00000040;
  uint in_stack_00000044;
  CCheckOutItem *in_stack_00000048;
  uint in_stack_00000054;
  CStrList_vtable *in_stack_ffffec60;
  CStrList_vtable *in_stack_ffffec64;
  CStrList_vtable *in_stack_ffffec68;
  CStrList_vtable *in_stack_ffffec6c;
  uint in_stack_ffffec70;
  char **in_stack_ffffec74;
  CStrList_vtable *in_stack_ffffec78;
  uint in_stack_ffffec7c;
  char acStack_1014 [4];
  byte auStack_1010 [524];
  byte auStack_e04 [4];
  uint uStack_e00;
  char acStack_dfc [44];
  char acStack_dd0 [12];
  char acStack_dc4 [4];
  char acStack_dc0 [64];
  char acStack_d80 [4];
  char acStack_d7c [392];
  int iStack_bf4;
  uint uStack_bec;
  int iStack_bcc;
  char *pcStack_ba8;
  char acStack_ba4 [4];
  char acStack_ba0 [312];
  uint local_a68 [9];
  char acStack_a44 [4];
  char acStack_a40 [4];
  char acStack_a3c [4];
  char acStack_a38 [4];
  char acStack_a34 [28];
  char acStack_a18 [8];
  char acStack_a10 [216];
  char acStack_938 [52];
  char acStack_904 [220];
  char acStack_828 [8];
  char acStack_820 [248];
  char acStack_728 [12];
  char acStack_71c [236];
  char acStack_630 [4];
  byte auStack_62c [4];
  char acStack_628 [252];
  char acStack_52c [48];
  char acStack_4fc [204];
  char acStack_430 [4];
  char acStack_42c [276];
  char acStack_318 [4];
  char acStack_314 [204];
  char acStack_248 [4];
  char acStack_244 [300];
  char acStack_118 [4];
  char acStack_114 [204];
  uint local_48;
  uint local_2c;
  uint local_28;
  char local_18 [4];
  char local_14 [4];
  
  this_ptr_00 = this_ptr;
  bVar10 = 0;
  pcVar6 = g_DefaultCheckOutPath;
  puVar8 = local_a68;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  local_48 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar5 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,auStack_1010 + 0x204,
                     "Select file to check in","*");
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_1010 + 0x208));
  if (iVar5 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_e04);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr_00->name,local_18,acStack_248);
  engine_dosio_c_makePath_FUN_00481f50(acStack_1014,local_14,acStack_244,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_dfc;
  iVar5 = -1;
  pcVar7 = auStack_1010;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_1010);
  if (iVar5 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_1010 + 4);
    return 0;
  }
  if (((iStack_bf4 == auStack_1010._520_4_) && (uStack_bec < uStack_e00 + 2)) &&
     (uStack_e00 < uStack_bec + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffec4c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec50,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec54,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec58,"Oops.  Keep the file checked out.");
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xffffec5c,"Checking in file that didn't change.",-1,0);
    if ((iVar5 < 0) || (iVar5 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
                 (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
      return 0;
    }
    if (iVar5 == 0) {
      iVar5 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr_00,(char *)operation_mode,acStack_630,
                         "Select file to undo check out","*");
      if (iVar5 != 0) {
        iVar5 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (this_ptr_00,auStack_62c);
        if (iVar5 != 0) {
          iVar5 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                            (this_ptr_00->name,acStack_628);
          goto LAB_004b458d;
        }
      }
      iVar5 = 0;
LAB_004b458d:
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec6c,0,(uint)in_stack_ffffec6c,in_stack_ffffec70,
                 (uint)in_stack_ffffec74,(uint)in_stack_ffffec78,in_stack_ffffec7c);
      return iVar5;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
               (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
  }
  shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
            (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_728,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,(char *)&stack0x0000001c,acStack_118);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_938,(char *)&stack0x00000020,acStack_114,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_71c;
  iVar5 = -1;
  pcVar7 = acStack_938;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  filename = (char *)engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640
                               ((char *)operation_mode);
  if ((int)filename < 0) {
    return 0;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  pFStack0000002c =
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (acStack_dc0,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x567);
  if (pFStack0000002c == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar5 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar5 == 0) goto LAB_004b4768;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4fc,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr_00->name,(char *)&filename,acStack_430);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_a44,(char *)&stack0x00000010,acStack_42c,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_52c;
  iVar5 = -1;
  pcVar7 = acStack_a40;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_a3c,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_a38);
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_a34,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  filename = (char *)pFVar3;
  if (in_stack_00000014 == (CCheckOutItem *)0x0) {
    pcVar6 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar6 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       ((FILE *)in_stack_00000018,pFVar3,acStack_dd0,"network",iStack_bcc);
    if (in_stack_0000001c != (CCheckOutItem *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
      in_stack_00000020 = (CCheckOutItem *)0x0;
    }
    if (filename != (char *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)filename,"..\\engine\\fileio.cpp",0xc4);
      filename = (char *)0x0;
    }
    if (pcVar6 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (g_VersionControlDirectory,(char *)&stack0x00000020,acStack_318);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_828,&stack0x00000024,acStack_314,(char *)0x0,(char *)0x0);
      pcVar7 = "checkout.txt";
      iVar5 = -1;
      pcVar6 = acStack_828;
      do {
        pcVar9 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar5 = 0;
      if (filename == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (acStack_820,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                              0x153);
          if (pFVar3 != (FILE *)0x0) {
            crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar4 = (int *)crt_errno_c_errno_FUN_00601450();
          if (*piVar4 != 6) break;
          iVar5 = iVar5 + 1;
          (*Sleep)(500);
        } while (iVar5 < 10);
        pFVar3 = (FILE *)0x0;
LAB_004b4ad9:
        if (pFVar3 == (FILE *)0x0) {
          if (pFVar3 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x0,"..\\engine\\fileio.cpp",0xc4);
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff8);
          goto LAB_004b4768;
        }
        iVar5 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                          ((CCheckOutList *)&stack0xfffffff4,(FILE **)&stack0xfffffffc);
        if (iVar5 != 0) {
          filename = (char *)engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                                       ((CCheckOutList *)&stack0xfffffff8,acStack_dc4);
          if (-1 < (int)filename) goto LAB_004b4980;
          if (this_ptr != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
            operation_mode = 0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
        goto LAB_004b4768;
      }
LAB_004b4980:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      engine_2d_c_clearInputAndWait_FUN_00403260();
      pFVar3 = (FILE *)0x0;
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1010 + 0x38,0);
        crt_io_c_deleteFile_FUN_005ff9d0(auStack_1010 + 0x3c);
        iVar5 = crt_stdio_c_rename_FUN_006015d0(acStack_a18,auStack_1010 + 0x40);
        if (iVar5 == 0) break;
        if (0x27 < (int)pFVar3) {
          if (filename != (char *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)filename,"..\\engine\\fileio.cpp",0xc4);
            in_stack_00000010 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.");
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000010);
          goto LAB_004b4768;
        }
        pFVar3 = (FILE *)((int)&pFVar3->_ptr + 1);
        if (pFVar3 == (FILE *)&DAT_00000001) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ba4,"Waiting for %s to become available.\nPress ESC to cancel check in.");
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_ba0);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        in_stack_00000030 = pFVar3;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)pFVar3,40.0);
        iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
        if (iVar5 != 0) {
          pFVar3 = (FILE *)0x28;
        }
      }
      if (0 < (int)pFVar3) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar5 = engine_dosio_c_copyFileTimestamp_FUN_00481910(auStack_1010 + 0x48,pcStack_ba8);
      if (iVar5 == 0) {
        if (in_stack_00000014 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000014,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000018 = (CCheckOutItem *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000014);
        goto LAB_004b4768;
      }
      bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1010 + 0x4c,8);
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
        if (in_stack_00000018 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
          in_stack_0000001c = (CCheckOutItem *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000018);
        goto LAB_004b4768;
      }
      iVar5 = 0;
      do {
        pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_904,(char *)0x0,"at","..\\engine\\fileio.cpp",0x153
                           );
        if (pFVar3 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
          goto LAB_004b4d50;
        }
        piVar4 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar4 != 6) break;
        iVar5 = iVar5 + 1;
        (*Sleep)(500);
      } while (iVar5 < 10);
      pFVar3 = (FILE *)0x0;
LAB_004b4d50:
      in_stack_00000040 = pFVar3;
      if (pFVar3 != (FILE *)0x0) {
        in_stack_00000028 = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
        crt_time_c_localtime_FUN_00600288(&stack0x00000028);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar3,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n");
        crt_stdio_c_fflush_FUN_00601540(pFVar3);
        if ((pFVar3->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000054 = 0;
          engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
          if (in_stack_00000048 != (CCheckOutItem *)0x0) {
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000030);
            return 2;
          }
          iVar5 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                            ((CCheckOutList *)&stack0x00000030,(int)in_stack_00000040);
          if (iVar5 == 0) {
            if (in_stack_0000003c != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)in_stack_0000003c,"..\\engine\\fileio.cpp",0xc4);
              in_stack_0000003c = in_stack_00000048;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar5 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                              ((CCheckOutList *)&stack0x00000034,(FILE **)&stack0x0000003c);
            if (iVar5 != 0) {
              if (in_stack_00000040 != (FILE *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          (in_stack_00000040,"..\\engine\\fileio.cpp",0xc4);
                in_stack_00000044 = 0;
              }
              iVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,acStack_d80);
              if (iVar5 < 0) {
LAB_004b4ff2:
                if (-1 < iVar5) goto LAB_004b5011;
              }
              else {
                bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_d7c,(byte)iVar5 | 8);
                if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) != 0) goto LAB_004b4ff2;
              }
              shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                        (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
LAB_004b5011:
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000048);
              return 1;
            }
          }
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000038);
          goto LAB_004b4768;
        }
      }
      if (in_stack_00000020 != (CCheckOutItem *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((FILE *)in_stack_00000020,"..\\engine\\fileio.cpp",0xc4);
        in_stack_00000020 = (CCheckOutItem *)0x0;
      }
      if (in_stack_00000040 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000040,"..\\engine\\fileio.cpp",0xc4)
        ;
        in_stack_00000040 = (FILE *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x0000001c);
      goto LAB_004b4768;
    }
    pcVar6 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
LAB_004b4768:
  if (in_stack_00000010 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000010,"..\\engine\\fileio.cpp",0xc4);
    in_stack_00000010 = (FILE *)0x0;
  }
  if (pFStack0000002c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack0000002c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_00000034 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000034,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_00000030 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000030,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_a10[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_a10);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
