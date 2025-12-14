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
  CFileManager *pCVar5;
  undefined3 extraout_var;
  int *piVar6;
  undefined3 extraout_var_00;
  int iVar7;
  FILE *unaff_EBX;
  char *pcVar8;
  CStrList_vtable *pCVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  SFoundFileInfo *pSVar11;
  char *pcVar12;
  uint *puVar13;
  byte bVar14;
  CCheckOutItem *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_0000001c;
  FILE *in_stack_00000024;
  CCheckOutItem *in_stack_00000028;
  CCheckOutItem *in_stack_00000034;
  CStrList_vtable *in_stack_00000038;
  CStrList_vtable *in_stack_0000003c;
  uint in_stack_0000004c;
  uint in_stack_ffffda28;
  uint in_stack_ffffda2c;
  uint in_stack_ffffda30;
  uint in_stack_ffffda34;
  uint in_stack_ffffda38;
  uint in_stack_ffffda3c;
  uint in_stack_ffffda40;
  uint in_stack_ffffda44;
  uint in_stack_ffffda48;
  uint in_stack_ffffdac8;
  uint in_stack_ffffdacc;
  uint in_stack_ffffdad0;
  uint in_stack_ffffdad4;
  uint in_stack_ffffdad8;
  uint in_stack_ffffdadc;
  uint in_stack_ffffdae0;
  CPodDirectoryEntry *pCStack_21e0;
  char *pcStack_21dc;
  byte auStack_2128 [28];
  byte auStack_210c [752];
  byte auStack_1e1c [24];
  byte auStack_1e04 [924];
  byte auStack_1a68 [8];
  byte auStack_1a60 [8];
  byte auStack_1a58 [908];
  char acStack_16cc [4];
  byte auStack_16c8 [529];
  char acStack_14b7 [515];
  int local_12b4;
  uint uStack_12ac;
  char acStack_12a4 [4];
  SFoundFileInfo SStack_12a0;
  int iStack_1070;
  char *pcStack_104c;
  char acStack_fe4 [4];
  char acStack_fe0 [340];
  char acStack_e8c [4];
  char acStack_e88 [452];
  char acStack_cc4 [4];
  char acStack_cc0 [364];
  char acStack_b54 [12];
  char acStack_b48 [236];
  char acStack_a5c [4];
  byte auStack_a58 [4];
  char acStack_a54 [260];
  char acStack_950 [48];
  char acStack_920 [176];
  uint auStack_870 [6];
  char acStack_858 [4];
  char acStack_854 [4];
  char acStack_850 [4];
  char acStack_84c [4];
  char acStack_848 [28];
  char acStack_82c [8];
  char acStack_824 [172];
  char acStack_778 [8];
  char acStack_770 [4];
  char acStack_76c [24];
  char acStack_754 [4];
  char acStack_750 [124];
  char acStack_6d4 [28];
  char acStack_6b8 [4];
  char acStack_6b4 [8];
  char acStack_6ac [112];
  char acStack_63c [8];
  char acStack_634 [236];
  char acStack_548 [48];
  char acStack_518 [228];
  char acStack_434 [4];
  char acStack_430 [208];
  char acStack_360 [8];
  char acStack_358 [268];
  char acStack_24c [4];
  char acStack_248 [276];
  char acStack_134 [4];
  char acStack_130 [236];
  uint local_44;
  char *local_40;
  char *local_2c;
  uint local_28;
  uint local_24;
  CPodDirectoryEntry *local_20;
  int local_1c;
  CCheckOutList local_18;
  
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
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffda08);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffda0c,acStack_770);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda18);
    return 0;
  }
  local_20 = (CPodDirectoryEntry *)0x0;
  if (0 < (int)pCStack_21e0) {
    local_1c = 0;
    do {
      pcVar8 = pcStack_21dc + local_1c;
      pcVar12 = auStack_16c8 + 0x210;
      pcVar10 = *(char **)pcVar8;
      do {
        cVar1 = *pcVar10;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_16c8 + 0x210))
      ;
      if ((((iVar3 == 0) || (*(int *)(pcVar8 + 0xc) + 2U < uStack_12ac)) ||
          (uStack_12ac < *(int *)(pcVar8 + 0xc) - 2U)) || (local_12b4 != *(int *)(pcVar8 + 4)))
      break;
      local_1c = local_1c + 0x14;
      local_20 = (CPodDirectoryEntry *)((int)&local_20->name_or_offset + 1);
    } while ((int)local_20 < (int)pCStack_21e0);
  }
  if (local_20 != pCStack_21e0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1e1c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1e1c + 4),"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1e1c + 8),"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1e1c + 0xc),"Show local file differences.");
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e8c,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)");
    while( true ) {
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_1e1c + 0x14),acStack_e88,1,0);
      if ((iVar3 < 0) || (iVar3 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_1e04,0,in_stack_ffffda28,in_stack_ffffda2c,in_stack_ffffda30
                   ,in_stack_ffffda34,in_stack_ffffda38);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda2c);
        return 0;
      }
      if (iVar3 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,acStack_754);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_1e04,0,in_stack_ffffda28,in_stack_ffffda2c,in_stack_ffffda30,
               in_stack_ffffda34,in_stack_ffffda38);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,acStack_76c),
     iVar3 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda14);
    return 0;
  }
  local_40 = checkout_item_name;
  local_2c = acStack_76c;
  local_44 = 0;
  local_28 = 0;
  local_24 = 0;
  pcVar12 = g_DefaultCheckOutPath;
  puVar13 = auStack_870;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar13 = *(uint *)pcVar12;
    pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,acStack_76c,acStack_12a4,
                     "Select file to check in","*");
  if (iVar3 == 0) goto LAB_004bb1fa;
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_12a0);
  pcVar12 = checkout_item_name;
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,&stack0xfffffff8,acStack_358);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_16cc,&stack0xfffffff0,acStack_360,(char *)0x0,(char *)0x0);
  pSVar11 = &SStack_12a0;
  iVar3 = -1;
  pcVar10 = auStack_16c8;
  do {
    pcVar8 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar10 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = pSVar11->found_path[0];
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar11->found_path[1];
    pSVar11 = (SFoundFileInfo *)(pSVar11->found_path + 2);
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_16c8);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  if (((SStack_12a0.is_archive == auStack_16c8._520_4_) &&
      (SStack_12a0.container_size < stack0xffffeb48 + 2)) &&
     (stack0xffffeb48 < SStack_12a0.container_size + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1e04 + 0x398));
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1a68,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a68 + 4),"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1a60,"Oops.  Keep the file checked out.");
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_1a60 + 4),"Checking in file that didn't change.",-1,0);
    if ((iVar3 < 0) || (iVar3 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1a58,0,in_stack_ffffda2c,in_stack_ffffda30,in_stack_ffffda34,
                 in_stack_ffffda38,in_stack_ffffda3c);
      goto LAB_004bb1fa;
    }
    if (iVar3 == 0) {
      iVar3 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)pcVar12,acStack_750,acStack_a5c,
                         "Select file to undo check out","*");
      if ((iVar3 == 0) ||
         (iVar3 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)pcVar12,auStack_a58), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(pcVar12,acStack_a54);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1a58 + 0xc),0,in_stack_ffffda38,in_stack_ffffda3c,
                 in_stack_ffffda40,in_stack_ffffda44,in_stack_ffffda48);
      if (iVar3 == 0) goto LAB_004bb1fa;
      if (iVar3 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_1a58,0,in_stack_ffffda2c,in_stack_ffffda30,in_stack_ffffda34,
               in_stack_ffffda38,in_stack_ffffda3c);
  }
  shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
            (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b54,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,(char *)&stack0x00000018,acStack_134);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_950,(char *)&stack0x0000001c,acStack_130,(char *)0x0,(char *)0x0);
  pcVar12 = acStack_b48;
  iVar3 = -1;
  pcVar10 = acStack_950;
  do {
    pcVar8 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar10 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  pFVar4 = (FILE *)engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(timestamp_file);
  if ((int)pFVar4 < 0) goto LAB_004bb1fa;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  in_stack_00000014 =
       (CCheckOutItem *)
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (SStack_12a0.found_path + 0x3c,(char *)0x0,"rb",
                  "..\\engine\\fileio.cpp",0x567);
  if (in_stack_00000014 == (CCheckOutItem *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
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
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_518,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(local_2c,(char *)&checkout_item_name,acStack_24c);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_858,(char *)&timestamp_file,acStack_248,(char *)0x0,(char *)0x0);
  pcVar12 = acStack_548;
  iVar3 = -1;
  pcVar10 = acStack_854;
  do {
    pcVar8 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar10 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_850,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_84c);
  pCVar5 = (CFileManager *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_848,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  this_ptr = pCVar5;
  if (unaff_EBX == (FILE *)0x0) {
    pcVar12 = "Can't create %s.\nGet Fletch.";
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar12);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar12 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                        (pFVar4,(FILE *)pCVar5,SStack_12a0.found_path + 0x2c,"network",
                         iStack_1070);
    if (this_ptr != (CFileManager *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
      checkout_item_name = (char *)0x0;
    }
    if (this_ptr != (CFileManager *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
      this_ptr = (CFileManager *)0x0;
    }
    if (pcVar12 != (char *)0x0) {
      pcVar12 = "%s\nGet Fletch.";
      goto LAB_004bb83f;
    }
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,(char *)&stack0x00000024,acStack_434);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_63c,(char *)&stack0x00000028,acStack_430,(char *)0x0,(char *)0x0);
    pcVar10 = "checkout.txt";
    iVar3 = -1;
    pcVar12 = acStack_63c;
    do {
      pcVar8 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar12 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar3 = 0;
    local_1c = 0;
    local_18.count = 0;
    if (pFVar4 == (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_634,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                            0x153);
        if (pFVar4 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar4,(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar6 != 6) break;
        iVar3 = iVar3 + 1;
        (*Sleep)(500);
      } while (iVar3 < 10);
      pFVar4 = (FILE *)0x0;
LAB_004bbc40:
      if (pFVar4 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&local_18.items);
        goto LAB_004bb847;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        (&local_18,(FILE **)&stack0xfffffff4);
      if (iVar3 != 0) {
        checkout_item_name =
             (char *)engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                               ((CCheckOutList *)&local_18.items,SStack_12a0.found_path + 0x38);
        if (-1 < (int)checkout_item_name) goto LAB_004bba53;
        if (unaff_EBX != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EBX,"..\\engine\\fileio.cpp",0xc4);
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff8);
    }
    else {
LAB_004bba53:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      pCVar9 = (CStrList_vtable *)0x0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_16c8 + 0x38,0);
        crt_io_c_deleteFile_FUN_005ff9d0(auStack_16c8 + 0x3c);
        iVar3 = crt_stdio_c_rename_FUN_006015d0(acStack_82c,auStack_16c8 + 0x40);
        if (iVar3 == 0) break;
        if (0x27 < (int)pCVar9) {
          if (this_ptr != (CFileManager *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
            checkout_item_name = (char *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.");
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
          goto LAB_004bb847;
        }
        pCVar9 = (CStrList_vtable *)((int)&pCVar9->dtor + 1);
        if (pCVar9 == (CStrList_vtable *)&DAT_00000001) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_cc4,"Waiting for %s to become available.\nPress ESC to cancel check in.");
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_cc0);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        in_stack_0000003c = pCVar9;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)pCVar9,40.0);
        iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
        if (iVar3 != 0) {
          pCVar9 = (CStrList_vtable *)0x28;
        }
      }
      if (0 < (int)pCVar9) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910(auStack_16c8 + 0x48,pcStack_104c);
      if (iVar3 == 0) {
        if (timestamp_file != (char *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)timestamp_file,"..\\engine\\fileio.cpp",0xc4);
          pod_filename = (char *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&checkout_item_name);
      }
      else {
        bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_16c8 + 0x4c,8);
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
          if (pod_filename != (char *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)pod_filename,"..\\engine\\fileio.cpp",0xc4);
            in_stack_00000014 = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&timestamp_file);
        }
        else {
          iVar3 = 0;
          do {
            pCVar9 = (CStrList_vtable *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (acStack_920,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                0x153);
            if (pCVar9 != (CStrList_vtable *)0x0) {
              crt_stdio_c_setvbuf_FUN_00601490((FILE *)pCVar9,(char *)0x0,0,0x400);
              goto LAB_004bbb45;
            }
            piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
            if (*piVar6 != 6) break;
            iVar3 = iVar3 + 1;
            (*Sleep)(500);
          } while (iVar3 < 10);
          pCVar9 = (CStrList_vtable *)0x0;
LAB_004bbb45:
          in_stack_00000038 = pCVar9;
          if (pCVar9 != (CStrList_vtable *)0x0) {
            in_stack_00000018 = (FILE *)crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
            crt_time_c_localtime_FUN_00600288((time_t *)&stack0x00000018);
            crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)pCVar9,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n");
            crt_stdio_c_fflush_FUN_00601540((FILE *)pCVar9);
            if (((uint)pCVar9->insert & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)pCVar9,"..\\engine\\fileio.cpp",0xc4);
              pCVar9 = in_stack_0000003c;
              in_stack_0000004c = 0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if (pCVar9 != (CStrList_vtable *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                          ((CCheckOutList *)&stack0x00000024);
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda88);
                return 2;
              }
              iVar3 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                ((CCheckOutList *)&stack0x00000024,(int)in_stack_0000003c);
              if (iVar3 == 0) {
                if (in_stack_00000034 != (CCheckOutItem *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            ((FILE *)in_stack_00000034,"..\\engine\\fileio.cpp",0xc4);
                  in_stack_00000038 = pCVar9;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                  ((CCheckOutList *)&stack0x00000028,(FILE **)&stack0x00000034);
                if (iVar3 != 0) {
                  if (in_stack_00000038 != (CStrList_vtable *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              ((FILE *)in_stack_00000038,"..\\engine\\fileio.cpp",0xc4);
                    in_stack_0000003c = (CStrList_vtable *)0x0;
                  }
                  iVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,SStack_12a0.found_path + 0x7c);
                  if (((-1 < iVar3) &&
                      (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (SStack_12a0.found_path + 0x80,(byte)iVar3 | 8),
                      CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) == 0)) || (iVar3 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
                  }
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                            ((CCheckOutList *)&stack0x0000003c);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0x00000030);
                  pCVar5 = this_ptr;
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                            (this_ptr,(CStrList *)&stack0x00000034);
                  iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (pCVar5,(CStrList *)&stack0x00000038,acStack_6d4);
                  if (iVar3 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_2128);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_2128 + 4),"Delete local files and mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_2128 + 8),"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_2128 + 0xc),"Keep files extracted and pod dismounted")
                    ;
                    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_fe4,"%s checked in");
                    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      ((CPickList *)(auStack_2128 + 0x14),acStack_fe0,-1,0);
                    if (iVar3 == 0) {
                      iVar7 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (pCVar5,acStack_6b8);
                      if (iVar7 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  ((CPickList *)auStack_210c,0,in_stack_ffffdac8,in_stack_ffffdacc,
                                   in_stack_ffffdad0,in_stack_ffffdad4,in_stack_ffffdad8);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                  ((CStrList *)&stack0x0000005c,0,in_stack_ffffdacc);
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffdad0);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                ((CStrList *)&stack0x00000058,acStack_6b4);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (pCVar5,(CStrList *)&stack0x0000005c);
                    }
                    if ((iVar3 == 1) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,acStack_6ac), iVar3 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                ((CPickList *)(auStack_210c + 8),0,in_stack_ffffdad0,
                                 in_stack_ffffdad4,in_stack_ffffdad8,in_stack_ffffdadc,
                                 in_stack_ffffdae0);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)&stack0x00000064,0,in_stack_ffffdad4);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffdad8);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              ((CPickList *)(auStack_210c + 8),0,in_stack_ffffdad0,in_stack_ffffdad4
                               ,in_stack_ffffdad8,in_stack_ffffdadc,in_stack_ffffdae0);
                  }
                  else {
                    iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar3 != 0) &&
                       (iVar3 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (pCVar5,acStack_6ac), iVar3 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)&stack0x00000064,0,in_stack_ffffdad4);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffdad8);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000064,0,in_stack_ffffdad4);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffdad8);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000030);
              goto LAB_004bb847;
            }
          }
          if (in_stack_00000018 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
            in_stack_00000018 = (FILE *)0x0;
          }
          if (in_stack_00000038 != (CStrList_vtable *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)in_stack_00000038,"..\\engine\\fileio.cpp",0xc4);
            in_stack_00000038 = (CStrList_vtable *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&pod_filename);
        }
      }
    }
  }
LAB_004bb847:
  if (checkout_item_name != (char *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)checkout_item_name,"..\\engine\\fileio.cpp",0xc4);
    checkout_item_name = (char *)0x0;
  }
  if (in_stack_00000024 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000024,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_0000001c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_00000028 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000028,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_824[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_824);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda1c);
  return 0;
}
