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
  undefined3 extraout_var;
  int *piVar5;
  tm *ptVar6;
  undefined3 extraout_var_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  CStrList_vtable *in_stack_ffffec60;
  CStrList_vtable *in_stack_ffffec64;
  CStrList_vtable *in_stack_ffffec68;
  CStrList_vtable *in_stack_ffffec6c;
  uint in_stack_ffffec70;
  char **in_stack_ffffec74;
  CStrList_vtable *in_stack_ffffec78;
  uint in_stack_ffffec7c;
  char acStack_1054 [4];
  char acStack_1050 [4];
  char acStack_104c [4];
  byte auStack_1048 [4];
  char acStack_1044 [4];
  char acStack_1040 [4];
  byte auStack_103c [40];
  char acStack_1014 [4];
  byte auStack_1010 [524];
  byte auStack_e04 [4];
  uint uStack_e00;
  char acStack_dfc [424];
  int iStack_c54;
  char *pcStack_c24;
  char acStack_c20 [40];
  char local_bf8 [4];
  int iStack_bf4;
  uint uStack_bec;
  char acStack_acc [4];
  char acStack_ac8 [4];
  char acStack_ac4 [4];
  char acStack_ac0 [4];
  char acStack_abc [4];
  char acStack_ab8 [20];
  char acStack_aa4 [16];
  char acStack_a94 [8];
  byte auStack_a8c [36];
  uint local_a68 [58];
  char acStack_980 [72];
  char acStack_938 [136];
  char acStack_8b0 [8];
  char acStack_8a8 [4];
  byte auStack_8a4 [252];
  char acStack_7a8 [76];
  char local_75c [300];
  char acStack_630 [4];
  byte auStack_62c [4];
  char acStack_628 [116];
  char acStack_5b4 [36];
  char acStack_590 [220];
  char acStack_4b4 [100];
  char local_450 [176];
  char acStack_3a0 [4];
  char acStack_39c [340];
  char acStack_248 [4];
  char acStack_244 [164];
  char acStack_1a0 [80];
  char local_150 [184];
  uint uStack_98;
  byte auStack_94 [8];
  CCheckOutItem *apCStack_8c [2];
  FILE *pFStack_84;
  int iStack_80;
  FILE *pFStack_7c;
  char acStack_78 [4];
  int iStack_74;
  FILE *pFStack_70;
  FILE *pFStack_6c;
  FILE *pFStack_68;
  byte auStack_64 [8];
  CCheckOutItem *pCStack_5c;
  FILE *pFStack_58;
  CCheckOutItem *pCStack_54;
  CCheckOutList local_50;
  uint local_48;
  FILE *local_44;
  uint local_40;
  char *local_38;
  int local_34;
  uint local_2c;
  uint local_28;
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  
  bVar11 = 0;
  pcVar8 = g_DefaultCheckOutPath;
  puVar9 = local_a68;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *(uint *)pcVar8;
    pcVar8 = pcVar8 + 4;
    puVar9 = puVar9 + 1;
  }
  local_48 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar7 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,auStack_1010 + 0x204,
                     "Select file to check in","*");
  if (iVar7 == 0) {
    return 0;
  }
  iVar7 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_1010 + 0x208));
  if (iVar7 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_e04);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_18,acStack_248);
  engine_dosio_c_makePath_FUN_00481f50(acStack_1014,local_14,acStack_244,(char *)0x0,(char *)0x0);
  pcVar8 = acStack_dfc;
  iVar7 = -1;
  pcVar12 = auStack_1010;
  do {
    pcVar10 = pcVar12;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar12 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  iVar7 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_1010);
  if (iVar7 == 0) {
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
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xffffec5c,"Checking in file that didn't change.",-1,0);
    if ((iVar7 < 0) || (iVar7 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
                 (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
      return 0;
    }
    if (iVar7 == 0) {
      iVar7 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr,(char *)operation_mode,acStack_630,
                         "Select file to undo check out","*");
      if ((iVar7 == 0) ||
         (iVar7 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            (this_ptr,auStack_62c), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (this_ptr->name,acStack_628);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec6c,0,(uint)in_stack_ffffec6c,in_stack_ffffec70,
                 (uint)in_stack_ffffec74,(uint)in_stack_ffffec78,in_stack_ffffec7c);
      return iVar7;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
               (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
  }
  local_34 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  local_38 = "history";
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_75c,"history\\%s.%s",operation_mode,local_38);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_1c,local_150);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_938,(char *)&pFStack_6c,acStack_1a0,(char *)0x0,(char *)0x0);
  pcVar8 = acStack_7a8;
  iVar7 = -1;
  pcVar12 = acStack_938;
  do {
    pcVar10 = pcVar12;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar12 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  iStack_80 = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640((char *)operation_mode);
  if (iStack_80 < 0) {
    return 0;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  auStack_64._4_4_ =
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (auStack_1010 + 0x1c4,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x567)
  ;
  if ((CCheckOutItem *)auStack_64._4_4_ == (CCheckOutItem *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",auStack_1010 + 0x1c8);
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar7 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar7 == 0) goto LAB_004b4768;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_590,"$$$.%s.$$$",auStack_1010 + 0x1c8);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_14,local_450);
  engine_dosio_c_makePath_FUN_00481f50(acStack_acc,acStack_78,acStack_4b4,(char *)0x0,(char *)0x0);
  pcVar8 = acStack_5b4;
  iVar7 = -1;
  pcVar12 = acStack_ac8;
  do {
    pcVar10 = pcVar12;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar12 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_ac4,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_ac0);
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_abc,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  pFStack_7c = pFVar3;
  if (iStack_74 == 0) {
    pcVar8 = acStack_ab8;
    pcVar12 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar8 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (pFStack_70,pFVar3,auStack_1010 + 0x1b8,"network",iStack_c54);
    if (pFStack_6c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_6c,"..\\engine\\fileio.cpp",0xc4);
      pFStack_68 = (FILE *)0x0;
    }
    if (pFStack_7c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_7c,"..\\engine\\fileio.cpp",0xc4);
      pFStack_7c = (FILE *)0x0;
    }
    if (pcVar8 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (g_VersionControlDirectory,(char *)&pFStack_68,acStack_3a0);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_8b0,auStack_64,acStack_39c,(char *)0x0,(char *)0x0);
      pcVar12 = "checkout.txt";
      iVar7 = -1;
      pcVar8 = acStack_8b0;
      do {
        pcVar10 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar7 = 0;
      uStack_98 = 0;
      auStack_94._0_4_ = 0;
      if (pFStack_7c == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          apCStack_8c[0] =
               (CCheckOutItem *)
               shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (acStack_8a8,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
          ;
          if (apCStack_8c[0] != (CCheckOutItem *)0x0) {
            crt_stdio_c_setvbuf_FUN_00601490((FILE *)apCStack_8c[0],(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
          if (*piVar5 != 6) break;
          iVar7 = iVar7 + 1;
          (*Sleep)(500);
        } while (iVar7 < 10);
        apCStack_8c[0] = (CCheckOutItem *)0x0;
LAB_004b4ad9:
        if (apCStack_8c[0] == (CCheckOutItem *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",auStack_8a4);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          goto LAB_004b4768;
        }
        iVar7 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                          ((CCheckOutList *)auStack_94,(FILE **)apCStack_8c);
        if (iVar7 != 0) {
          pFStack_7c = (FILE *)engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                                         ((CCheckOutList *)(auStack_94 + 4),auStack_1010 + 0x1c4);
          if (-1 < (int)pFStack_7c) goto LAB_004b4980;
          if (pFStack_84 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_84,"..\\engine\\fileio.cpp",0xc4);
            pFStack_84 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(auStack_94 + 4));
      }
      else {
LAB_004b4980:
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finalizing %s to network...");
        engine_2d_c_clearInputAndWait_FUN_00403260();
        iVar7 = 0;
        while( true ) {
          engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_1054,0);
          crt_io_c_deleteFile_FUN_005ff9d0(acStack_1050);
          iVar4 = crt_stdio_c_rename_FUN_006015d0(acStack_a94,acStack_104c);
          if (iVar4 == 0) break;
          if (0x27 < iVar7) {
            if (pFStack_70 != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_70,"..\\engine\\fileio.cpp",0xc4);
              pFStack_6c = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",auStack_a8c,
                       acStack_1044);
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(auStack_94 + 4));
            goto LAB_004b4768;
          }
          iVar7 = iVar7 + 1;
          if (iVar7 == 1) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_c20,"Waiting for %s to become available.\nPress ESC to cancel check in.",auStack_1048);
            shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                      (g_CEditorToolsPtr,local_bf8);
          }
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
          local_50.count = iVar7;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)iVar7,40.0);
          iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
          if (iVar4 != 0) {
            iVar7 = 0x28;
          }
        }
        if (0 < iVar7) {
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        }
        iVar7 = engine_dosio_c_copyFileTimestamp_FUN_00481910(acStack_1044,pcStack_c24);
        if (iVar7 == 0) {
          if (pFStack_68 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_68,"..\\engine\\fileio.cpp",0xc4);
            auStack_64._0_4_ = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",auStack_103c);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
        }
        else {
          bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_1040,8);
          if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
            if ((FILE *)auStack_64._0_4_ != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)auStack_64._0_4_,"..\\engine\\fileio.cpp",0xc4);
              auStack_64._0_4_ = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",auStack_103c);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          }
          else {
            iVar7 = 0;
            do {
              pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                 (acStack_980,(char *)0x0,"at","..\\engine\\fileio.cpp"
                                  ,0x153);
              if (pFVar3 != (FILE *)0x0) {
                crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
                goto LAB_004b4d50;
              }
              piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
              if (*piVar5 != 6) break;
              iVar7 = iVar7 + 1;
              (*Sleep)(500);
            } while (iVar7 < 10);
            pFVar3 = (FILE *)0x0;
LAB_004b4d50:
            local_44 = pFVar3;
            if (pFVar3 != (FILE *)0x0) {
              pCStack_5c = (CCheckOutItem *)
                           crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
              ptVar6 = crt_time_c_localtime_FUN_00600288((time_t *)&pCStack_5c);
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar3,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",local_50.count + 1,
                         ptVar6->tm_year + 0x76c,ptVar6->tm_mon + 1,ptVar6->tm_mday,ptVar6->tm_hour,
                         ptVar6->tm_min,ptVar6->tm_sec,&g_VersionControlSession);
              crt_stdio_c_fflush_FUN_00601540(pFVar3);
              if ((pFVar3->_flag & 0x20) == 0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\fileio.cpp",0xc4);
                local_40 = 0;
                engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
                if (local_50.items != (CCheckOutItem *)0x0) {
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)auStack_64);
                  return 2;
                }
                iVar7 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                  ((CCheckOutList *)auStack_64,(int)pCStack_54);
                if (iVar7 == 0) {
                  if (pFStack_58 != (FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (pFStack_58,"..\\engine\\fileio.cpp",0xc4);
                    pCStack_54 = local_50.items;
                  }
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
                }
                else {
                  iVar7 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                    ((CCheckOutList *)(auStack_64 + 4),&pFStack_58);
                  if (iVar7 != 0) {
                    if (pCStack_54 != (CCheckOutItem *)0x0) {
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                ((FILE *)pCStack_54,"..\\engine\\fileio.cpp",0xc4);
                      local_50.count = 0;
                    }
                    iVar7 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                      ((char *)0x0,auStack_1010 + 0x1fc);
                    if (((-1 < iVar7) &&
                        (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                           (auStack_1010 + 0x200,(byte)iVar7 | 8),
                        CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar7 < 0)) {
                      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                                (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)",
                                 auStack_1010 + 0x204);
                    }
                    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
                    return 1;
                  }
                }
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                          ((CCheckOutList *)(auStack_94 + 4));
                goto LAB_004b4768;
              }
            }
            if ((FILE *)auStack_64._0_4_ != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)auStack_64._0_4_,"..\\engine\\fileio.cpp",0xc4);
              auStack_64._0_4_ = (FILE *)0x0;
            }
            if (local_44 != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_44,"..\\engine\\fileio.cpp",0xc4);
              local_44 = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n",acStack_980);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_50);
          }
        }
      }
      goto LAB_004b4768;
    }
    pcVar12 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar12,pcVar8);
LAB_004b4768:
  if (pFStack_84 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_84,"..\\engine\\fileio.cpp",0xc4);
    pFStack_84 = (FILE *)0x0;
  }
  if (pFStack_68 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_68,"..\\engine\\fileio.cpp",0xc4);
  }
  if ((CCheckOutItem *)auStack_64._4_4_ != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)auStack_64._4_4_,"..\\engine\\fileio.cpp",0xc4);
  }
  if ((FILE *)auStack_64._0_4_ != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)auStack_64._0_4_,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_aa4[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_aa4);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
