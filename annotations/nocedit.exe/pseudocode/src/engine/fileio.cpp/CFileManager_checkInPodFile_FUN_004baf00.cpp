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
  CFileManager *this_ptr_00;
  uint uVar2;
  bool bVar3;
  int iVar4;
  CCheckOutItem *dest_file;
  undefined3 extraout_var;
  FILE *pFVar5;
  int *piVar6;
  tm *ptVar7;
  undefined3 extraout_var_00;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  int in_stack_00000014;
  char *in_stack_0000001c;
  char *in_stack_00000020;
  FILE *in_stack_00000028;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  int in_stack_00000044;
  CCheckOutItem *in_stack_00000048;
  CCheckOutItem *in_stack_0000004c;
  FILE *in_stack_00000050;
  int in_stack_00000054;
  CCheckOutItem *in_stack_00000058;
  uint in_stack_0000005c;
  int in_stack_00000064;
  uint d2;
  uint in_stack_ffffda18;
  uint in_stack_ffffda1c;
  uint in_stack_ffffda20;
  uint in_stack_ffffda24;
  uint in_stack_ffffda40;
  uint in_stack_ffffda44;
  uint in_stack_ffffda48;
  uint in_stack_ffffda4c;
  char *in_stack_ffffda50;
  uint in_stack_ffffda54;
  uint in_stack_ffffda58;
  char *in_stack_ffffda5c;
  char *in_stack_ffffda60;
  uint in_stack_ffffda64;
  CEditorTools *in_stack_ffffda84;
  char *in_stack_ffffda88;
  FILE *pFStack_21d8;
  CPodDirectoryEntry *local_21d4;
  byte auStack_21a4 [28];
  byte auStack_2188 [868];
  byte auStack_1e24 [8];
  byte auStack_1e1c [8];
  CPickList CStack_1e14;
  byte auStack_1a58 [20];
  byte auStack_1a44 [876];
  char acStack_16d8 [4];
  char acStack_16d4 [4];
  char acStack_16d0 [4];
  char acStack_16cc [4];
  char acStack_16c8 [16];
  char acStack_16b8 [4];
  byte auStack_16b4 [517];
  char acStack_14af [3];
  int iStack_14ac;
  uint uStack_14a4;
  int iStack_12ac;
  uint uStack_12a4;
  char acStack_129c [4];
  SFoundFileInfo SStack_1298;
  int iStack_1084;
  uint uStack_107c;
  char acStack_1060 [4];
  char acStack_105c [52];
  int iStack_1028;
  char acStack_e98 [4];
  char acStack_e94 [392];
  char acStack_d0c [4];
  char acStack_d08 [456];
  char acStack_b40 [12];
  char acStack_b34 [236];
  char acStack_a48 [4];
  byte auStack_a44 [4];
  char acStack_a40 [212];
  char acStack_96c [48];
  char acStack_93c [200];
  char acStack_874 [8];
  byte auStack_86c [4];
  uint auStack_868 [2];
  char acStack_860 [80];
  char acStack_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char acStack_800 [144];
  char acStack_770 [8];
  char acStack_768 [4];
  CCheckOutItem CStack_764;
  char acStack_5e8 [8];
  char acStack_5e0 [212];
  char acStack_50c [12];
  char acStack_500 [288];
  char acStack_3e0 [4];
  char acStack_3dc [140];
  char acStack_350 [4];
  char acStack_34c [328];
  char acStack_204 [4];
  char acStack_200 [224];
  char acStack_120 [4];
  char acStack_11c [208];
  byte local_4c [8];
  byte local_44 [8];
  CCheckOutList local_3c;
  CCheckOutList local_34;
  FILE *local_2c;
  byte local_28 [8];
  CStrList local_20;
  
  bVar14 = 0;
  iVar4 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,timestamp_file,acStack_770,
                     "Select file to check in","*.pod");
  if (iVar4 == 0) {
    return 0;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffda10);
  iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffda14,acStack_768);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to check status");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda20);
    return 0;
  }
  local_20.data_array = (char **)0x0;
  if (0 < (int)pFStack_21d8) {
    local_20.vtable = (CStrList_vtable *)0x0;
    do {
      pcVar13 = (char *)((int)&(local_20.vtable)->dtor + (int)&local_21d4->name_or_offset);
      pcVar10 = auStack_16b4 + 0x204;
      pcVar9 = *(char **)pcVar13;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_16b4 + 0x204))
      ;
      if ((((iVar4 == 0) || (*(int *)(pcVar13 + 0xc) + 2U < uStack_12a4)) ||
          (uStack_12a4 < *(int *)(pcVar13 + 0xc) - 2U)) || (iStack_12ac != *(int *)(pcVar13 + 4)))
      break;
      local_20.vtable = (CStrList_vtable *)&(local_20.vtable)->clear;
      local_20.data_array = (char **)((int)local_20.data_array + 1);
    } while ((int)local_20.data_array < (int)pFStack_21d8);
  }
  if ((FILE *)local_20.data_array != pFStack_21d8) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_1e14);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1e24,"That's OK, check it in anyway.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1e24 + 4),"Oops.  Don't check the POD in.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)auStack_1e1c,"Show local file differences.");
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e98,"WARNING!\n\nYou are about to check in %s, which is not in sync\nwith your extracted files.  (Perhaps you forget to rebuild the\npod after making changes?)");
    while( true ) {
      d2 = 0;
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_1e14,acStack_e94,1,0);
      if ((iVar4 < 0) || (iVar4 == 1)) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)(auStack_1e1c + 4),0,d2,in_stack_ffffda18,in_stack_ffffda1c,
                   in_stack_ffffda20,in_stack_ffffda24);
        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda18);
        return 0;
      }
      if (iVar4 == 0) break;
      engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(this_ptr,acStack_768);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_1e1c + 4),0,d2,in_stack_ffffda18,in_stack_ffffda1c,
               in_stack_ffffda20,in_stack_ffffda24);
  }
  if ((g_CDemonPodPtr != (CDemonPod *)0x0) &&
     (iVar4 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280
                        ((CPod *)g_CDemonPodPtr,CStack_764.name), iVar4 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s fails CRC check.  File not checked in");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda1c);
    return 0;
  }
  local_3c.items = (CCheckOutItem *)checkout_item_name;
  local_28._4_4_ = &CStack_764;
  local_3c.count = 0;
  local_20.item_count = 0;
  local_20.capacity = 0;
  pcVar10 = g_DefaultCheckOutPath;
  puVar11 = auStack_868;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = *(uint *)pcVar10;
    pcVar10 = pcVar10 + ((uint)bVar14 * -2 + 1) * 4;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
  }
  iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    ((CCheckOutItem *)checkout_item_name,CStack_764.name,acStack_129c,
                     "Select file to check in","*");
  if (iVar4 == 0) goto LAB_004bb1fa;
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_1298);
  pcVar10 = checkout_item_name;
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(checkout_item_name,&stack0x00000000,acStack_350);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_16b8,(char *)&this_ptr,acStack_34c,(char *)0x0,(char *)0x0);
  pcVar9 = SStack_1298.found_path + 0xc;
  iVar4 = -1;
  pcVar13 = auStack_16b4;
  do {
    pcVar12 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar12 = pcVar13 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar12;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_16b4);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.");
    goto LAB_004bb1fa;
  }
  if (((iStack_1084 == iStack_14ac) && (uStack_107c < uStack_14a4 + 2)) &&
     (uStack_14a4 < uStack_107c + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1a58);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a58 + 4),"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a58 + 8),"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_1a58 + 0xc),"Oops.  Keep the file checked out.");
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_1a58 + 0x10),"Checking in file that didn't change.",-1,0);
    if ((iVar4 < 0) || (iVar4 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1a44,0,in_stack_ffffda40,in_stack_ffffda44,in_stack_ffffda48,
                 in_stack_ffffda4c,(uint)in_stack_ffffda50);
      goto LAB_004bb1fa;
    }
    if (iVar4 == 0) {
      iVar4 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        ((CCheckOutItem *)pcVar10,CStack_764.name + 0x28,acStack_a48,
                         "Select file to undo check out","*");
      if ((iVar4 == 0) ||
         (iVar4 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                            ((CCheckOutItem *)pcVar10,auStack_a44), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(pcVar10,acStack_a40);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1a44 + 0xc),0,in_stack_ffffda4c,(uint)in_stack_ffffda50,
                 in_stack_ffffda54,in_stack_ffffda58,(uint)in_stack_ffffda5c);
      if (iVar4 == 0) goto LAB_004bb1fa;
      if (iVar4 == 2) goto LAB_004bbfdd;
      goto LAB_004bb492;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_1a44,0,in_stack_ffffda40,in_stack_ffffda44,in_stack_ffffda48,
               in_stack_ffffda4c,(uint)in_stack_ffffda50);
  }
  this_ptr = (CFileManager *)
             shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b40,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0x0000002c,acStack_120);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_93c,&stack0x00000030,acStack_11c,(char *)0x0,(char *)0x0);
  pcVar10 = acStack_b34;
  iVar4 = -1;
  pcVar9 = acStack_93c;
  do {
    pcVar13 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar13 = pcVar9 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  in_stack_00000014 = engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(in_stack_00000020);
  if (in_stack_00000014 < 0) goto LAB_004bb1fa;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  in_stack_ffffda54 = 0;
  in_stack_ffffda50 = SStack_1298.found_path + 0x48;
  in_stack_ffffda4c = 0x4bb6e7;
  in_stack_00000028 =
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (in_stack_ffffda50,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x567);
  if (in_stack_00000028 == (FILE *)0x0) {
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
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_50c,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (in_stack_0000001c,(char *)&stack0x00000050,acStack_204);
  in_stack_ffffda60 = (char *)&stack0x00000054;
  in_stack_ffffda5c = acStack_810;
  in_stack_ffffda58 = 0x4bb781;
  engine_dosio_c_makePath_FUN_00481f50
            (in_stack_ffffda5c,in_stack_ffffda60,acStack_200,(char *)0x0,(char *)0x0);
  pcVar10 = acStack_500;
  iVar4 = -1;
  pcVar9 = acStack_80c;
  do {
    pcVar13 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar13 = pcVar9 + (uint)bVar14 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  in_stack_ffffda64 = 0x4bb7cd;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_808,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_804);
  dest_file = (CCheckOutItem *)
              shape_memdbg_cpp_openFile_FUN_0050f7a0
                        (acStack_800,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  in_stack_0000004c = dest_file;
  if (in_stack_00000044 == 0) {
LAB_004bb83f:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(in_stack_ffffda84,in_stack_ffffda88);
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar10 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                        ((FILE *)in_stack_00000048,(FILE *)dest_file,SStack_1298.found_path + 0x6c,
                         "network",iStack_1028);
    if (in_stack_0000004c != (CCheckOutItem *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)in_stack_0000004c,"..\\engine\\fileio.cpp",0xc4);
      in_stack_00000050 = (FILE *)0x0;
    }
    if (in_stack_00000058 != (CCheckOutItem *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)in_stack_00000058,"..\\engine\\fileio.cpp",0xc4);
      in_stack_00000058 = (CCheckOutItem *)0x0;
    }
    if (pcVar10 != (char *)0x0) {
      in_stack_ffffda88 = "%s\nGet Fletch.";
      in_stack_ffffda84 = g_CEditorToolsPtr;
      goto LAB_004bb83f;
    }
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,&stack0x00000078,acStack_3e0);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_5e8,&stack0x0000007c,acStack_3dc,(char *)0x0,(char *)0x0);
    pcVar9 = "checkout.txt";
    iVar4 = -1;
    pcVar10 = acStack_5e8;
    do {
      pcVar13 = pcVar10;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar10 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
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
    iVar4 = 0;
    in_stack_00000038 = 0;
    in_stack_0000003c = 0;
    if (in_stack_00000054 == 0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Grabbing %s...");
      do {
        pFVar5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_5e0,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                            0x153);
        if (pFVar5 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar5,(char *)0x0,0,0x400);
          goto LAB_004bbc40;
        }
        piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar6 != 6) break;
        iVar4 = iVar4 + 1;
        (*Sleep)(500);
      } while (iVar4 < 10);
      pFVar5 = (FILE *)0x0;
LAB_004bbc40:
      in_stack_00000050 = pFVar5;
      if (pFVar5 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000048);
        goto LAB_004bb847;
      }
      iVar4 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        ((CCheckOutList *)&stack0x00000044,&stack0x00000050);
      if (iVar4 != 0) {
        in_stack_00000064 =
             engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                       ((CCheckOutList *)&stack0x00000048,SStack_1298.found_path + 0x8c);
        if (-1 < in_stack_00000064) goto LAB_004bba53;
        if (in_stack_00000058 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000058,"..\\engine\\fileio.cpp",0xc4);
          in_stack_0000005c = 0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000054);
    }
    else {
LAB_004bba53:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      iVar4 = 0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_16d8,0);
        crt_io_c_deleteFile_FUN_005ff9d0(acStack_16d4);
        iVar8 = crt_stdio_c_rename_FUN_006015d0(acStack_874,acStack_16d0);
        if (iVar8 == 0) break;
        if (0x27 < iVar4) {
          if ((FILE *)local_44._0_4_ != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_44._0_4_,"..\\engine\\fileio.cpp",0xc4);
            local_44._4_4_ = (CCheckOutItem *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.",auStack_86c);
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_44);
          goto LAB_004bb847;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_d0c,"Waiting for %s to become available.\nPress ESC to cancel check in.",acStack_16cc);
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_d08);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar4,40.0);
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar8 != 0) {
          iVar4 = 0x28;
        }
      }
      if (0 < iVar4) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar4 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (acStack_16cc,(char *)SStack_1298.file_offset);
      if (iVar4 == 0) {
        if ((CCheckOutItem *)local_44._4_4_ != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)local_44._4_4_,"..\\engine\\fileio.cpp",0xc4);
          local_3c.count = 0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_44);
      }
      else {
        bVar3 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_16c8,8);
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) == 0) {
          if ((FILE *)local_3c.count != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_3c.count,"..\\engine\\fileio.cpp",0xc4);
            local_3c.count = 0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_44);
        }
        else {
          iVar4 = 0;
          do {
            pFVar5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (acStack_96c,(char *)0x0,"at","..\\engine\\fileio.cpp",
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
          local_20.capacity = (int)pFVar5;
          if (pFVar5 != (FILE *)0x0) {
            local_3c.count = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
            ptVar7 = crt_time_c_localtime_FUN_00600288(&local_3c.count);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar5,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n",
                       (byte *)((int)&local_2c->_ptr + 1),ptVar7->tm_year + 0x76c,
                       ptVar7->tm_mon + 1,ptVar7->tm_mday);
            crt_stdio_c_fflush_FUN_00601540(pFVar5);
            if ((pFVar5->_flag & 0x20) == 0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\engine\\fileio.cpp",0xc4);
              uVar2 = local_28._0_4_;
              local_20.data_array = (char **)0x0;
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              if ((FILE *)uVar2 != (FILE *)0x0) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_44 + 4));
LAB_004bbfdd:
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda24);
                return 2;
              }
              iVar4 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                                ((CCheckOutList *)(local_44 + 4),local_28._0_4_);
              if (iVar4 == 0) {
                if (local_34.items != (CCheckOutItem *)0x0) {
                  shape_memdbg_cpp_closeFile_FUN_0050f9b0
                            ((FILE *)local_34.items,"..\\engine\\fileio.cpp",0xc4);
                  local_2c = (FILE *)uVar2;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
              }
              else {
                iVar4 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                                  (&local_3c,(FILE **)&local_34.items);
                if (iVar4 != 0) {
                  if (local_2c != (FILE *)0x0) {
                    shape_memdbg_cpp_closeFile_FUN_0050f9b0
                              (local_2c,"..\\engine\\fileio.cpp",0xc4);
                    local_28._0_4_ = (FILE *)0x0;
                  }
                  iVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,SStack_1298.found_path + 0x10);
                  if (((-1 < iVar4) &&
                      (bVar3 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                         (SStack_1298.found_path + 0x14,(byte)iVar4 | 8),
                      CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar3) == 0)) || (iVar4 < 0)) {
                    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                              (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
                  }
                  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_28);
LAB_004bb492:
                  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_4c);
                  this_ptr_00 = this_ptr;
                  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                            (this_ptr,(CStrList *)(local_4c + 4));
                  iVar4 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                    (this_ptr_00,(CStrList *)local_44,CStack_764.name + 0x14);
                  if (iVar4 < 0) {
                    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_21a4);
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_21a4 + 4),"Delete local files and mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_21a4 + 8),"Delete local files but don't mount");
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_21a4 + 0xc),"Keep files extracted and pod dismounted")
                    ;
                    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1060,"%s checked in");
                    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                      ((CPickList *)(auStack_21a4 + 0x14),acStack_105c,-1,0);
                    if (iVar4 == 0) {
                      iVar8 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                        (this_ptr_00,CStack_764.name + 0x30);
                      if (iVar8 == 0) {
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  ((CPickList *)auStack_2188,0,in_stack_ffffda4c,
                                   (uint)in_stack_ffffda50,in_stack_ffffda54,in_stack_ffffda58,
                                   (uint)in_stack_ffffda5c);
                        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                  (&local_20,0,(uint)in_stack_ffffda50);
                        engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda54);
                        return 0;
                      }
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                ((CStrList *)(local_28 + 4),CStack_764.name + 0x34);
                      engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                                (this_ptr_00,&local_20);
                    }
                    if ((iVar4 == 1) &&
                       (iVar4 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr,CStack_764.name + 0x3c), iVar4 == 0)) {
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                ((CPickList *)(auStack_2188 + 8),0,in_stack_ffffda54,
                                 in_stack_ffffda58,(uint)in_stack_ffffda5c,(uint)in_stack_ffffda60,
                                 in_stack_ffffda64);
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)&local_20.data_array,0,in_stack_ffffda58);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda5c);
                      return 0;
                    }
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              ((CPickList *)(auStack_2188 + 8),0,in_stack_ffffda54,in_stack_ffffda58
                               ,(uint)in_stack_ffffda5c,(uint)in_stack_ffffda60,in_stack_ffffda64);
                  }
                  else {
                    iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                      (g_CEditorToolsPtr,"Delete local files?");
                    if ((iVar4 != 0) &&
                       (iVar4 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                          (this_ptr_00,CStack_764.name + 0x3c), iVar4 == 0)) {
                      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                                ((CStrList *)&local_20.data_array,0,in_stack_ffffda58);
                      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda5c);
                      return 0;
                    }
                  }
                  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
                    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                              (g_CEditorToolsPtr,"Remounting all pods...");
                    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
                    in_stack_ffffda58 = 0x4bb543;
                    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
                  }
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&local_20.data_array,0,in_stack_ffffda58);
                  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda5c);
                  return 1;
                }
              }
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_34);
              goto LAB_004bb847;
            }
          }
          if ((FILE *)local_3c.count != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_3c.count,"..\\engine\\fileio.cpp",0xc4);
            local_3c.count = 0;
          }
          if ((FILE *)local_20.capacity != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_20.capacity,"..\\engine\\fileio.cpp",0xc4);
            local_20.capacity = 0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)local_44);
        }
      }
    }
  }
LAB_004bb847:
  if ((FILE *)local_34.count != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_34.count,"..\\engine\\fileio.cpp",0xc4);
    local_34.count = 0;
  }
  if ((FILE *)local_20.data_array != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_20.data_array,"..\\engine\\fileio.cpp",0xc4);
  }
  if ((FILE *)local_20.item_count != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_20.item_count,"..\\engine\\fileio.cpp",0xc4);
  }
  if (local_20.vtable != (CStrList_vtable *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_20.vtable,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_860[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_860);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
LAB_004bb1fa:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffda24);
  return 0;
}
