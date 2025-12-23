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
  FILE *dest_file;
  undefined3 extraout_var;
  int *piVar3;
  undefined3 extraout_var_00;
  int iVar4;
  int unaff_EBX;
  CCheckOutItem *pCVar5;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  FILE *unaff_ESI;
  char *pcVar6;
  char *pcVar7;
  FILE *unaff_EDI;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  CStrList_vtable *in_stack_ffffebf0;
  CStrList_vtable *in_stack_ffffebf4;
  CStrList_vtable *in_stack_ffffebf8;
  CStrList_vtable *in_stack_ffffebfc;
  CStrList_vtable *in_stack_ffffec00;
  char **in_stack_ffffec04;
  CStrList_vtable *in_stack_ffffec08;
  uint in_stack_ffffec0c;
  char acStack_1084 [4];
  byte auStack_1080 [524];
  byte auStack_e74 [4];
  uint uStack_e70;
  char acStack_e6c [60];
  char acStack_e30 [36];
  char local_e0c [12];
  char acStack_e00 [52];
  char acStack_dcc [4];
  char acStack_dc8 [356];
  int iStack_c64;
  uint uStack_c5c;
  int local_c08;
  char *local_bf8;
  char acStack_bec [4];
  char acStack_be8 [360];
  char acStack_a80 [4];
  char acStack_a7c [4];
  char acStack_a78 [4];
  char acStack_a74 [4];
  char acStack_a70 [8];
  uint local_a68 [2];
  char acStack_a60 [20];
  char acStack_a4c [164];
  char acStack_9a8 [84];
  char acStack_954 [240];
  char acStack_864 [8];
  char acStack_85c [196];
  char acStack_798 [12];
  char acStack_78c [236];
  char acStack_6a0 [4];
  byte auStack_69c [4];
  char acStack_698 [292];
  char acStack_574 [12];
  char acStack_568 [252];
  char acStack_46c [4];
  char acStack_468 [276];
  char acStack_354 [4];
  char local_350 [152];
  char acStack_2b8 [4];
  char acStack_2b4 [300];
  char acStack_188 [4];
  char acStack_184 [252];
  char acStack_88 [4];
  char acStack_84 [12];
  char *pcStack_78;
  int iStack_74;
  int iStack_64;
  char acStack_54 [4];
  char local_50 [4];
  uint local_4c;
  byte local_48 [8];
  CCheckOutItem *local_40;
  byte local_3c [8];
  uint local_34;
  CCheckOutList local_30;
  int local_28;
  FILE *local_24;
  FILE *local_20;
  byte local_1c [12];
  
  bVar10 = 0;
  pcVar6 = g_DefaultCheckOutPath;
  puVar8 = local_a68;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  local_48._0_4_ = 0;
  local_30.items = (CCheckOutItem *)0x0;
  local_28 = 0;
  iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,local_e0c,"Select file to check in",
                     "*");
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_1080 + 0x208));
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_e74);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,acStack_88,acStack_2b8);
  engine_dosio_c_makePath_FUN_00481f50(acStack_1084,acStack_84,acStack_2b4,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_e6c;
  iVar4 = -1;
  pcVar7 = auStack_1080;
  do {
    pcVar9 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_1080);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_1080 + 4);
    return 0;
  }
  if (((iStack_c64 == auStack_1080._520_4_) && (uStack_c5c < uStack_e70 + 2)) &&
     (uStack_e70 < uStack_c5c + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffebf4);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffebe0,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffebe4,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffebe8,"Oops.  Keep the file checked out.");
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xffffebec,"Checking in file that didn't change.",-1,0);
    if ((iVar4 < 0) || (iVar4 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffebf0,0,(uint)in_stack_ffffebf0,(uint)in_stack_ffffebf4,
                 (uint)in_stack_ffffebf8,(uint)in_stack_ffffebfc,(uint)in_stack_ffffec00);
      return 0;
    }
    if (iVar4 == 0) {
      iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr,(char *)operation_mode,acStack_6a0,
                         "Select file to undo check out","*");
      if ((iVar4 == 0) ||
         (iVar4 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            (this_ptr,auStack_69c), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (this_ptr->name,acStack_698);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffebfc,0,(uint)in_stack_ffffebfc,(uint)in_stack_ffffec00,
                 (uint)in_stack_ffffec04,(uint)in_stack_ffffec08,in_stack_ffffec0c);
      return iVar4;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffebf0,0,(uint)in_stack_ffffebf0,(uint)in_stack_ffffebf4,
               (uint)in_stack_ffffebf8,(uint)in_stack_ffffebfc,(uint)in_stack_ffffec00);
  }
  iStack_74 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  pcStack_78 = "history";
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_798,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,acStack_54,acStack_188);
  engine_dosio_c_makePath_FUN_00481f50(acStack_9a8,local_50,acStack_184,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_78c;
  iVar4 = -1;
  pcVar7 = acStack_9a8;
  do {
    pcVar9 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  iStack_64 = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640((char *)operation_mode);
  if (iStack_64 < 0) {
    return 0;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  local_48._4_4_ =
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (acStack_e30,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x567);
  if ((CCheckOutItem *)local_48._4_4_ == (CCheckOutItem *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar4 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar4 == 0) goto LAB_004b4768;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_574,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,(char *)&local_30,acStack_46c);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_a80,(char *)&local_30.items,acStack_468,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_568;
  iVar4 = -1;
  pcVar7 = acStack_a7c;
  do {
    pcVar9 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
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
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_a78,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_a74);
  dest_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        (acStack_a70,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  local_30.count = (int)dest_file;
  if (local_28 == 0) {
    pcVar6 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar6 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (local_24,dest_file,local_e0c,"network",local_c08);
    if (local_20 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\fileio.cpp",0xc4);
      local_1c._0_4_ = 0;
    }
    if ((FILE *)local_30.count != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)local_30.count,"..\\engine\\fileio.cpp",0xc4);
      local_30.count = 0;
    }
    if (pcVar6 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (g_VersionControlDirectory,local_1c,acStack_354);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_864,local_1c + 4,local_350,(char *)0x0,(char *)0x0);
      pcVar7 = "checkout.txt";
      iVar4 = -1;
      pcVar6 = acStack_864;
      do {
        pcVar9 = pcVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
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
      iVar4 = 0;
      local_4c = 0;
      local_48._0_4_ = 0;
      if ((FILE *)local_30.count == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          local_40 = (CCheckOutItem *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (acStack_85c,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                                0x153);
          if (local_40 != (CCheckOutItem *)0x0) {
            crt_stdio_c_setvbuf_FUN_00601490((FILE *)local_40,(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
          if (*piVar3 != 6) break;
          iVar4 = iVar4 + 1;
          (*Sleep)(500);
        } while (iVar4 < 10);
        local_40 = (CCheckOutItem *)0x0;
LAB_004b4ad9:
        if (local_40 == (CCheckOutItem *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_48 + 4));
          goto LAB_004b4768;
        }
        iVar4 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                          ((CCheckOutList *)local_48,(FILE **)&local_40);
        if (iVar4 != 0) {
          local_30.count =
               engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                         ((CCheckOutList *)(local_48 + 4),acStack_e00);
          if (-1 < local_30.count) goto LAB_004b4980;
          if ((CCheckOutItem *)local_3c._4_4_ != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_3c._4_4_,"..\\engine\\fileio.cpp",0xc4);
            local_34 = 0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_3c + 4));
      }
      else {
LAB_004b4980:
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finalizing %s to network...");
        engine_2d_c_clearInputAndWait_FUN_00403260();
        pCVar5 = (CCheckOutItem *)0x0;
        while( true ) {
          engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1080 + 0x60,0);
          crt_io_c_deleteFile_FUN_005ff9d0(auStack_1080 + 100);
          iVar4 = crt_stdio_c_rename_FUN_006015d0(acStack_a60,auStack_1080 + 0x68);
          if (iVar4 == 0) break;
          if (0x27 < (int)pCVar5) {
            if ((FILE *)local_3c._0_4_ != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_3c._0_4_,"..\\engine\\fileio.cpp",0xc4);
              local_3c._4_4_ = (CCheckOutItem *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.");
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_3c + 4));
            goto LAB_004b4768;
          }
          pCVar5 = (CCheckOutItem *)(pCVar5->name + 1);
          if (pCVar5 == (CCheckOutItem *)&DAT_00000001) {
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_bec,"Waiting for %s to become available.\nPress ESC to cancel check in.");
            shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                      (g_CEditorToolsPtr,acStack_be8);
          }
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
          local_1c._4_4_ = pCVar5;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)pCVar5,40.0);
          iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
          if (iVar4 != 0) {
            pCVar5 = (CCheckOutItem *)0x28;
          }
        }
        if (0 < (int)pCVar5) {
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        }
        iVar4 = engine_dosio_c_copyFileTimestamp_FUN_00481910(auStack_1080 + 0x68,local_bf8);
        if (iVar4 == 0) {
          if ((FILE *)local_3c._0_4_ != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_3c._0_4_,"..\\engine\\fileio.cpp",0xc4);
            local_3c._4_4_ = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_3c);
        }
        else {
          bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1080 + 0x6c,8);
          if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
            if ((CCheckOutItem *)local_3c._4_4_ != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_3c._4_4_,"..\\engine\\fileio.cpp",0xc4);
              local_34 = 0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_3c + 4));
          }
          else {
            iVar4 = 0;
            do {
              unaff_EDI = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                    (acStack_954,(char *)0x0,"at",
                                     "..\\engine\\fileio.cpp",0x153);
              if (unaff_EDI != (FILE *)0x0) {
                crt_stdio_c_setvbuf_FUN_00601490(unaff_EDI,(char *)0x0,0,0x400);
                goto LAB_004b4d50;
              }
              piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
              if (*piVar3 != 6) break;
              iVar4 = iVar4 + 1;
              (*Sleep)(500);
            } while (iVar4 < 10);
            unaff_EDI = (FILE *)0x0;
LAB_004b4d50:
            if (unaff_EDI != (FILE *)0x0) {
              local_24 = (FILE *)crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
              crt_time_c_localtime_FUN_00600288((time_t *)&local_24);
              crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EDI,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n");
              crt_stdio_c_fflush_FUN_00601540(unaff_EDI);
              if ((unaff_EDI->_flag & 0x20) == 0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EDI,"..\\engine\\fileio.cpp",0xc4)
                ;
                engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
                if (unaff_EBX != 0) {
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_1c);
                  return 2;
                }
                iVar4 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                  ((CCheckOutList *)local_1c,(int)unaff_EDI);
                if (iVar4 == 0) {
                  if (unaff_EBP != (FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (unaff_EBP,"..\\engine\\fileio.cpp",0xc4);
                    unaff_EBP = (FILE *)0x0;
                  }
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
                }
                else {
                  iVar4 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                    ((CCheckOutList *)(local_1c + 4),(FILE **)&stack0xfffffff0);
                  if (iVar4 != 0) {
                    if (unaff_EDI != (FILE *)0x0) {
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (unaff_EDI,"..\\engine\\fileio.cpp",0xc4);
                    }
                    iVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,acStack_dcc);
                    if (((-1 < iVar4) &&
                        (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                           (acStack_dc8,(byte)iVar4 | 8),
                        CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar4 < 0)) {
                      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                                (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
                    }
                    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                              ((CCheckOutList *)&stack0xfffffffc);
                    return 1;
                  }
                }
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_1c + 8));
                goto LAB_004b4768;
              }
            }
            if (local_30.items != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_30.items,"..\\engine\\fileio.cpp",0xc4);
              local_30.items = (CCheckOutItem *)0x0;
            }
            if (unaff_EDI != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EDI,"..\\engine\\fileio.cpp",0xc4);
              unaff_EDI = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_30);
          }
        }
      }
      goto LAB_004b4768;
    }
    pcVar6 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
LAB_004b4768:
  if (local_30.items != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_30.items,"..\\engine\\fileio.cpp",0xc4);
    local_30.items = (CCheckOutItem *)0x0;
  }
  if (unaff_EBP != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EBP,"..\\engine\\fileio.cpp",0xc4);
  }
  if (unaff_ESI != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_ESI,"..\\engine\\fileio.cpp",0xc4);
  }
  if (unaff_EDI != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EDI,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_a4c[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_a4c);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
