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
  CCheckOutItem *pCVar2;
  bool bVar3;
  int iVar4;
  FILE *pFVar5;
  undefined3 extraout_var;
  int *piVar6;
  undefined3 extraout_var_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  CStrList_swap **d6;
  uint uVar12;
  CPickList *this_ptr_00;
  uint uVar13;
  CStrList *pod_list;
  uint d6_00;
  uint in_stack_ffffda14;
  CCheckOutList *in_stack_ffffda18;
  byte *d6_01;
  CCheckOutItem *pCStack_2200;
  CPodDirectoryEntry *pCStack_21fc;
  byte auStack_21d0 [16];
  byte auStack_21c0 [8];
  byte auStack_21b8 [8];
  CStrList aCStack_21b0 [55];
  byte auStack_1e40 [8];
  byte auStack_1e38 [8];
  CStrList aCStack_1e30 [58];
  byte local_1a84 [8];
  byte auStack_1a7c [904];
  char acStack_16f4 [4];
  char acStack_16f0 [4];
  char acStack_16ec [8];
  char acStack_16e4 [4];
  char acStack_16e0 [4];
  byte local_16dc [517];
  char acStack_14d7 [3];
  int iStack_14d4;
  uint uStack_14cc;
  char acStack_12e4 [12];
  char acStack_12d8 [4];
  int iStack_12d4;
  uint uStack_12cc;
  char local_12c4 [4];
  SFoundFileInfo SStack_12c0;
  int iStack_10ac;
  uint uStack_10a4;
  char acStack_109c [36];
  char acStack_1078 [444];
  char acStack_ebc [16];
  char local_eac [388];
  char acStack_d28 [16];
  char acStack_d18 [400];
  char acStack_b88 [256];
  char local_a88 [4];
  byte auStack_a84 [4];
  char acStack_a80 [252];
  char local_984 [4];
  char acStack_980 [184];
  char acStack_8c8 [4];
  char acStack_8c4 [4];
  char acStack_8c0 [4];
  char acStack_8bc [4];
  char acStack_8b8 [4];
  char acStack_8b4 [36];
  char acStack_890 [24];
  char acStack_878 [224];
  char acStack_798 [8];
  char acStack_790 [4];
  CStrList_vtable CStack_78c;
  char acStack_770 [8];
  char acStack_768 [20];
  byte auStack_754 [168];
  char acStack_6ac [8];
  char acStack_6a4 [4];
  byte auStack_6a0 [232];
  char acStack_5b8 [88];
  char acStack_560 [188];
  char acStack_4a4 [4];
  char acStack_4a0 [296];
  char acStack_378 [4];
  char acStack_374 [188];
  char acStack_2b8 [76];
  char acStack_26c [252];
  char local_170 [4];
  char acStack_16c [224];
  uint uStack_8c;
  byte auStack_88 [12];
  FILE *apFStack_7c [2];
  FILE *pFStack_74;
  FILE *local_70;
  FILE *pFStack_6c;
  int iStack_68;
  byte auStack_64 [8];
  byte local_5c [4];
  byte local_58 [12];
  CStrList_vtable *local_4c;
  FILE *local_48;
  CCheckOutList local_44;
  int local_3c;
  FILE *local_38;
  FILE *local_34;
  FILE *local_30;
  FILE *local_2c;
  char local_28 [4];
  char local_24 [4];
  char local_20 [8];
  char local_18 [8];
  
  bVar11 = 0;
  iVar4 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,timestamp_file,acStack_798,
                     "Select file to check in","*.pod");
  if (iVar4 == 0) {
    return 0;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffd9e8);
  iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffd9ec,acStack_790);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
    return 0;
  }
  local_44.items = (CCheckOutItem *)0x0;
  if (0 < (int)pCStack_2200) {
    local_3c = 0;
    do {
      pcVar10 = (char *)((int)&pCStack_21fc->name_or_offset + local_3c);
      pcVar9 = local_16dc + 0x204;
      pcVar8 = *(char **)pcVar10;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(local_16dc + 0x204));
      if ((((iVar4 == 0) || (*(int *)(pcVar10 + 0xc) + 2U < uStack_12cc)) ||
          (uStack_12cc < *(int *)(pcVar10 + 0xc) - 2U)) || (iStack_12d4 != *(int *)(pcVar10 + 4)))
      break;
      local_3c = local_3c + 0x14;
      local_44.items = (CCheckOutItem *)((int)(local_44.items)->name + 1);
    } while ((int)local_44.items < (int)pCStack_2200);
  }
  if (local_44.items != pCStack_2200) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1e40 + 4));
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1e38,"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1e38 + 4),"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_1e30,"Show local file differences.");
    d6 = &CStack_78c.swap;
    pcVar8 = "WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)";
    pcVar9 = local_eac;
    uVar12 = 0x4bb319;
    crt_stdio_c_sprintf_FUN_005fdbd0(pcVar9,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)");
    while( true ) {
      uVar13 = 0;
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_1e40 + 4),acStack_ebc,1,0);
      if ((iVar4 < 0) || (iVar4 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_1e40,0,uVar13,uVar12,(uint)pcVar9,(uint)pcVar8,(uint)d6);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffd9f0);
        return 0;
      }
      if (iVar4 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,acStack_790);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_1e40,0,uVar13,uVar12,(uint)pcVar9,(uint)pcVar8,(uint)d6);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar4 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280
                        ((CPod *)g_CDemonPodPtr,(char *)&CStack_78c), iVar4 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda04);
    return 0;
  }
  auStack_64._4_4_ = checkout_item_name;
  local_4c = &CStack_78c;
  auStack_64._0_4_ = 0;
  local_48 = (FILE *)0x0;
  local_44.count = 0;
  pcVar9 = g_DefaultCheckOutPath;
  pcVar8 = acStack_890;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar8 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
  }
  iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,(char *)&CStack_78c,local_12c4,
                     "Select file to check in","*");
  if (iVar4 == 0) goto LAB_004bb1fa;
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_12c0);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,local_28,acStack_378);
  engine_dosio_c_makePath_FUN_00481f50(acStack_16e0,local_24,acStack_374,(char *)0x0,(char *)0x0);
  pcVar9 = SStack_12c0.found_path + 0xc;
  iVar4 = -1;
  pcVar8 = local_16dc;
  do {
    pcVar10 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar8 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)local_16dc);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  if (((iStack_10ac == iStack_14d4) && (uStack_10a4 < uStack_14cc + 2)) &&
     (uStack_14cc < uStack_10a4 + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(local_1a84 + 4));
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1a7c,"Undo the checkout.");
    uVar12 = 0x4bb1aa;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a7c + 4),"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a7c + 8),"Oops.  Keep the file checked out.");
    d6_00 = 0;
    uVar13 = 0xffffffff;
    pcVar9 = "Checking in file that didn't change.";
    this_ptr_00 = (CPickList *)(auStack_1a7c + 0xc);
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (this_ptr_00,"Checking in file that didn't change.",-1,0);
    if ((iVar4 < 0) || (iVar4 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)local_1a84,0,uVar12,(uint)this_ptr_00,(uint)pcVar9,uVar13,d6_00);
      goto LAB_004bb1fa;
    }
    if (iVar4 == 0) {
      iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)checkout_item_name,(char *)&CStack_78c.swap,local_a88,
                         "Select file to undo check out","*");
      if ((iVar4 == 0) ||
         (iVar4 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)checkout_item_name,auStack_a84), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                          (checkout_item_name,acStack_a80);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1a7c,0,(uint)pcVar9,uVar13,d6_00,in_stack_ffffda14,
                 (uint)in_stack_ffffda18);
      if (iVar4 == 0) goto LAB_004bb1fa;
      if (iVar4 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)local_1a84,0,uVar12,(uint)this_ptr_00,(uint)pcVar9,uVar13,d6_00);
  }
  local_44.items =
       (CCheckOutItem *)
       shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                 (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b88,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_20,acStack_16c);
  engine_dosio_c_makePath_FUN_00481f50(acStack_980,local_24,local_170,(char *)0x0,(char *)0x0);
  pcVar9 = acStack_b88;
  iVar4 = -1;
  pcVar8 = acStack_980;
  do {
    pcVar10 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar8 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  local_44.items =
       (CCheckOutItem *)engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640((char *)local_34)
  ;
  if ((int)local_44.items < 0) goto LAB_004bb1fa;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  local_2c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (SStack_12c0.found_path + 0x1c,(char *)0x0,"rb",
                        "..\\engine\\fileio.cpp",0x567);
  if (local_2c == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    goto LAB_004bb1fa;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar4 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar4 != 0) goto LAB_004bb723;
    goto LAB_004bb847;
  }
LAB_004bb723:
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_560,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80((char *)local_4c,local_18,acStack_26c);
  engine_dosio_c_makePath_FUN_00481f50(acStack_8c8,auStack_64,acStack_2b8,(char *)0x0,(char *)0x0);
  pcVar9 = acStack_5b8;
  iVar4 = -1;
  pcVar8 = acStack_8c4;
  do {
    pcVar10 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar8 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_8c0,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_8bc);
  pFVar5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_8b8,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  pFStack_6c = pFVar5;
  if (pFStack_74 == (FILE *)0x0) {
    pcVar9 = acStack_8b4;
    pcVar8 = "Can't create %s.\nGet Fletch.";
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8,pcVar9);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar9 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       (local_70,pFVar5,acStack_12e4,"network",
                        SStack_12c0.target_path._224_4_);
    if (pFStack_6c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_6c,"..\\engine\\fileio.cpp",0xc4);
      iStack_68 = 0;
    }
    if (pFStack_6c != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_6c,"..\\engine\\fileio.cpp",0xc4);
      pFStack_6c = (FILE *)0x0;
    }
    if (pcVar9 != (char *)0x0) {
      pcVar8 = "%s\nGet Fletch.";
      goto LAB_004bb83f;
    }
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,(char *)&local_4c,acStack_4a4);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_6ac,(char *)&local_48,acStack_4a0,(char *)0x0,(char *)0x0);
    pcVar8 = "checkout.txt";
    iVar4 = -1;
    pcVar9 = acStack_6ac;
    do {
      pcVar10 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
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
    iVar4 = 0;
    uStack_8c = 0;
    auStack_88._0_4_ = 0;
    if (local_70 == (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        apFStack_7c[0] =
             shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (acStack_6a4,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153);
        if (apFStack_7c[0] != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(apFStack_7c[0],(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar6 != 6) break;
        iVar4 = iVar4 + 1;
        (*Sleep)(500);
      } while (iVar4 < 10);
      apFStack_7c[0] = (FILE *)0x0;
LAB_004bbc40:
      if (apFStack_7c[0] == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.",auStack_6a0);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
        goto LAB_004bb847;
      }
      iVar4 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        ((CCheckOutList *)auStack_88,apFStack_7c);
      if (iVar4 != 0) {
        iStack_68 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                              ((CCheckOutList *)(auStack_88 + 4),acStack_12d8);
        if (-1 < iStack_68) goto LAB_004bba53;
        if (pFStack_74 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_74,"..\\engine\\fileio.cpp",0xc4);
          pFStack_74 = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(auStack_88 + 4));
    }
    else {
LAB_004bba53:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      pFVar5 = (FILE *)0x0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_16f4,0);
        crt_io_c_deleteFile_FUN_005ff9d0(acStack_16f0);
        iVar4 = crt_stdio_c_rename_FUN_006015d0(acStack_890,acStack_16ec);
        if (iVar4 == 0) break;
        if (0x27 < (int)pFVar5) {
          if ((FILE *)auStack_64._4_4_ != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)auStack_64._4_4_,"..\\engine\\fileio.cpp",0xc4);
            local_5c = (byte  [4])0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.");
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
          goto LAB_004bb847;
        }
        pFVar5 = (FILE *)((int)&pFVar5->_ptr + 1);
        if (pFVar5 == (FILE *)&DAT_00000001) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d28,"Waiting for %s to become available.\nPress ESC to cancel check in.");
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_d18);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        local_2c = pFVar5;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)pFVar5,40.0);
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar4 != 0) {
          pFVar5 = (FILE *)0x28;
        }
      }
      if (0 < (int)pFVar5) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar4 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (acStack_16e4,(char *)SStack_12c0.container_size);
      if (iVar4 == 0) {
        if ((CCheckOutItem *)local_58._0_4_ != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)local_58._0_4_,"..\\engine\\fileio.cpp",0xc4);
          local_58._4_4_ = (CCheckOutItem *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
      }
      else {
        bVar3 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_16e0,8);
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) == 0) {
          if ((CCheckOutItem *)local_58._4_4_ != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_58._4_4_,"..\\engine\\fileio.cpp",0xc4);
            local_58._4_4_ = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
        }
        else {
          iVar4 = 0;
          do {
            pFVar5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_984,(char *)0x0,"at","..\\engine\\fileio.cpp",
                                0x153);
            if (pFVar5 != (FILE *)0x0) {
              crt_stdio_c_setvbuf_FUN_00601490(pFVar5,(char *)0x0,0,0x400);
              goto LAB_004bbb45;
            }
            piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
            if (*piVar6 != 6) break;
            iVar4 = iVar4 + 1;
            (*Sleep)(500);
          } while (iVar4 < 10);
          pFVar5 = (FILE *)0x0;
LAB_004bbb45:
          local_34 = pFVar5;
          if (pFVar5 != (FILE *)0x0) {
            local_58._4_4_ = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
            crt_time_c_localtime_FUN_00600288((time_t *)(local_58 + 4));
            crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n");
            crt_stdio_c_fflush_FUN_00601540(pFVar5);
            if ((pFVar5->_flag & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\engine\\fileio.cpp",0xc4);
              pCVar2 = local_44.items;
              local_30 = (FILE *)0x0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if (pCVar2 != (CCheckOutItem *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_58);
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda0c);
                return 2;
              }
              iVar4 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                ((CCheckOutList *)local_58,(int)local_44.items);
              if (iVar4 == 0) {
                if (local_48 != (FILE *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            (local_48,"..\\engine\\fileio.cpp",0xc4);
                  local_44.count = (int)pCVar2;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar4 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                  ((CCheckOutList *)(local_58 + 4),&local_48);
                if (iVar4 != 0) {
                  if ((CCheckOutItem *)local_44.count != (CCheckOutItem *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              ((FILE *)local_44.count,"..\\engine\\fileio.cpp",0xc4);
                    local_44.items = (CCheckOutItem *)0x0;
                  }
                  iVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,SStack_12c0.found_path + 0x20);
                  if (((-1 < iVar4) &&
                      (bVar3 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (SStack_12c0.found_path + 0x24,(byte)iVar4 | 8),
                      CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar3) == 0)) || (iVar4 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
                  }
                  in_stack_ffffda18 = &local_44;
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(in_stack_ffffda18);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_64);
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                            (this_ptr,(CStrList *)(auStack_64 + 4));
                  pod_list = (CStrList *)local_5c;
                  iVar4 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (this_ptr,pod_list,acStack_768);
                  if (iVar4 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_21c0 + 4));
                    uVar12 = 0x4bc134;
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)auStack_21b8,"Delete local files and mount");
                    uVar13 = 0x4bc149;
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_21b8 + 4),"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              (aCStack_21b0,"Keep files extracted and pod dismounted");
                    d6_01 = auStack_754;
                    pcVar8 = "%s checked in";
                    pcVar9 = acStack_1078;
                    in_stack_ffffda18 = (CCheckOutList *)0x4bc17b;
                    crt_stdio_c_sprintf_FUN_005fdbd0(pcVar9,"%s checked in");
                    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      ((CPickList *)auStack_21d0,acStack_109c,-1,0);
                    if (iVar4 == 0) {
                      iVar7 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (this_ptr,(char *)&CStack_78c.handleInput);
                      if (iVar7 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  ((CPickList *)(auStack_21d0 + 8),0,(uint)pod_list,uVar12,uVar13,
                                   (uint)in_stack_ffffda18,(uint)pcVar9);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                  ((CStrList *)(auStack_64 + 4),0,uVar12);
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda14);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                ((CStrList *)auStack_64,acStack_770);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (this_ptr,(CStrList *)(auStack_64 + 4));
                    }
                    if ((iVar4 == 1) &&
                       (iVar4 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,acStack_768), iVar4 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                ((CPickList *)auStack_21c0,0,uVar13,(uint)in_stack_ffffda18,
                                 (uint)pcVar9,(uint)pcVar8,(uint)d6_01);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)local_58,0,(uint)in_stack_ffffda18);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda1c);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              ((CPickList *)auStack_21c0,0,uVar13,(uint)in_stack_ffffda18,
                               (uint)pcVar9,(uint)pcVar8,(uint)d6_01);
                  }
                  else {
                    iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar4 != 0) &&
                       (iVar4 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,(char *)&CStack_78c.clear), iVar4 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)local_58,0,(uint)in_stack_ffffda18);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda1c);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    in_stack_ffffda18 = (CCheckOutList *)0x4bb543;
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)local_58,0,(uint)in_stack_ffffda18);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda1c);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
              goto LAB_004bb847;
            }
          }
          if ((CCheckOutItem *)local_58._4_4_ != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_58._4_4_,"..\\engine\\fileio.cpp",0xc4);
            local_58._4_4_ = (CCheckOutItem *)0x0;
          }
          if (local_34 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\engine\\fileio.cpp",0xc4);
            local_34 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_5c);
        }
      }
    }
  }
LAB_004bb847:
  if (local_4c != (CStrList_vtable *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_4c,"..\\engine\\fileio.cpp",0xc4);
    local_4c = (CStrList_vtable *)0x0;
  }
  if (local_30 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_38 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_38,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_2c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_878[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_878);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda0c);
  return 0;
}
