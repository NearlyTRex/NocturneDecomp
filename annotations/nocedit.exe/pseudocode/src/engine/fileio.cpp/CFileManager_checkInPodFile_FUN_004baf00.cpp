// Name: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// Address: 004baf00
// Address Range: [[004baf00, 004bc2af]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00(CFileManager * this_ptr, char * checkout_item_name, char * timestamp_file, char * pod_filename)
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626060
//   TerminatedCString s_versionControlDirectory__00626075
//   TerminatedCString s_checkout_txt_00626096
//   undefined4 s_heckout.txt_00626097
//   undefined4 s_eckout.txt_00626098
//   undefined4 s_ckout.txt_00626099
//   TerminatedCString s_engine_fileio_cpp_006260a3
//   TerminatedCString s_versionControlDirectory__006260b8
//   TerminatedCString s_history_s_s_006260d9
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_anon_00626a5d
//   TerminatedCString s_Select_file_to_undo_chec_00626a5f
//   TerminatedCString s_anon_00626a7d
//   TerminatedCString s_Select_file_to_check_in_00626a7f
//   TerminatedCString s_Error_accessing_s_File_n_00626a97
//   TerminatedCString s_Error_accessing_s_File_n_00626ac1
//   TerminatedCString s_Undo_the_checkout_00626aeb
//   TerminatedCString s_Yes_I_did_change_the_fil_00626afe
//   TerminatedCString s_Oops_Keep_the_file_check_00626b4e
//   TerminatedCString s_Checking_in_file_that_di_00626b70
//   TerminatedCString s_Keep_s_checked_out_after_00626b95
//   TerminatedCString s_history_00626bc4
//   TerminatedCString s_Reading_s_00626bcc
//   TerminatedCString s_Opening_local_file_s_00626bd7
//   TerminatedCString s_engine_fileio_cpp_00626bed
//   TerminatedCString s_rb_00626c02
//   TerminatedCString s_Can_t_open_s_00626c05
//   TerminatedCString s_Logging_on_as_version_co_00626c13
//   TerminatedCString s_s_00626c39
//   TerminatedCString s_Creating_temporary_netwo_00626c44
//   TerminatedCString s_engine_fileio_cpp_00626c6a
//   TerminatedCString s_wb_00626c7f
//   TerminatedCString s_Can_t_create_s_Get_Fletc_00626c82
//   TerminatedCString s_Copying_file_to_temporar_00626c9f
//   TerminatedCString s_network_00626cc6
//   TerminatedCString s_s_Get_Fletch_00626cce
//   TerminatedCString s_Grabbing_s_00626cdd
//   TerminatedCString s_r_t_00626cec
//   TerminatedCString s_Can_t_access_s_Get_Fletc_00626cf0
//   TerminatedCString s_Hell_froze_we_no_longer__00626d0e
//   TerminatedCString s_Finalizing_s_to_network_00626d46
//   TerminatedCString s_Error_renaming_s_s_The_f_00626d62
//   TerminatedCString s_Waiting_for_s_to_become__00626e66
//   TerminatedCString s_Error_setting_file_date__00626ea8
//   TerminatedCString s_Error_setting_file_date__006270ed
//   TerminatedCString s_at_0062729a
//   TerminatedCString s_Error_creating_history_r_0062729d
//   TerminatedCString s_s_4d_04d_02d_02d_02d_02d_0062744a
//   TerminatedCString s_Out_of_memory_Restart_th_00627473
//   TerminatedCString s_Error_marking_local_file_006274c1
//   TerminatedCString s_Remounting_all_pods_0062759a
//   TerminatedCString s_pod_00628dd7
//   TerminatedCString s_Select_file_to_check_in_00628ddd
//   TerminatedCString s_Can_t_mount_s_to_check_s_00628df5
//   TerminatedCString s_That_s_OK_check_it_in_an_00628e14
//   TerminatedCString s_Oops_Don_t_check_the_POD_00628e33
//   TerminatedCString s_Show_local_file_differen_00628e52
//   TerminatedCString s_WARNING_You_are_about_to_00628e6f
//   TerminatedCString s_s_fails_CRC_check_File_n_00628f06
//   TerminatedCString s_Delete_local_files_and_m_00628f2f
//   TerminatedCString s_Delete_local_files_but_d_00628f4c
//   TerminatedCString s_Keep_files_extracted_and_00628f6f
//   TerminatedCString s_s_checked_in_00628f97
//   TerminatedCString s_Delete_local_files_00628fa5
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[260] g_DefaultCheckOutPath
//   undefined4 s__00679ddc
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 g_VersionControlSession.network_username[0]
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fflush_FUN_00601540
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_rename_FUN_006015d0
//   crt_stdio.c_setvbuf_FUN_00601490
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

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
  undefined4 *puVar13;
  byte bVar14;
  CCheckOutItem *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_0000001c;
  FILE *in_stack_00000024;
  CCheckOutItem *in_stack_00000028;
  CCheckOutItem *in_stack_00000034;
  CStrList_vtable *in_stack_00000038;
  CStrList_vtable *in_stack_0000003c;
  undefined4 in_stack_0000004c;
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
  undefined1 auStack_2128 [28];
  undefined1 auStack_210c [752];
  undefined1 auStack_1e1c [24];
  undefined1 auStack_1e04 [924];
  undefined1 auStack_1a68 [8];
  undefined1 auStack_1a60 [8];
  undefined1 auStack_1a58 [908];
  char acStack_16cc [4];
  undefined1 auStack_16c8 [529];
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
  undefined1 auStack_a58 [4];
  char acStack_a54 [260];
  char acStack_950 [48];
  char acStack_920 [176];
  undefined4 auStack_870 [6];
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
  undefined4 local_44;
  char *local_40;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
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
    *puVar13 = *(undefined4 *)pcVar12;
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
        if (pFVar4 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x0,"..\\engine\\fileio.cpp",0xc4);
        }
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
        if (CONCAT31(extraout_var,bVar2) == 0) {
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
                      CONCAT31(extraout_var_00,bVar2) == 0)) || (iVar3 < 0)) {
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


// Assembly code:
// 004baf00: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00
// 004baf01: PUSH ESI
// 004baf02: PUSH EDI
// 004baf03: PUSH EBP
// 004baf04: MOV EBP,ESP
// 004baf06: SUB ESP,0x25ec
// 004baf0c: AND ESP,0xfffffff8
// 004baf0f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004baf12: PUSH EDX
// 004baf13: CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
// 004baf18: ADD ESP,0x4
// 004baf1b: TEST EAX,EAX
// 004baf1d: JNZ 0x004baf2a
//   XREF to: 004baf2a (CONDITIONAL_JUMP)
// 004baf1f: XOR ESI,ESI
//   Label: LAB_004baf1f
// 004baf21: MOV EAX,ESI
// 004baf23: MOV ESP,EBP
// 004baf25: POP EBP
// 004baf26: POP EDI
// 004baf27: POP ESI
// 004baf28: POP EBX
// 004baf29: RET
// 004baf2a: PUSH 0x628dd7
//   Label: LAB_004baf2a
//   XREF to: 00628dd7 (DATA)
// 004baf2f: PUSH 0x628ddd
//   XREF to: 00628ddd (DATA)
// 004baf34: LEA EAX,[ESP + 0x1e8c]
//   XREF to: Stack[-0x77c] (DATA)
// 004baf3b: PUSH EAX
// 004baf3c: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004baf3f: PUSH ECX
// 004baf40: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004baf43: PUSH EBX
// 004baf44: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004baf49: ADD ESP,0x14
// 004baf4c: TEST EAX,EAX
// 004baf4e: JZ 0x004baf1f
//   XREF to: 004baf1f (CONDITIONAL_JUMP)
// 004baf50: MOV EAX,ESP
// 004baf52: PUSH EAX
// 004baf53: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004baf58: ADD ESP,0x4
// 004baf5b: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004baf62: PUSH EAX
// 004baf63: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004baf67: PUSH EAX
// 004baf68: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004baf6d: ADD ESP,0x8
// 004baf70: TEST EAX,EAX
// 004baf72: JZ 0x004bb213
//   XREF to: 004bb213 (CONDITIONAL_JUMP)
// 004baf78: XOR EAX,EAX
// 004baf7a: MOV EDX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x21f0] (READ)
// 004baf81: MOV dword ptr [ESP + 0x25d0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004baf88: TEST EDX,EDX
// 004baf8a: JLE 0x004bafed
//   XREF to: 004bafed (CONDITIONAL_JUMP)
// 004baf8c: MOV dword ptr [ESP + 0x25d4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004baf93: MOV EBX,dword ptr [ESP + 0x414]
//   Label: LAB_004baf93
//   XREF to: Stack[-0x21ec] (READ)
// 004baf9a: ADD EBX,dword ptr [ESP + 0x25d4]
//   XREF to: Stack[-0x2c] (READ)
// 004bafa1: LEA EDI,[ESP + 0x1138]
//   XREF to: Stack[-0x14c8] (DATA)
// 004bafa8: MOV ESI,dword ptr [EBX]
// 004bafaa: PUSH EDI
// 004bafab: MOV AL,byte ptr [ESI]
//   Label: LAB_004bafab
// 004bafad: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x14c8] (DATA)
// 004bafaf: CMP AL,0x0
// 004bafb1: JZ 0x004bafc3
//   XREF to: 004bafc3 (CONDITIONAL_JUMP)
// 004bafb3: MOV AL,byte ptr [ESI + 0x1]
// 004bafb6: ADD ESI,0x2
// 004bafb9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x14c7] (WRITE)
// 004bafbc: ADD EDI,0x2
// 004bafbf: CMP AL,0x0
// 004bafc1: JNZ 0x004bafab
//   XREF to: 004bafab (CONDITIONAL_JUMP)
// 004bafc3: POP EDI
//   Label: LAB_004bafc3
// 004bafc4: LEA EAX,[ESP + 0x1138]
//   XREF to: Stack[-0x14c8] (DATA)
// 004bafcb: PUSH EAX
// 004bafcc: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bafd1: ADD ESP,0x4
// 004bafd4: TEST EAX,EAX
// 004bafd6: JZ 0x004bafed
//   XREF to: 004bafed (CONDITIONAL_JUMP)
// 004bafd8: MOV EAX,dword ptr [EBX + 0xc]
// 004bafdb: MOV EDX,dword ptr [ESP + 0x1344]
//   XREF to: Stack[-0x12bc] (READ)
// 004bafe2: ADD EAX,0x2
// 004bafe5: CMP EAX,EDX
// 004bafe7: JNC 0x004bb257
//   XREF to: 004bb257 (CONDITIONAL_JUMP)
// 004bafed: MOV EAX,dword ptr [ESP + 0x25d0]
//   Label: LAB_004bafed
//   XREF to: Stack[-0x30] (READ)
// 004baff4: CMP EAX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x21f0] (READ)
// 004baffb: JNZ 0x004bb2a9
//   XREF to: 004bb2a9 (CONDITIONAL_JUMP)
// 004bb001: MOV EDX,dword ptr [0x00680cdc]
//   Label: LAB_004bb001
//   XREF to: 00680cdc (READ)
// 004bb007: TEST EDX,EDX
// 004bb009: JZ 0x004bb024
//   XREF to: 004bb024 (CONDITIONAL_JUMP)
// 004bb00b: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb012: PUSH EAX
// 004bb013: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 004bb014: CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   XREF to: 00551280 (UNCONDITIONAL_CALL)
// 004bb019: ADD ESP,0x8
// 004bb01c: TEST EAX,EAX
// 004bb01e: JZ 0x004bb399
//   XREF to: 004bb399 (CONDITIONAL_JUMP)
// 004bb024: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_004bb024
//   XREF to: Stack[0x8] (READ)
// 004bb027: MOV ECX,0x41
// 004bb02c: LEA EDI,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb033: PUSH 0x626a7d
//   XREF to: 00626a7d (DATA)
// 004bb038: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004bb03b: XOR ESI,ESI
// 004bb03d: MOV dword ptr [ESP + 0x25b4],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004bb044: LEA EAX,[ESP + 0x1e88]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb04b: PUSH 0x626a7f
//   XREF to: 00626a7f (DATA)
// 004bb050: MOV dword ptr [ESP + 0x25cc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004bb057: LEA EAX,[ESP + 0x1354]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb05e: MOV dword ptr [ESP + 0x25b4],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 004bb065: PUSH EAX
// 004bb066: LEA EAX,[ESP + 0x1e90]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb06d: MOV dword ptr [ESP + 0x25d4],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004bb074: PUSH EAX
// 004bb075: MOV dword ptr [ESP + 0x25dc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 004bb07c: MOV ESI,0x679dd8
//   XREF to: 00679dd8 (DATA)
// 004bb081: PUSH EDX
// 004bb082: MOVSD.REP ES:EDI,ESI
//   XREF to: 00679dd8 (READ)
//   XREF to: 00679ddc (READ)
// 004bb084: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004bb089: ADD ESP,0x14
// 004bb08c: TEST EAX,EAX
// 004bb08e: JZ 0x004bb1fa
//   XREF to: 004bb1fa (CONDITIONAL_JUMP)
// 004bb094: LEA EAX,[ESP + 0x134c]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb09b: PUSH EAX
// 004bb09c: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bb0a1: ADD ESP,0x4
// 004bb0a4: TEST EAX,EAX
// 004bb0a6: JZ 0x004bb3ce
//   XREF to: 004bb3ce (CONDITIONAL_JUMP)
// 004bb0ac: LEA EAX,[ESP + 0x2290]
//   XREF to: Stack[-0x370] (DATA)
// 004bb0b3: PUSH EAX
// 004bb0b4: LEA EAX,[ESP + 0x25e4]
//   XREF to: Stack[-0x20] (DATA)
// 004bb0bb: PUSH EAX
// 004bb0bc: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004bb0bf: PUSH EBX
// 004bb0c0: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004bb0c5: ADD ESP,0xc
// 004bb0c8: PUSH 0x0
// 004bb0ca: PUSH 0x0
// 004bb0cc: LEA EAX,[ESP + 0x2298]
//   XREF to: Stack[-0x370] (DATA)
// 004bb0d3: PUSH EAX
// 004bb0d4: LEA EAX,[ESP + 0x25ec]
//   XREF to: Stack[-0x20] (DATA)
// 004bb0db: PUSH EAX
// 004bb0dc: LEA EAX,[ESP + 0xf34]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bb0e3: PUSH EAX
// 004bb0e4: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004bb0e9: ADD ESP,0x14
// 004bb0ec: LEA ESI,[ESP + 0x134c]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb0f3: LEA EDI,[ESP + 0xf24]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bb0fa: PUSH EDI
// 004bb0fb: SUB ECX,ECX
// 004bb0fd: DEC ECX
// 004bb0fe: MOV AL,0x0
// 004bb100: SCASB.REPNE ES:EDI
// 004bb102: DEC EDI
// 004bb103: MOV AL,byte ptr [ESI]
//   Label: LAB_004bb103
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb105: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x16dc] (DATA)
// 004bb107: CMP AL,0x0
// 004bb109: JZ 0x004bb11b
//   XREF to: 004bb11b (CONDITIONAL_JUMP)
// 004bb10b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x12b3] (READ)
// 004bb10e: ADD ESI,0x2
// 004bb111: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x16db] (WRITE)
// 004bb114: ADD EDI,0x2
// 004bb117: CMP AL,0x0
// 004bb119: JNZ 0x004bb103
//   XREF to: 004bb103 (CONDITIONAL_JUMP)
// 004bb11b: POP EDI
//   Label: LAB_004bb11b
// 004bb11c: LEA EAX,[ESP + 0xf24]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bb123: PUSH EAX
// 004bb124: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bb129: ADD ESP,0x4
// 004bb12c: TEST EAX,EAX
// 004bb12e: JZ 0x004bb3ef
//   XREF to: 004bb3ef (CONDITIONAL_JUMP)
// 004bb134: MOV EAX,dword ptr [ESP + 0x1550]
//   XREF to: Stack[-0x10b0] (READ)
// 004bb13b: CMP EAX,dword ptr [ESP + 0x1128]
//   XREF to: Stack[-0x14d8] (READ)
// 004bb142: JNZ 0x004bb58e
//   XREF to: 004bb58e (CONDITIONAL_JUMP)
// 004bb148: MOV EAX,dword ptr [ESP + 0x1130]
//   XREF to: Stack[-0x14d0] (READ)
// 004bb14f: MOV EDX,dword ptr [ESP + 0x1558]
//   XREF to: Stack[-0x10a8] (READ)
// 004bb156: ADD EAX,0x2
// 004bb159: CMP EAX,EDX
// 004bb15b: JBE 0x004bb58e
//   XREF to: 004bb58e (CONDITIONAL_JUMP)
// 004bb161: MOV ECX,dword ptr [ESP + 0x1130]
//   XREF to: Stack[-0x14d0] (READ)
// 004bb168: LEA EAX,[EDX + 0x2]
// 004bb16b: CMP EAX,ECX
// 004bb16d: JBE 0x004bb58e
//   XREF to: 004bb58e (CONDITIONAL_JUMP)
// 004bb173: LEA EAX,[ESP + 0xb7c]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb17a: PUSH EAX
// 004bb17b: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bb180: ADD ESP,0x4
// 004bb183: PUSH 0x626aeb
//   XREF to: 00626aeb (DATA)
// 004bb188: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb18f: PUSH EAX
// 004bb190: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb195: ADD ESP,0x8
// 004bb198: PUSH 0x626afe
//   XREF to: 00626afe (DATA)
// 004bb19d: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb1a4: PUSH EAX
// 004bb1a5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb1aa: ADD ESP,0x8
// 004bb1ad: PUSH 0x626b4e
//   XREF to: 00626b4e (DATA)
// 004bb1b2: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb1b9: PUSH EAX
// 004bb1ba: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb1bf: ADD ESP,0x8
// 004bb1c2: PUSH 0x0
// 004bb1c4: PUSH -0x1
// 004bb1c6: PUSH 0x626b70
//   XREF to: 00626b70 (DATA)
// 004bb1cb: LEA EAX,[ESP + 0xb88]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb1d2: PUSH EAX
// 004bb1d3: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bb1d8: ADD ESP,0x10
// 004bb1db: TEST EAX,EAX
// 004bb1dd: JL 0x004bb1e8
//   XREF to: 004bb1e8 (CONDITIONAL_JUMP)
// 004bb1df: CMP EAX,0x2
// 004bb1e2: JNZ 0x004bb410
//   XREF to: 004bb410 (CONDITIONAL_JUMP)
// 004bb1e8: PUSH 0x0
//   Label: LAB_004bb1e8
// 004bb1ea: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb1f1: PUSH EAX
// 004bb1f2: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bb1f7: ADD ESP,0x8
// 004bb1fa: XOR ESI,ESI
//   Label: LAB_004bb1fa
// 004bb1fc: PUSH ESI
// 004bb1fd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bb201: PUSH EAX
// 004bb202: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bb207: ADD ESP,0x8
// 004bb20a: MOV EAX,ESI
// 004bb20c: MOV ESP,EBP
// 004bb20e: POP EBP
// 004bb20f: POP EDI
// 004bb210: POP ESI
// 004bb211: POP EBX
// 004bb212: RET
// 004bb213: MOV ESI,dword ptr [0x00678a60]
//   Label: LAB_004bb213
//   XREF to: 00678a60 (READ)
// 004bb219: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bb21a: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004bb21f: ADD ESP,0x4
// 004bb222: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb229: PUSH EAX
// 004bb22a: PUSH 0x628df5
//   XREF to: 00628df5 (DATA)
// 004bb22f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb235: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bb236: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb23b: ADD ESP,0xc
// 004bb23e: XOR ESI,ESI
// 004bb240: PUSH ESI
// 004bb241: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bb245: PUSH EAX
// 004bb246: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bb24b: ADD ESP,0x8
// 004bb24e: MOV EAX,ESI
// 004bb250: MOV ESP,EBP
// 004bb252: POP EBP
// 004bb253: POP EDI
// 004bb254: POP ESI
// 004bb255: POP EBX
// 004bb256: RET
// 004bb257: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_004bb257
// 004bb25a: SUB EAX,0x2
// 004bb25d: CMP EAX,EDX
// 004bb25f: JA 0x004bafed
//   XREF to: 004bafed (CONDITIONAL_JUMP)
// 004bb265: MOV EAX,dword ptr [ESP + 0x133c]
//   XREF to: Stack[-0x12c4] (READ)
// 004bb26c: CMP EAX,dword ptr [EBX + 0x4]
// 004bb26f: JNZ 0x004bafed
//   XREF to: 004bafed (CONDITIONAL_JUMP)
// 004bb275: MOV ECX,dword ptr [ESP + 0x25d4]
//   XREF to: Stack[-0x2c] (READ)
// 004bb27c: MOV EBX,dword ptr [ESP + 0x25d0]
//   XREF to: Stack[-0x30] (READ)
// 004bb283: MOV ESI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x21f0] (READ)
// 004bb28a: ADD ECX,0x14
// 004bb28d: INC EBX
// 004bb28e: MOV dword ptr [ESP + 0x25d4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004bb295: MOV dword ptr [ESP + 0x25d0],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004bb29c: CMP EBX,ESI
// 004bb29e: JL 0x004baf93
//   XREF to: 004baf93 (CONDITIONAL_JUMP)
// 004bb2a4: JMP 0x004bafed
//   XREF to: 004bafed (UNCONDITIONAL_JUMP)
// 004bb2a9: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004bb2a9
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb2b0: PUSH EAX
// 004bb2b1: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bb2b6: ADD ESP,0x4
// 004bb2b9: PUSH 0x628e14
//   XREF to: 00628e14 (DATA)
// 004bb2be: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb2c5: PUSH EAX
// 004bb2c6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb2cb: ADD ESP,0x8
// 004bb2ce: PUSH 0x628e33
//   XREF to: 00628e33 (DATA)
// 004bb2d3: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb2da: PUSH EAX
// 004bb2db: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb2e0: ADD ESP,0x8
// 004bb2e3: PUSH 0x628e52
//   XREF to: 00628e52 (DATA)
// 004bb2e8: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb2ef: PUSH EAX
// 004bb2f0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bb2f5: ADD ESP,0x8
// 004bb2f8: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb2ff: PUSH EAX
// 004bb300: PUSH 0x628e6f
//   XREF to: 00628e6f (DATA)
// 004bb305: LEA EAX,[ESP + 0x175c]
//   XREF to: Stack[-0xeac] (DATA)
// 004bb30c: PUSH EAX
// 004bb30d: MOV ESI,0x1
// 004bb312: XOR EBX,EBX
// 004bb314: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bb319: ADD ESP,0xc
// 004bb31c: PUSH EBX
//   Label: LAB_004bb31c
// 004bb31d: PUSH ESI
// 004bb31e: LEA EAX,[ESP + 0x175c]
//   XREF to: Stack[-0xeac] (DATA)
// 004bb325: PUSH EAX
// 004bb326: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb32d: PUSH EAX
// 004bb32e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bb333: ADD ESP,0x10
// 004bb336: TEST EAX,EAX
// 004bb338: JL 0x004bb359
//   XREF to: 004bb359 (CONDITIONAL_JUMP)
// 004bb33a: CMP EAX,0x1
// 004bb33d: JZ 0x004bb359
//   XREF to: 004bb359 (CONDITIONAL_JUMP)
// 004bb33f: TEST EAX,EAX
// 004bb341: JZ 0x004bb383
//   XREF to: 004bb383 (CONDITIONAL_JUMP)
// 004bb343: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb34a: PUSH EAX
// 004bb34b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004bb34e: PUSH EAX
// 004bb34f: CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   XREF to: 004b82a0 (UNCONDITIONAL_CALL)
// 004bb354: ADD ESP,0x8
// 004bb357: JMP 0x004bb31c
//   XREF to: 004bb31c (UNCONDITIONAL_JUMP)
// 004bb359: XOR ESI,ESI
//   Label: LAB_004bb359
// 004bb35b: PUSH ESI
// 004bb35c: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb363: PUSH EAX
// 004bb364: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bb369: ADD ESP,0x8
// 004bb36c: PUSH ESI
// 004bb36d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bb371: PUSH EAX
// 004bb372: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bb377: ADD ESP,0x8
// 004bb37a: MOV EAX,ESI
// 004bb37c: MOV ESP,EBP
// 004bb37e: POP EBP
// 004bb37f: POP EDI
// 004bb380: POP ESI
// 004bb381: POP EBX
// 004bb382: RET
// 004bb383: PUSH EAX
//   Label: LAB_004bb383
// 004bb384: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1e2c] (DATA)
// 004bb38b: PUSH EAX
// 004bb38c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bb391: ADD ESP,0x8
// 004bb394: JMP 0x004bb001
//   XREF to: 004bb001 (UNCONDITIONAL_JUMP)
// 004bb399: LEA EAX,[ESP + 0x1e84]
//   Label: LAB_004bb399
//   XREF to: Stack[-0x77c] (DATA)
// 004bb3a0: PUSH EAX
// 004bb3a1: PUSH 0x628f06
//   XREF to: 00628f06 (DATA)
// 004bb3a6: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb3ac: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004bb3ad: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb3b2: ADD ESP,0xc
// 004bb3b5: XOR ESI,ESI
// 004bb3b7: PUSH ESI
// 004bb3b8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bb3bc: PUSH EAX
// 004bb3bd: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bb3c2: ADD ESP,0x8
// 004bb3c5: MOV EAX,ESI
// 004bb3c7: MOV ESP,EBP
// 004bb3c9: POP EBP
// 004bb3ca: POP EDI
// 004bb3cb: POP ESI
// 004bb3cc: POP EBX
// 004bb3cd: RET
// 004bb3ce: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bb3ce
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb3d5: PUSH EAX
// 004bb3d6: PUSH 0x626a97
//   XREF to: 00626a97 (DATA)
// 004bb3db: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb3e1: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bb3e2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb3e7: ADD ESP,0xc
// 004bb3ea: JMP 0x004bb1fa
//   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)
// 004bb3ef: LEA EAX,[ESP + 0xf24]
//   Label: LAB_004bb3ef
//   XREF to: Stack[-0x16dc] (DATA)
// 004bb3f6: PUSH EAX
// 004bb3f7: PUSH 0x626ac1
//   XREF to: 00626ac1 (DATA)
// 004bb3fc: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb402: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bb403: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb408: ADD ESP,0xc
// 004bb40b: JMP 0x004bb1fa
//   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)
// 004bb410: TEST EAX,EAX
//   Label: LAB_004bb410
// 004bb412: JNZ 0x004bb57c
//   XREF to: 004bb57c (CONDITIONAL_JUMP)
// 004bb418: PUSH 0x626a5d
//   XREF to: 00626a5d (DATA)
// 004bb41d: PUSH 0x626a5f
//   XREF to: 00626a5f (DATA)
// 004bb422: LEA EAX,[ESP + 0x1b80]
//   XREF to: Stack[-0xa88] (DATA)
// 004bb429: PUSH EAX
// 004bb42a: LEA EAX,[ESP + 0x1e90]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb431: PUSH EAX
// 004bb432: PUSH EBX
// 004bb433: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004bb438: ADD ESP,0x14
// 004bb43b: TEST EAX,EAX
// 004bb43d: JZ 0x004bb575
//   XREF to: 004bb575 (CONDITIONAL_JUMP)
// 004bb443: LEA EAX,[ESP + 0x1b78]
//   XREF to: Stack[-0xa88] (DATA)
// 004bb44a: PUSH EAX
// 004bb44b: PUSH EBX
// 004bb44c: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004bb451: ADD ESP,0x8
// 004bb454: TEST EAX,EAX
// 004bb456: JZ 0x004bb575
//   XREF to: 004bb575 (CONDITIONAL_JUMP)
// 004bb45c: LEA EAX,[ESP + 0x1b78]
//   XREF to: Stack[-0xa88] (DATA)
// 004bb463: PUSH EAX
// 004bb464: PUSH EBX
// 004bb465: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004bb46a: ADD ESP,0x8
// 004bb46d: MOV EBX,EAX
// 004bb46f: PUSH 0x0
//   Label: LAB_004bb46f
// 004bb471: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb478: PUSH EAX
// 004bb479: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bb47e: ADD ESP,0x8
// 004bb481: TEST EBX,EBX
// 004bb483: JZ 0x004bb1fa
//   XREF to: 004bb1fa (CONDITIONAL_JUMP)
// 004bb489: CMP EBX,0x2
// 004bb48c: JZ 0x004bbfdd
//   XREF to: 004bbfdd (CONDITIONAL_JUMP)
// 004bb492: LEA EAX,[ESP + 0x2590]
//   Label: LAB_004bb492
//   XREF to: Stack[-0x70] (DATA)
// 004bb499: PUSH EAX
// 004bb49a: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bb49f: ADD ESP,0x4
// 004bb4a2: LEA EAX,[ESP + 0x2590]
//   XREF to: Stack[-0x70] (DATA)
// 004bb4a9: PUSH EAX
// 004bb4aa: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004bb4ad: PUSH EDI
// 004bb4ae: CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
// 004bb4b3: ADD ESP,0x8
// 004bb4b6: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb4bd: PUSH EAX
// 004bb4be: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bb4c5: PUSH EAX
// 004bb4c6: PUSH EDI
// 004bb4c7: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bb4cc: ADD ESP,0xc
// 004bb4cf: TEST EAX,EAX
// 004bb4d1: JL 0x004bc112
//   XREF to: 004bc112 (CONDITIONAL_JUMP)
// 004bb4d7: PUSH 0x628fa5
//   XREF to: 00628fa5 (DATA)
// 004bb4dc: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb4e2: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bb4e3: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004bb4e8: ADD ESP,0x8
// 004bb4eb: TEST EAX,EAX
// 004bb4ed: JZ 0x004bb508
//   XREF to: 004bb508 (CONDITIONAL_JUMP)
// 004bb4ef: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bb4f6: PUSH EAX
// 004bb4f7: PUSH EDI
// 004bb4f8: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bb4fd: ADD ESP,0x8
// 004bb500: TEST EAX,EAX
// 004bb502: JZ 0x004bc286
//   XREF to: 004bc286 (CONDITIONAL_JUMP)
// 004bb508: CMP dword ptr [0x00680cdc],0x0
//   Label: LAB_004bb508
//   XREF to: 00680cdc (READ)
// 004bb50f: JZ 0x004bb546
//   XREF to: 004bb546 (CONDITIONAL_JUMP)
// 004bb511: PUSH 0x62759a
//   XREF to: 0062759a (DATA)
// 004bb516: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb51c: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bb51d: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb522: ADD ESP,0x8
// 004bb525: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bb52b: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 004bb52c: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004bb531: ADD ESP,0x4
// 004bb534: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bb539: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004bb53a: MOV EBX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004bb540: CALL dword ptr [EBX + 0x4]
// 004bb543: ADD ESP,0x4
// 004bb546: PUSH 0x0
//   Label: LAB_004bb546
// 004bb548: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bb54f: PUSH EAX
// 004bb550: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bb555: ADD ESP,0x8
// 004bb558: PUSH 0x0
// 004bb55a: LEA EAX,[ESP + 0x4]
// 004bb55e: PUSH EAX
// 004bb55f: MOV ESI,0x1
// 004bb564: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bb569: ADD ESP,0x8
// 004bb56c: MOV EAX,ESI
// 004bb56e: MOV ESP,EBP
// 004bb570: POP EBP
// 004bb571: POP EDI
// 004bb572: POP ESI
// 004bb573: POP EBX
// 004bb574: RET
// 004bb575: XOR EBX,EBX
//   Label: LAB_004bb575
// 004bb577: JMP 0x004bb46f
//   XREF to: 004bb46f (UNCONDITIONAL_JUMP)
// 004bb57c: PUSH 0x0
//   Label: LAB_004bb57c
// 004bb57e: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x1a84] (DATA)
// 004bb585: PUSH EAX
// 004bb586: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bb58b: ADD ESP,0x8
// 004bb58e: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bb58e
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb595: PUSH EAX
// 004bb596: PUSH 0x626b95
//   XREF to: 00626b95 (DATA)
// 004bb59b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb5a1: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004bb5a2: MOV ESI,0x626bc4
//   XREF to: 00626bc4 (DATA)
// 004bb5a7: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004bb5ac: ADD ESP,0xc
// 004bb5af: LEA EDI,[ESP + 0x1c7c]
//   XREF to: Stack[-0x984] (DATA)
// 004bb5b6: MOV dword ptr [ESP + 0x25bc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004bb5bd: MOV AH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004bb5c3: MOV EBX,dword ptr [ESP + 0x25c4]
//   XREF to: Stack[-0x3c] (READ)
// 004bb5ca: TEST AH,AH
// 004bb5cc: JNZ 0x004bb5f0
//   XREF to: 004bb5f0 (CONDITIONAL_JUMP)
// 004bb5ce: MOV EAX,0x6260a3
//   XREF to: 006260a3 (DATA)
// 004bb5d3: MOV EDX,0xe7
// 004bb5d8: PUSH 0x6260b8
//   XREF to: 006260b8 (DATA)
// 004bb5dd: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004bb5e2: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004bb5e8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bb5ed: ADD ESP,0x4
// 004bb5f0: PUSH ESI
//   Label: LAB_004bb5f0
//   XREF to: 00626bc4 (DATA)
// 004bb5f1: PUSH EBX
// 004bb5f2: PUSH 0x6260d9
//   XREF to: 006260d9 (DATA)
// 004bb5f7: LEA EAX,[ESP + 0x1a80]
//   XREF to: Stack[-0xb8c] (DATA)
// 004bb5fe: PUSH EAX
// 004bb5ff: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bb604: ADD ESP,0x10
// 004bb607: LEA EAX,[ESP + 0x2490]
//   XREF to: Stack[-0x170] (DATA)
// 004bb60e: PUSH EAX
// 004bb60f: LEA EAX,[ESP + 0x25e0]
//   XREF to: Stack[-0x24] (DATA)
// 004bb616: PUSH EAX
// 004bb617: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004bb61c: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004bb621: ADD ESP,0xc
// 004bb624: PUSH 0x0
// 004bb626: PUSH 0x0
// 004bb628: LEA EAX,[ESP + 0x2498]
//   XREF to: Stack[-0x170] (DATA)
// 004bb62f: PUSH EAX
// 004bb630: LEA EAX,[ESP + 0x25e8]
//   XREF to: Stack[-0x24] (DATA)
// 004bb637: PUSH EAX
// 004bb638: PUSH EDI
// 004bb639: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004bb63e: ADD ESP,0x14
// 004bb641: LEA ESI,[ESP + 0x1a74]
//   XREF to: Stack[-0xb8c] (DATA)
// 004bb648: PUSH EDI
// 004bb649: SUB ECX,ECX
// 004bb64b: DEC ECX
// 004bb64c: MOV AL,0x0
// 004bb64e: SCASB.REPNE ES:EDI
// 004bb650: DEC EDI
// 004bb651: MOV AL,byte ptr [ESI]
//   Label: LAB_004bb651
//   XREF to: Stack[-0xb8c] (DATA)
// 004bb653: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x984] (DATA)
// 004bb655: CMP AL,0x0
// 004bb657: JZ 0x004bb669
//   XREF to: 004bb669 (CONDITIONAL_JUMP)
// 004bb659: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xb8b] (READ)
// 004bb65c: ADD ESI,0x2
// 004bb65f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x983] (WRITE)
// 004bb662: ADD EDI,0x2
// 004bb665: CMP AL,0x0
// 004bb667: JNZ 0x004bb651
//   XREF to: 004bb651 (CONDITIONAL_JUMP)
// 004bb669: POP EDI
//   Label: LAB_004bb669
// 004bb66a: LEA EAX,[ESP + 0x1c7c]
//   XREF to: Stack[-0x984] (DATA)
// 004bb671: PUSH EAX
// 004bb672: PUSH 0x626bcc
//   XREF to: 00626bcc (DATA)
// 004bb677: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb67d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bb67e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb683: ADD ESP,0xc
// 004bb686: LEA EAX,[ESP + 0x1c7c]
//   XREF to: Stack[-0x984] (DATA)
// 004bb68d: PUSH EAX
// 004bb68e: MOV EBX,dword ptr [ESP + 0x25c8]
//   XREF to: Stack[-0x3c] (READ)
// 004bb695: PUSH EBX
// 004bb696: CALL engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
//   XREF to: 004b2640 (UNCONDITIONAL_CALL)
// 004bb69b: ADD ESP,0x8
// 004bb69e: MOV dword ptr [ESP + 0x25b4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004bb6a5: TEST EAX,EAX
// 004bb6a7: JL 0x004bb1fa
//   XREF to: 004bb1fa (CONDITIONAL_JUMP)
// 004bb6ad: LEA EAX,[ESP + 0x134c]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb6b4: PUSH EAX
// 004bb6b5: PUSH 0x626bd7
//   XREF to: 00626bd7 (DATA)
// 004bb6ba: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb6c0: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bb6c1: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb6c6: ADD ESP,0xc
// 004bb6c9: PUSH 0x567
// 004bb6ce: PUSH 0x626bed
//   XREF to: 00626bed (DATA)
// 004bb6d3: PUSH 0x626c02
//   XREF to: 00626c02 (DATA)
// 004bb6d8: PUSH 0x0
// 004bb6da: LEA EAX,[ESP + 0x135c]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb6e1: PUSH EAX
// 004bb6e2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bb6e7: ADD ESP,0x14
// 004bb6ea: MOV dword ptr [ESP + 0x25c0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004bb6f1: TEST EAX,EAX
// 004bb6f3: JZ 0x004bb8ec
//   XREF to: 004bb8ec (CONDITIONAL_JUMP)
// 004bb6f9: CMP byte ptr [0x02d12bf8],0x0
//   XREF to: 02d12bf8 (READ)
// 004bb700: JZ 0x004bb723
//   XREF to: 004bb723 (CONDITIONAL_JUMP)
// 004bb702: PUSH 0x626c13
//   XREF to: 00626c13 (DATA)
// 004bb707: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb70d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bb70e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb713: ADD ESP,0x8
// 004bb716: CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   XREF to: 004b2770 (UNCONDITIONAL_CALL)
// 004bb71b: TEST EAX,EAX
// 004bb71d: JZ 0x004bb847
//   XREF to: 004bb847 (CONDITIONAL_JUMP)
// 004bb723: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bb723
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb72a: PUSH EAX
// 004bb72b: PUSH 0x626c39
//   XREF to: 00626c39 (DATA)
// 004bb730: LEA EAX,[ESP + 0x2094]
//   XREF to: Stack[-0x574] (DATA)
// 004bb737: PUSH EAX
// 004bb738: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bb73d: ADD ESP,0xc
// 004bb740: LEA EAX,[ESP + 0x2390]
//   XREF to: Stack[-0x270] (DATA)
// 004bb747: PUSH EAX
// 004bb748: LEA EAX,[ESP + 0x25e8]
//   XREF to: Stack[-0x1c] (DATA)
// 004bb74f: PUSH EAX
// 004bb750: MOV EAX,dword ptr [ESP + 0x25b8]
//   XREF to: Stack[-0x50] (READ)
// 004bb757: PUSH EAX
// 004bb758: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004bb75d: ADD ESP,0xc
// 004bb760: PUSH 0x0
// 004bb762: PUSH 0x0
// 004bb764: LEA EAX,[ESP + 0x2398]
//   XREF to: Stack[-0x270] (DATA)
// 004bb76b: PUSH EAX
// 004bb76c: LEA EAX,[ESP + 0x25f0]
//   XREF to: Stack[-0x1c] (DATA)
// 004bb773: PUSH EAX
// 004bb774: LEA EAX,[ESP + 0x1d90]
//   XREF to: Stack[-0x880] (DATA)
// 004bb77b: PUSH EAX
// 004bb77c: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004bb781: ADD ESP,0x14
// 004bb784: LEA ESI,[ESP + 0x208c]
//   XREF to: Stack[-0x574] (DATA)
// 004bb78b: LEA EDI,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb792: PUSH EDI
// 004bb793: SUB ECX,ECX
// 004bb795: DEC ECX
// 004bb796: MOV AL,0x0
// 004bb798: SCASB.REPNE ES:EDI
// 004bb79a: DEC EDI
// 004bb79b: MOV AL,byte ptr [ESI]
//   Label: LAB_004bb79b
//   XREF to: Stack[-0x574] (DATA)
// 004bb79d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x880] (DATA)
// 004bb79f: CMP AL,0x0
// 004bb7a1: JZ 0x004bb7b3
//   XREF to: 004bb7b3 (CONDITIONAL_JUMP)
// 004bb7a3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x573] (READ)
// 004bb7a6: ADD ESI,0x2
// 004bb7a9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x87f] (WRITE)
// 004bb7ac: ADD EDI,0x2
// 004bb7af: CMP AL,0x0
// 004bb7b1: JNZ 0x004bb79b
//   XREF to: 004bb79b (CONDITIONAL_JUMP)
// 004bb7b3: POP EDI
//   Label: LAB_004bb7b3
// 004bb7b4: LEA EAX,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb7bb: PUSH EAX
// 004bb7bc: PUSH 0x626c44
//   XREF to: 00626c44 (DATA)
// 004bb7c1: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb7c7: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bb7c8: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb7cd: ADD ESP,0xc
// 004bb7d0: PUSH 0x0
// 004bb7d2: LEA EAX,[ESP + 0x1d84]
//   XREF to: Stack[-0x880] (DATA)
// 004bb7d9: PUSH EAX
// 004bb7da: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004bb7df: ADD ESP,0x8
// 004bb7e2: LEA EAX,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb7e9: PUSH EAX
// 004bb7ea: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004bb7ef: ADD ESP,0x4
// 004bb7f2: PUSH 0x591
// 004bb7f7: PUSH 0x626c6a
//   XREF to: 00626c6a (DATA)
// 004bb7fc: PUSH 0x626c7f
//   XREF to: 00626c7f (DATA)
// 004bb801: PUSH 0x0
// 004bb803: LEA EAX,[ESP + 0x1d90]
//   XREF to: Stack[-0x880] (DATA)
// 004bb80a: PUSH EAX
// 004bb80b: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bb810: ADD ESP,0x14
// 004bb813: MOV EBX,EAX
// 004bb815: MOV ECX,dword ptr [ESP + 0x25c0]
//   XREF to: Stack[-0x40] (READ)
// 004bb81c: MOV dword ptr [ESP + 0x25c8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004bb823: TEST ECX,ECX
// 004bb825: JNZ 0x004bb90d
//   XREF to: 004bb90d (CONDITIONAL_JUMP)
// 004bb82b: LEA EAX,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb832: PUSH EAX
// 004bb833: PUSH 0x626c82
//   XREF to: 00626c82 (DATA)
// 004bb838: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb83e: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004bb83f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004bb83f
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb844: ADD ESP,0xc
// 004bb847: MOV ECX,dword ptr [ESP + 0x25ac]
//   Label: LAB_004bb847
//   XREF to: Stack[-0x54] (READ)
// 004bb84e: TEST ECX,ECX
// 004bb850: JZ 0x004bb86e
//   XREF to: 004bb86e (CONDITIONAL_JUMP)
// 004bb852: PUSH 0xc4
// 004bb857: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb85c: PUSH ECX
// 004bb85d: XOR ESI,ESI
// 004bb85f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb864: ADD ESP,0xc
// 004bb867: MOV dword ptr [ESP + 0x25ac],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 004bb86e: MOV EDI,dword ptr [ESP + 0x25c8]
//   Label: LAB_004bb86e
//   XREF to: Stack[-0x38] (READ)
// 004bb875: TEST EDI,EDI
// 004bb877: JZ 0x004bb88c
//   XREF to: 004bb88c (CONDITIONAL_JUMP)
// 004bb879: PUSH 0xc4
// 004bb87e: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb883: PUSH EDI
// 004bb884: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb889: ADD ESP,0xc
// 004bb88c: MOV EDX,dword ptr [ESP + 0x25c0]
//   Label: LAB_004bb88c
//   XREF to: Stack[-0x40] (READ)
// 004bb893: TEST EDX,EDX
// 004bb895: JZ 0x004bb8aa
//   XREF to: 004bb8aa (CONDITIONAL_JUMP)
// 004bb897: PUSH 0xc4
// 004bb89c: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb8a1: PUSH EDX
// 004bb8a2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb8a7: ADD ESP,0xc
// 004bb8aa: MOV EBX,dword ptr [ESP + 0x25cc]
//   Label: LAB_004bb8aa
//   XREF to: Stack[-0x34] (READ)
// 004bb8b1: TEST EBX,EBX
// 004bb8b3: JZ 0x004bb8c8
//   XREF to: 004bb8c8 (CONDITIONAL_JUMP)
// 004bb8b5: PUSH 0xc4
// 004bb8ba: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb8bf: PUSH EBX
// 004bb8c0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb8c5: ADD ESP,0xc
// 004bb8c8: CMP byte ptr [ESP + 0x1d80],0x0
//   Label: LAB_004bb8c8
//   XREF to: Stack[-0x880] (READ)
// 004bb8d0: JZ 0x004bb8e2
//   XREF to: 004bb8e2 (CONDITIONAL_JUMP)
// 004bb8d2: LEA EAX,[ESP + 0x1d80]
//   XREF to: Stack[-0x880] (DATA)
// 004bb8d9: PUSH EAX
// 004bb8da: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004bb8df: ADD ESP,0x4
// 004bb8e2: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004bb8e2
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004bb8e7: JMP 0x004bb1fa
//   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)
// 004bb8ec: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bb8ec
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb8f3: PUSH EAX
// 004bb8f4: PUSH 0x626c05
//   XREF to: 00626c05 (DATA)
// 004bb8f9: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb8ff: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bb900: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bb905: ADD ESP,0xc
// 004bb908: JMP 0x004bb1fa
//   XREF to: 004bb1fa (UNCONDITIONAL_JUMP)
// 004bb90d: PUSH 0x626c9f
//   Label: LAB_004bb90d
//   XREF to: 00626c9f (DATA)
// 004bb912: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bb918: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bb919: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bb91e: ADD ESP,0x8
// 004bb921: MOV EDI,dword ptr [ESP + 0x1550]
//   XREF to: Stack[-0x10b0] (READ)
// 004bb928: PUSH EDI
// 004bb929: PUSH 0x626cc6
//   XREF to: 00626cc6 (DATA)
// 004bb92e: LEA EAX,[ESP + 0x1354]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bb935: PUSH EAX
// 004bb936: PUSH EBX
// 004bb937: MOV EAX,dword ptr [ESP + 0x25d0]
//   XREF to: Stack[-0x40] (READ)
// 004bb93e: PUSH EAX
// 004bb93f: CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   XREF to: 004b2030 (UNCONDITIONAL_CALL)
// 004bb944: ADD ESP,0x14
// 004bb947: MOV EDX,dword ptr [ESP + 0x25c0]
//   XREF to: Stack[-0x40] (READ)
// 004bb94e: MOV EDI,EAX
// 004bb950: TEST EDX,EDX
// 004bb952: JZ 0x004bb970
//   XREF to: 004bb970 (CONDITIONAL_JUMP)
// 004bb954: PUSH 0xc4
// 004bb959: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb95e: PUSH EDX
// 004bb95f: XOR EBX,EBX
// 004bb961: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb966: ADD ESP,0xc
// 004bb969: MOV dword ptr [ESP + 0x25c0],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 004bb970: MOV ESI,dword ptr [ESP + 0x25c8]
//   Label: LAB_004bb970
//   XREF to: Stack[-0x38] (READ)
// 004bb977: TEST ESI,ESI
// 004bb979: JZ 0x004bb997
//   XREF to: 004bb997 (CONDITIONAL_JUMP)
// 004bb97b: PUSH 0xc4
// 004bb980: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bb985: PUSH ESI
// 004bb986: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bb98b: ADD ESP,0xc
// 004bb98e: XOR EDX,EDX
// 004bb990: MOV dword ptr [ESP + 0x25c8],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004bb997: TEST EDI,EDI
//   Label: LAB_004bb997
// 004bb999: JNZ 0x004bbbd3
//   XREF to: 004bbbd3 (CONDITIONAL_JUMP)
// 004bb99f: MOV DH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004bb9a5: LEA EDI,[ESP + 0x1f88]
//   XREF to: Stack[-0x678] (DATA)
// 004bb9ac: TEST DH,DH
// 004bb9ae: JNZ 0x004bb9d3
//   XREF to: 004bb9d3 (CONDITIONAL_JUMP)
// 004bb9b0: MOV ECX,0x626060
//   XREF to: 00626060 (DATA)
// 004bb9b5: MOV EBX,0xdd
// 004bb9ba: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004bb9bf: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004bb9c5: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004bb9cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bb9d0: ADD ESP,0x4
// 004bb9d3: LEA EAX,[ESP + 0x2190]
//   Label: LAB_004bb9d3
//   XREF to: Stack[-0x470] (DATA)
// 004bb9da: PUSH EAX
// 004bb9db: LEA EAX,[ESP + 0x25ec]
//   XREF to: Stack[-0x18] (DATA)
// 004bb9e2: PUSH EAX
// 004bb9e3: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004bb9e8: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004bb9ed: ADD ESP,0xc
// 004bb9f0: PUSH 0x0
// 004bb9f2: PUSH 0x0
// 004bb9f4: LEA EAX,[ESP + 0x2198]
//   XREF to: Stack[-0x470] (DATA)
// 004bb9fb: PUSH EAX
// 004bb9fc: LEA EAX,[ESP + 0x25f4]
//   XREF to: Stack[-0x18] (DATA)
// 004bba03: PUSH EAX
// 004bba04: PUSH EDI
// 004bba05: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004bba0a: ADD ESP,0x14
// 004bba0d: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004bba12: PUSH EDI
// 004bba13: SUB ECX,ECX
// 004bba15: DEC ECX
// 004bba16: MOV AL,0x0
// 004bba18: SCASB.REPNE ES:EDI
// 004bba1a: DEC EDI
// 004bba1b: MOV AL,byte ptr [ESI]
//   Label: LAB_004bba1b
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004bba1d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x678] (DATA)
// 004bba1f: CMP AL,0x0
// 004bba21: JZ 0x004bba33
//   XREF to: 004bba33 (CONDITIONAL_JUMP)
// 004bba23: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004bba26: ADD ESI,0x2
// 004bba29: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x677] (WRITE)
// 004bba2c: ADD EDI,0x2
// 004bba2f: CMP AL,0x0
// 004bba31: JNZ 0x004bba1b
//   XREF to: 004bba1b (CONDITIONAL_JUMP)
// 004bba33: POP EDI
//   Label: LAB_004bba33
// 004bba34: XOR ESI,ESI
// 004bba36: MOV EAX,dword ptr [ESP + 0x25bc]
//   XREF to: Stack[-0x44] (READ)
// 004bba3d: MOV dword ptr [ESP + 0x25a0],ESI
//   XREF to: Stack[-0x60] (WRITE)
// 004bba44: MOV dword ptr [ESP + 0x25a4],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 004bba4b: TEST EAX,EAX
// 004bba4d: JZ 0x004bbbe5
//   XREF to: 004bbbe5 (CONDITIONAL_JUMP)
// 004bba53: MOV EBX,dword ptr [ESP + 0x25c4]
//   Label: LAB_004bba53
//   XREF to: Stack[-0x3c] (READ)
// 004bba5a: PUSH EBX
// 004bba5b: PUSH 0x626d46
//   XREF to: 00626d46 (DATA)
// 004bba60: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bba66: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bba67: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bba6c: ADD ESP,0xc
// 004bba6f: XOR EBX,EBX
// 004bba71: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004bba76: XOR EDI,EDI
// 004bba78: PUSH EDI
//   Label: LAB_004bba78
// 004bba79: LEA EAX,[ESP + 0xf28]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bba80: PUSH EAX
// 004bba81: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004bba86: ADD ESP,0x8
// 004bba89: LEA EAX,[ESP + 0xf24]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bba90: PUSH EAX
// 004bba91: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004bba96: ADD ESP,0x4
// 004bba99: LEA EAX,[ESP + 0xf24]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbaa0: PUSH EAX
// 004bbaa1: LEA EAX,[ESP + 0x1d84]
//   XREF to: Stack[-0x880] (DATA)
// 004bbaa8: PUSH EAX
// 004bbaa9: CALL crt_stdio.c_rename_FUN_006015d0
//   XREF to: 006015d0 (UNCONDITIONAL_CALL)
// 004bbaae: ADD ESP,0x8
// 004bbab1: TEST EAX,EAX
// 004bbab3: JNZ 0x004bbd57
//   XREF to: 004bbd57 (CONDITIONAL_JUMP)
// 004bbab9: TEST EBX,EBX
// 004bbabb: JLE 0x004bbacc
//   XREF to: 004bbacc (CONDITIONAL_JUMP)
// 004bbabd: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbac3: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bbac4: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004bbac9: ADD ESP,0x4
// 004bbacc: MOV ECX,dword ptr [ESP + 0x1558]
//   Label: LAB_004bbacc
//   XREF to: Stack[-0x10a8] (READ)
// 004bbad3: PUSH ECX
// 004bbad4: LEA EAX,[ESP + 0xf28]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbadb: PUSH EAX
// 004bbadc: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004bbae1: ADD ESP,0x8
// 004bbae4: TEST EAX,EAX
// 004bbae6: JZ 0x004bbe5c
//   XREF to: 004bbe5c (CONDITIONAL_JUMP)
// 004bbaec: PUSH 0x8
// 004bbaee: LEA EAX,[ESP + 0xf28]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbaf5: PUSH EAX
// 004bbaf6: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004bbafb: ADD ESP,0x8
// 004bbafe: TEST EAX,EAX
// 004bbb00: JZ 0x004bbeb3
//   XREF to: 004bbeb3 (CONDITIONAL_JUMP)
// 004bbb06: LEA EDI,[ESP + 0x1c7c]
//   XREF to: Stack[-0x984] (DATA)
// 004bbb0d: XOR ESI,ESI
// 004bbb0f: PUSH 0x153
//   Label: LAB_004bbb0f
// 004bbb14: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004bbb19: PUSH 0x62729a
//   XREF to: 0062729a (DATA)
// 004bbb1e: PUSH 0x0
// 004bbb20: PUSH EDI
// 004bbb21: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bbb26: MOV EBX,EAX
// 004bbb28: ADD ESP,0x14
// 004bbb2b: TEST EAX,EAX
// 004bbb2d: JZ 0x004bbf0b
//   XREF to: 004bbf0b (CONDITIONAL_JUMP)
// 004bbb33: PUSH 0x400
// 004bbb38: PUSH 0x0
// 004bbb3a: PUSH 0x0
// 004bbb3c: PUSH EAX
// 004bbb3d: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004bbb42: ADD ESP,0x10
// 004bbb45: MOV dword ptr [ESP + 0x25cc],EBX
//   Label: LAB_004bbb45
//   XREF to: Stack[-0x34] (WRITE)
// 004bbb4c: TEST EBX,EBX
// 004bbb4e: JNZ 0x004bbf32
//   XREF to: 004bbf32 (CONDITIONAL_JUMP)
// 004bbb54: MOV EDX,dword ptr [ESP + 0x25ac]
//   Label: LAB_004bbb54
//   XREF to: Stack[-0x54] (READ)
// 004bbb5b: TEST EDX,EDX
// 004bbb5d: JZ 0x004bbb7b
//   XREF to: 004bbb7b (CONDITIONAL_JUMP)
// 004bbb5f: PUSH 0xc4
// 004bbb64: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbb69: PUSH EDX
// 004bbb6a: XOR EBX,EBX
// 004bbb6c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbb71: ADD ESP,0xc
// 004bbb74: MOV dword ptr [ESP + 0x25ac],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 004bbb7b: MOV ESI,dword ptr [ESP + 0x25cc]
//   Label: LAB_004bbb7b
//   XREF to: Stack[-0x34] (READ)
// 004bbb82: TEST ESI,ESI
// 004bbb84: JZ 0x004bbba2
//   XREF to: 004bbba2 (CONDITIONAL_JUMP)
// 004bbb86: PUSH 0xc4
// 004bbb8b: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbb90: PUSH ESI
// 004bbb91: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbb96: ADD ESP,0xc
// 004bbb99: XOR EAX,EAX
// 004bbb9b: MOV dword ptr [ESP + 0x25cc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004bbba2: LEA EAX,[ESP + 0x1c7c]
//   Label: LAB_004bbba2
//   XREF to: Stack[-0x984] (DATA)
// 004bbba9: PUSH EAX
// 004bbbaa: PUSH 0x62729d
//   XREF to: 0062729d (DATA)
// 004bbbaf: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbbb5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bbbb6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbbbb: ADD ESP,0xc
// 004bbbbe: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbbc5: PUSH EAX
// 004bbbc6: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbbcb: ADD ESP,0x4
// 004bbbce: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbbd3: PUSH EDI
//   Label: LAB_004bbbd3
// 004bbbd4: PUSH 0x626cce
//   XREF to: 00626cce (DATA)
// 004bbbd9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbbdf: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bbbe0: JMP 0x004bb83f
//   XREF to: 004bb83f (UNCONDITIONAL_JUMP)
// 004bbbe5: LEA EAX,[ESP + 0x1f88]
//   Label: LAB_004bbbe5
//   XREF to: Stack[-0x678] (DATA)
// 004bbbec: PUSH EAX
// 004bbbed: PUSH 0x626cdd
//   XREF to: 00626cdd (DATA)
// 004bbbf2: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbbf8: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bbbf9: LEA EDI,[ESP + 0x1f94]
//   XREF to: Stack[-0x678] (DATA)
// 004bbc00: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bbc05: ADD ESP,0xc
// 004bbc08: PUSH 0x153
//   Label: LAB_004bbc08
// 004bbc0d: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004bbc12: PUSH 0x626cec
//   XREF to: 00626cec (DATA)
// 004bbc17: PUSH 0x0
// 004bbc19: PUSH EDI
// 004bbc1a: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bbc1f: MOV EBX,EAX
// 004bbc21: ADD ESP,0x14
// 004bbc24: TEST EAX,EAX
// 004bbc26: JZ 0x004bbc9e
//   XREF to: 004bbc9e (CONDITIONAL_JUMP)
// 004bbc2c: PUSH 0x400
// 004bbc31: PUSH 0x0
// 004bbc33: PUSH 0x0
// 004bbc35: PUSH EAX
// 004bbc36: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004bbc3b: ADD ESP,0x10
// 004bbc3e: MOV EAX,EBX
// 004bbc40: MOV dword ptr [ESP + 0x25ac],EAX
//   Label: LAB_004bbc40
//   XREF to: Stack[-0x54] (WRITE)
// 004bbc47: TEST EAX,EAX
// 004bbc49: JNZ 0x004bbcc5
//   XREF to: 004bbcc5 (CONDITIONAL_JUMP)
// 004bbc4f: JZ 0x004bbc6d
//   XREF to: 004bbc6d (CONDITIONAL_JUMP)
// 004bbc51: PUSH 0xc4
// 004bbc56: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbc5b: PUSH EAX
// 004bbc5c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbc61: ADD ESP,0xc
// 004bbc64: XOR EDX,EDX
// 004bbc66: MOV dword ptr [ESP + 0x25ac],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 004bbc6d: LEA EAX,[ESP + 0x1f88]
//   Label: LAB_004bbc6d
//   XREF to: Stack[-0x678] (DATA)
// 004bbc74: PUSH EAX
// 004bbc75: PUSH 0x626cf0
//   XREF to: 00626cf0 (DATA)
// 004bbc7a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbc80: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bbc81: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbc86: ADD ESP,0xc
// 004bbc89: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbc90: PUSH EAX
// 004bbc91: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbc96: ADD ESP,0x4
// 004bbc99: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbc9e: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004bbc9e
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004bbca3: CMP dword ptr [EAX],0x6
// 004bbca6: JNZ 0x004bbcbe
//   XREF to: 004bbcbe (CONDITIONAL_JUMP)
// 004bbca8: PUSH 0x1f4
// 004bbcad: INC ESI
// 004bbcae: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004bbcb5: CMP ESI,0xa
// 004bbcb8: JL 0x004bbc08
//   XREF to: 004bbc08 (CONDITIONAL_JUMP)
// 004bbcbe: XOR EAX,EAX
//   Label: LAB_004bbcbe
// 004bbcc0: JMP 0x004bbc40
//   XREF to: 004bbc40 (UNCONDITIONAL_JUMP)
// 004bbcc5: LEA EAX,[ESP + 0x25ac]
//   Label: LAB_004bbcc5
//   XREF to: Stack[-0x54] (DATA)
// 004bbccc: PUSH EAX
// 004bbccd: LEA EAX,[ESP + 0x25a4]
//   XREF to: Stack[-0x60] (DATA)
// 004bbcd4: PUSH EAX
// 004bbcd5: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004bbcda: ADD ESP,0x8
// 004bbcdd: TEST EAX,EAX
// 004bbcdf: JZ 0x004bbd42
//   XREF to: 004bbd42 (CONDITIONAL_JUMP)
// 004bbce1: LEA EAX,[ESP + 0x134c]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bbce8: PUSH EAX
// 004bbce9: LEA EAX,[ESP + 0x25a4]
//   XREF to: Stack[-0x60] (DATA)
// 004bbcf0: PUSH EAX
// 004bbcf1: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004bbcf6: ADD ESP,0x8
// 004bbcf9: MOV dword ptr [ESP + 0x25b8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004bbd00: TEST EAX,EAX
// 004bbd02: JGE 0x004bba53
//   XREF to: 004bba53 (CONDITIONAL_JUMP)
// 004bbd08: MOV EBX,dword ptr [ESP + 0x25ac]
//   XREF to: Stack[-0x54] (READ)
// 004bbd0f: TEST EBX,EBX
// 004bbd11: JZ 0x004bbd2f
//   XREF to: 004bbd2f (CONDITIONAL_JUMP)
// 004bbd13: PUSH 0xc4
// 004bbd18: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbd1d: PUSH EBX
// 004bbd1e: XOR EDI,EDI
// 004bbd20: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbd25: ADD ESP,0xc
// 004bbd28: MOV dword ptr [ESP + 0x25ac],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 004bbd2f: PUSH 0x626d0e
//   Label: LAB_004bbd2f
//   XREF to: 00626d0e (DATA)
// 004bbd34: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbd39: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bbd3a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbd3f: ADD ESP,0x8
// 004bbd42: LEA EAX,[ESP + 0x25a0]
//   Label: LAB_004bbd42
//   XREF to: Stack[-0x60] (DATA)
// 004bbd49: PUSH EAX
// 004bbd4a: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbd4f: ADD ESP,0x4
// 004bbd52: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbd57: CMP EBX,0x28
//   Label: LAB_004bbd57
// 004bbd5a: JL 0x004bbdca
//   XREF to: 004bbdca (CONDITIONAL_JUMP)
// 004bbd5c: MOV ECX,dword ptr [ESP + 0x25ac]
//   XREF to: Stack[-0x54] (READ)
// 004bbd63: TEST ECX,ECX
// 004bbd65: JZ 0x004bbd83
//   XREF to: 004bbd83 (CONDITIONAL_JUMP)
// 004bbd67: PUSH 0xc4
// 004bbd6c: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbd71: PUSH ECX
// 004bbd72: XOR ESI,ESI
// 004bbd74: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbd79: ADD ESP,0xc
// 004bbd7c: MOV dword ptr [ESP + 0x25ac],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 004bbd83: LEA EAX,[ESP + 0xf24]
//   Label: LAB_004bbd83
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbd8a: PUSH EAX
// 004bbd8b: LEA EAX,[ESP + 0x1d84]
//   XREF to: Stack[-0x880] (DATA)
// 004bbd92: PUSH EAX
// 004bbd93: PUSH 0x626d62
//   XREF to: 00626d62 (DATA)
// 004bbd98: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbd9e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bbd9f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbda4: ADD ESP,0x10
// 004bbda7: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbdac: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bbdad: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004bbdb2: ADD ESP,0x4
// 004bbdb5: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbdbc: PUSH EAX
// 004bbdbd: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbdc2: ADD ESP,0x4
// 004bbdc5: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbdca: INC EBX
//   Label: LAB_004bbdca
// 004bbdcb: CMP EBX,0x1
// 004bbdce: JNZ 0x004bbe03
//   XREF to: 004bbe03 (CONDITIONAL_JUMP)
// 004bbdd0: LEA EAX,[ESP + 0xf24]
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbdd7: PUSH EAX
// 004bbdd8: PUSH 0x626e66
//   XREF to: 00626e66 (DATA)
// 004bbddd: LEA EAX,[ESP + 0x18ec]
//   XREF to: Stack[-0xd1c] (DATA)
// 004bbde4: PUSH EAX
// 004bbde5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bbdea: ADD ESP,0xc
// 004bbded: LEA EAX,[ESP + 0x18e4]
//   XREF to: Stack[-0xd1c] (DATA)
// 004bbdf4: PUSH EAX
// 004bbdf5: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbdfa: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bbdfb: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004bbe00: ADD ESP,0x8
// 004bbe03: PUSH 0x3fe00000
//   Label: LAB_004bbe03
// 004bbe08: PUSH 0x0
// 004bbe0a: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 004bbe0f: ADD ESP,0x8
// 004bbe12: MOV dword ptr [ESP + 0x25d8],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004bbe19: PUSH 0x42200000
// 004bbe1e: FILD dword ptr [ESP + 0x25dc]
//   XREF to: Stack[-0x28] (READ)
// 004bbe25: SUB ESP,0x4
// 004bbe28: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbe2e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2608] (DATA)
// 004bbe31: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bbe32: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004bbe37: ADD ESP,0xc
// 004bbe3a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004bbe3f: PUSH 0x1
// 004bbe41: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004bbe43: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004bbe44: CALL dword ptr [ESI + 0x4]
// 004bbe47: ADD ESP,0x8
// 004bbe4a: TEST EAX,EAX
// 004bbe4c: JZ 0x004bba78
//   XREF to: 004bba78 (CONDITIONAL_JUMP)
// 004bbe52: MOV EBX,0x28
// 004bbe57: JMP 0x004bba78
//   XREF to: 004bba78 (UNCONDITIONAL_JUMP)
// 004bbe5c: MOV EBX,dword ptr [ESP + 0x25ac]
//   Label: LAB_004bbe5c
//   XREF to: Stack[-0x54] (READ)
// 004bbe63: TEST EBX,EBX
// 004bbe65: JZ 0x004bbe83
//   XREF to: 004bbe83 (CONDITIONAL_JUMP)
// 004bbe67: PUSH 0xc4
// 004bbe6c: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbe71: PUSH EBX
// 004bbe72: XOR EDI,EDI
// 004bbe74: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbe79: ADD ESP,0xc
// 004bbe7c: MOV dword ptr [ESP + 0x25ac],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 004bbe83: LEA EAX,[ESP + 0xf24]
//   Label: LAB_004bbe83
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbe8a: PUSH EAX
// 004bbe8b: PUSH 0x626ea8
//   XREF to: 00626ea8 (DATA)
// 004bbe90: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbe95: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bbe96: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbe9b: ADD ESP,0xc
// 004bbe9e: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbea5: PUSH EAX
// 004bbea6: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbeab: ADD ESP,0x4
// 004bbeae: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbeb3: MOV EDX,dword ptr [ESP + 0x25ac]
//   Label: LAB_004bbeb3
//   XREF to: Stack[-0x54] (READ)
// 004bbeba: TEST EDX,EDX
// 004bbebc: JZ 0x004bbeda
//   XREF to: 004bbeda (CONDITIONAL_JUMP)
// 004bbebe: PUSH 0xc4
// 004bbec3: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbec8: PUSH EDX
// 004bbec9: XOR EBX,EBX
// 004bbecb: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbed0: ADD ESP,0xc
// 004bbed3: MOV dword ptr [ESP + 0x25ac],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 004bbeda: LEA EAX,[ESP + 0xf24]
//   Label: LAB_004bbeda
//   XREF to: Stack[-0x16dc] (DATA)
// 004bbee1: PUSH EAX
// 004bbee2: PUSH 0x6270ed
//   XREF to: 006270ed (DATA)
// 004bbee7: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bbeed: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bbeee: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bbef3: ADD ESP,0xc
// 004bbef6: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbefd: PUSH EAX
// 004bbefe: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbf03: ADD ESP,0x4
// 004bbf06: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bbf0b: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004bbf0b
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004bbf10: CMP dword ptr [EAX],0x6
// 004bbf13: JNZ 0x004bbf2b
//   XREF to: 004bbf2b (CONDITIONAL_JUMP)
// 004bbf15: PUSH 0x1f4
// 004bbf1a: INC ESI
// 004bbf1b: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004bbf22: CMP ESI,0xa
// 004bbf25: JL 0x004bbb0f
//   XREF to: 004bbb0f (CONDITIONAL_JUMP)
// 004bbf2b: XOR EBX,EBX
//   Label: LAB_004bbf2b
// 004bbf2d: JMP 0x004bbb45
//   XREF to: 004bbb45 (UNCONDITIONAL_JUMP)
// 004bbf32: PUSH 0x0
//   Label: LAB_004bbf32
// 004bbf34: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 004bbf39: ADD ESP,0x4
// 004bbf3c: MOV dword ptr [ESP + 0x25a8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004bbf43: LEA EAX,[ESP + 0x25a8]
//   XREF to: Stack[-0x58] (DATA)
// 004bbf4a: PUSH EAX
// 004bbf4b: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004bbf50: ADD ESP,0x4
// 004bbf53: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004bbf58: MOV ECX,dword ptr [EAX]
// 004bbf5a: PUSH ECX
// 004bbf5b: MOV ESI,dword ptr [EAX + 0x4]
// 004bbf5e: PUSH ESI
// 004bbf5f: MOV EDI,dword ptr [EAX + 0x8]
// 004bbf62: PUSH EDI
// 004bbf63: MOV EDX,dword ptr [EAX + 0xc]
// 004bbf66: MOV ESI,dword ptr [EAX + 0x10]
// 004bbf69: PUSH EDX
// 004bbf6a: INC ESI
// 004bbf6b: MOV EAX,dword ptr [EAX + 0x14]
// 004bbf6e: PUSH ESI
// 004bbf6f: ADD EAX,0x76c
// 004bbf74: PUSH EAX
// 004bbf75: MOV EAX,dword ptr [ESP + 0x25d0]
//   XREF to: Stack[-0x4c] (READ)
// 004bbf7c: INC EAX
// 004bbf7d: PUSH EAX
// 004bbf7e: PUSH 0x62744a
//   XREF to: 0062744a (DATA)
// 004bbf83: PUSH EBX
// 004bbf84: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004bbf89: ADD ESP,0x28
// 004bbf8c: PUSH EBX
// 004bbf8d: CALL crt_stdio.c_fflush_FUN_00601540
//   XREF to: 00601540 (UNCONDITIONAL_CALL)
// 004bbf92: MOV CL,byte ptr [EBX + 0xc]
// 004bbf95: ADD ESP,0x4
// 004bbf98: TEST CL,0x20
// 004bbf9b: JNZ 0x004bbb54
//   XREF to: 004bbb54 (CONDITIONAL_JUMP)
// 004bbfa1: PUSH 0xc4
// 004bbfa6: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bbfab: PUSH EBX
// 004bbfac: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bbfb1: ADD ESP,0xc
// 004bbfb4: XOR ECX,ECX
// 004bbfb6: MOV EBX,dword ptr [ESP + 0x25bc]
//   XREF to: Stack[-0x44] (READ)
// 004bbfbd: MOV dword ptr [ESP + 0x25cc],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004bbfc4: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004bbfc9: TEST EBX,EBX
// 004bbfcb: JZ 0x004bbffa
//   XREF to: 004bbffa (CONDITIONAL_JUMP)
// 004bbfcd: LEA EAX,[ESP + 0x25a0]
//   XREF to: Stack[-0x60] (DATA)
// 004bbfd4: PUSH EAX
// 004bbfd5: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bbfda: ADD ESP,0x4
// 004bbfdd: PUSH 0x0
//   Label: LAB_004bbfdd
// 004bbfdf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bbfe3: PUSH EAX
// 004bbfe4: MOV ESI,0x2
// 004bbfe9: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bbfee: ADD ESP,0x8
// 004bbff1: MOV EAX,ESI
// 004bbff3: MOV ESP,EBP
// 004bbff5: POP EBP
// 004bbff6: POP EDI
// 004bbff7: POP ESI
// 004bbff8: POP EBX
// 004bbff9: RET
// 004bbffa: MOV ESI,dword ptr [ESP + 0x25b8]
//   Label: LAB_004bbffa
//   XREF to: Stack[-0x48] (READ)
// 004bc001: PUSH ESI
// 004bc002: LEA EAX,[ESP + 0x25a4]
//   XREF to: Stack[-0x60] (DATA)
// 004bc009: PUSH EAX
// 004bc00a: CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   XREF to: 004b2d70 (UNCONDITIONAL_CALL)
// 004bc00f: ADD ESP,0x8
// 004bc012: TEST EAX,EAX
// 004bc014: JZ 0x004bc0c4
//   XREF to: 004bc0c4 (CONDITIONAL_JUMP)
// 004bc01a: LEA EAX,[ESP + 0x25ac]
//   XREF to: Stack[-0x54] (DATA)
// 004bc021: PUSH EAX
// 004bc022: LEA EAX,[ESP + 0x25a4]
//   XREF to: Stack[-0x60] (DATA)
// 004bc029: PUSH EAX
// 004bc02a: CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
// 004bc02f: ADD ESP,0x8
// 004bc032: TEST EAX,EAX
// 004bc034: JZ 0x004bc0fd
//   XREF to: 004bc0fd (CONDITIONAL_JUMP)
// 004bc03a: MOV EBX,dword ptr [ESP + 0x25ac]
//   XREF to: Stack[-0x54] (READ)
// 004bc041: TEST EBX,EBX
// 004bc043: JZ 0x004bc061
//   XREF to: 004bc061 (CONDITIONAL_JUMP)
// 004bc045: PUSH 0xc4
// 004bc04a: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bc04f: PUSH EBX
// 004bc050: XOR EDI,EDI
// 004bc052: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bc057: ADD ESP,0xc
// 004bc05a: MOV dword ptr [ESP + 0x25ac],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 004bc061: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bc061
//   XREF to: Stack[-0x12b4] (DATA)
// 004bc068: PUSH EAX
// 004bc069: PUSH 0x0
// 004bc06b: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004bc070: ADD ESP,0x8
// 004bc073: MOV EBX,EAX
// 004bc075: TEST EAX,EAX
// 004bc077: JL 0x004bc090
//   XREF to: 004bc090 (CONDITIONAL_JUMP)
// 004bc079: OR AL,0x8
// 004bc07b: PUSH EAX
// 004bc07c: LEA EAX,[ESP + 0x1350]
//   XREF to: Stack[-0x12b4] (DATA)
// 004bc083: PUSH EAX
// 004bc084: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004bc089: ADD ESP,0x8
// 004bc08c: TEST EAX,EAX
// 004bc08e: JZ 0x004bc094
//   XREF to: 004bc094 (CONDITIONAL_JUMP)
// 004bc090: TEST EBX,EBX
//   Label: LAB_004bc090
// 004bc092: JGE 0x004bc0af
//   XREF to: 004bc0af (CONDITIONAL_JUMP)
// 004bc094: LEA EAX,[ESP + 0x134c]
//   Label: LAB_004bc094
//   XREF to: Stack[-0x12b4] (DATA)
// 004bc09b: PUSH EAX
// 004bc09c: PUSH 0x6274c1
//   XREF to: 006274c1 (DATA)
// 004bc0a1: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bc0a6: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bc0a7: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 004bc0ac: ADD ESP,0xc
// 004bc0af: LEA EAX,[ESP + 0x25a0]
//   Label: LAB_004bc0af
//   XREF to: Stack[-0x60] (DATA)
// 004bc0b6: PUSH EAX
// 004bc0b7: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bc0bc: ADD ESP,0x4
// 004bc0bf: JMP 0x004bb492
//   XREF to: 004bb492 (UNCONDITIONAL_JUMP)
// 004bc0c4: MOV EDI,dword ptr [ESP + 0x25ac]
//   Label: LAB_004bc0c4
//   XREF to: Stack[-0x54] (READ)
// 004bc0cb: TEST EDI,EDI
// 004bc0cd: JZ 0x004bc0e9
//   XREF to: 004bc0e9 (CONDITIONAL_JUMP)
// 004bc0cf: PUSH 0xc4
// 004bc0d4: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bc0d9: PUSH EDI
// 004bc0da: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bc0df: ADD ESP,0xc
// 004bc0e2: MOV dword ptr [ESP + 0x25ac],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 004bc0e9: PUSH 0x627473
//   Label: LAB_004bc0e9
//   XREF to: 00627473 (DATA)
// 004bc0ee: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bc0f4: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bc0f5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bc0fa: ADD ESP,0x8
// 004bc0fd: LEA EAX,[ESP + 0x25a0]
//   Label: LAB_004bc0fd
//   XREF to: Stack[-0x60] (DATA)
// 004bc104: PUSH EAX
// 004bc105: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bc10a: ADD ESP,0x4
// 004bc10d: JMP 0x004bb847
//   XREF to: 004bb847 (UNCONDITIONAL_JUMP)
// 004bc112: LEA EAX,[ESP + 0x42c]
//   Label: LAB_004bc112
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc119: PUSH EAX
// 004bc11a: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bc11f: ADD ESP,0x4
// 004bc122: PUSH 0x628f2f
//   XREF to: 00628f2f (DATA)
// 004bc127: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc12e: PUSH EAX
// 004bc12f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc134: ADD ESP,0x8
// 004bc137: PUSH 0x628f4c
//   XREF to: 00628f4c (DATA)
// 004bc13c: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc143: PUSH EAX
// 004bc144: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc149: ADD ESP,0x8
// 004bc14c: PUSH 0x628f6f
//   XREF to: 00628f6f (DATA)
// 004bc151: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc158: PUSH EAX
// 004bc159: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc15e: ADD ESP,0x8
// 004bc161: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bc168: PUSH EAX
// 004bc169: PUSH 0x628f97
//   XREF to: 00628f97 (DATA)
// 004bc16e: LEA EAX,[ESP + 0x1568]
//   XREF to: Stack[-0x10a0] (DATA)
// 004bc175: PUSH EAX
// 004bc176: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bc17b: ADD ESP,0xc
// 004bc17e: PUSH 0x0
// 004bc180: PUSH -0x1
// 004bc182: LEA EAX,[ESP + 0x1568]
//   XREF to: Stack[-0x10a0] (DATA)
// 004bc189: PUSH EAX
// 004bc18a: LEA EAX,[ESP + 0x438]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc191: PUSH EAX
// 004bc192: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bc197: ADD ESP,0x10
// 004bc19a: MOV ESI,EAX
// 004bc19c: TEST EAX,EAX
// 004bc19e: JNZ 0x004bc1de
//   XREF to: 004bc1de (CONDITIONAL_JUMP)
// 004bc1a0: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bc1a7: PUSH EAX
// 004bc1a8: PUSH EDI
// 004bc1a9: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bc1ae: ADD ESP,0x8
// 004bc1b1: TEST EAX,EAX
// 004bc1b3: JZ 0x004bc212
//   XREF to: 004bc212 (CONDITIONAL_JUMP)
// 004bc1b5: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bc1bc: PUSH EAX
// 004bc1bd: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bc1c4: PUSH EAX
// 004bc1c5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc1ca: ADD ESP,0x8
// 004bc1cd: LEA EAX,[ESP + 0x2590]
//   XREF to: Stack[-0x70] (DATA)
// 004bc1d4: PUSH EAX
// 004bc1d5: PUSH EDI
// 004bc1d6: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004bc1db: ADD ESP,0x8
// 004bc1de: CMP ESI,0x1
//   Label: LAB_004bc1de
// 004bc1e1: JNZ 0x004bc1fb
//   XREF to: 004bc1fb (CONDITIONAL_JUMP)
// 004bc1e3: LEA EAX,[ESP + 0x1e84]
//   XREF to: Stack[-0x77c] (DATA)
// 004bc1ea: PUSH EAX
// 004bc1eb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004bc1ee: PUSH EAX
// 004bc1ef: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bc1f4: ADD ESP,0x8
// 004bc1f7: TEST EAX,EAX
// 004bc1f9: JZ 0x004bc24b
//   XREF to: 004bc24b (CONDITIONAL_JUMP)
// 004bc1fb: PUSH 0x0
//   Label: LAB_004bc1fb
// 004bc1fd: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc204: PUSH EAX
// 004bc205: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc20a: ADD ESP,0x8
// 004bc20d: JMP 0x004bb508
//   XREF to: 004bb508 (UNCONDITIONAL_JUMP)
// 004bc212: PUSH EAX
//   Label: LAB_004bc212
// 004bc213: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc21a: PUSH EAX
// 004bc21b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc220: ADD ESP,0x8
// 004bc223: PUSH ESI
// 004bc224: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bc22b: PUSH EAX
// 004bc22c: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc231: ADD ESP,0x8
// 004bc234: PUSH ESI
// 004bc235: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bc239: PUSH EAX
// 004bc23a: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bc23f: ADD ESP,0x8
// 004bc242: MOV EAX,ESI
// 004bc244: MOV ESP,EBP
// 004bc246: POP EBP
// 004bc247: POP EDI
// 004bc248: POP ESI
// 004bc249: POP EBX
// 004bc24a: RET
// 004bc24b: PUSH EAX
//   Label: LAB_004bc24b
// 004bc24c: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x21d4] (DATA)
// 004bc253: PUSH EAX
// 004bc254: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc259: ADD ESP,0x8
// 004bc25c: XOR ESI,ESI
// 004bc25e: PUSH ESI
// 004bc25f: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bc266: PUSH EAX
// 004bc267: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc26c: ADD ESP,0x8
// 004bc26f: PUSH ESI
// 004bc270: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bc274: PUSH EAX
// 004bc275: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bc27a: ADD ESP,0x8
// 004bc27d: MOV EAX,ESI
// 004bc27f: MOV ESP,EBP
// 004bc281: POP EBP
// 004bc282: POP EDI
// 004bc283: POP ESI
// 004bc284: POP EBX
// 004bc285: RET
// 004bc286: PUSH EAX
//   Label: LAB_004bc286
// 004bc287: LEA EAX,[ESP + 0x2594]
//   XREF to: Stack[-0x70] (DATA)
// 004bc28e: PUSH EAX
// 004bc28f: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc294: ADD ESP,0x8
// 004bc297: XOR ESI,ESI
// 004bc299: PUSH ESI
// 004bc29a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2600] (DATA)
// 004bc29e: PUSH EAX
// 004bc29f: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bc2a4: ADD ESP,0x8
// 004bc2a7: MOV EAX,ESI
// 004bc2a9: MOV ESP,EBP
// 004bc2ab: POP EBP
// 004bc2ac: POP EDI
// 004bc2ad: POP ESI
// 004bc2ae: POP EBX
// 004bc2af: RET
