// Name: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// Address: 004b86b0
// Address Range: [[004b86b0, 004b9f3d]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager * this_ptr, char * pod_directory_path)
// Globals:
//   void* switchdataD_004b868c = 004b97f9
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_You_currently_have_s_che_00626502
//   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
//   TerminatedCString s_WARNING_Error_setting_da_00626577
//   TerminatedCString s_Enter_path_to_update_POD_006283fa
//   TerminatedCString s_Scanning_pods_00628419
//   TerminatedCString s_pod_0062842a
//   TerminatedCString s_No_POD_files_found_in_s_00628430
//   TerminatedCString s_Skip_00628449
//   TerminatedCString s_Copy_0062844e
//   TerminatedCString s_Copy_Mount_00628453
//   TerminatedCString s_Copy_Extract_00628460
//   TerminatedCString s_Dismount_0062846f
//   TerminatedCString s_Dismount_Delete_00628478
//   TerminatedCString s_engine_fileio_cpp_0062848a
//   TerminatedCString s_engine_fileio_cpp_0062849f
//   TerminatedCString s_Out_of_memory_006284b4
//   TerminatedCString s_Scanning_pods_006284c2
//   TerminatedCString s_pod_006284d0
//   TerminatedCString s_engine_fileio_cpp_006284d4
//   TerminatedCString s_Can_t_querry_for_pod_fil_006284e9
//   TerminatedCString s_Can_t_mount_s_to_check_s_0062850c
//   TerminatedCString s_Cannot_recommend_action_0062852b
//   TerminatedCString s_You_have_this_pod_checke_00628545
//   TerminatedCString s_You_don_t_have_this_pod_00628563
//   TerminatedCString s_Extracted_your_files_are_0062857b
//   TerminatedCString s_Your_pod_is_older_and_no_0062859b
//   TerminatedCString s_Your_pod_is_older_and_mo_006285bd
//   TerminatedCString s_Your_pod_is_newer_006285db
//   TerminatedCString s_Your_pod_is_in_sync_and__006285ed
//   TerminatedCString s_Extracted_and_in_sync_0062860d
//   TerminatedCString s_Your_pod_is_in_sync_but__00628623
//   TerminatedCString s_engine_fileio_cpp_00628647
//   TerminatedCString s_engine_fileio_cpp_0062865c
//   TerminatedCString s_Out_of_memory_00628671
//   TerminatedCString s_POD_not_under_version_co_0062867f
//   TerminatedCString s_s_s_s_0062869d
//   TerminatedCString s_Checked_out_by_s_006286a6
//   TerminatedCString s_Go_006286b9
//   TerminatedCString s_Select_action_for_each_p_006286bd
//   TerminatedCString s_Select_action_for_s_006286f8
//   TerminatedCString s_You_don_t_have_the_pod_s_0062870e
//   TerminatedCString s_Your_pod_s_is_newer_than_00628729
//   TerminatedCString s_Your_pod_s_is_older_than_00628747
//   TerminatedCString s_Your_pod_s_is_different__00628765
//   TerminatedCString s_Your_pod_s_is_the_same_a_00628787
//   TerminatedCString s_s_is_mounted_but_s_does__006287a6
//   TerminatedCString s_engine_fileio_cpp_006287cc
//   TerminatedCString s_Hell_froze_006287e1
//   TerminatedCString s_anon_006287ed
//   TerminatedCString s_Of_the_d_files_in_s_00628804
//   TerminatedCString s_d_files_don_t_exist_loca_0062881c
//   TerminatedCString s_d_local_files_are_newer_0062883a
//   TerminatedCString s_d_local_files_are_older_00628854
//   TerminatedCString s_d_local_files_are_differ_0062886e
//   TerminatedCString s_d_local_files_are_in_syn_0062888c
//   TerminatedCString s_anon_006288a8
//   TerminatedCString s_You_currently_have_this__006288bf
//   TerminatedCString s_s_currently_has_this_pod_006288e8
//   TerminatedCString s_Your_currently_have_this_0062890f
//   TerminatedCString s_Your_currently_do_not_ha_00628936
//   TerminatedCString s_Can_t_delete_s_00628964
//   TerminatedCString s_Can_t_dismount_s_because_00628974
//   TerminatedCString s_s_exists_and_is_read_onl_006289ae
//   TerminatedCString s_rb_006289dc
//   TerminatedCString s_Can_t_open_s_006289df
//   TerminatedCString s_engine_fileio_cpp_006289ed
//   TerminatedCString s_wb_00628a02
//   TerminatedCString s_Can_t_create_local_s_00628a05
//   TerminatedCString s_engine_fileio_cpp_00628a1b
//   TerminatedCString s_engine_fileio_cpp_00628a30
//   TerminatedCString s_engine_fileio_cpp_00628a45
//   TerminatedCString s_Warning_couldn_t_mark_s__00628a5a
//   TerminatedCString s_Warning_s_failed_CRC_che_00628a82
//   TerminatedCString s_PODs_not_changed_00628a9f
//   undefined4 s_ODs_not_changed._00628aa0
//   undefined4 s_Ds_not_changed._00628aa1
//   undefined4 s_s_not_changed._00628aa2
//   TerminatedCString s_d_pods_copied_00628ab1
//   TerminatedCString s_d_pods_extracted_00628ac1
//   TerminatedCString s_d_pods_mounted_00628ad4
//   TerminatedCString s_d_pods_dismounted_00628ae5
//   TerminatedCString s_d_local_pods_deleted_00628af9
//   TerminatedCString s_POD_INI_re_written_00628b10
//   TerminatedCString s_To_apply_these_changes_y_00628b24
//   undefined4 s_o_apply_these_changes,_you_shoul_00628b25
//   TerminatedCString s_engine_fileio_cpp_00628b60
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   void* PTR_s_Skip_00679da0 = 00628449
//   void* PTR_s_Copy_00679da4 = 0062844e
//   void* PTR_s_Copy_Mount_00628453_00679da8 = 00628453
//   void* PTR_s_Copy_Extract_00628460_00679dac = 00628460
//   void* PTR_s_Dismount_00679db0 = 0062846f
//   void* PTR_s_Dismount_Delete_00628478_00679db4 = 00628478
//   string s_Show_local_file_differences_00679db8
//   char[260] g_DefaultPodDirectoryPath
//   undefined4 s__00679f4c
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 g_VersionControlSession.field1_0x20[0]
//   undefined4 g_VersionControlSession.field1_0x20[4]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_setvbuf_FUN_00601490
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0
          (CFileManager *this_ptr,char *pod_directory_path)

{
  char cVar1;
  CFileManager *filename;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CStrList *config_param1;
  int iVar8;
  FILE *stream_ptr;
  int *piVar9;
  undefined3 extraout_var;
  CStrList_vtable *unaff_EBX;
  char **ppcVar10;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  undefined4 *puVar11;
  char **unaff_ESI;
  char **ppcVar12;
  int unaff_EDI;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  char *unaff_retaddr;
  char *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  char **in_stack_00000018;
  CFileManager *in_stack_00000020;
  char *in_stack_00000024;
  int in_stack_00000028;
  CFileManager *in_stack_00000034;
  int in_stack_00000038;
  CFileManager *in_stack_00000048;
  CFileManager *in_stack_0000006c;
  CFileManager *in_stack_00000078;
  uint in_stack_ffffdce4;
  uint in_stack_ffffdd0c;
  uint in_stack_ffffdd10;
  CPickList *in_stack_ffffdd14;
  char *in_stack_ffffdd18;
  char *in_stack_ffffdd1c;
  FILE *in_stack_ffffdd20;
  FILE *file_size_bytes;
  CFileManager *in_stack_ffffdd28;
  char *in_stack_ffffdd30;
  uint in_stack_ffffdd34;
  uint in_stack_ffffdd38;
  uint in_stack_ffffdd3c;
  uint in_stack_ffffdd40;
  uint in_stack_ffffdd44;
  undefined1 auStack_1b04 [16];
  undefined1 auStack_1af4 [1056];
  undefined1 auStack_16d4 [12];
  undefined1 auStack_16c8 [944];
  undefined1 auStack_1318 [20];
  undefined1 auStack_1304 [8];
  undefined1 auStack_12fc [869];
  char acStack_f97 [19];
  char acStack_f84 [504];
  char *pcStack_d8c;
  int iStack_d88;
  char *pcStack_d84;
  int iStack_d80;
  undefined1 auStack_d6c [517];
  char acStack_b67 [7];
  uint uStack_b60;
  int iStack_960;
  uint uStack_958;
  char acStack_93c [12];
  int aiStack_930 [124];
  char acStack_740 [4];
  int aiStack_73c [106];
  char acStack_594 [16];
  char acStack_584 [4];
  undefined1 auStack_580 [12];
  char acStack_574 [32];
  char acStack_554 [232];
  char acStack_46c [8];
  char acStack_464 [244];
  char acStack_370 [4];
  char acStack_36c [252];
  char acStack_270 [4];
  char acStack_26c [4];
  char acStack_268 [4];
  char acStack_264 [244];
  char acStack_170 [4];
  char acStack_16c [4];
  char acStack_168 [4];
  char acStack_164 [4];
  char acStack_160 [220];
  undefined1 local_84 [8];
  undefined1 auStack_7c [8];
  CStrList_vtable *local_74;
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [8];
  undefined1 local_4c [16];
  undefined1 local_3c [8];
  undefined1 local_34 [16];
  int local_24;
  void *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  
  bVar15 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54._0_4_ = 0;
  local_54._4_4_ = 0;
  local_4c._0_4_ = (char **)0x0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 != 0) {
    pcVar13 = g_DefaultPodDirectoryPath;
    pcVar14 = acStack_594;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
      pcVar14 = pcVar14 + ((uint)bVar15 * -2 + 1) * 4;
    }
    if (pod_directory_path != (char *)0x0) {
      pcVar13 = acStack_594;
      do {
        cVar1 = *pod_directory_path;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pod_directory_path[1];
        pod_directory_path = pod_directory_path + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter path to update PODs from",acStack_594,0x104,1);
    if ((iVar3 != 0) &&
       ((shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                   (g_CEditorToolsPtr,"Scanning pods..."),
        g_VersionControlDirectory[0] == '\0' ||
        (iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(), iVar3 != 0)))) {
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_84);
      shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
                ((CStrList *)(local_84 + 4),acStack_584,"*.pod");
      if ((int)auStack_7c._0_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No POD files found in %s",auStack_580);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                  ((CStrList *)(auStack_7c + 4),0,in_stack_ffffdce4);
        return;
      }
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_6c);
      engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                (in_stack_00000020,(CStrList *)(local_6c + 4));
      local_34._12_4_ = local_74;
      local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           ((int)local_74 * 0x39c,"..\\engine\\fileio.cpp",0xc0e);
      if (local_20 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xc0f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
      }
      local_4c._0_4_ = (char **)0x0;
      local_4c._4_4_ = (CCheckOutItem *)0x0;
      engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)local_4c);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Scanning pods");
      local_34._0_4_ = (char **)0x0;
      if (0 < (int)local_18) {
        unaff_retaddr = local_14 + 0x204;
        do {
          in_stack_00000018 = (char **)local_34._0_4_;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)local_34._0_4_,(float)(int)local_18);
          ppcVar10 = (char **)(local_34._8_4_ + local_4c._0_4_ * 0xe7 * 4);
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)auStack_7c,local_4c._0_4_);
          pcVar13 = local_14;
          pcVar14 = local_14;
          do {
            cVar1 = *pcVar4;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_14,(char *)0x0,(char *)0x0,(char *)ppcVar10,(char *)0x0);
          engine_dosio_c_makePath_FUN_00481f50
                    (local_14,(char *)0x0,(char *)0x0,(char *)ppcVar10,"pod");
          pcVar14 = auStack_12fc + 0x364;
          do {
            cVar1 = *pcVar13;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0
                            ((SFoundFileInfo *)(auStack_12fc + 0x364));
          if (iVar3 == 0) {
            g_CurrentLineNumber = 0xc25;
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Can't querry for pod file info: %s",acStack_f97 + 3);
          }
          ppcVar10[0xe5] = pcStack_d84;
          pcVar13 = auStack_d6c + 0x204;
          ppcVar12 = ppcVar10 + 0x40;
          ppcVar10[0xe6] = pcStack_d8c;
          do {
            cVar1 = *(char *)ppcVar12;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = *(char *)((int)ppcVar12 + 1);
            ppcVar12 = (char **)((int)ppcVar12 + 2);
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0
                            ((SFoundFileInfo *)(auStack_d6c + 0x204));
          if (iVar3 == 0) {
            ppcVar10[0xdc] = &DAT_00000004;
          }
          else if (iStack_d80 + 2U < uStack_958) {
            ppcVar10[0xdc] = (char *)0x0;
          }
          else if (uStack_958 < iStack_d80 - 2U) {
            ppcVar10[0xdc] = &DAT_00000001;
          }
          else if (iStack_960 == iStack_d88) {
            ppcVar10[0xdc] = (char *)0x3;
          }
          else {
            ppcVar10[0xdc] = &DAT_00000002;
          }
          iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                            (in_stack_00000034,(CStrList *)local_54,(char *)(ppcVar10 + 0x40));
          ppcVar10[0xdd] = (char *)(uint)(-1 < iVar3);
          engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)auStack_1b04);
          iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                            ((CPodFile *)(auStack_1b04 + 4),acStack_f84);
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Can't mount %s to check status");
            engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_1af4);
            goto LAB_004b901b;
          }
          ppcVar10[0xdf] = (char *)0x0;
          ppcVar10[0xe0] = (char *)0x0;
          ppcVar10[0xe1] = (char *)0x0;
          ppcVar10[0xe2] = (char *)0x0;
          ppcVar10[0xe3] = (char *)0x0;
          ppcVar10[0xe4] = (char *)auStack_1af4._1032_4_;
          unaff_EBX = (CStrList_vtable *)0x0;
          if (0 < (int)auStack_1af4._1032_4_) {
            local_34._8_4_ = (char **)0x0;
            do {
              puVar11 = (undefined4 *)(auStack_1af4._1036_4_ + local_34._8_4_);
              pcVar13 = auStack_d6c;
              pcVar14 = (char *)*puVar11;
              do {
                cVar1 = *pcVar14;
                *pcVar13 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar13[1] = cVar1;
                pcVar13 = pcVar13 + 2;
              } while (cVar1 != '\0');
              iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_d6c);
              if (iVar3 == 0) {
                ppcVar10[0xe1] = ppcVar10[0xe1] + 1;
              }
              else if (puVar11[3] + 2 < uStack_b60) {
                ppcVar10[0xdf] = ppcVar10[0xdf] + 1;
              }
              else if (uStack_b60 < puVar11[3] - 2) {
                ppcVar10[0xe0] = ppcVar10[0xe0] + 1;
              }
              else if (stack0xfffff498 == puVar11[1]) {
                ppcVar10[0xe3] = ppcVar10[0xe3] + 1;
              }
              else {
                ppcVar10[0xe2] = ppcVar10[0xe2] + 1;
              }
              local_34._8_4_ = local_34._8_4_ + 0x14;
              unaff_EBX = (CStrList_vtable *)((int)&unaff_EBX->dtor + 1);
            } while ((int)unaff_EBX < (int)auStack_1af4._1032_4_);
          }
          iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                            ((CCheckOutList *)(local_3c + 4),(char *)(ppcVar10 + 0x40));
          if (iVar3 < 0) {
            *(char *)(ppcVar10 + 0xc2) = '\0';
          }
          else {
            ppcVar12 = ppcVar10 + 0xc2;
            pcVar13 = (char *)(local_34._4_4_ + iVar3 * 0x168 + 0x104);
            do {
              cVar1 = *pcVar13;
              *(char *)ppcVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              *(char *)((int)ppcVar12 + 1) = cVar1;
              ppcVar12 = (char **)((int)ppcVar12 + 2);
            } while (cVar1 != '\0');
          }
          ppcVar10[0xde] = (char *)0x0;
          ppcVar10[0xdb] = "(Cannot recommend action)";
          if ((*(char *)(ppcVar10 + 0xc2) == '\0') ||
             (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                ((char *)(ppcVar10 + 0xc2),g_VersionControlSession.primary_username)
             , iVar3 != 0)) {
            if ((ppcVar10[0xdc] == &DAT_00000004) &&
               ((ppcVar10[0xdf] == (char *)0x0 && (ppcVar10[0xdd] == (char *)0x0)))) {
              ppcVar10[0xde] = &DAT_00000002;
              ppcVar10[0xdb] = "You don't have this pod";
            }
            else if ((ppcVar10[0xdc] == &DAT_00000001) &&
                    (((ppcVar10[0xdf] == (char *)0x0 &&
                      (0 < (int)(ppcVar10[0xe0] + (int)ppcVar10[0xe3] + (int)ppcVar10[0xe2]))) &&
                     (ppcVar10[0xdd] == (char *)0x0)))) {
              ppcVar10[0xde] = (char *)0x3;
              ppcVar10[0xdb] = "Extracted, your files are older";
            }
            else if (((ppcVar10[0xdc] == &DAT_00000001) && (ppcVar10[0xdf] == (char *)0x0)) &&
                    (ppcVar10[0xdd] == (char *)0x0)) {
              ppcVar10[0xde] = &DAT_00000002;
              ppcVar10[0xdb] = "Your pod is older and not mounted";
            }
            else if (((ppcVar10[0xdc] == &DAT_00000001) && (ppcVar10[0xdf] == (char *)0x0)) &&
                    (ppcVar10[0xdd] != (char *)0x0)) {
              ppcVar10[0xdb] = "Your pod is older and mounted";
              ppcVar10[0xde] = &DAT_00000001;
            }
            else if (ppcVar10[0xdc] == (char *)0x0) {
              ppcVar10[0xdb] = "Your pod is newer";
              ppcVar10[0xde] = (char *)0x0;
            }
            else {
              if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                 (ppcVar10[0xdd] != (char *)0x0)) {
                ppcVar10[0xdb] = "Your pod is in sync and mounted";
                goto LAB_004b8c1d;
              }
              if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                 (((ppcVar10[0xdd] == (char *)0x0 &&
                   ((ppcVar10[0xe0] == (char *)0x0 && (ppcVar10[0xe1] == (char *)0x0)))) &&
                  (ppcVar10[0xe2] == (char *)0x0)))) {
                ppcVar10[0xdb] = "Extracted and in sync";
                ppcVar10[0xde] = (char *)0x0;
              }
              else if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                      (ppcVar10[0xdd] == (char *)0x0)) {
                ppcVar10[0xdb] = "Your pod is in sync but not mounted";
                ppcVar10[0xde] = (char *)0x0;
              }
            }
          }
          else {
            ppcVar10[0xdb] = "You have this pod checked out";
LAB_004b8c1d:
            ppcVar10[0xde] = (char *)0x0;
          }
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_1af4);
          in_stack_00000014 = in_stack_00000014 + 0x39c;
          in_stack_00000018 = in_stack_00000018 + 0xe7;
          local_1c = local_1c + 1;
        } while (local_1c < (int)unaff_retaddr);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      in_stack_00000018 = (char **)0x0;
      if (0 < (int)local_54._4_4_) {
        pod_directory_path = (char *)((int)local_14 * 0x39c);
        in_stack_0000000c = pod_directory_path + -0x39c;
        do {
          unaff_ESI = (char **)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                         ((CStrList *)(local_54 + 4),(int)in_stack_00000018);
          pcVar13 = local_14;
          iVar3 = 0;
          if (0 < (int)local_14) {
            pcVar14 = unaff_EBP + 0x100;
            do {
              iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)unaff_ESI,pcVar14);
              if (iVar5 == 0) break;
              iVar3 = iVar3 + 1;
              pcVar14 = pcVar14 + 0x39c;
            } while (iVar3 < (int)pcVar13);
          }
          if ((int)local_14 <= iVar3) {
            pod_directory_path = pod_directory_path + 0x39c;
            local_14 = local_14 + 1;
            in_stack_0000000c = in_stack_0000000c + 0x39c;
            local_34._12_4_ =
                 shape_memdbg_cpp_debugRealloc_FUN_0050f540
                           (unaff_EBP,(int)pod_directory_path,"..\\engine\\fileio.cpp",0xcd3);
            if ((CStrList_vtable *)local_34._12_4_ == (CStrList_vtable *)0x0) {
              g_CurrentFilename = "..\\engine\\fileio.cpp";
              g_CurrentLineNumber = 0xcd4;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
            }
            pcVar4 = (char *)(local_24 + (int)unaff_ESI);
            crt_memory_c_memset_FUN_005fde40(pcVar4,0,0x39c);
            pcVar13 = pcVar4 + 0x100;
            pcVar14 = local_18;
            do {
              cVar1 = *pcVar14;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            engine_dosio_c_splitPath_FUN_00481f20
                      (acStack_574,(char *)&stack0x00000010,acStack_370,acStack_170,acStack_270);
            engine_dosio_c_makePath_FUN_00481f50
                      (acStack_46c,(char *)0x0,acStack_36c,acStack_16c,acStack_26c);
            engine_dosio_c_splitPath_FUN_00481f20
                      (unaff_EBP,(char *)0x0,(char *)0x0,acStack_168,acStack_268);
            engine_dosio_c_makePath_FUN_00481f50
                      (pcVar4 + 0x204,&stack0x0000001c,acStack_464,acStack_164,acStack_264);
            pcVar13 = acStack_160;
            pcVar14 = pcVar4;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            pcVar4[0x308] = '\0';
            pcVar4[0x370] = '\x05';
            pcVar4[0x371] = '\0';
            pcVar4[0x372] = '\0';
            pcVar4[0x373] = '\0';
            *(char **)(pcVar4 + 0x36c) = "POD not under version control";
            pcVar4[0x378] = '\0';
            pcVar4[0x379] = '\0';
            pcVar4[0x37a] = '\0';
            pcVar4[0x37b] = '\0';
            pcVar4[0x374] = '\x01';
            pcVar4[0x375] = '\0';
            pcVar4[0x376] = '\0';
            pcVar4[0x377] = '\0';
          }
          in_stack_00000018 = (char **)((int)in_stack_00000018 + 1);
        } while ((int)in_stack_00000018 < (int)local_54._4_4_);
      }
      local_34._8_4_ = (char **)0x0;
LAB_004b8d5b:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1af4 + 0x41c));
      shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)auStack_16d4,1);
      iVar3 = 0;
      ppcVar10 = unaff_ESI;
      if (0 < unaff_EDI) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffdd04,"%s\t%s\t%s");
          if (*(char *)(ppcVar10 + 0xc2) != '\0') {
            pcVar13 = &stack0xffffdcfc;
            do {
              pcVar14 = pcVar13;
              if (*pcVar13 == '\0') goto LAB_004b8df1;
              if (*pcVar13 == '\0') break;
              pcVar14 = pcVar13 + 1;
              if (*pcVar14 == '\0') goto LAB_004b8df1;
              pcVar13 = pcVar13 + 2;
            } while (*pcVar14 != '\0');
            pcVar14 = (char *)0x0;
LAB_004b8df1:
            crt_stdio_c_sprintf_FUN_005fdbd0(pcVar14,"\tChecked out by %s",ppcVar10 + 0xc2);
          }
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_16d4,&stack0xffffdd00);
          iVar3 = iVar3 + 1;
          ppcVar10 = ppcVar10 + 0xe7;
        } while (iVar3 < unaff_EDI);
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_16d4 + 4),"Go!");
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_16d4 + 8),"Select action for each pod, select \"Go!\" when you are done",
                         (int)local_20,0);
      local_1c = iVar3;
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_16c8,0,in_stack_ffffdd0c,in_stack_ffffdd10,
                   (uint)in_stack_ffffdd14,(uint)in_stack_ffffdd18,(uint)in_stack_ffffdd1c);
        goto LAB_004b901b;
      }
      if (iVar3 < (int)((int)&((CStrList_vtable *)(auStack_16c8._0_4_ + -0x1c))->handleInput + 3)) {
        iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffdd0c,"Select action for %s\n");
        pcVar13 = &stack0xffffdd0c + iVar5;
        switch(*(undefined4 *)(unaff_retaddr + iVar3 * 0x39c + 0x370)) {
        case 0:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is newer than %s\n");
          break;
        case 1:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is older than %s\n");
          break;
        case 2:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is different than %s\n");
          break;
        case 3:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is the same as %s\n");
          break;
        case 4:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"You don't have the pod %s\n");
          break;
        case 5:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%s is mounted, but %s does not exist\n");
          break;
        default:
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xd1c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          goto LAB_004b9590;
        }
        pcVar13 = pcVar13 + iVar5;
LAB_004b9590:
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"---------------------\n");
          iVar7 = crt_stdio_c_sprintf_FUN_005fdbd0
                            (pcVar13 + iVar5,"Of the %d files in %s:\n",
                             *(undefined4 *)(unaff_retaddr + iVar3 * 0x39c + 0x390),
                             unaff_retaddr + iVar3 * 0x39c + 0x204);
          pcVar13 = pcVar13 + iVar5 + iVar7;
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 900)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d files don't exist locally\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x37c)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are newer\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x380)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are older\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x388)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are different\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x38c)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are in sync\n");
            pcVar13 = pcVar13 + iVar5;
          }
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"---------------------\n");
          pcVar13 = pcVar13 + iVar5;
          if (unaff_retaddr[iVar3 * 0x39c + 0x308] != '\0') {
            iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                              (unaff_retaddr + iVar3 * 0x39c + 0x308,
                               g_VersionControlSession.primary_username);
            if (iVar5 == 0) {
              iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"You currently have this pod checked out\n");
            }
            else {
              iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%s currently has this pod checked out\n");
            }
            pcVar13 = pcVar13 + iVar5;
          }
          if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x374) == 0) {
            pcVar14 = "Your currently do not have this pod mounted.\n";
          }
          else {
            pcVar14 = "Your currently have this pod mounted.\n";
          }
          crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,pcVar14);
        }
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1318);
        in_stack_ffffdd0c = 0x4b96d7;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_1318 + 4),(char *)PTR_s_Skip_00679da0);
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 8),(char *)PTR_s_Copy_00679da4);
        }
        if ((*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x374) == 0) &&
           (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),(char *)PTR_s_Copy_Mount_00628453_00679da8);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),(char *)PTR_s_Copy_Extract_00628460_00679dac);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),(char *)PTR_s_Dismount_00679db0);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),
                     (char *)PTR_s_Dismount_Delete_00628478_00679db4);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),"Show local file differences");
        }
        config_param1 =
             (CStrList *)
             shape_edittool_cpp_CStrList_findString_FUN_004a3030
                       ((CStrList *)(auStack_1318 + 0xc),
                        (char *)(&PTR_s_Skip_00679da0)
                                [*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x378)]);
        while( true ) {
          in_stack_ffffdd18 = &stack0xffffdd24;
          in_stack_ffffdd20 = (FILE *)0x0;
          in_stack_ffffdd14 = (CPickList *)(auStack_1318 + 0x10);
          in_stack_ffffdd10 = 0x4b97b2;
          in_stack_ffffdd1c = (char *)config_param1;
          config_param1 =
               (CStrList *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (in_stack_ffffdd14,&stack0xffffdd24,(int)config_param1,0);
          if ((int)config_param1 < 0) break;
          in_stack_ffffdd1c = auStack_1304;
          in_stack_ffffdd18 = (char *)0x4b97d2;
          pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                              ((CStrList *)in_stack_ffffdd1c,(int)config_param1);
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar13,(char *)in_stack_ffffdd28);
          if (iVar5 != 0) {
            iVar5 = 0;
            iVar7 = 0;
            goto LAB_004b994d;
          }
          in_stack_ffffdd28 = in_stack_0000006c;
          engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
                    (in_stack_0000006c,unaff_retaddr + iVar3 * 0x39c + 0x204);
        }
        goto LAB_004b9978;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_16c8,0,in_stack_ffffdd0c,in_stack_ffffdd10,
                 (uint)in_stack_ffffdd14,(uint)in_stack_ffffdd18,(uint)in_stack_ffffdd1c);
      in_stack_00000024 = (char *)0x0;
      in_stack_00000048->batch_mode = 1;
      g_VersionControlSession.field1_0x20[0] = '\0';
      g_VersionControlSession.field1_0x20[1] = '\0';
      g_VersionControlSession.field1_0x20[2] = '\0';
      g_VersionControlSession.field1_0x20[3] = '\0';
      g_VersionControlSession.field1_0x20[4] = '\0';
      g_VersionControlSession.field1_0x20[5] = '\0';
      g_VersionControlSession.field1_0x20[6] = '\0';
      g_VersionControlSession.field1_0x20[7] = '\0';
      if (0 < (int)unaff_EBX) {
        in_stack_00000020 = (CFileManager *)(unaff_retaddr + 0x100);
        do {
          pcVar13 = in_stack_00000024;
          filename = in_stack_00000020;
          if (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x378) == 0) {
            if (((((*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x370) == 3) &&
                  (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x37c) == 0)) &&
                 (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x374) != 0)) &&
                ((g_VersionControlDirectory[0] != '\0' &&
                 (uVar6 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,(char *)in_stack_00000020), -1 < (int)uVar6)))) &&
               ((uVar6 & 8) == 0)) {
              engine_dosio_c_setFileAttributes_FUN_004819f0(in_stack_00000024,(byte)uVar6 | 8);
            }
          }
          else {
            if (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x378) == 5) {
              engine_dosio_c_setFileAttributes_FUN_004819f0((char *)in_stack_00000020,0);
              iVar3 = crt_io_c_deleteFile_FUN_005ff9d0((char *)filename);
              if (iVar3 == 0) {
                unaff_EDI = unaff_EDI + 1;
              }
              else {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't delete %s");
              }
            }
            if ((*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) == 4) ||
               (*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) == 5)) {
              iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                (in_stack_00000048,(CStrList *)(local_4c + 0xc),
                                 unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
              if (iVar3 < 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't dismount %s because it isn't mounted??  Get Fletch.");
              }
              else {
                shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)local_3c,iVar3);
                unaff_EBX = (CStrList_vtable *)((int)&unaff_EBX->dtor + 1);
              }
            }
            else {
              local_34._12_4_ = (CStrList_vtable *)0x0;
              if (g_VersionControlDirectory[0] == '\0') {
                uVar6 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                  ((char *)0x0,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                file_size_bytes = in_stack_ffffdd20;
                if ((-1 < (int)uVar6) && ((uVar6 & 8) != 0)) {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s exists and is read only.  Cannot copy POD.");
                  goto LAB_004b8f32;
                }
              }
              else {
                in_stack_00000010 =
                     engine_dosio_c_getFileTimestamp_FUN_00481960
                               ((char *)0x0,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                pcVar14 = unaff_retaddr + (int)pcVar13 * 0x39c + 0x308;
                if (-1 < in_stack_00000010) {
                  if (((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) ||
                     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                        (pcVar14,g_VersionControlSession.primary_username),
                     iVar3 != 0)) {
                    if (((uint)in_stack_0000000c & 8) != 0) goto LAB_004b9af4;
                    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_93c,(char *)0x4b9bfb);
                    pcVar14 = g_VersionControlSession.field1_0x20 + 4;
                    piVar9 = aiStack_930;
                  }
                  else {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (acStack_740,"You currently have %s checked out.  Replace local copy with network copy?");
                    pcVar14 = g_VersionControlSession.field1_0x20;
                    piVar9 = aiStack_73c;
                  }
                  iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                                    (piVar9,pcVar14);
                  if (iVar3 < 0) break;
                  if (iVar3 == 0) goto LAB_004b8f32;
                }
LAB_004b9af4:
                engine_dosio_c_setFileAttributes_FUN_004819f0
                          (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,0);
                file_size_bytes = in_stack_ffffdd20;
              }
              iVar3 = 0;
              pcVar14 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                  ((CStrList *)local_4c,in_stack_00000028);
              do {
                stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                       (pcVar14,(char *)0x0,"rb",
                                        "..\\engine\\fileio.cpp",0x153);
                if (stream_ptr != (FILE *)0x0) {
                  crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
                  in_stack_ffffdd20 = file_size_bytes;
                  if (stream_ptr != (FILE *)0x0) {
                    in_stack_ffffdd20 =
                         shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,(char *)0x0,
                                    "wb","..\\engine\\fileio.cpp",0xdbb);
                    if (in_stack_ffffdd20 == (FILE *)0x0) {
                      if (stream_ptr != (FILE *)0x0) {
                        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                  (stream_ptr,"..\\engine\\fileio.cpp",0xc4);
                      }
                      in_stack_ffffdd20 = (FILE *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                      in_stack_ffffdd1c = "Can't create local %s";
                      in_stack_ffffdd18 = &g_CEditorToolsPtr->field0_0x0;
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Can't create local %s");
                    }
                    else {
                      pcVar14 = *(char **)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x398);
                      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                         ((CStrList *)local_3c,in_stack_00000038);
                      pcVar14 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                                          (stream_ptr,in_stack_ffffdd20,pcVar4,pcVar14,
                                           (int)file_size_bytes);
                      in_stack_ffffdd18 = (char *)0x4b9cd1;
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (stream_ptr,"..\\engine\\fileio.cpp",0xdc5);
                      in_stack_ffffdd1c = (char *)0x4b9ce4;
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (in_stack_ffffdd20,"..\\engine\\fileio.cpp",0xdc6);
                      if (pcVar14 != (char *)0x0) {
                        g_CurrentFilename = "..\\engine\\fileio.cpp";
                        g_CurrentLineNumber = 0xdc7;
                        core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar14);
                      }
                      in_stack_00000010 = in_stack_00000010 + 1;
                      iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                                        (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,
                                         *(char **)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x394));
                      if (iVar3 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)");
                      }
                      if (((g_VersionControlDirectory[0] != '\0') &&
                          (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                             (unaff_retaddr + (int)pcVar13 * 0x39c + 0x308,
                                              g_VersionControlSession.primary_username), iVar3 != 0)
                          ) && (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                                  (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,
                                                   (byte)unaff_retaddr | 8),
                               CONCAT31(extraout_var,bVar2) == 0)) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Warning: couldn't mark %s as read-only.");
                      }
                      if ((*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) != 3) &&
                         (iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280
                                            ((CPod *)g_CDemonPodPtr,
                                             unaff_retaddr + (int)pcVar13 * 0x39c + 0x100),
                         iVar3 == 0)) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Warning: %s failed CRC check");
                      }
                      uVar6 = *(uint *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378);
                      if (1 < uVar6) {
                        if (uVar6 < 3) {
                          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                    ((CStrList *)&stack0xfffffff0,
                                     unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                          in_stack_00000020 =
                               (CFileManager *)((int)&in_stack_00000020->file_ptr + 1);
                        }
                        else if (uVar6 == 3) {
                          (*in_stack_00000078->vtable->extractPodFile)
                                    (in_stack_00000078,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100)
                          ;
                          in_stack_00000034 =
                               (CFileManager *)((int)&in_stack_00000034->file_ptr + 1);
                        }
                      }
                    }
                    goto LAB_004b8f32;
                  }
                  break;
                }
                piVar9 = (int *)crt_errno_c_errno_FUN_00601450();
                in_stack_ffffdd20 = file_size_bytes;
                if (*piVar9 != 6) break;
                iVar3 = iVar3 + 1;
                (*Sleep)(500);
                in_stack_ffffdd20 = file_size_bytes;
              } while (iVar3 < 10);
              in_stack_ffffdd1c =
                   shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)(local_4c + 0xc),(int)in_stack_00000034);
              in_stack_ffffdd18 = "Can't open %s";
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s");
            }
          }
LAB_004b8f32:
          in_stack_00000020 = (CFileManager *)(in_stack_00000020->file_entries[7] + 0x14);
          in_stack_00000024 = in_stack_00000024 + 1;
        } while ((int)in_stack_00000024 < (int)unaff_EBX);
      }
      in_stack_00000048->batch_mode = 0;
      if ((0 < (int)local_14) || (0 < unaff_EDI)) {
        engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                  (in_stack_00000048,(CStrList *)(local_4c + 0xc));
      }
      if ((((local_18 == (char *)0x0) && (local_14 == (char *)0x0)) && (unaff_EBP == (char *)0x0))
         && ((unaff_ESI == (char **)0x0 && (unaff_EDI == 0)))) {
        pcVar14 = "PODs not changed.";
        pcVar13 = acStack_554;
      }
      else {
        pcVar13 = acStack_554;
        if (0 < (int)local_18) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods copied\n");
          pcVar13 = acStack_554 + iVar3;
        }
        if (0 < (int)unaff_EBP) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods extracted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < (int)local_14) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods mounted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < unaff_EDI) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods dismounted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < (int)unaff_ESI) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local pods deleted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (((int)local_14 < 1) && (unaff_EDI < 1)) {
          pcVar14 = "To apply these changes, you should restart the application.";
        }
        else {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"POD.INI re-written\n");
          pcVar13 = pcVar13 + iVar3;
          pcVar14 = "To apply these changes, you should restart the application.";
        }
      }
      do {
        cVar1 = *pcVar14;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(g_CEditorToolsPtr,acStack_554);
LAB_004b901b:
      if (this_ptr != (CFileManager *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr,"..\\engine\\fileio.cpp",0xe10);
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_34 + 0xc));
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)local_34,0,(uint)in_stack_ffffdd18);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(local_4c + 0xc),0,(uint)in_stack_ffffdd1c);
      return;
    }
  }
  return;
  while( true ) {
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 1;
    if (0x17 < iVar5) break;
LAB_004b994d:
    in_stack_ffffdd20 = (FILE *)0x4b9962;
    pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)auStack_12fc,(int)config_param1);
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(pcVar13,in_stack_ffffdd30);
    if (iVar8 == 0) {
      *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x378) = iVar7;
      break;
    }
  }
LAB_004b9978:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)auStack_12fc,0,(uint)in_stack_ffffdd30,in_stack_ffffdd34,in_stack_ffffdd38
             ,in_stack_ffffdd3c,in_stack_ffffdd40);
  in_stack_ffffdd30 = (char *)0x0;
  in_stack_ffffdd28 = (CFileManager *)0x4b9999;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_16c8 + 0x28),0,in_stack_ffffdd34,in_stack_ffffdd38,
             in_stack_ffffdd3c,in_stack_ffffdd40,in_stack_ffffdd44);
  goto LAB_004b8d5b;
}


// Assembly code:
// 004b86b0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// 004b86b1: PUSH ESI
// 004b86b2: PUSH EDI
// 004b86b3: PUSH EBP
// 004b86b4: SUB ESP,0x2328
// 004b86ba: MOV EBX,dword ptr [ESP + 0x2340]
//   XREF to: Stack[0x8] (READ)
// 004b86c1: XOR EDX,EDX
// 004b86c3: MOV EAX,dword ptr [ESP + 0x233c]
//   XREF to: Stack[0x4] (READ)
// 004b86ca: MOV dword ptr [ESP + 0x22dc],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 004b86d1: MOV dword ptr [ESP + 0x22e0],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 004b86d8: MOV dword ptr [ESP + 0x22e4],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 004b86df: PUSH EAX
// 004b86e0: MOV dword ptr [ESP + 0x22ec],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 004b86e7: MOV dword ptr [ESP + 0x22f0],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004b86ee: CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
// 004b86f3: ADD ESP,0x4
// 004b86f6: TEST EAX,EAX
// 004b86f8: JZ 0x004b875b
//   XREF to: 004b875b (CONDITIONAL_JUMP)
// 004b86fa: MOV ECX,0x41
// 004b86ff: LEA EDI,[ESP + 0x1da0]
//   XREF to: Stack[-0x598] (DATA)
// 004b8706: MOV ESI,0x679f48
//   XREF to: 00679f48 (DATA)
// 004b870b: MOVSD.REP ES:EDI,ESI
//   XREF to: 00679f48 (READ)
//   XREF to: 00679f4c (READ)
// 004b870d: TEST EBX,EBX
// 004b870f: JZ 0x004b8734
//   XREF to: 004b8734 (CONDITIONAL_JUMP)
// 004b8711: LEA EDI,[ESP + 0x1da0]
//   XREF to: Stack[-0x598] (DATA)
// 004b8718: MOV ESI,EBX
// 004b871a: PUSH EDI
// 004b871b: MOV AL,byte ptr [ESI]
//   Label: LAB_004b871b
// 004b871d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x598] (DATA)
// 004b871f: CMP AL,0x0
// 004b8721: JZ 0x004b8733
//   XREF to: 004b8733 (CONDITIONAL_JUMP)
// 004b8723: MOV AL,byte ptr [ESI + 0x1]
// 004b8726: ADD ESI,0x2
// 004b8729: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x597] (WRITE)
// 004b872c: ADD EDI,0x2
// 004b872f: CMP AL,0x0
// 004b8731: JNZ 0x004b871b
//   XREF to: 004b871b (CONDITIONAL_JUMP)
// 004b8733: POP EDI
//   Label: LAB_004b8733
// 004b8734: PUSH 0x1
//   Label: LAB_004b8734
// 004b8736: PUSH 0x104
// 004b873b: LEA EAX,[ESP + 0x1da8]
//   XREF to: Stack[-0x598] (DATA)
// 004b8742: PUSH EAX
// 004b8743: PUSH 0x6283fa
//   XREF to: 006283fa (DATA)
// 004b8748: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b874e: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b874f: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004b8754: ADD ESP,0x14
// 004b8757: TEST EAX,EAX
// 004b8759: JNZ 0x004b8766
//   XREF to: 004b8766 (CONDITIONAL_JUMP)
// 004b875b: ADD ESP,0x2328
//   Label: LAB_004b875b
// 004b8761: POP EBP
// 004b8762: POP EDI
// 004b8763: POP ESI
// 004b8764: POP EBX
// 004b8765: RET
// 004b8766: PUSH 0x628419
//   Label: LAB_004b8766
//   XREF to: 00628419 (DATA)
// 004b876b: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b8771: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b8772: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b8777: MOV AH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b877d: ADD ESP,0x8
// 004b8780: TEST AH,AH
// 004b8782: JZ 0x004b878d
//   XREF to: 004b878d (CONDITIONAL_JUMP)
// 004b8784: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004b8789: TEST EAX,EAX
// 004b878b: JZ 0x004b875b
//   XREF to: 004b875b (CONDITIONAL_JUMP)
// 004b878d: LEA EAX,[ESP + 0x22a4]
//   Label: LAB_004b878d
//   XREF to: Stack[-0x94] (DATA)
// 004b8794: PUSH EAX
// 004b8795: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004b879a: ADD ESP,0x4
// 004b879d: PUSH 0x62842a
//   XREF to: 0062842a (DATA)
// 004b87a2: LEA EAX,[ESP + 0x1da4]
//   XREF to: Stack[-0x598] (DATA)
// 004b87a9: PUSH EAX
// 004b87aa: LEA EAX,[ESP + 0x22ac]
//   XREF to: Stack[-0x94] (DATA)
// 004b87b1: PUSH EAX
// 004b87b2: CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   XREF to: 004a39e0 (UNCONDITIONAL_CALL)
// 004b87b7: ADD ESP,0xc
// 004b87ba: CMP dword ptr [ESP + 0x22a4],0x1
//   XREF to: Stack[-0x94] (READ)
// 004b87c2: JL 0x004b907b
//   XREF to: 004b907b (CONDITIONAL_JUMP)
// 004b87c8: LEA EAX,[ESP + 0x22b4]
//   XREF to: Stack[-0x84] (DATA)
// 004b87cf: PUSH EAX
// 004b87d0: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004b87d5: ADD ESP,0x4
// 004b87d8: LEA EAX,[ESP + 0x22b4]
//   XREF to: Stack[-0x84] (DATA)
// 004b87df: PUSH EAX
// 004b87e0: MOV ESI,dword ptr [ESP + 0x2340]
//   XREF to: Stack[0x4] (READ)
// 004b87e7: PUSH ESI
// 004b87e8: CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
// 004b87ed: ADD ESP,0x8
// 004b87f0: MOV EAX,dword ptr [ESP + 0x22a4]
//   XREF to: Stack[-0x94] (READ)
// 004b87f7: MOV dword ptr [ESP + 0x22f0],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004b87fe: SHL EAX,0x2
// 004b8801: MOV EBX,EAX
// 004b8803: SHL EAX,0x3
// 004b8806: SUB EAX,EBX
// 004b8808: PUSH 0xc0e
// 004b880d: MOV EBX,EAX
// 004b880f: SHL EAX,0x5
// 004b8812: PUSH 0x62848a
//   XREF to: 0062848a (DATA)
// 004b8817: ADD EAX,EBX
// 004b8819: PUSH EAX
// 004b881a: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004b881f: ADD ESP,0xc
// 004b8822: MOV dword ptr [ESP + 0x22f4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004b8829: TEST EAX,EAX
// 004b882b: JNZ 0x004b8850
//   XREF to: 004b8850 (CONDITIONAL_JUMP)
// 004b882d: MOV EDI,0x62849f
//   XREF to: 0062849f (DATA)
// 004b8832: MOV EBP,0xc0f
// 004b8837: PUSH 0x6284b4
//   XREF to: 006284b4 (DATA)
// 004b883c: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004b8842: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004b8848: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b884d: ADD ESP,0x4
// 004b8850: XOR EAX,EAX
//   Label: LAB_004b8850
// 004b8852: MOV dword ptr [ESP + 0x22c4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004b8859: MOV dword ptr [ESP + 0x22c8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004b8860: LEA EAX,[ESP + 0x22c4]
//   XREF to: Stack[-0x74] (DATA)
// 004b8867: PUSH EAX
// 004b8868: CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   XREF to: 004b2890 (UNCONDITIONAL_CALL)
// 004b886d: ADD ESP,0x4
// 004b8870: PUSH 0x6284c2
//   XREF to: 006284c2 (DATA)
// 004b8875: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b887b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b887c: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004b8881: ADD ESP,0x8
// 004b8884: XOR EBX,EBX
// 004b8886: MOV ESI,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b888d: MOV dword ptr [ESP + 0x22d4],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 004b8894: TEST ESI,ESI
// 004b8896: JLE 0x004b8c7a
//   XREF to: 004b8c7a (CONDITIONAL_JUMP)
// 004b889c: MOV EAX,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b88a3: ADD EAX,0x100
// 004b88a8: MOV dword ptr [ESP + 0x2304],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004b88af: MOV EAX,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b88b6: ADD EAX,0x204
// 004b88bb: MOV dword ptr [ESP + 0x2308],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004b88c2: MOV EAX,dword ptr [ESP + 0x22f0]
//   Label: LAB_004b88c2
//   XREF to: Stack[-0x48] (READ)
// 004b88c9: MOV dword ptr [ESP + 0x2320],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b88d0: FILD dword ptr [ESP + 0x2320]
//   XREF to: Stack[-0x18] (READ)
// 004b88d7: SUB ESP,0x4
// 004b88da: MOV EAX,dword ptr [ESP + 0x22d8]
//   XREF to: Stack[-0x64] (READ)
// 004b88e1: MOV dword ptr [ESP + 0x2324],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b88e8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x233c] (DATA)
// 004b88eb: FILD dword ptr [ESP + 0x2324]
//   XREF to: Stack[-0x18] (READ)
// 004b88f2: SUB ESP,0x4
// 004b88f5: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b88fb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2340] (DATA)
// 004b88fe: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b88ff: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004b8904: ADD ESP,0xc
// 004b8907: MOV EAX,dword ptr [ESP + 0x22d4]
//   XREF to: Stack[-0x64] (READ)
// 004b890e: IMUL EBX,EAX,0x39c
// 004b8914: PUSH EAX
// 004b8915: LEA EAX,[ESP + 0x22a8]
//   XREF to: Stack[-0x94] (DATA)
// 004b891c: MOV EDX,dword ptr [ESP + 0x22f8]
//   XREF to: Stack[-0x44] (READ)
// 004b8923: PUSH EAX
// 004b8924: ADD EBX,EDX
// 004b8926: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b892b: ADD ESP,0x8
// 004b892e: MOV ESI,EAX
// 004b8930: MOV EDI,dword ptr [ESP + 0x2308]
//   XREF to: Stack[-0x30] (READ)
// 004b8937: PUSH EDI
// 004b8938: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8938
// 004b893a: MOV byte ptr [EDI],AL
// 004b893c: CMP AL,0x0
// 004b893e: JZ 0x004b8950
//   XREF to: 004b8950 (CONDITIONAL_JUMP)
// 004b8940: MOV AL,byte ptr [ESI + 0x1]
// 004b8943: ADD ESI,0x2
// 004b8946: MOV byte ptr [EDI + 0x1],AL
// 004b8949: ADD EDI,0x2
// 004b894c: CMP AL,0x0
// 004b894e: JNZ 0x004b8938
//   XREF to: 004b8938 (CONDITIONAL_JUMP)
// 004b8950: POP EDI
//   Label: LAB_004b8950
// 004b8951: PUSH 0x0
// 004b8953: PUSH EBX
// 004b8954: PUSH 0x0
// 004b8956: PUSH 0x0
// 004b8958: PUSH EDI
// 004b8959: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004b895e: ADD ESP,0x14
// 004b8961: PUSH 0x6284d0
//   XREF to: 006284d0 (DATA)
// 004b8966: PUSH EBX
// 004b8967: PUSH 0x0
// 004b8969: PUSH 0x0
// 004b896b: MOV ESI,EDI
// 004b896d: MOV EDI,dword ptr [ESP + 0x2314]
//   XREF to: Stack[-0x34] (READ)
// 004b8974: PUSH EDI
// 004b8975: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b897a: ADD ESP,0x14
// 004b897d: LEA EDI,[ESP + 0x137c]
//   XREF to: Stack[-0xfbc] (DATA)
// 004b8984: PUSH EDI
// 004b8985: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8985
// 004b8987: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xfbc] (DATA)
// 004b8989: CMP AL,0x0
// 004b898b: JZ 0x004b899d
//   XREF to: 004b899d (CONDITIONAL_JUMP)
// 004b898d: MOV AL,byte ptr [ESI + 0x1]
// 004b8990: ADD ESI,0x2
// 004b8993: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xfbb] (WRITE)
// 004b8996: ADD EDI,0x2
// 004b8999: CMP AL,0x0
// 004b899b: JNZ 0x004b8985
//   XREF to: 004b8985 (CONDITIONAL_JUMP)
// 004b899d: POP EDI
//   Label: LAB_004b899d
// 004b899e: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0xfbc] (DATA)
// 004b89a5: PUSH EAX
// 004b89a6: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b89ab: ADD ESP,0x4
// 004b89ae: TEST EAX,EAX
// 004b89b0: JZ 0x004b90b4
//   XREF to: 004b90b4 (CONDITIONAL_JUMP)
// 004b89b6: MOV EAX,dword ptr [ESP + 0x1588]
//   Label: LAB_004b89b6
//   XREF to: Stack[-0xdb0] (READ)
// 004b89bd: MOV dword ptr [EBX + 0x394],EAX
// 004b89c3: LEA EDI,[ESP + 0x17a4]
//   XREF to: Stack[-0xb94] (DATA)
// 004b89ca: MOV EAX,dword ptr [ESP + 0x1580]
//   XREF to: Stack[-0xdb8] (READ)
// 004b89d1: LEA ESI,[EBX + 0x100]
// 004b89d7: MOV dword ptr [EBX + 0x398],EAX
// 004b89dd: PUSH EDI
// 004b89de: MOV AL,byte ptr [ESI]
//   Label: LAB_004b89de
// 004b89e0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xb94] (DATA)
// 004b89e2: CMP AL,0x0
// 004b89e4: JZ 0x004b89f6
//   XREF to: 004b89f6 (CONDITIONAL_JUMP)
// 004b89e6: MOV AL,byte ptr [ESI + 0x1]
// 004b89e9: ADD ESI,0x2
// 004b89ec: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xb93] (WRITE)
// 004b89ef: ADD EDI,0x2
// 004b89f2: CMP AL,0x0
// 004b89f4: JNZ 0x004b89de
//   XREF to: 004b89de (CONDITIONAL_JUMP)
// 004b89f6: POP EDI
//   Label: LAB_004b89f6
// 004b89f7: LEA EAX,[ESP + 0x17a4]
//   XREF to: Stack[-0xb94] (DATA)
// 004b89fe: PUSH EAX
// 004b89ff: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b8a04: ADD ESP,0x4
// 004b8a07: TEST EAX,EAX
// 004b8a09: JZ 0x004b90e3
//   XREF to: 004b90e3 (CONDITIONAL_JUMP)
// 004b8a0f: MOV EAX,dword ptr [ESP + 0x1588]
//   XREF to: Stack[-0xdb0] (READ)
// 004b8a16: MOV EDX,dword ptr [ESP + 0x19b0]
//   XREF to: Stack[-0x988] (READ)
// 004b8a1d: ADD EAX,0x2
// 004b8a20: CMP EAX,EDX
// 004b8a22: JNC 0x004b90f2
//   XREF to: 004b90f2 (CONDITIONAL_JUMP)
// 004b8a28: MOV dword ptr [EBX + 0x370],0x0
// 004b8a32: LEA EAX,[EBX + 0x100]
//   Label: LAB_004b8a32
// 004b8a38: PUSH EAX
// 004b8a39: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b8a40: PUSH EAX
// 004b8a41: MOV EDI,dword ptr [ESP + 0x2344]
//   XREF to: Stack[0x4] (READ)
// 004b8a48: PUSH EDI
// 004b8a49: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004b8a4e: ADD ESP,0xc
// 004b8a51: TEST EAX,EAX
// 004b8a53: SETGE AL
// 004b8a56: AND EAX,0xff
// 004b8a5b: MOV dword ptr [EBX + 0x374],EAX
// 004b8a61: LEA EAX,[ESP + 0x800]
//   XREF to: Stack[-0x1b38] (DATA)
// 004b8a68: PUSH EAX
// 004b8a69: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b8a6e: ADD ESP,0x4
// 004b8a71: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0xfbc] (DATA)
// 004b8a78: PUSH EAX
// 004b8a79: LEA EAX,[ESP + 0x804]
//   XREF to: Stack[-0x1b38] (DATA)
// 004b8a80: PUSH EAX
// 004b8a81: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b8a86: ADD ESP,0x8
// 004b8a89: TEST EAX,EAX
// 004b8a8b: JZ 0x004b913d
//   XREF to: 004b913d (CONDITIONAL_JUMP)
// 004b8a91: MOV EAX,dword ptr [ESP + 0xc10]
//   XREF to: Stack[-0x1728] (READ)
// 004b8a98: MOV dword ptr [EBX + 0x37c],0x0
// 004b8aa2: MOV dword ptr [EBX + 0x380],0x0
// 004b8aac: MOV dword ptr [EBX + 0x384],0x0
// 004b8ab6: MOV dword ptr [EBX + 0x388],0x0
// 004b8ac0: MOV dword ptr [EBX + 0x38c],0x0
// 004b8aca: MOV dword ptr [EBX + 0x390],EAX
// 004b8ad0: XOR EDX,EDX
// 004b8ad2: MOV ECX,dword ptr [ESP + 0xc10]
//   XREF to: Stack[-0x1728] (READ)
// 004b8ad9: MOV dword ptr [ESP + 0x22f8],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004b8ae0: TEST ECX,ECX
// 004b8ae2: JLE 0x004b8b83
//   XREF to: 004b8b83 (CONDITIONAL_JUMP)
// 004b8ae8: MOV dword ptr [ESP + 0x22d0],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 004b8aef: MOV EBP,dword ptr [ESP + 0xc14]
//   Label: LAB_004b8aef
//   XREF to: Stack[-0x1724] (READ)
// 004b8af6: ADD EBP,dword ptr [ESP + 0x22d0]
//   XREF to: Stack[-0x68] (READ)
// 004b8afd: LEA EDI,[ESP + 0x1590]
//   XREF to: Stack[-0xda8] (DATA)
// 004b8b04: MOV ESI,dword ptr [EBP]
// 004b8b07: PUSH EDI
// 004b8b08: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8b08
// 004b8b0a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xda8] (DATA)
// 004b8b0c: CMP AL,0x0
// 004b8b0e: JZ 0x004b8b20
//   XREF to: 004b8b20 (CONDITIONAL_JUMP)
// 004b8b10: MOV AL,byte ptr [ESI + 0x1]
// 004b8b13: ADD ESI,0x2
// 004b8b16: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xda7] (WRITE)
// 004b8b19: ADD EDI,0x2
// 004b8b1c: CMP AL,0x0
// 004b8b1e: JNZ 0x004b8b08
//   XREF to: 004b8b08 (CONDITIONAL_JUMP)
// 004b8b20: POP EDI
//   Label: LAB_004b8b20
// 004b8b21: LEA EAX,[ESP + 0x1590]
//   XREF to: Stack[-0xda8] (DATA)
// 004b8b28: PUSH EAX
// 004b8b29: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b8b2e: ADD ESP,0x4
// 004b8b31: TEST EAX,EAX
// 004b8b33: JZ 0x004b917b
//   XREF to: 004b917b (CONDITIONAL_JUMP)
// 004b8b39: MOV EAX,dword ptr [EBP + 0xc]
// 004b8b3c: MOV ESI,dword ptr [ESP + 0x179c]
//   XREF to: Stack[-0xb9c] (READ)
// 004b8b43: ADD EAX,0x2
// 004b8b46: CMP EAX,ESI
// 004b8b48: JNC 0x004b9186
//   XREF to: 004b9186 (CONDITIONAL_JUMP)
// 004b8b4e: INC dword ptr [EBX + 0x37c]
// 004b8b54: MOV ESI,dword ptr [ESP + 0x22d0]
//   Label: LAB_004b8b54
//   XREF to: Stack[-0x68] (READ)
// 004b8b5b: MOV EDI,dword ptr [ESP + 0x22f8]
//   XREF to: Stack[-0x40] (READ)
// 004b8b62: MOV EBP,dword ptr [ESP + 0xc10]
//   XREF to: Stack[-0x1728] (READ)
// 004b8b69: ADD ESI,0x14
// 004b8b6c: INC EDI
// 004b8b6d: MOV dword ptr [ESP + 0x22d0],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 004b8b74: MOV dword ptr [ESP + 0x22f8],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 004b8b7b: CMP EDI,EBP
// 004b8b7d: JL 0x004b8aef
//   XREF to: 004b8aef (CONDITIONAL_JUMP)
// 004b8b83: LEA EAX,[EBX + 0x100]
//   Label: LAB_004b8b83
// 004b8b89: PUSH EAX
// 004b8b8a: LEA EAX,[ESP + 0x22c8]
//   XREF to: Stack[-0x74] (DATA)
// 004b8b91: PUSH EAX
// 004b8b92: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b8b97: ADD ESP,0x8
// 004b8b9a: TEST EAX,EAX
// 004b8b9c: JL 0x004b91bd
//   XREF to: 004b91bd (CONDITIONAL_JUMP)
// 004b8ba2: IMUL EAX,EAX,0x168
// 004b8ba8: ADD EAX,dword ptr [ESP + 0x22c8]
//   XREF to: Stack[-0x70] (READ)
// 004b8baf: LEA EDI,[EBX + 0x308]
// 004b8bb5: LEA ESI,[EAX + 0x104]
// 004b8bbb: PUSH EDI
// 004b8bbc: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8bbc
// 004b8bbe: MOV byte ptr [EDI],AL
// 004b8bc0: CMP AL,0x0
// 004b8bc2: JZ 0x004b8bd4
//   XREF to: 004b8bd4 (CONDITIONAL_JUMP)
// 004b8bc4: MOV AL,byte ptr [ESI + 0x1]
// 004b8bc7: ADD ESI,0x2
// 004b8bca: MOV byte ptr [EDI + 0x1],AL
// 004b8bcd: ADD EDI,0x2
// 004b8bd0: CMP AL,0x0
// 004b8bd2: JNZ 0x004b8bbc
//   XREF to: 004b8bbc (CONDITIONAL_JUMP)
// 004b8bd4: POP EDI
//   Label: LAB_004b8bd4
// 004b8bd5: MOV dword ptr [EBX + 0x378],0x0
//   Label: LAB_004b8bd5
// 004b8bdf: MOV DL,byte ptr [EBX + 0x308]
// 004b8be5: MOV dword ptr [EBX + 0x36c],0x62852b
//   XREF to: 0062852b (DATA)
// 004b8bef: TEST DL,DL
// 004b8bf1: JZ 0x004b91c9
//   XREF to: 004b91c9 (CONDITIONAL_JUMP)
// 004b8bf7: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b8bfc: LEA EAX,[EBX + 0x308]
// 004b8c02: PUSH EAX
// 004b8c03: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b8c08: ADD ESP,0x8
// 004b8c0b: TEST EAX,EAX
// 004b8c0d: JNZ 0x004b91c9
//   XREF to: 004b91c9 (CONDITIONAL_JUMP)
// 004b8c13: MOV dword ptr [EBX + 0x36c],0x628545
//   XREF to: 00628545 (DATA)
// 004b8c1d: MOV dword ptr [EBX + 0x378],EAX
//   Label: LAB_004b8c1d
// 004b8c23: PUSH 0x0
//   Label: LAB_004b8c23
// 004b8c25: LEA EAX,[ESP + 0x804]
//   XREF to: Stack[-0x1b38] (DATA)
// 004b8c2c: PUSH EAX
// 004b8c2d: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b8c32: ADD ESP,0x8
// 004b8c35: MOV EBP,dword ptr [ESP + 0x2304]
//   XREF to: Stack[-0x34] (READ)
// 004b8c3c: MOV EAX,dword ptr [ESP + 0x2308]
//   XREF to: Stack[-0x30] (READ)
// 004b8c43: MOV EDX,dword ptr [ESP + 0x22d4]
//   XREF to: Stack[-0x64] (READ)
// 004b8c4a: MOV ECX,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8c51: ADD EBP,0x39c
// 004b8c57: ADD EAX,0x39c
// 004b8c5c: INC EDX
// 004b8c5d: MOV dword ptr [ESP + 0x2304],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 004b8c64: MOV dword ptr [ESP + 0x2308],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004b8c6b: MOV dword ptr [ESP + 0x22d4],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 004b8c72: CMP EDX,ECX
// 004b8c74: JL 0x004b88c2
//   XREF to: 004b88c2 (CONDITIONAL_JUMP)
// 004b8c7a: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_004b8c7a
//   XREF to: 00678a60 (READ)
// 004b8c80: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b8c81: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b8c86: ADD ESP,0x4
// 004b8c89: XOR ESI,ESI
// 004b8c8b: MOV EDI,dword ptr [ESP + 0x22b4]
//   XREF to: Stack[-0x84] (READ)
// 004b8c92: MOV dword ptr [ESP + 0x231c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004b8c99: TEST EDI,EDI
// 004b8c9b: JLE 0x004b8d52
//   XREF to: 004b8d52 (CONDITIONAL_JUMP)
// 004b8ca1: MOV EAX,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8ca8: SHL EAX,0x2
// 004b8cab: MOV EBX,EAX
// 004b8cad: SHL EAX,0x3
// 004b8cb0: SUB EAX,EBX
// 004b8cb2: MOV EBX,EAX
// 004b8cb4: SHL EAX,0x5
// 004b8cb7: ADD EAX,EBX
// 004b8cb9: MOV dword ptr [ESP + 0x230c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b8cc0: SUB EAX,0x39c
// 004b8cc5: MOV dword ptr [ESP + 0x2310],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004b8ccc: MOV EBX,dword ptr [ESP + 0x231c]
//   Label: LAB_004b8ccc
//   XREF to: Stack[-0x1c] (READ)
// 004b8cd3: PUSH EBX
// 004b8cd4: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b8cdb: PUSH EAX
// 004b8cdc: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b8ce1: ADD ESP,0x8
// 004b8ce4: XOR EBX,EBX
// 004b8ce6: MOV ESI,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8ced: MOV dword ptr [ESP + 0x22fc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004b8cf4: TEST ESI,ESI
// 004b8cf6: JLE 0x004b8d25
//   XREF to: 004b8d25 (CONDITIONAL_JUMP)
// 004b8cf8: MOV EBP,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b8cff: MOV EDI,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8d06: ADD EBP,0x100
// 004b8d0c: PUSH EBP
//   Label: LAB_004b8d0c
// 004b8d0d: MOV EAX,dword ptr [ESP + 0x2300]
//   XREF to: Stack[-0x3c] (READ)
// 004b8d14: PUSH EAX
// 004b8d15: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b8d1a: ADD ESP,0x8
// 004b8d1d: TEST EAX,EAX
// 004b8d1f: JNZ 0x004b938c
//   XREF to: 004b938c (CONDITIONAL_JUMP)
// 004b8d25: MOV EDX,dword ptr [ESP + 0x22f0]
//   Label: LAB_004b8d25
//   XREF to: Stack[-0x48] (READ)
// 004b8d2c: CMP EBX,EDX
// 004b8d2e: JGE 0x004b93a0
//   XREF to: 004b93a0 (CONDITIONAL_JUMP)
// 004b8d34: MOV EAX,dword ptr [ESP + 0x231c]
//   Label: LAB_004b8d34
//   XREF to: Stack[-0x1c] (READ)
// 004b8d3b: INC EAX
// 004b8d3c: MOV EDX,dword ptr [ESP + 0x22b4]
//   XREF to: Stack[-0x84] (READ)
// 004b8d43: MOV dword ptr [ESP + 0x231c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b8d4a: CMP EAX,EDX
// 004b8d4c: JL 0x004b8ccc
//   XREF to: 004b8ccc (CONDITIONAL_JUMP)
// 004b8d52: XOR ECX,ECX
//   Label: LAB_004b8d52
// 004b8d54: MOV dword ptr [ESP + 0x22d8],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 004b8d5b: LEA EAX,[ESP + 0xc2c]
//   Label: LAB_004b8d5b
//   XREF to: Stack[-0x170c] (DATA)
// 004b8d62: PUSH EAX
// 004b8d63: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b8d68: ADD ESP,0x4
// 004b8d6b: PUSH 0x1
// 004b8d6d: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b8d74: PUSH EAX
// 004b8d75: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 004b8d7a: ADD ESP,0x8
// 004b8d7d: MOV EDI,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8d84: XOR EBP,EBP
// 004b8d86: TEST EDI,EDI
// 004b8d88: JLE 0x004b8e23
//   XREF to: 004b8e23 (CONDITIONAL_JUMP)
// 004b8d8e: MOV EBX,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b8d95: MOV EAX,dword ptr [EBX + 0x378]
//   Label: LAB_004b8d95
// 004b8d9b: MOV EDX,dword ptr [EAX*0x4 + 0x679da0]
//   XREF to: 00679da0 (DATA)
// 004b8da2: PUSH EDX
// 004b8da3: MOV ECX,dword ptr [EBX + 0x36c]
// 004b8da9: PUSH ECX
// 004b8daa: PUSH EBX
// 004b8dab: PUSH 0x62869d
//   XREF to: 0062869d (DATA)
// 004b8db0: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2338] (DATA)
// 004b8db4: PUSH EAX
// 004b8db5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8dba: MOV CL,byte ptr [EBX + 0x308]
// 004b8dc0: ADD ESP,0x14
// 004b8dc3: TEST CL,CL
// 004b8dc5: JZ 0x004b8dfa
//   XREF to: 004b8dfa (CONDITIONAL_JUMP)
// 004b8dc7: LEA EAX,[EBX + 0x308]
// 004b8dcd: PUSH EAX
// 004b8dce: PUSH 0x6286a6
//   XREF to: 006286a6 (DATA)
// 004b8dd3: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x2338] (DATA)
// 004b8dd7: XOR DL,DL
// 004b8dd9: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8dd9
//   XREF to: Stack[-0x2338] (DATA)
// 004b8ddb: CMP AL,DL
// 004b8ddd: JZ 0x004b8df1
//   XREF to: 004b8df1 (CONDITIONAL_JUMP)
// 004b8ddf: CMP AL,0x0
// 004b8de1: JZ 0x004b8def
//   XREF to: 004b8def (CONDITIONAL_JUMP)
// 004b8de3: INC ESI
// 004b8de4: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x2337] (DATA)
// 004b8de6: CMP AL,DL
// 004b8de8: JZ 0x004b8df1
//   XREF to: 004b8df1 (CONDITIONAL_JUMP)
// 004b8dea: INC ESI
// 004b8deb: CMP AL,0x0
// 004b8ded: JNZ 0x004b8dd9
//   XREF to: 004b8dd9 (CONDITIONAL_JUMP)
// 004b8def: SUB ESI,ESI
//   Label: LAB_004b8def
// 004b8df1: PUSH ESI
//   Label: LAB_004b8df1
// 004b8df2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8df7: ADD ESP,0xc
// 004b8dfa: MOV EAX,ESP
//   Label: LAB_004b8dfa
// 004b8dfc: PUSH EAX
// 004b8dfd: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b8e04: PUSH EAX
// 004b8e05: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b8e0a: ADD ESP,0x8
// 004b8e0d: INC EBP
// 004b8e0e: MOV EAX,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8e15: ADD EBX,0x39c
// 004b8e1b: CMP EBP,EAX
// 004b8e1d: JL 0x004b8d95
//   XREF to: 004b8d95 (CONDITIONAL_JUMP)
// 004b8e23: PUSH 0x6286b9
//   Label: LAB_004b8e23
//   XREF to: 006286b9 (DATA)
// 004b8e28: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b8e2f: PUSH EAX
// 004b8e30: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b8e35: ADD ESP,0x8
// 004b8e38: PUSH 0x0
// 004b8e3a: MOV EDX,dword ptr [ESP + 0x22dc]
//   XREF to: Stack[-0x60] (READ)
// 004b8e41: PUSH EDX
// 004b8e42: PUSH 0x6286bd
//   XREF to: 006286bd (DATA)
// 004b8e47: LEA EAX,[ESP + 0xc38]
//   XREF to: Stack[-0x170c] (DATA)
// 004b8e4e: PUSH EAX
// 004b8e4f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b8e54: ADD ESP,0x10
// 004b8e57: MOV dword ptr [ESP + 0x22d8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004b8e5e: TEST EAX,EAX
// 004b8e60: JL 0x004b9565
//   XREF to: 004b9565 (CONDITIONAL_JUMP)
// 004b8e66: MOV EBX,dword ptr [ESP + 0xc2c]
//   XREF to: Stack[-0x170c] (READ)
// 004b8e6d: DEC EBX
// 004b8e6e: CMP EAX,EBX
// 004b8e70: JL 0x004b98a8
//   XREF to: 004b98a8 (CONDITIONAL_JUMP)
// 004b8e76: PUSH 0x0
// 004b8e78: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b8e7f: PUSH EAX
// 004b8e80: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b8e85: ADD ESP,0x8
// 004b8e88: XOR ESI,ESI
// 004b8e8a: MOV EAX,dword ptr [ESP + 0x233c]
//   XREF to: Stack[0x4] (READ)
// 004b8e91: MOV dword ptr [ESP + 0x2318],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004b8e98: MOV dword ptr [EAX + 0x13880c],0x1
// 004b8ea2: MOV EAX,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8ea9: MOV dword ptr [0x02d12bf0],ESI
//   XREF to: 02d12bf0 (WRITE)
// 004b8eaf: MOV dword ptr [0x02d12bf4],ESI
//   XREF to: 02d12bf4 (WRITE)
// 004b8eb5: TEST EAX,EAX
// 004b8eb7: JLE 0x004b8f64
//   XREF to: 004b8f64 (CONDITIONAL_JUMP)
// 004b8ebd: MOV EAX,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b8ec4: ADD EAX,0x100
// 004b8ec9: MOV dword ptr [ESP + 0x2314],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004b8ed0: IMUL EDI,dword ptr [ESP + 0x2318],0x39c
//   Label: LAB_004b8ed0
//   XREF to: Stack[-0x20] (READ)
// 004b8edb: ADD EDI,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b8ee2: MOV EDX,dword ptr [EDI + 0x378]
// 004b8ee8: TEST EDX,EDX
// 004b8eea: JNZ 0x004b99c4
//   XREF to: 004b99c4 (CONDITIONAL_JUMP)
// 004b8ef0: CMP dword ptr [EDI + 0x370],0x3
// 004b8ef7: JNZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b8ef9: MOV EAX,dword ptr [EDI + 0x37c]
// 004b8eff: TEST EAX,EAX
// 004b8f01: JNZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b8f03: CMP dword ptr [EDI + 0x374],0x0
// 004b8f0a: JZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b8f0c: CMP byte ptr [0x02d12ac8],0x0
//   XREF to: 02d12ac8 (READ)
// 004b8f13: JZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b8f15: MOV ECX,dword ptr [ESP + 0x2314]
//   XREF to: Stack[-0x24] (READ)
// 004b8f1c: PUSH ECX
// 004b8f1d: PUSH EAX
// 004b8f1e: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b8f23: ADD ESP,0x8
// 004b8f26: TEST EAX,EAX
// 004b8f28: JL 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b8f2a: TEST AL,0x8
// 004b8f2c: JZ 0x004b99ac
//   XREF to: 004b99ac (CONDITIONAL_JUMP)
// 004b8f32: MOV ECX,dword ptr [ESP + 0x2314]
//   Label: LAB_004b8f32
//   XREF to: Stack[-0x24] (READ)
// 004b8f39: MOV EBX,dword ptr [ESP + 0x2318]
//   XREF to: Stack[-0x20] (READ)
// 004b8f40: MOV ESI,dword ptr [ESP + 0x22f0]
//   XREF to: Stack[-0x48] (READ)
// 004b8f47: ADD ECX,0x39c
// 004b8f4d: INC EBX
// 004b8f4e: MOV dword ptr [ESP + 0x2314],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004b8f55: MOV dword ptr [ESP + 0x2318],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004b8f5c: CMP EBX,ESI
// 004b8f5e: JL 0x004b8ed0
//   XREF to: 004b8ed0 (CONDITIONAL_JUMP)
// 004b8f64: MOV EAX,dword ptr [ESP + 0x233c]
//   Label: LAB_004b8f64
//   XREF to: Stack[0x4] (READ)
// 004b8f6b: MOV dword ptr [EAX + 0x13880c],0x0
// 004b8f75: CMP dword ptr [ESP + 0x22e0],0x0
//   XREF to: Stack[-0x58] (READ)
// 004b8f7d: JLE 0x004b9e59
//   XREF to: 004b9e59 (CONDITIONAL_JUMP)
// 004b8f83: LEA EAX,[ESP + 0x22b4]
//   Label: LAB_004b8f83
//   XREF to: Stack[-0x84] (DATA)
// 004b8f8a: PUSH EAX
// 004b8f8b: MOV ECX,dword ptr [ESP + 0x2340]
//   XREF to: Stack[0x4] (READ)
// 004b8f92: PUSH ECX
// 004b8f93: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004b8f98: ADD ESP,0x8
// 004b8f9b: CMP dword ptr [ESP + 0x22dc],0x0
//   Label: LAB_004b8f9b
//   XREF to: Stack[-0x5c] (READ)
// 004b8fa3: JNZ 0x004b9e6c
//   XREF to: 004b9e6c (CONDITIONAL_JUMP)
// 004b8fa9: CMP dword ptr [ESP + 0x22e0],0x0
//   XREF to: Stack[-0x58] (READ)
// 004b8fb1: JNZ 0x004b9e6c
//   XREF to: 004b9e6c (CONDITIONAL_JUMP)
// 004b8fb7: CMP dword ptr [ESP + 0x22e4],0x0
//   XREF to: Stack[-0x54] (READ)
// 004b8fbf: JNZ 0x004b9e6c
//   XREF to: 004b9e6c (CONDITIONAL_JUMP)
// 004b8fc5: CMP dword ptr [ESP + 0x22ec],0x0
//   XREF to: Stack[-0x4c] (READ)
// 004b8fcd: JNZ 0x004b9e6c
//   XREF to: 004b9e6c (CONDITIONAL_JUMP)
// 004b8fd3: CMP dword ptr [ESP + 0x22e8],0x0
//   XREF to: Stack[-0x50] (READ)
// 004b8fdb: JNZ 0x004b9e6c
//   XREF to: 004b9e6c (CONDITIONAL_JUMP)
// 004b8fe1: MOV ESI,0x628a9f
//   XREF to: 00628a9f (DATA)
// 004b8fe6: LEA EDI,[ESP + 0x1da0]
//   XREF to: Stack[-0x598] (DATA)
// 004b8fed: PUSH EDI
//   Label: LAB_004b8fed
// 004b8fee: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8fee
//   XREF to: 00628a9f (READ)
//   XREF to: 00628aa1 (READ)
//   XREF to: 00628b24 (READ)
// 004b8ff0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x598] (DATA)
// 004b8ff2: CMP AL,0x0
// 004b8ff4: JZ 0x004b9006
//   XREF to: 004b9006 (CONDITIONAL_JUMP)
// 004b8ff6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00628aa0 (READ)
//   XREF to: 00628aa2 (READ)
//   XREF to: 00628b25 (READ)
// 004b8ff9: ADD ESI,0x2
// 004b8ffc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x597] (WRITE)
// 004b8fff: ADD EDI,0x2
// 004b9002: CMP AL,0x0
// 004b9004: JNZ 0x004b8fee
//   XREF to: 004b8fee (CONDITIONAL_JUMP)
// 004b9006: POP EDI
//   Label: LAB_004b9006
// 004b9007: LEA EAX,[ESP + 0x1da0]
//   XREF to: Stack[-0x598] (DATA)
// 004b900e: PUSH EAX
// 004b900f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9015: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b9016: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004b901b: ADD ESP,0x8
//   Label: LAB_004b901b
// 004b901e: MOV EDX,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b9025: TEST EDX,EDX
// 004b9027: JZ 0x004b903c
//   XREF to: 004b903c (CONDITIONAL_JUMP)
// 004b9029: PUSH 0xe10
// 004b902e: PUSH 0x628b60
//   XREF to: 00628b60 (DATA)
// 004b9033: PUSH EDX
// 004b9034: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b9039: ADD ESP,0xc
// 004b903c: LEA EAX,[ESP + 0x22c4]
//   Label: LAB_004b903c
//   XREF to: Stack[-0x74] (DATA)
// 004b9043: PUSH EAX
// 004b9044: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b9049: ADD ESP,0x4
// 004b904c: PUSH 0x0
// 004b904e: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b9055: PUSH EAX
// 004b9056: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004b905b: ADD ESP,0x8
// 004b905e: PUSH 0x0
// 004b9060: LEA EAX,[ESP + 0x22a8]
//   XREF to: Stack[-0x94] (DATA)
// 004b9067: PUSH EAX
// 004b9068: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004b906d: ADD ESP,0x8
// 004b9070: ADD ESP,0x2328
// 004b9076: POP EBP
// 004b9077: POP EDI
// 004b9078: POP ESI
// 004b9079: POP EBX
// 004b907a: RET
// 004b907b: LEA EAX,[ESP + 0x1da0]
//   Label: LAB_004b907b
//   XREF to: Stack[-0x598] (DATA)
// 004b9082: PUSH EAX
// 004b9083: PUSH 0x628430
//   XREF to: 00628430 (DATA)
// 004b9088: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b908e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b908f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9094: ADD ESP,0xc
// 004b9097: PUSH 0x0
// 004b9099: LEA EAX,[ESP + 0x22a8]
//   XREF to: Stack[-0x94] (DATA)
// 004b90a0: PUSH EAX
// 004b90a1: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004b90a6: ADD ESP,0x8
// 004b90a9: ADD ESP,0x2328
// 004b90af: POP EBP
// 004b90b0: POP EDI
// 004b90b1: POP ESI
// 004b90b2: POP EBX
// 004b90b3: RET
// 004b90b4: MOV dword ptr [0x02f0ca4c],0xc25
//   Label: LAB_004b90b4
//   XREF to: 02f0ca4c (WRITE)
// 004b90be: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0xfbc] (DATA)
// 004b90c5: PUSH EAX
// 004b90c6: MOV EBP,0x6284d4
//   XREF to: 006284d4 (DATA)
// 004b90cb: PUSH 0x6284e9
//   XREF to: 006284e9 (DATA)
// 004b90d0: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004b90d6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b90db: ADD ESP,0x8
// 004b90de: JMP 0x004b89b6
//   XREF to: 004b89b6 (UNCONDITIONAL_JUMP)
// 004b90e3: MOV dword ptr [EBX + 0x370],0x4
//   Label: LAB_004b90e3
// 004b90ed: JMP 0x004b8a32
//   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
// 004b90f2: MOV EAX,dword ptr [ESP + 0x1588]
//   Label: LAB_004b90f2
//   XREF to: Stack[-0xdb0] (READ)
// 004b90f9: SUB EAX,0x2
// 004b90fc: CMP EAX,EDX
// 004b90fe: JBE 0x004b910f
//   XREF to: 004b910f (CONDITIONAL_JUMP)
// 004b9100: MOV dword ptr [EBX + 0x370],0x1
// 004b910a: JMP 0x004b8a32
//   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
// 004b910f: MOV EAX,dword ptr [ESP + 0x19a8]
//   Label: LAB_004b910f
//   XREF to: Stack[-0x990] (READ)
// 004b9116: CMP EAX,dword ptr [ESP + 0x1580]
//   XREF to: Stack[-0xdb8] (READ)
// 004b911d: JZ 0x004b912e
//   XREF to: 004b912e (CONDITIONAL_JUMP)
// 004b911f: MOV dword ptr [EBX + 0x370],0x2
// 004b9129: JMP 0x004b8a32
//   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
// 004b912e: MOV dword ptr [EBX + 0x370],0x3
//   Label: LAB_004b912e
// 004b9138: JMP 0x004b8a32
//   XREF to: 004b8a32 (UNCONDITIONAL_JUMP)
// 004b913d: MOV EBP,dword ptr [0x00678a60]
//   Label: LAB_004b913d
//   XREF to: 00678a60 (READ)
// 004b9143: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b9144: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b9149: ADD ESP,0x4
// 004b914c: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0xfbc] (DATA)
// 004b9153: PUSH EAX
// 004b9154: PUSH 0x62850c
//   XREF to: 0062850c (DATA)
// 004b9159: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b915e: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b915f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9164: ADD ESP,0xc
// 004b9167: PUSH 0x0
// 004b9169: LEA EAX,[ESP + 0x804]
//   XREF to: Stack[-0x1b38] (DATA)
// 004b9170: PUSH EAX
// 004b9171: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b9176: JMP 0x004b901b
//   XREF to: 004b901b (UNCONDITIONAL_JUMP)
// 004b917b: INC dword ptr [EBX + 0x384]
//   Label: LAB_004b917b
// 004b9181: JMP 0x004b8b54
//   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
// 004b9186: MOV EAX,dword ptr [EBP + 0xc]
//   Label: LAB_004b9186
// 004b9189: SUB EAX,0x2
// 004b918c: CMP EAX,ESI
// 004b918e: JBE 0x004b919b
//   XREF to: 004b919b (CONDITIONAL_JUMP)
// 004b9190: INC dword ptr [EBX + 0x380]
// 004b9196: JMP 0x004b8b54
//   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
// 004b919b: MOV EAX,dword ptr [ESP + 0x1794]
//   Label: LAB_004b919b
//   XREF to: Stack[-0xba4] (READ)
// 004b91a2: CMP EAX,dword ptr [EBP + 0x4]
// 004b91a5: JZ 0x004b91b2
//   XREF to: 004b91b2 (CONDITIONAL_JUMP)
// 004b91a7: INC dword ptr [EBX + 0x388]
// 004b91ad: JMP 0x004b8b54
//   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
// 004b91b2: INC dword ptr [EBX + 0x38c]
//   Label: LAB_004b91b2
// 004b91b8: JMP 0x004b8b54
//   XREF to: 004b8b54 (UNCONDITIONAL_JUMP)
// 004b91bd: MOV byte ptr [EBX + 0x308],0x0
//   Label: LAB_004b91bd
// 004b91c4: JMP 0x004b8bd5
//   XREF to: 004b8bd5 (UNCONDITIONAL_JUMP)
// 004b91c9: CMP dword ptr [EBX + 0x370],0x4
//   Label: LAB_004b91c9
// 004b91d0: JNZ 0x004b91e8
//   XREF to: 004b91e8 (CONDITIONAL_JUMP)
// 004b91d2: CMP dword ptr [EBX + 0x37c],0x0
// 004b91d9: JNZ 0x004b91e8
//   XREF to: 004b91e8 (CONDITIONAL_JUMP)
// 004b91db: CMP dword ptr [EBX + 0x374],0x0
// 004b91e2: JZ 0x004b926e
//   XREF to: 004b926e (CONDITIONAL_JUMP)
// 004b91e8: CMP dword ptr [EBX + 0x370],0x1
//   Label: LAB_004b91e8
// 004b91ef: JNZ 0x004b9221
//   XREF to: 004b9221 (CONDITIONAL_JUMP)
// 004b91f1: CMP dword ptr [EBX + 0x37c],0x0
// 004b91f8: JNZ 0x004b9221
//   XREF to: 004b9221 (CONDITIONAL_JUMP)
// 004b91fa: MOV EDX,dword ptr [EBX + 0x38c]
// 004b9200: MOV EAX,dword ptr [EBX + 0x380]
// 004b9206: MOV ECX,dword ptr [EBX + 0x388]
// 004b920c: ADD EAX,EDX
// 004b920e: ADD EAX,ECX
// 004b9210: TEST EAX,EAX
// 004b9212: JLE 0x004b9221
//   XREF to: 004b9221 (CONDITIONAL_JUMP)
// 004b9214: CMP dword ptr [EBX + 0x374],0x0
// 004b921b: JZ 0x004b9287
//   XREF to: 004b9287 (CONDITIONAL_JUMP)
// 004b9221: CMP dword ptr [EBX + 0x370],0x1
//   Label: LAB_004b9221
// 004b9228: JNZ 0x004b923c
//   XREF to: 004b923c (CONDITIONAL_JUMP)
// 004b922a: CMP dword ptr [EBX + 0x37c],0x0
// 004b9231: JNZ 0x004b923c
//   XREF to: 004b923c (CONDITIONAL_JUMP)
// 004b9233: CMP dword ptr [EBX + 0x374],0x0
// 004b923a: JZ 0x004b92a0
//   XREF to: 004b92a0 (CONDITIONAL_JUMP)
// 004b923c: MOV EDX,dword ptr [EBX + 0x370]
//   Label: LAB_004b923c
// 004b9242: CMP EDX,0x1
// 004b9245: JNZ 0x004b92b9
//   XREF to: 004b92b9 (CONDITIONAL_JUMP)
// 004b9247: CMP dword ptr [EBX + 0x37c],0x0
// 004b924e: JNZ 0x004b92b9
//   XREF to: 004b92b9 (CONDITIONAL_JUMP)
// 004b9250: CMP dword ptr [EBX + 0x374],0x0
// 004b9257: JZ 0x004b92b9
//   XREF to: 004b92b9 (CONDITIONAL_JUMP)
// 004b9259: MOV dword ptr [EBX + 0x36c],0x6285bd
//   XREF to: 006285bd (DATA)
// 004b9263: MOV dword ptr [EBX + 0x378],EDX
// 004b9269: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b926e: MOV dword ptr [EBX + 0x378],0x2
//   Label: LAB_004b926e
// 004b9278: MOV dword ptr [EBX + 0x36c],0x628563
//   XREF to: 00628563 (DATA)
// 004b9282: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b9287: MOV dword ptr [EBX + 0x378],0x3
//   Label: LAB_004b9287
// 004b9291: MOV dword ptr [EBX + 0x36c],0x62857b
//   XREF to: 0062857b (DATA)
// 004b929b: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b92a0: MOV dword ptr [EBX + 0x378],0x2
//   Label: LAB_004b92a0
// 004b92aa: MOV dword ptr [EBX + 0x36c],0x62859b
//   XREF to: 0062859b (DATA)
// 004b92b4: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b92b9: MOV EDI,dword ptr [EBX + 0x370]
//   Label: LAB_004b92b9
// 004b92bf: TEST EDI,EDI
// 004b92c1: JNZ 0x004b92d8
//   XREF to: 004b92d8 (CONDITIONAL_JUMP)
// 004b92c3: MOV dword ptr [EBX + 0x36c],0x6285db
//   XREF to: 006285db (DATA)
// 004b92cd: MOV dword ptr [EBX + 0x378],EDI
// 004b92d3: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b92d8: CMP EDI,0x3
//   Label: LAB_004b92d8
// 004b92db: JNZ 0x004b92ff
//   XREF to: 004b92ff (CONDITIONAL_JUMP)
// 004b92dd: MOV EAX,dword ptr [EBX + 0x37c]
// 004b92e3: TEST EAX,EAX
// 004b92e5: JNZ 0x004b92ff
//   XREF to: 004b92ff (CONDITIONAL_JUMP)
// 004b92e7: CMP dword ptr [EBX + 0x374],0x0
// 004b92ee: JZ 0x004b92ff
//   XREF to: 004b92ff (CONDITIONAL_JUMP)
// 004b92f0: MOV dword ptr [EBX + 0x36c],0x6285ed
//   XREF to: 006285ed (DATA)
// 004b92fa: JMP 0x004b8c1d
//   XREF to: 004b8c1d (UNCONDITIONAL_JUMP)
// 004b92ff: CMP dword ptr [EBX + 0x370],0x3
//   Label: LAB_004b92ff
// 004b9306: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b9308: MOV ESI,dword ptr [EBX + 0x37c]
// 004b930e: TEST ESI,ESI
// 004b9310: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b9312: CMP dword ptr [EBX + 0x374],0x0
// 004b9319: JZ 0x004b9358
//   XREF to: 004b9358 (CONDITIONAL_JUMP)
// 004b931b: CMP dword ptr [EBX + 0x370],0x3
//   Label: LAB_004b931b
// 004b9322: JNZ 0x004b8c23
//   XREF to: 004b8c23 (CONDITIONAL_JUMP)
// 004b9328: MOV EDI,dword ptr [EBX + 0x37c]
// 004b932e: TEST EDI,EDI
// 004b9330: JNZ 0x004b8c23
//   XREF to: 004b8c23 (CONDITIONAL_JUMP)
// 004b9336: CMP dword ptr [EBX + 0x374],0x0
// 004b933d: JNZ 0x004b8c23
//   XREF to: 004b8c23 (CONDITIONAL_JUMP)
// 004b9343: MOV dword ptr [EBX + 0x36c],0x628623
//   XREF to: 00628623 (DATA)
// 004b934d: MOV dword ptr [EBX + 0x378],EDI
// 004b9353: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b9358: TEST ESI,ESI
//   Label: LAB_004b9358
// 004b935a: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b935c: CMP dword ptr [EBX + 0x380],0x0
// 004b9363: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b9365: CMP dword ptr [EBX + 0x384],0x0
// 004b936c: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b936e: CMP dword ptr [EBX + 0x388],0x0
// 004b9375: JNZ 0x004b931b
//   XREF to: 004b931b (CONDITIONAL_JUMP)
// 004b9377: MOV dword ptr [EBX + 0x36c],0x62860d
//   XREF to: 0062860d (DATA)
// 004b9381: MOV dword ptr [EBX + 0x378],ESI
// 004b9387: JMP 0x004b8c23
//   XREF to: 004b8c23 (UNCONDITIONAL_JUMP)
// 004b938c: INC EBX
//   Label: LAB_004b938c
// 004b938d: ADD EBP,0x39c
// 004b9393: CMP EBX,EDI
// 004b9395: JL 0x004b8d0c
//   XREF to: 004b8d0c (CONDITIONAL_JUMP)
// 004b939b: JMP 0x004b8d25
//   XREF to: 004b8d25 (UNCONDITIONAL_JUMP)
// 004b93a0: PUSH 0xcd3
//   Label: LAB_004b93a0
// 004b93a5: MOV ECX,dword ptr [ESP + 0x2310]
//   XREF to: Stack[-0x2c] (READ)
// 004b93ac: MOV EBX,dword ptr [ESP + 0x2314]
//   XREF to: Stack[-0x28] (READ)
// 004b93b3: MOV EBP,dword ptr [ESP + 0x22f8]
//   XREF to: Stack[-0x44] (READ)
// 004b93ba: PUSH 0x628647
//   XREF to: 00628647 (DATA)
// 004b93bf: ADD ECX,0x39c
// 004b93c5: LEA ESI,[EDX + 0x1]
// 004b93c8: PUSH ECX
// 004b93c9: ADD EBX,0x39c
// 004b93cf: MOV dword ptr [ESP + 0x22fc],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004b93d6: PUSH EBP
// 004b93d7: MOV dword ptr [ESP + 0x231c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b93de: MOV dword ptr [ESP + 0x2320],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004b93e5: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b93ea: ADD ESP,0x10
// 004b93ed: MOV dword ptr [ESP + 0x22f4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004b93f4: TEST EAX,EAX
// 004b93f6: JNZ 0x004b941a
//   XREF to: 004b941a (CONDITIONAL_JUMP)
// 004b93f8: MOV EAX,0x62865c
//   XREF to: 0062865c (DATA)
// 004b93fd: MOV EDX,0xcd4
// 004b9402: PUSH 0x628671
//   XREF to: 00628671 (DATA)
// 004b9407: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004b940c: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004b9412: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b9417: ADD ESP,0x4
// 004b941a: PUSH 0x39c
//   Label: LAB_004b941a
// 004b941f: MOV EBX,dword ptr [ESP + 0x22f8]
//   XREF to: Stack[-0x44] (READ)
// 004b9426: MOV ECX,dword ptr [ESP + 0x2314]
//   XREF to: Stack[-0x28] (READ)
// 004b942d: PUSH 0x0
// 004b942f: ADD EBX,ECX
// 004b9431: PUSH EBX
// 004b9432: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b9437: ADD ESP,0xc
// 004b943a: LEA EDI,[EBX + 0x100]
// 004b9440: MOV ESI,dword ptr [ESP + 0x22fc]
//   XREF to: Stack[-0x3c] (READ)
// 004b9447: PUSH EDI
// 004b9448: MOV AL,byte ptr [ESI]
//   Label: LAB_004b9448
// 004b944a: MOV byte ptr [EDI],AL
// 004b944c: CMP AL,0x0
// 004b944e: JZ 0x004b9460
//   XREF to: 004b9460 (CONDITIONAL_JUMP)
// 004b9450: MOV AL,byte ptr [ESI + 0x1]
// 004b9453: ADD ESI,0x2
// 004b9456: MOV byte ptr [EDI + 0x1],AL
// 004b9459: ADD EDI,0x2
// 004b945c: CMP AL,0x0
// 004b945e: JNZ 0x004b9448
//   XREF to: 004b9448 (CONDITIONAL_JUMP)
// 004b9460: POP EDI
//   Label: LAB_004b9460
// 004b9461: LEA EAX,[ESP + 0x20a4]
//   XREF to: Stack[-0x294] (DATA)
// 004b9468: PUSH EAX
// 004b9469: LEA EAX,[ESP + 0x21a8]
//   XREF to: Stack[-0x194] (DATA)
// 004b9470: PUSH EAX
// 004b9471: LEA EAX,[ESP + 0x1fac]
//   XREF to: Stack[-0x394] (DATA)
// 004b9478: PUSH EAX
// 004b9479: LEA EAX,[ESP + 0x2330]
//   XREF to: Stack[-0x14] (DATA)
// 004b9480: PUSH EAX
// 004b9481: LEA EAX,[ESP + 0x1db0]
//   XREF to: Stack[-0x598] (DATA)
// 004b9488: PUSH EAX
// 004b9489: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004b948e: ADD ESP,0x14
// 004b9491: LEA EAX,[ESP + 0x20a4]
//   XREF to: Stack[-0x294] (DATA)
// 004b9498: PUSH EAX
// 004b9499: LEA EAX,[ESP + 0x21a8]
//   XREF to: Stack[-0x194] (DATA)
// 004b94a0: PUSH EAX
// 004b94a1: LEA EAX,[ESP + 0x1fac]
//   XREF to: Stack[-0x394] (DATA)
// 004b94a8: PUSH EAX
// 004b94a9: PUSH 0x0
// 004b94ab: LEA EAX,[ESP + 0x1eb4]
//   XREF to: Stack[-0x494] (DATA)
// 004b94b2: PUSH EAX
// 004b94b3: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b94b8: ADD ESP,0x14
// 004b94bb: LEA EAX,[ESP + 0x20a4]
//   XREF to: Stack[-0x294] (DATA)
// 004b94c2: PUSH EAX
// 004b94c3: LEA EAX,[ESP + 0x21a8]
//   XREF to: Stack[-0x194] (DATA)
// 004b94ca: PUSH EAX
// 004b94cb: PUSH 0x0
// 004b94cd: PUSH 0x0
// 004b94cf: MOV ESI,dword ptr [ESP + 0x230c]
//   XREF to: Stack[-0x3c] (READ)
// 004b94d6: PUSH ESI
// 004b94d7: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004b94dc: ADD ESP,0x14
// 004b94df: LEA EAX,[ESP + 0x20a4]
//   XREF to: Stack[-0x294] (DATA)
// 004b94e6: PUSH EAX
// 004b94e7: LEA EAX,[ESP + 0x21a8]
//   XREF to: Stack[-0x194] (DATA)
// 004b94ee: PUSH EAX
// 004b94ef: LEA EAX,[ESP + 0x1eac]
//   XREF to: Stack[-0x494] (DATA)
// 004b94f6: PUSH EAX
// 004b94f7: LEA EAX,[ESP + 0x2330]
//   XREF to: Stack[-0x14] (DATA)
// 004b94fe: PUSH EAX
// 004b94ff: LEA EAX,[EBX + 0x204]
// 004b9505: PUSH EAX
// 004b9506: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b950b: ADD ESP,0x14
// 004b950e: LEA ESI,[ESP + 0x21a4]
//   XREF to: Stack[-0x194] (DATA)
// 004b9515: MOV EDI,EBX
// 004b9517: PUSH EDI
// 004b9518: MOV AL,byte ptr [ESI]
//   Label: LAB_004b9518
//   XREF to: Stack[-0x194] (DATA)
// 004b951a: MOV byte ptr [EDI],AL
// 004b951c: CMP AL,0x0
// 004b951e: JZ 0x004b9530
//   XREF to: 004b9530 (CONDITIONAL_JUMP)
// 004b9520: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x193] (READ)
// 004b9523: ADD ESI,0x2
// 004b9526: MOV byte ptr [EDI + 0x1],AL
// 004b9529: ADD EDI,0x2
// 004b952c: CMP AL,0x0
// 004b952e: JNZ 0x004b9518
//   XREF to: 004b9518 (CONDITIONAL_JUMP)
// 004b9530: POP EDI
//   Label: LAB_004b9530
// 004b9531: MOV byte ptr [EBX + 0x308],0x0
// 004b9538: MOV dword ptr [EBX + 0x370],0x5
// 004b9542: MOV dword ptr [EBX + 0x36c],0x62867f
//   XREF to: 0062867f (DATA)
// 004b954c: MOV dword ptr [EBX + 0x378],0x0
// 004b9556: MOV dword ptr [EBX + 0x374],0x1
// 004b9560: JMP 0x004b8d34
//   XREF to: 004b8d34 (UNCONDITIONAL_JUMP)
// 004b9565: PUSH 0x0
//   Label: LAB_004b9565
// 004b9567: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b956e: PUSH EAX
// 004b956f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b9574: JMP 0x004b901b
//   XREF to: 004b901b (UNCONDITIONAL_JUMP)
// 004b9579: LEA EAX,[EBP + 0x100]
//   Label: caseD_4
// 004b957f: PUSH EAX
// 004b9580: PUSH 0x62870e
//   XREF to: 0062870e (DATA)
// 004b9585: PUSH EBX
// 004b9586: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b958b: ADD ESP,0xc
// 004b958e: ADD EBX,EAX
//   Label: LAB_004b958e
// 004b9590: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9590
// 004b9597: JZ 0x004b96b3
//   XREF to: 004b96b3 (CONDITIONAL_JUMP)
// 004b959d: PUSH 0x6287ed
//   XREF to: 006287ed (DATA)
// 004b95a2: PUSH EBX
// 004b95a3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b95a8: ADD ESP,0x8
// 004b95ab: ADD EBX,EAX
// 004b95ad: LEA EAX,[EBP + 0x204]
// 004b95b3: PUSH EAX
// 004b95b4: MOV EAX,dword ptr [EBP + 0x390]
// 004b95ba: PUSH EAX
// 004b95bb: PUSH 0x628804
//   XREF to: 00628804 (DATA)
// 004b95c0: PUSH EBX
// 004b95c1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b95c6: ADD ESP,0x10
// 004b95c9: MOV EDX,dword ptr [EBP + 0x384]
// 004b95cf: ADD EBX,EAX
// 004b95d1: TEST EDX,EDX
// 004b95d3: JLE 0x004b95e6
//   XREF to: 004b95e6 (CONDITIONAL_JUMP)
// 004b95d5: PUSH EDX
// 004b95d6: PUSH 0x62881c
//   XREF to: 0062881c (DATA)
// 004b95db: PUSH EBX
// 004b95dc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b95e1: ADD ESP,0xc
// 004b95e4: ADD EBX,EAX
// 004b95e6: MOV ESI,dword ptr [EBP + 0x37c]
//   Label: LAB_004b95e6
// 004b95ec: TEST ESI,ESI
// 004b95ee: JLE 0x004b9601
//   XREF to: 004b9601 (CONDITIONAL_JUMP)
// 004b95f0: PUSH ESI
// 004b95f1: PUSH 0x62883a
//   XREF to: 0062883a (DATA)
// 004b95f6: PUSH EBX
// 004b95f7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b95fc: ADD ESP,0xc
// 004b95ff: ADD EBX,EAX
// 004b9601: MOV EAX,dword ptr [EBP + 0x380]
//   Label: LAB_004b9601
// 004b9607: TEST EAX,EAX
// 004b9609: JLE 0x004b961c
//   XREF to: 004b961c (CONDITIONAL_JUMP)
// 004b960b: PUSH EAX
// 004b960c: PUSH 0x628854
//   XREF to: 00628854 (DATA)
// 004b9611: PUSH EBX
// 004b9612: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9617: ADD ESP,0xc
// 004b961a: ADD EBX,EAX
// 004b961c: MOV ECX,dword ptr [EBP + 0x388]
//   Label: LAB_004b961c
// 004b9622: TEST ECX,ECX
// 004b9624: JLE 0x004b9637
//   XREF to: 004b9637 (CONDITIONAL_JUMP)
// 004b9626: PUSH ECX
// 004b9627: PUSH 0x62886e
//   XREF to: 0062886e (DATA)
// 004b962c: PUSH EBX
// 004b962d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9632: ADD ESP,0xc
// 004b9635: ADD EBX,EAX
// 004b9637: MOV EDI,dword ptr [EBP + 0x38c]
//   Label: LAB_004b9637
// 004b963d: TEST EDI,EDI
// 004b963f: JLE 0x004b9652
//   XREF to: 004b9652 (CONDITIONAL_JUMP)
// 004b9641: PUSH EDI
// 004b9642: PUSH 0x62888c
//   XREF to: 0062888c (DATA)
// 004b9647: PUSH EBX
// 004b9648: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b964d: ADD ESP,0xc
// 004b9650: ADD EBX,EAX
// 004b9652: PUSH 0x6288a8
//   Label: LAB_004b9652
//   XREF to: 006288a8 (DATA)
// 004b9657: PUSH EBX
// 004b9658: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b965d: ADD ESP,0x8
// 004b9660: MOV DH,byte ptr [EBP + 0x308]
// 004b9666: ADD EBX,EAX
// 004b9668: TEST DH,DH
// 004b966a: JZ 0x004b9698
//   XREF to: 004b9698 (CONDITIONAL_JUMP)
// 004b966c: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b9671: LEA ESI,[EBP + 0x308]
// 004b9677: PUSH ESI
// 004b9678: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b967d: ADD ESP,0x8
// 004b9680: TEST EAX,EAX
// 004b9682: JNZ 0x004b98e8
//   XREF to: 004b98e8 (CONDITIONAL_JUMP)
// 004b9688: PUSH 0x6288bf
//   XREF to: 006288bf (DATA)
// 004b968d: PUSH EBX
// 004b968e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9693: ADD ESP,0x8
// 004b9696: ADD EBX,EAX
//   Label: LAB_004b9696
// 004b9698: CMP dword ptr [EBP + 0x374],0x0
//   Label: LAB_004b9698
// 004b969f: JZ 0x004b98fc
//   XREF to: 004b98fc (CONDITIONAL_JUMP)
// 004b96a5: PUSH 0x62890f
//   XREF to: 0062890f (DATA)
// 004b96aa: PUSH EBX
//   Label: LAB_004b96aa
// 004b96ab: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b96b0: ADD ESP,0x8
// 004b96b3: LEA EAX,[ESP + 0xfd4]
//   Label: LAB_004b96b3
//   XREF to: Stack[-0x1364] (DATA)
// 004b96ba: PUSH EAX
// 004b96bb: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b96c0: ADD ESP,0x4
// 004b96c3: MOV ECX,dword ptr [0x00679da0]
//   XREF to: 00679da0 (READ)
// 004b96c9: PUSH ECX
//   XREF to: 00628449 (DATA)
// 004b96ca: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b96d1: PUSH EAX
// 004b96d2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b96d7: MOV EBX,dword ptr [EBP + 0x370]
// 004b96dd: ADD ESP,0x8
// 004b96e0: CMP EBX,0x5
// 004b96e3: JZ 0x004b96fc
//   XREF to: 004b96fc (CONDITIONAL_JUMP)
// 004b96e5: MOV ESI,dword ptr [0x00679da4]
//   XREF to: 00679da4 (READ)
// 004b96eb: PUSH ESI
//   XREF to: 0062844e (DATA)
// 004b96ec: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b96f3: PUSH EAX
// 004b96f4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b96f9: ADD ESP,0x8
// 004b96fc: CMP dword ptr [EBP + 0x374],0x0
//   Label: LAB_004b96fc
// 004b9703: JZ 0x004b9906
//   XREF to: 004b9906 (CONDITIONAL_JUMP)
// 004b9709: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9709
// 004b9710: JZ 0x004b9729
//   XREF to: 004b9729 (CONDITIONAL_JUMP)
// 004b9712: MOV EBX,dword ptr [0x00679dac]
//   XREF to: 00679dac (READ)
// 004b9718: PUSH EBX
//   XREF to: 00628460 (DATA)
// 004b9719: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b9720: PUSH EAX
// 004b9721: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9726: ADD ESP,0x8
// 004b9729: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9729
// 004b9730: JNZ 0x004b9749
//   XREF to: 004b9749 (CONDITIONAL_JUMP)
// 004b9732: MOV EDI,dword ptr [0x00679db0]
//   XREF to: 00679db0 (READ)
// 004b9738: PUSH EDI
//   XREF to: 0062846f (DATA)
// 004b9739: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b9740: PUSH EAX
// 004b9741: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9746: ADD ESP,0x8
// 004b9749: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9749
// 004b9750: JNZ 0x004b9769
//   XREF to: 004b9769 (CONDITIONAL_JUMP)
// 004b9752: MOV EDX,dword ptr [0x00679db4]
//   XREF to: 00679db4 (READ)
// 004b9758: PUSH EDX
//   XREF to: 00628478 (DATA)
// 004b9759: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b9760: PUSH EAX
// 004b9761: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9766: ADD ESP,0x8
// 004b9769: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9769
// 004b9770: JNZ 0x004b992f
//   XREF to: 004b992f (CONDITIONAL_JUMP)
// 004b9776: MOV EAX,dword ptr [EBP + 0x378]
//   Label: LAB_004b9776
// 004b977c: MOV EBX,dword ptr [EAX*0x4 + 0x679da0]
//   XREF to: 00679da0 (DATA)
// 004b9783: PUSH EBX
// 004b9784: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b978b: PUSH EAX
// 004b978c: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 004b9791: LEA EBX,[EBP + 0x204]
// 004b9797: ADD ESP,0x8
// 004b979a: MOV ESI,EAX
// 004b979c: XOR EDI,EDI
// 004b979e: PUSH EDI
//   Label: LAB_004b979e
// 004b979f: PUSH ESI
// 004b97a0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2338] (DATA)
// 004b97a4: PUSH EAX
// 004b97a5: LEA EAX,[ESP + 0xfe0]
//   XREF to: Stack[-0x1364] (DATA)
// 004b97ac: PUSH EAX
// 004b97ad: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b97b2: ADD ESP,0x10
// 004b97b5: MOV ESI,EAX
// 004b97b7: TEST EAX,EAX
// 004b97b9: JL 0x004b9978
//   XREF to: 004b9978 (CONDITIONAL_JUMP)
// 004b97bf: PUSH 0x679db8
//   XREF to: 00679db8 (DATA)
// 004b97c4: PUSH EAX
// 004b97c5: LEA EAX,[ESP + 0xfdc]
//   XREF to: Stack[-0x1364] (DATA)
// 004b97cc: PUSH EAX
// 004b97cd: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b97d2: ADD ESP,0x8
// 004b97d5: PUSH EAX
// 004b97d6: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b97db: ADD ESP,0x8
// 004b97de: TEST EAX,EAX
// 004b97e0: JNZ 0x004b9949
//   XREF to: 004b9949 (CONDITIONAL_JUMP)
// 004b97e6: PUSH EBX
// 004b97e7: MOV EAX,dword ptr [ESP + 0x2340]
//   XREF to: Stack[0x4] (READ)
// 004b97ee: PUSH EAX
// 004b97ef: CALL engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
//   XREF to: 004b82a0 (UNCONDITIONAL_CALL)
// 004b97f4: ADD ESP,0x8
// 004b97f7: JMP 0x004b979e
//   XREF to: 004b979e (UNCONDITIONAL_JUMP)
// 004b97f9: PUSH ESI
//   Label: caseD_0
// 004b97fa: LEA EAX,[EBP + 0x100]
// 004b9800: PUSH EAX
// 004b9801: PUSH 0x628729
//   XREF to: 00628729 (DATA)
// 004b9806: PUSH EBX
// 004b9807: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b980c: ADD ESP,0x10
// 004b980f: JMP 0x004b958e
//   XREF to: 004b958e (UNCONDITIONAL_JUMP)
// 004b9814: PUSH ESI
//   Label: caseD_1
// 004b9815: LEA EAX,[EBP + 0x100]
// 004b981b: PUSH EAX
// 004b981c: PUSH 0x628747
//   XREF to: 00628747 (DATA)
// 004b9821: PUSH EBX
// 004b9822: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9827: ADD ESP,0x10
// 004b982a: JMP 0x004b958e
//   XREF to: 004b958e (UNCONDITIONAL_JUMP)
// 004b982f: PUSH ESI
//   Label: caseD_2
// 004b9830: LEA EAX,[EBP + 0x100]
// 004b9836: PUSH EAX
// 004b9837: PUSH 0x628765
//   XREF to: 00628765 (DATA)
// 004b983c: PUSH EBX
// 004b983d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9842: ADD ESP,0x10
// 004b9845: JMP 0x004b958e
//   XREF to: 004b958e (UNCONDITIONAL_JUMP)
// 004b984a: PUSH ESI
//   Label: caseD_3
// 004b984b: LEA EAX,[EBP + 0x100]
// 004b9851: PUSH EAX
// 004b9852: PUSH 0x628787
//   XREF to: 00628787 (DATA)
// 004b9857: PUSH EBX
// 004b9858: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b985d: ADD ESP,0x10
// 004b9860: JMP 0x004b958e
//   XREF to: 004b958e (UNCONDITIONAL_JUMP)
// 004b9865: PUSH ESI
//   Label: caseD_5
// 004b9866: LEA EAX,[EBP + 0x100]
// 004b986c: PUSH EAX
// 004b986d: PUSH 0x6287a6
//   XREF to: 006287a6 (DATA)
// 004b9872: PUSH EBX
// 004b9873: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9878: ADD ESP,0x10
// 004b987b: JMP 0x004b958e
//   XREF to: 004b958e (UNCONDITIONAL_JUMP)
// 004b9880: MOV ECX,0x6287cc
//   Label: default
//   XREF to: 006287cc (DATA)
// 004b9885: MOV ESI,0xd1c
// 004b988a: PUSH 0x6287e1
//   XREF to: 006287e1 (DATA)
// 004b988f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b9895: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004b989b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b98a0: ADD ESP,0x4
// 004b98a3: JMP 0x004b9590
//   XREF to: 004b9590 (UNCONDITIONAL_JUMP)
// 004b98a8: IMUL EAX,EAX,0x39c
//   Label: LAB_004b98a8
// 004b98ae: MOV EBP,dword ptr [ESP + 0x22f4]
//   XREF to: Stack[-0x44] (READ)
// 004b98b5: ADD EBP,EAX
// 004b98b7: LEA ESI,[EBP + 0x204]
// 004b98bd: PUSH ESI
// 004b98be: PUSH 0x6286f8
//   XREF to: 006286f8 (DATA)
// 004b98c3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2338] (DATA)
// 004b98c7: PUSH EAX
// 004b98c8: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x2338] (DATA)
// 004b98cc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b98d1: ADD EBX,EAX
// 004b98d3: MOV EAX,dword ptr [EBP + 0x370]
// 004b98d9: ADD ESP,0xc
// 004b98dc: CMP EAX,0x5
// 004b98df: JA 0x004b9880
//   XREF to: 004b9880 (CONDITIONAL_JUMP)
// 004b98e1: JMP dword ptr [EAX*0x4 + 0x4b868c]
//   Label: switchD
//   XREF to: 004b97f9 (COMPUTED_JUMP)
//   XREF to: 004b9814 (COMPUTED_JUMP)
//   XREF to: 004b982f (COMPUTED_JUMP)
//   XREF to: 004b984a (COMPUTED_JUMP)
//   XREF to: 004b9579 (COMPUTED_JUMP)
//   XREF to: 004b9865 (COMPUTED_JUMP)
//   XREF to: 004b868c (DATA)
// 004b98e8: PUSH ESI
//   Label: LAB_004b98e8
// 004b98e9: PUSH 0x6288e8
//   XREF to: 006288e8 (DATA)
// 004b98ee: PUSH EBX
// 004b98ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b98f4: ADD ESP,0xc
// 004b98f7: JMP 0x004b9696
//   XREF to: 004b9696 (UNCONDITIONAL_JUMP)
// 004b98fc: PUSH 0x628936
//   Label: LAB_004b98fc
//   XREF to: 00628936 (DATA)
// 004b9901: JMP 0x004b96aa
//   XREF to: 004b96aa (UNCONDITIONAL_JUMP)
// 004b9906: CMP dword ptr [EBP + 0x370],0x5
//   Label: LAB_004b9906
// 004b990d: JZ 0x004b9709
//   XREF to: 004b9709 (CONDITIONAL_JUMP)
// 004b9913: MOV EDX,dword ptr [0x00679da8]
//   XREF to: 00679da8 (READ)
// 004b9919: PUSH EDX
//   XREF to: 00628453 (DATA)
// 004b991a: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b9921: PUSH EAX
// 004b9922: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9927: ADD ESP,0x8
// 004b992a: JMP 0x004b9709
//   XREF to: 004b9709 (UNCONDITIONAL_JUMP)
// 004b992f: PUSH 0x679db8
//   Label: LAB_004b992f
//   XREF to: 00679db8 (DATA)
// 004b9934: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b993b: PUSH EAX
// 004b993c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9941: ADD ESP,0x8
// 004b9944: JMP 0x004b9776
//   XREF to: 004b9776 (UNCONDITIONAL_JUMP)
// 004b9949: XOR EBX,EBX
//   Label: LAB_004b9949
// 004b994b: XOR EDI,EDI
// 004b994d: MOV EDX,dword ptr [EBX + 0x679da0]
//   Label: LAB_004b994d
//   XREF to: 00679da0 (READ)
//   XREF to: 00679da4 (READ)
// 004b9953: PUSH EDX
//   XREF to: 00628449 (DATA)
//   XREF to: 0062844e (DATA)
// 004b9954: PUSH ESI
// 004b9955: LEA EAX,[ESP + 0xfdc]
//   XREF to: Stack[-0x1364] (DATA)
// 004b995c: PUSH EAX
// 004b995d: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b9962: ADD ESP,0x8
// 004b9965: PUSH EAX
// 004b9966: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b996b: ADD ESP,0x8
// 004b996e: TEST EAX,EAX
// 004b9970: JNZ 0x004b99a1
//   XREF to: 004b99a1 (CONDITIONAL_JUMP)
// 004b9972: MOV dword ptr [EBP + 0x378],EDI
// 004b9978: PUSH 0x0
//   Label: LAB_004b9978
// 004b997a: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x1364] (DATA)
// 004b9981: PUSH EAX
// 004b9982: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b9987: ADD ESP,0x8
// 004b998a: PUSH 0x0
// 004b998c: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x170c] (DATA)
// 004b9993: PUSH EAX
// 004b9994: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b9999: ADD ESP,0x8
// 004b999c: JMP 0x004b8d5b
//   XREF to: 004b8d5b (UNCONDITIONAL_JUMP)
// 004b99a1: ADD EBX,0x4
//   Label: LAB_004b99a1
// 004b99a4: INC EDI
// 004b99a5: CMP EBX,0x18
// 004b99a8: JL 0x004b994d
//   XREF to: 004b994d (CONDITIONAL_JUMP)
// 004b99aa: JMP 0x004b9978
//   XREF to: 004b9978 (UNCONDITIONAL_JUMP)
// 004b99ac: OR AL,0x8
//   Label: LAB_004b99ac
// 004b99ae: PUSH EAX
// 004b99af: MOV EBX,dword ptr [ESP + 0x2318]
//   XREF to: Stack[-0x24] (READ)
// 004b99b6: PUSH EBX
// 004b99b7: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b99bc: ADD ESP,0x8
// 004b99bf: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b99c4: CMP EDX,0x5
//   Label: LAB_004b99c4
// 004b99c7: JNZ 0x004b99ef
//   XREF to: 004b99ef (CONDITIONAL_JUMP)
// 004b99c9: PUSH 0x0
// 004b99cb: MOV EBX,dword ptr [ESP + 0x2318]
//   XREF to: Stack[-0x24] (READ)
// 004b99d2: PUSH EBX
// 004b99d3: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b99d8: ADD ESP,0x8
// 004b99db: PUSH EBX
// 004b99dc: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004b99e1: ADD ESP,0x4
// 004b99e4: TEST EAX,EAX
// 004b99e6: JNZ 0x004b9a3e
//   XREF to: 004b9a3e (CONDITIONAL_JUMP)
// 004b99e8: INC dword ptr [ESP + 0x22ec]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 004b99ef: MOV ECX,dword ptr [EDI + 0x378]
//   Label: LAB_004b99ef
// 004b99f5: CMP ECX,0x4
// 004b99f8: JNZ 0x004b9a54
//   XREF to: 004b9a54 (CONDITIONAL_JUMP)
// 004b99fa: ADD EDI,0x100
//   Label: LAB_004b99fa
// 004b9a00: PUSH EDI
// 004b9a01: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b9a08: PUSH EAX
// 004b9a09: MOV ECX,dword ptr [ESP + 0x2344]
//   XREF to: Stack[0x4] (READ)
// 004b9a10: PUSH ECX
// 004b9a11: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004b9a16: ADD ESP,0xc
// 004b9a19: TEST EAX,EAX
// 004b9a1b: JL 0x004b9bc0
//   XREF to: 004b9bc0 (CONDITIONAL_JUMP)
// 004b9a21: PUSH EAX
// 004b9a22: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b9a29: PUSH EAX
// 004b9a2a: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 004b9a2f: ADD ESP,0x8
// 004b9a32: INC dword ptr [ESP + 0x22e8]
//   XREF to: Stack[-0x50] (READ_WRITE)
// 004b9a39: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9a3e: PUSH EBX
//   Label: LAB_004b9a3e
// 004b9a3f: PUSH 0x628964
//   XREF to: 00628964 (DATA)
// 004b9a44: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9a49: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b9a4a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9a4f: ADD ESP,0xc
// 004b9a52: JMP 0x004b99ef
//   XREF to: 004b99ef (UNCONDITIONAL_JUMP)
// 004b9a54: CMP ECX,0x5
//   Label: LAB_004b9a54
// 004b9a57: JZ 0x004b99fa
//   XREF to: 004b99fa (CONDITIONAL_JUMP)
// 004b9a59: MOV CH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b9a5f: XOR ESI,ESI
// 004b9a61: LEA EBX,[EDI + 0x100]
// 004b9a67: MOV dword ptr [ESP + 0x22cc],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 004b9a6e: TEST CH,CH
// 004b9a70: JZ 0x004b9c0f
//   XREF to: 004b9c0f (CONDITIONAL_JUMP)
// 004b9a76: PUSH EBX
// 004b9a77: PUSH 0x0
// 004b9a79: MOV EBP,EBX
// 004b9a7b: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b9a80: ADD ESP,0x8
// 004b9a83: LEA ESI,[EDI + 0x308]
// 004b9a89: MOV dword ptr [ESP + 0x2300],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004b9a90: TEST EAX,EAX
// 004b9a92: JL 0x004b9af4
//   XREF to: 004b9af4 (CONDITIONAL_JUMP)
// 004b9a94: TEST ESI,ESI
// 004b9a96: JZ 0x004b9bda
//   XREF to: 004b9bda (CONDITIONAL_JUMP)
// 004b9a9c: CMP byte ptr [ESI],0x0
// 004b9a9f: JZ 0x004b9bda
//   XREF to: 004b9bda (CONDITIONAL_JUMP)
// 004b9aa5: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b9aaa: PUSH ESI
// 004b9aab: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b9ab0: ADD ESP,0x8
// 004b9ab3: TEST EAX,EAX
// 004b9ab5: JNZ 0x004b9bda
//   XREF to: 004b9bda (CONDITIONAL_JUMP)
// 004b9abb: PUSH EBX
// 004b9abc: PUSH 0x626502
//   XREF to: 00626502 (DATA)
// 004b9ac1: LEA EAX,[ESP + 0x1bb4]
//   XREF to: Stack[-0x78c] (DATA)
// 004b9ac8: PUSH EAX
// 004b9ac9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9ace: ADD ESP,0xc
// 004b9ad1: PUSH 0x2d12bf0
//   XREF to: 02d12bf0 (DATA)
// 004b9ad6: LEA EAX,[ESP + 0x1bb0]
//   XREF to: Stack[-0x78c] (DATA)
// 004b9add: PUSH EAX
//   Label: LAB_004b9add
// 004b9ade: CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
// 004b9ae3: ADD ESP,0x8
// 004b9ae6: TEST EAX,EAX
// 004b9ae8: JL 0x004b8f64
//   XREF to: 004b8f64 (CONDITIONAL_JUMP)
// 004b9aee: JZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b9af4: PUSH 0x0
//   Label: LAB_004b9af4
// 004b9af6: LEA EAX,[EDI + 0x100]
// 004b9afc: PUSH EAX
// 004b9afd: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b9b02: ADD ESP,0x8
// 004b9b05: MOV EBP,dword ptr [ESP + 0x2318]
//   Label: LAB_004b9b05
//   XREF to: Stack[-0x20] (READ)
// 004b9b0c: PUSH EBP
// 004b9b0d: LEA EAX,[ESP + 0x22a8]
//   XREF to: Stack[-0x94] (DATA)
// 004b9b14: PUSH EAX
// 004b9b15: XOR ESI,ESI
// 004b9b17: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b9b1c: ADD ESP,0x8
// 004b9b1f: MOV EBP,EAX
// 004b9b21: PUSH 0x153
//   Label: LAB_004b9b21
// 004b9b26: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b9b2b: PUSH 0x6289dc
//   XREF to: 006289dc (DATA)
// 004b9b30: PUSH 0x0
// 004b9b32: PUSH EBP
// 004b9b33: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b9b38: MOV EBX,EAX
// 004b9b3a: ADD ESP,0x14
// 004b9b3d: TEST EAX,EAX
// 004b9b3f: JZ 0x004b9c43
//   XREF to: 004b9c43 (CONDITIONAL_JUMP)
// 004b9b45: PUSH 0x400
// 004b9b4a: PUSH 0x0
// 004b9b4c: PUSH 0x0
// 004b9b4e: PUSH EAX
// 004b9b4f: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b9b54: ADD ESP,0x10
// 004b9b57: TEST EBX,EBX
// 004b9b59: JZ 0x004b9c63
//   XREF to: 004b9c63 (CONDITIONAL_JUMP)
// 004b9b5f: PUSH 0xdbb
// 004b9b64: PUSH 0x6289ed
//   XREF to: 006289ed (DATA)
// 004b9b69: PUSH 0x628a02
//   XREF to: 00628a02 (DATA)
// 004b9b6e: PUSH 0x0
// 004b9b70: LEA EBP,[EDI + 0x100]
// 004b9b76: PUSH EBP
// 004b9b77: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b9b7c: MOV ESI,EAX
// 004b9b7e: ADD ESP,0x14
// 004b9b81: TEST EAX,EAX
// 004b9b83: JNZ 0x004b9c94
//   XREF to: 004b9c94 (CONDITIONAL_JUMP)
// 004b9b89: TEST EBX,EBX
// 004b9b8b: JZ 0x004b9ba0
//   XREF to: 004b9ba0 (CONDITIONAL_JUMP)
// 004b9b8d: PUSH 0xc4
// 004b9b92: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b9b97: PUSH EBX
// 004b9b98: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b9b9d: ADD ESP,0xc
// 004b9ba0: ADD EDI,0x100
//   Label: LAB_004b9ba0
// 004b9ba6: PUSH EDI
// 004b9ba7: PUSH 0x628a05
//   XREF to: 00628a05 (DATA)
// 004b9bac: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9bb2: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b9bb3: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9bb8: ADD ESP,0xc
// 004b9bbb: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9bc0: PUSH EDI
//   Label: LAB_004b9bc0
// 004b9bc1: PUSH 0x628974
//   XREF to: 00628974 (DATA)
// 004b9bc6: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9bcc: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b9bcd: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9bd2: ADD ESP,0xc
// 004b9bd5: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9bda: TEST byte ptr [ESP + 0x2300],0x8
//   Label: LAB_004b9bda
//   XREF to: Stack[-0x38] (READ)
// 004b9be2: JNZ 0x004b9af4
//   XREF to: 004b9af4 (CONDITIONAL_JUMP)
// 004b9be8: PUSH EBP
// 004b9be9: PUSH 0x62654c
//   XREF to: 0062654c (DATA)
// 004b9bee: LEA EAX,[ESP + 0x19c0]
//   XREF to: Stack[-0x980] (DATA)
// 004b9bf5: PUSH EAX
// 004b9bf6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9bfb: ADD ESP,0xc
// 004b9bfe: PUSH 0x2d12bf4
//   XREF to: 02d12bf4 (DATA)
// 004b9c03: LEA EAX,[ESP + 0x19bc]
//   XREF to: Stack[-0x980] (DATA)
// 004b9c0a: JMP 0x004b9add
//   XREF to: 004b9add (UNCONDITIONAL_JUMP)
// 004b9c0f: PUSH EBX
//   Label: LAB_004b9c0f
// 004b9c10: PUSH ESI
// 004b9c11: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b9c16: ADD ESP,0x8
// 004b9c19: TEST EAX,EAX
// 004b9c1b: JL 0x004b9b05
//   XREF to: 004b9b05 (CONDITIONAL_JUMP)
// 004b9c21: TEST AL,0x8
// 004b9c23: JZ 0x004b9b05
//   XREF to: 004b9b05 (CONDITIONAL_JUMP)
// 004b9c29: PUSH EBX
// 004b9c2a: PUSH 0x6289ae
//   XREF to: 006289ae (DATA)
// 004b9c2f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9c35: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b9c36: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9c3b: ADD ESP,0xc
// 004b9c3e: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9c43: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b9c43
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b9c48: CMP dword ptr [EAX],0x6
// 004b9c4b: JNZ 0x004b9c63
//   XREF to: 004b9c63 (CONDITIONAL_JUMP)
// 004b9c4d: PUSH 0x1f4
// 004b9c52: INC ESI
// 004b9c53: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b9c5a: CMP ESI,0xa
// 004b9c5d: JL 0x004b9b21
//   XREF to: 004b9b21 (CONDITIONAL_JUMP)
// 004b9c63: MOV EBP,dword ptr [ESP + 0x2318]
//   Label: LAB_004b9c63
//   XREF to: Stack[-0x20] (READ)
// 004b9c6a: PUSH EBP
// 004b9c6b: LEA EAX,[ESP + 0x22a8]
//   XREF to: Stack[-0x94] (DATA)
// 004b9c72: PUSH EAX
// 004b9c73: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b9c78: ADD ESP,0x8
// 004b9c7b: PUSH EAX
// 004b9c7c: PUSH 0x6289df
//   XREF to: 006289df (DATA)
// 004b9c81: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9c86: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b9c87: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9c8c: ADD ESP,0xc
// 004b9c8f: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9c94: MOV ECX,dword ptr [EDI + 0x398]
//   Label: LAB_004b9c94
// 004b9c9a: PUSH ECX
// 004b9c9b: PUSH EBP
// 004b9c9c: MOV EBP,dword ptr [ESP + 0x2320]
//   XREF to: Stack[-0x20] (READ)
// 004b9ca3: PUSH EBP
// 004b9ca4: LEA EAX,[ESP + 0x22b0]
//   XREF to: Stack[-0x94] (DATA)
// 004b9cab: PUSH EAX
// 004b9cac: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b9cb1: ADD ESP,0x8
// 004b9cb4: PUSH EAX
// 004b9cb5: PUSH ESI
// 004b9cb6: PUSH EBX
// 004b9cb7: CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   XREF to: 004b2030 (UNCONDITIONAL_CALL)
// 004b9cbc: ADD ESP,0x14
// 004b9cbf: PUSH 0xdc5
// 004b9cc4: PUSH 0x628a1b
//   XREF to: 00628a1b (DATA)
// 004b9cc9: PUSH EBX
// 004b9cca: MOV EBP,EAX
// 004b9ccc: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b9cd1: ADD ESP,0xc
// 004b9cd4: PUSH 0xdc6
// 004b9cd9: PUSH 0x628a30
//   XREF to: 00628a30 (DATA)
// 004b9cde: PUSH ESI
// 004b9cdf: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b9ce4: ADD ESP,0xc
// 004b9ce7: TEST EBP,EBP
// 004b9ce9: JZ 0x004b9d09
//   XREF to: 004b9d09 (CONDITIONAL_JUMP)
// 004b9ceb: MOV EAX,0x628a45
//   XREF to: 00628a45 (DATA)
// 004b9cf0: MOV EDX,0xdc7
// 004b9cf5: PUSH EBP
// 004b9cf6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004b9cfb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004b9d01: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b9d06: ADD ESP,0x4
// 004b9d09: MOV EAX,dword ptr [EDI + 0x394]
//   Label: LAB_004b9d09
// 004b9d0f: MOV ECX,dword ptr [ESP + 0x22dc]
//   XREF to: Stack[-0x5c] (READ)
// 004b9d16: PUSH EAX
// 004b9d17: LEA EBX,[EDI + 0x100]
// 004b9d1d: INC ECX
// 004b9d1e: PUSH EBX
// 004b9d1f: MOV dword ptr [ESP + 0x22e4],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 004b9d26: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004b9d2b: ADD ESP,0x8
// 004b9d2e: TEST EAX,EAX
// 004b9d30: JZ 0x004b9dee
//   XREF to: 004b9dee (CONDITIONAL_JUMP)
// 004b9d36: CMP byte ptr [0x02d12ac8],0x0
//   Label: LAB_004b9d36
//   XREF to: 02d12ac8 (READ)
// 004b9d3d: JZ 0x004b9d78
//   XREF to: 004b9d78 (CONDITIONAL_JUMP)
// 004b9d3f: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b9d44: LEA EAX,[EDI + 0x308]
// 004b9d4a: PUSH EAX
// 004b9d4b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b9d50: ADD ESP,0x8
// 004b9d53: TEST EAX,EAX
// 004b9d55: JZ 0x004b9d78
//   XREF to: 004b9d78 (CONDITIONAL_JUMP)
// 004b9d57: MOV EAX,dword ptr [ESP + 0x22cc]
//   XREF to: Stack[-0x6c] (READ)
// 004b9d5e: OR AL,0x8
// 004b9d60: PUSH EAX
// 004b9d61: LEA EBX,[EDI + 0x100]
// 004b9d67: PUSH EBX
// 004b9d68: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b9d6d: ADD ESP,0x8
// 004b9d70: TEST EAX,EAX
// 004b9d72: JZ 0x004b9e08
//   XREF to: 004b9e08 (CONDITIONAL_JUMP)
// 004b9d78: CMP dword ptr [EDI + 0x378],0x3
//   Label: LAB_004b9d78
// 004b9d7f: JZ 0x004b9d9e
//   XREF to: 004b9d9e (CONDITIONAL_JUMP)
// 004b9d81: LEA EBX,[EDI + 0x100]
// 004b9d87: PUSH EBX
// 004b9d88: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b9d8d: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004b9d8e: CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   XREF to: 00551280 (UNCONDITIONAL_CALL)
// 004b9d93: ADD ESP,0x8
// 004b9d96: TEST EAX,EAX
// 004b9d98: JZ 0x004b9e22
//   XREF to: 004b9e22 (CONDITIONAL_JUMP)
// 004b9d9e: MOV EAX,dword ptr [EDI + 0x378]
//   Label: LAB_004b9d9e
// 004b9da4: CMP EAX,0x2
// 004b9da7: JC 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b9dad: ADD EDI,0x100
// 004b9db3: CMP EAX,0x2
// 004b9db6: JBE 0x004b9e3c
//   XREF to: 004b9e3c (CONDITIONAL_JUMP)
// 004b9dbc: CMP EAX,0x3
// 004b9dbf: JNZ 0x004b8f32
//   XREF to: 004b8f32 (CONDITIONAL_JUMP)
// 004b9dc5: PUSH 0x1
// 004b9dc7: MOV EAX,dword ptr [ESP + 0x2340]
//   XREF to: Stack[0x4] (READ)
// 004b9dce: PUSH EDI
// 004b9dcf: MOV ECX,dword ptr [ESP + 0x2344]
//   XREF to: Stack[0x4] (READ)
// 004b9dd6: MOV EAX,dword ptr [EAX + 0x138810]
// 004b9ddc: PUSH ECX
// 004b9ddd: CALL dword ptr [EAX]
// 004b9ddf: ADD ESP,0xc
// 004b9de2: INC dword ptr [ESP + 0x22e4]
// 004b9de9: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9dee: PUSH EBX
//   Label: LAB_004b9dee
// 004b9def: PUSH 0x626577
//   XREF to: 00626577 (DATA)
// 004b9df4: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9dfa: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b9dfb: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9e00: ADD ESP,0xc
// 004b9e03: JMP 0x004b9d36
//   XREF to: 004b9d36 (UNCONDITIONAL_JUMP)
// 004b9e08: PUSH EBX
//   Label: LAB_004b9e08
// 004b9e09: PUSH 0x628a5a
//   XREF to: 00628a5a (DATA)
// 004b9e0e: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9e14: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b9e15: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9e1a: ADD ESP,0xc
// 004b9e1d: JMP 0x004b9d78
//   XREF to: 004b9d78 (UNCONDITIONAL_JUMP)
// 004b9e22: PUSH EBX
//   Label: LAB_004b9e22
// 004b9e23: PUSH 0x628a82
//   XREF to: 00628a82 (DATA)
// 004b9e28: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b9e2e: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b9e2f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b9e34: ADD ESP,0xc
// 004b9e37: JMP 0x004b9d9e
//   XREF to: 004b9d9e (UNCONDITIONAL_JUMP)
// 004b9e3c: PUSH EDI
//   Label: LAB_004b9e3c
// 004b9e3d: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x84] (DATA)
// 004b9e44: PUSH EAX
// 004b9e45: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b9e4a: ADD ESP,0x8
// 004b9e4d: INC dword ptr [ESP + 0x22e0]
//   XREF to: Stack[-0x58] (READ_WRITE)
// 004b9e54: JMP 0x004b8f32
//   XREF to: 004b8f32 (UNCONDITIONAL_JUMP)
// 004b9e59: CMP dword ptr [ESP + 0x22e8],0x0
//   Label: LAB_004b9e59
//   XREF to: Stack[-0x50] (READ)
// 004b9e61: JG 0x004b8f83
//   XREF to: 004b8f83 (CONDITIONAL_JUMP)
// 004b9e67: JMP 0x004b8f9b
//   XREF to: 004b8f9b (UNCONDITIONAL_JUMP)
// 004b9e6c: MOV EDX,dword ptr [ESP + 0x22dc]
//   Label: LAB_004b9e6c
//   XREF to: Stack[-0x5c] (READ)
// 004b9e73: LEA EDI,[ESP + 0x1da0]
//   XREF to: Stack[-0x598] (DATA)
// 004b9e7a: TEST EDX,EDX
// 004b9e7c: JLE 0x004b9e96
//   XREF to: 004b9e96 (CONDITIONAL_JUMP)
// 004b9e7e: PUSH EDX
// 004b9e7f: PUSH 0x628ab1
//   XREF to: 00628ab1 (DATA)
// 004b9e84: PUSH EDI
// 004b9e85: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9e8a: LEA EDI,[ESP + 0x1dac]
//   XREF to: Stack[-0x598] (DATA)
// 004b9e91: ADD ESP,0xc
// 004b9e94: ADD EDI,EAX
// 004b9e96: MOV EBX,dword ptr [ESP + 0x22e4]
//   Label: LAB_004b9e96
//   XREF to: Stack[-0x54] (READ)
// 004b9e9d: TEST EBX,EBX
// 004b9e9f: JLE 0x004b9eb2
//   XREF to: 004b9eb2 (CONDITIONAL_JUMP)
// 004b9ea1: PUSH EBX
// 004b9ea2: PUSH 0x628ac1
//   XREF to: 00628ac1 (DATA)
// 004b9ea7: PUSH EDI
// 004b9ea8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9ead: ADD ESP,0xc
// 004b9eb0: ADD EDI,EAX
// 004b9eb2: MOV EBP,dword ptr [ESP + 0x22e0]
//   Label: LAB_004b9eb2
//   XREF to: Stack[-0x58] (READ)
// 004b9eb9: TEST EBP,EBP
// 004b9ebb: JLE 0x004b9ece
//   XREF to: 004b9ece (CONDITIONAL_JUMP)
// 004b9ebd: PUSH EBP
// 004b9ebe: PUSH 0x628ad4
//   XREF to: 00628ad4 (DATA)
// 004b9ec3: PUSH EDI
// 004b9ec4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9ec9: ADD ESP,0xc
// 004b9ecc: ADD EDI,EAX
// 004b9ece: MOV EDX,dword ptr [ESP + 0x22e8]
//   Label: LAB_004b9ece
//   XREF to: Stack[-0x50] (READ)
// 004b9ed5: TEST EDX,EDX
// 004b9ed7: JLE 0x004b9eea
//   XREF to: 004b9eea (CONDITIONAL_JUMP)
// 004b9ed9: PUSH EDX
// 004b9eda: PUSH 0x628ae5
//   XREF to: 00628ae5 (DATA)
// 004b9edf: PUSH EDI
// 004b9ee0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9ee5: ADD ESP,0xc
// 004b9ee8: ADD EDI,EAX
// 004b9eea: MOV EBX,dword ptr [ESP + 0x22ec]
//   Label: LAB_004b9eea
//   XREF to: Stack[-0x4c] (READ)
// 004b9ef1: TEST EBX,EBX
// 004b9ef3: JLE 0x004b9f06
//   XREF to: 004b9f06 (CONDITIONAL_JUMP)
// 004b9ef5: PUSH EBX
// 004b9ef6: PUSH 0x628af9
//   XREF to: 00628af9 (DATA)
// 004b9efb: PUSH EDI
// 004b9efc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9f01: ADD ESP,0xc
// 004b9f04: ADD EDI,EAX
// 004b9f06: CMP dword ptr [ESP + 0x22e0],0x0
//   Label: LAB_004b9f06
//   XREF to: Stack[-0x58] (READ)
// 004b9f0e: JLE 0x004b9f2a
//   XREF to: 004b9f2a (CONDITIONAL_JUMP)
// 004b9f10: PUSH 0x628b10
//   Label: LAB_004b9f10
//   XREF to: 00628b10 (DATA)
// 004b9f15: PUSH EDI
// 004b9f16: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b9f1b: ADD ESP,0x8
// 004b9f1e: ADD EDI,EAX
// 004b9f20: MOV ESI,0x628b24
//   XREF to: 00628b24 (DATA)
// 004b9f25: JMP 0x004b8fed
//   XREF to: 004b8fed (UNCONDITIONAL_JUMP)
// 004b9f2a: CMP dword ptr [ESP + 0x22e8],0x0
//   Label: LAB_004b9f2a
//   XREF to: Stack[-0x50] (READ)
// 004b9f32: JG 0x004b9f10
//   XREF to: 004b9f10 (CONDITIONAL_JUMP)
// 004b9f34: MOV ESI,0x628b24
//   XREF to: 00628b24 (DATA)
// 004b9f39: JMP 0x004b8fed
//   XREF to: 004b8fed (UNCONDITIONAL_JUMP)
