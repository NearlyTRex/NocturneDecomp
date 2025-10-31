// Name: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
// Address Range: [[004b5a50, 004b6bf8]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004be054 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 (004bd930) at 004bd992 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be40a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7c00 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Remounting_all_pods_0062759a
//   TerminatedCString s_engine_fileio_cpp_006276ab
//   TerminatedCString s_engine_fileio_cpp_006276c0
//   TerminatedCString s_engine_fileio_cpp_006276d5
//   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
//   TerminatedCString s_Sorting_file_list_0062770c
//   TerminatedCString s_No_files_00627721
//   TerminatedCString s_pod_0062772c
//   TerminatedCString s_Enter_name_of_POD_to_bui_00627730
//   TerminatedCString s_s_exists_and_is_read_onl_0062774c
//   TerminatedCString s_Enter_volume_name_0062777b
//   TerminatedCString s_Upgrading_version_1_Pod__0062778d
//   TerminatedCString s_Generating_audit_records_006277c6
//   TerminatedCString s_engine_fileio_cpp_006277f4
//   TerminatedCString s_engine_fileio_cpp_00627809
//   TerminatedCString s_Out_of_memory_0062781e
//   TerminatedCString s_engine_fileio_cpp_0062782d
//   TerminatedCString s_engine_fileio_cpp_00627842
//   TerminatedCString s_Out_of_memory_00627857
//   TerminatedCString s_Checking_files_00627866
//   TerminatedCString s_Couldn_t_build_s_because_00627878
//   TerminatedCString s_engine_fileio_cpp_006278c3
//   TerminatedCString s_engine_fileio_cpp_006278d8
//   TerminatedCString s_engine_fileio_cpp_006278ed
//   TerminatedCString s_engine_fileio_cpp_00627902
//   TerminatedCString s_Hell_froze_00627917
//   TerminatedCString s_Creating_s_00627923
//   TerminatedCString s_engine_fileio_cpp_00627932
//   TerminatedCString s_wb_00627947
//   TerminatedCString s_Can_t_create_s_0062794a
//   TerminatedCString s_Building_s_0062795a
//   TerminatedCString s_engine_fileio_cpp_00627969
//   TerminatedCString s_rb_0062797e
//   TerminatedCString s_Can_t_open_s_00627981
//   TerminatedCString s_Error_reading_s_0062798f
//   TerminatedCString s_Error_writing_s_006279a0
//   TerminatedCString s_engine_fileio_cpp_006279b1
//   TerminatedCString s_engine_fileio_cpp_006279c6
//   TerminatedCString s_engine_fileio_cpp_006279db
//   TerminatedCString s_engine_fileio_cpp_006279f0
//   TerminatedCString s_Successfully_built_s_d_f_00627a05
//   TerminatedCString s_Catalog_the_pod_00627a82
//   TerminatedCString s_View_audit_trail_00627a92
//   TerminatedCString s_Verify_CRC_00627aa3
//   TerminatedCString s_OK_00627aae
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char[32] g_WorkingDirectoryPath
//   undefined4 DAT_02d12991
//   undefined4 DAT_02d12992
//   undefined4 DAT_02d12993
//   undefined4 DAT_02d12994
//   int g_PodCreationTime
//   int g_AuditOperationType
//   char[256] g_CurrentFilename
//   undefined4 DAT_02d129b9
//   undefined4 DAT_02d129ba
//   undefined4 DAT_02d129bb
//   int g_CurrentFileTimestamp
//   int g_CurrentFileSize
//   int g_CurrentFileOffset
//   int g_CurrentFileCompressedSize
//   SVersionControlSession g_VersionControlSession
//   undefined4 DAT_02d12bd1
//   undefined4 DAT_02d12bd3
//   int g_AuditRecordCount
//   CPodAuditRecord* g_AuditRecordsArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00
//   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
          (CFileManager *this_ptr,char *pod_filename,char *volume_name)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  CPodAuditRecord *pCVar5;
  FILE *pFVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  void *unaff_EBP;
  undefined4 *puVar9;
  int unaff_ESI;
  SVersionControlSession *pSVar10;
  streambuf **str2;
  char *pcVar11;
  FILE *pFVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  CPodAuditRecord *pCVar17;
  byte bVar18;
  FILE *unaff_retaddr;
  int in_stack_00000010;
  void *in_stack_00000014;
  void *in_stack_0000001c;
  int in_stack_00000020;
  int iStack00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  int in_stack_00000034;
  FILE *in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_0000005c;
  int in_stack_00000070;
  CFileManager *in_stack_000000a4;
  CFileManager *in_stack_000000bc;
  int in_stack_ffffe7f0;
  char *in_stack_ffffe810;
  CFileManager *in_stack_ffffe814;
  uint in_stack_ffffe818;
  char *in_stack_ffffe81c;
  char *in_stack_ffffe820;
  uint in_stack_ffffe880;
  uint in_stack_ffffe884;
  uint in_stack_ffffe888;
  uint in_stack_ffffe88c;
  uint in_stack_ffffe890;
  uint in_stack_ffffe894;
  CPodDirectoryEntry *pCStack_1404;
  CPodDirectoryEntry *pCStack_1400;
  CPodDirectoryEntry *pCStack_13fc;
  uint uStack_13f4;
  CPodDirectoryEntry *pCStack_13d8;
  undefined1 auStack_13d0 [12];
  undefined1 auStack_13c4 [1024];
  undefined1 auStack_fc4 [20];
  undefined1 auStack_fb0 [8];
  undefined1 auStack_fa8 [813];
  char acStack_c7b [511];
  int iStack_a7c;
  undefined4 uStack_a74;
  char acStack_a58 [4];
  char acStack_a54 [72];
  char acStack_a0c [24];
  char acStack_9f4 [368];
  int iStack_884;
  undefined4 local_880 [10];
  char acStack_858 [308];
  undefined4 auStack_724 [2];
  int aiStack_71c [11];
  char acStack_6f0 [260];
  undefined4 auStack_5ec [2];
  int aiStack_5e4 [11];
  char acStack_5b8 [212];
  undefined4 auStack_4e4 [3];
  undefined1 auStack_4d8 [300];
  undefined4 auStack_3ac [2];
  int aiStack_3a4 [11];
  char acStack_378 [244];
  char acStack_284 [8];
  undefined1 auStack_27c [16];
  char acStack_26c [40];
  char acStack_244 [56];
  char acStack_20c [52];
  char acStack_1d8 [136];
  char acStack_150 [4];
  char acStack_14c [132];
  undefined1 local_c8 [28];
  char acStack_ac [72];
  undefined1 local_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  streambuf **local_3c;
  void *local_2c;
  int local_24;
  void *local_20;
  undefined4 *local_18;
  int local_14;
  
  bVar18 = 0;
  local_20 = (void *)0x0;
  local_18 = (undefined4 *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  crt_memory_c_memset_FUN_005fde40(local_c8,0,0x60);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Sorting file list...");
  engine_fileio_cpp_CFileManager_load_FUN_004b6c00((CFileManager *)volume_name);
  if (*(int *)(in_stack_00000010 + 4) < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,"No files!!");
  }
  else {
    if (pod_filename == (char *)0x0) {
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Enter name of .POD to build",(char *)0x0,0x62772c,
                         SUB41(acStack_284,0));
      if (CONCAT31(extraout_var,bVar2) == 0) {
        return;
      }
    }
    else {
      pcVar14 = acStack_284;
      do {
        cVar1 = *pod_filename;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pod_filename[1];
        pod_filename = pod_filename + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    uVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,acStack_284 + 4);
    if ((-1 < (int)uVar3) && ((uVar3 & 8) != 0)) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s exists and is read only.  Cannot build POD.",auStack_27c);
      return;
    }
    if (volume_name == (char *)0x0) {
      iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter volume name",acStack_ac,0x50,0);
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      pcVar14 = acStack_ac;
      do {
        cVar1 = *volume_name;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = volume_name[1];
        volume_name = volume_name + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    iVar4 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
    if (iVar4 != 0) {
      pSVar10 = &g_VersionControlSession;
      pcVar14 = g_WorkingDirectoryPath;
      do {
        cVar1 = pSVar10->primary_username[0];
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar10->primary_username[1];
        pSVar10 = (SVersionControlSession *)(pSVar10->primary_username + 2);
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      crt_time_c_time_with_rounding_FUN_006001f0(&g_PodCreationTime);
      engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffe7e8);
      iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                        ((CPodFile *)&stack0xffffe7ec,acStack_26c);
      if (iVar4 != 0) {
        iVar4 = 0;
        local_44 = uStack_13f4;
        if (0 < (int)uStack_13f4) {
          do {
            engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
                      ((CPodFile *)&stack0xffffe7f0,iVar4,auStack_4d8);
            g_AuditRecordCount = g_AuditRecordCount + 1;
            puVar9 = auStack_4e4;
            puVar15 = auStack_3ac;
            for (iVar8 = 0x4e; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar9;
              puVar9 = puVar9 + (uint)bVar18 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
            }
            g_AuditRecordsArray =
                 (CPodAuditRecord *)
                 shape_memdbg_cpp_debugRealloc_FUN_0050f540
                           (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                            "..\\engine\\fileio.cpp",0x7a1);
            if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
              g_CurrentFilename = "..\\engine\\fileio.cpp";
              g_CurrentLineNumber = 0x7a2;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
            }
            pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
            piVar13 = aiStack_3a4;
            pCVar17 = pCVar5;
            for (iVar8 = 0x4e; iVar8 != 0; iVar8 = iVar8 + -1) {
              pCVar17->day = *piVar13;
              piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
              pCVar17 = (CPodAuditRecord *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
            }
            crt_memory_c_memset_FUN_005fde40(pCVar5->filename_path,0,0x100);
            pcVar14 = acStack_378;
            pcVar16 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
            iVar4 = iVar4 + 1;
            do {
              cVar1 = *pcVar14;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
          } while (iVar4 < (int)local_44);
        }
        if (in_stack_ffffe7f0 < 2) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Upgrading version 1 Pod...Computing individual file CRCs");
          iVar4 = 0;
          if (0 < (int)pCStack_1404) {
            iVar8 = 0;
            do {
              uVar3 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0
                                ((CPodFile *)&stack0xffffe7ec,iVar4);
              *(uint *)((int)&pCStack_1400->checksum + iVar8) = uVar3;
              iVar4 = iVar4 + 1;
              iVar8 = iVar8 + 0x14;
            } while (iVar4 < (int)pCStack_1404);
          }
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Generating audit records for deleted files...");
        local_18 = (undefined4 *)0x0;
        if (0 < (int)pCStack_1400) {
          local_3c = &in_stack_0000002c->_link;
          unaff_EBX = 0;
          do {
            iVar4 = 0;
            str2 = local_3c;
            if (0 < in_stack_0000002c->_cnt) {
              do {
                iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                  (*(char **)((int)&pCStack_13fc->name_or_offset + unaff_EBX),
                                   (char *)str2);
                if (iVar8 == 0) break;
                iVar4 = iVar4 + 1;
                str2 = str2 + 0x20;
              } while (iVar4 < in_stack_00000030->_cnt);
            }
            if (in_stack_0000002c->_cnt <= iVar4) {
              pcVar16 = g_CurrentFilename;
              iVar4 = 0x4e;
              pcVar14 = *(char **)((int)&pCStack_13fc->name_or_offset + unaff_EBX);
              g_AuditOperationType = 1;
              do {
                cVar1 = *pcVar14;
                *pcVar16 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar16[1] = cVar1;
                pcVar16 = pcVar16 + 2;
              } while (cVar1 != '\0');
              g_CurrentFileOffset = 0;
              g_CurrentFileCompressedSize = 0;
              g_CurrentFileTimestamp = *(int *)((int)&pCStack_13fc->timestamp + unaff_EBX);
              g_CurrentFileSize = *(int *)((int)&pCStack_13fc->size + unaff_EBX);
              pcVar14 = g_WorkingDirectoryPath;
              puVar9 = local_880;
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + ((uint)bVar18 * -2 + 1) * 4;
                puVar9 = puVar9 + (uint)bVar18 * -2 + 1;
              }
              g_AuditRecordCount = g_AuditRecordCount + 1;
              g_AuditRecordsArray =
                   (CPodAuditRecord *)
                   shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                              "..\\engine\\fileio.cpp",0x7a1);
              if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                g_CurrentFilename = "..\\engine\\fileio.cpp";
                g_CurrentLineNumber = 0x7a2;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
              }
              pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
              piVar13 = &iStack_884;
              pCVar17 = pCVar5;
              for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar17->day = *piVar13;
                piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
                pCVar17 = (CPodAuditRecord *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
              }
              crt_memory_c_memset_FUN_005fde40(pCVar5->filename_path,0,0x100);
              pcVar14 = acStack_858;
              pcVar16 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
              local_24 = local_24 + 1;
              do {
                cVar1 = *pcVar14;
                *pcVar16 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar16[1] = cVar1;
                pcVar16 = pcVar16 + 2;
              } while (cVar1 != '\0');
            }
            unaff_EBX = unaff_EBX + 0x14;
            local_18 = (undefined4 *)((int)local_18 + 1);
          } while ((int)local_18 < (int)pCStack_1400);
        }
      }
      local_2c = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                           (in_stack_0000002c->_cnt,0x14,"..\\engine\\fileio.cpp",0x825);
      if (local_2c == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x826;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      local_14 = 0;
      iVar4 = 0;
      if (0 < *(int *)(in_stack_00000034 + 4)) {
        pcVar14 = (char *)(in_stack_00000034 + 8);
        do {
          uVar3 = 0xffffffff;
          pcVar16 = pcVar14;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
          } while (cVar1 != '\0');
          iVar4 = iVar4 + 1;
          pcVar14 = pcVar14 + 0x80;
          local_14 = local_14 + ~uVar3;
        } while (iVar4 < *(int *)(in_stack_00000034 + 4));
      }
      local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (local_14,"..\\engine\\fileio.cpp",0x82e);
      if (local_20 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x82f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Checking files...");
      local_24 = unaff_ESI + *(int *)(in_stack_00000040 + 4) * 0x14 + 0x60;
      volume_name = (char *)0x0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_13d0);
      this_ptr = (CFileManager *)0x0;
      if (0 < *(int *)(in_stack_00000044 + 4)) {
        pcVar14 = (char *)(in_stack_00000044 + 8);
        puVar9 = local_18;
        do {
          pcVar16 = auStack_fa8 + 0x32c;
          pcVar11 = pcVar14;
          do {
            cVar1 = *pcVar11;
            *pcVar16 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar16[1] = cVar1;
            pcVar16 = pcVar16 + 2;
          } while (cVar1 != '\0');
          iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0
                            ((SFoundFileInfo *)(auStack_fa8 + 0x32c));
          if (iVar4 == 0) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)auStack_13d0,auStack_fa8 + 0x328);
          }
          else {
            *puVar9 = volume_name;
            puVar9[2] = this_ptr;
            puVar9[1] = iStack_a7c;
            puVar9[3] = uStack_a74;
            pcVar11 = (char *)((int)local_18 + (int)volume_name);
            pcVar16 = pcVar14;
            do {
              cVar1 = *pcVar16;
              *pcVar11 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pcVar11[1] = cVar1;
              pcVar11 = pcVar11 + 2;
            } while (cVar1 != '\0');
            this_ptr = (CFileManager *)((int)(this_ptr->file_entries + -1) + 0x78 + iStack_a7c);
            uVar3 = 0xffffffff;
            pcVar16 = pcVar14;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + (uint)bVar18 * -2 + 1;
            } while (cVar1 != '\0');
            volume_name = volume_name + ~uVar3;
          }
          pcVar14 = pcVar14 + 0x80;
          puVar9 = puVar9 + 5;
          this_ptr = (CFileManager *)((int)&this_ptr->file_ptr + 1);
        } while ((int)this_ptr < *(int *)(in_stack_00000044 + 4));
      }
      if (auStack_13d0._4_4_ == 0) {
        if (in_stack_00000010 != unaff_EBX) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x861;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,(char *)0x4b6256);
        pcVar14 = (char *)0x0;
        pFVar6 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_244,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x866
                           );
        if (pFVar6 != (FILE *)0x0) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_a58,"Building %s...");
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_a54);
          iStack00000024 = 0;
          if (0 < *(int *)(in_stack_0000005c + 4)) {
            unaff_EBP = (void *)(in_stack_00000020 - unaff_ESI);
            in_stack_00000030 = unaff_retaddr;
            do {
              in_stack_ffffe810 = (char *)0x4b6500;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)((int)in_stack_00000030->_link - unaff_ESI),
                         (float)(int)unaff_EBP);
              crt_stdio_c_fseek_FUN_005ffacc
                        (in_stack_0000003c,*(long *)(in_stack_0000005c + 0x10),0);
              in_stack_ffffe820 = "..\\engine\\fileio.cpp";
              in_stack_ffffe81c = "rb";
              in_stack_ffffe818 = 0;
              in_stack_ffffe814 = this_ptr;
              pFVar6 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                 ((char *)this_ptr,(char *)0x0,"rb",
                                  "..\\engine\\fileio.cpp",0x876);
              if (pFVar6 == (FILE *)0x0) {
                pcVar14 = "Can't open %s";
                goto LAB_004b629d;
              }
              *(undefined4 *)((int)in_stack_0000001c + 0x10) = 0xffffffff;
              for (iVar4 = 0;
                  in_stack_00000028 = (FILE *)(in_stack_00000020 + (int)in_stack_0000002c * 0x80),
                  iVar4 < *(int *)((int)in_stack_0000001c + 4); iVar4 = iVar4 + 1) {
                pcVar14 = (char *)0x4b6592;
                iVar8 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
                if (iVar8 == -1) goto LAB_004b629d;
                uVar3 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0
                                  (*(uint *)((int)in_stack_0000001c + 0x10),(uchar)iVar8);
                *(uint *)((int)in_stack_0000001c + 0x10) = uVar3;
                in_stack_ffffe810 = (char *)pFVar6;
                iVar7 = crt_stdio_c_fputc_FUN_006007a0(iVar8,pFVar6);
                if (iVar7 != iVar8) {
                  pcVar14 = "Error writing %s";
                  goto LAB_004b629d;
                }
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\engine\\fileio.cpp",0x88e);
              pcVar14 = g_CurrentFilename;
              pFVar12 = pFVar6;
              do {
                cVar1 = *(char *)&pFVar12->_ptr;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = *(char *)((int)&pFVar12->_ptr + 1);
                pFVar12 = (FILE *)((int)&pFVar12->_ptr + 2);
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              g_CurrentFileOffset = *(int *)((int)in_stack_0000001c + 0xc);
              g_CurrentFileCompressedSize = *(int *)((int)in_stack_0000001c + 4);
              iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140
                                ((CPodFile *)&stack0xffffe810,(char *)pFVar6);
              iVar8 = g_AuditRecordCount + 1;
              if (iVar4 < 0) {
                g_AuditOperationType = 0;
                g_CurrentFileTimestamp = 0;
                g_CurrentFileSize = 0;
                pcVar14 = g_WorkingDirectoryPath;
                puVar9 = auStack_5ec;
                for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar9 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + ((uint)bVar18 * -2 + 1) * 4;
                  puVar9 = puVar9 + (uint)bVar18 * -2 + 1;
                }
                g_AuditRecordCount = iVar8;
                g_AuditRecordsArray =
                     (CPodAuditRecord *)
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar8 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                piVar13 = aiStack_5e4;
                pCVar17 = pCVar5;
                for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar17->day = *piVar13;
                  piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
                  pCVar17 = (CPodAuditRecord *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
                }
                crt_memory_c_memset_FUN_005fde40(pCVar5->filename_path,0,0x100);
                pcVar16 = acStack_5b8;
                pcVar14 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
                do {
                  cVar1 = *pcVar16;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar16[1];
                  pcVar16 = pcVar16 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
              }
              else if (*(uint *)((int)in_stack_0000001c + 0x10) != pCStack_13d8[iVar4].checksum) {
                g_CurrentFileTimestamp = pCStack_13d8[iVar4].timestamp;
                g_CurrentFileSize = pCStack_13d8[iVar4].size;
                g_AuditOperationType = 2;
                pcVar14 = g_WorkingDirectoryPath;
                puVar9 = auStack_724;
                for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar9 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + ((uint)bVar18 * -2 + 1) * 4;
                  puVar9 = puVar9 + (uint)bVar18 * -2 + 1;
                }
                g_AuditRecordCount = iVar8;
                g_AuditRecordsArray =
                     (CPodAuditRecord *)
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar8 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                piVar13 = aiStack_71c;
                pCVar17 = pCVar5;
                for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar17->day = *piVar13;
                  piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
                  pCVar17 = (CPodAuditRecord *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
                }
                crt_memory_c_memset_FUN_005fde40(pCVar5->filename_path,0,0x100);
                pcVar16 = acStack_6f0;
                pcVar14 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
                do {
                  cVar1 = *pcVar16;
                  *pcVar14 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar16[1];
                  pcVar16 = pcVar16 + 2;
                  pcVar14[1] = cVar1;
                  pcVar14 = pcVar14 + 2;
                } while (cVar1 != '\0');
              }
              in_stack_00000030 = (FILE *)&in_stack_00000030->_bufsize;
              iStack00000024 = iStack00000024 + 1;
              in_stack_0000002c = pFVar6;
            } while (iStack00000024 < *(int *)(in_stack_0000005c + 4));
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          crt_stdio_c_fwrite_FUN_005fdc00
                    (g_AuditRecordsArray,0x138,g_AuditRecordCount,in_stack_0000003c);
          crt_stdio_c_ftell_FUN_00601560(in_stack_0000003c);
          uStack_63 = 0x4f;
          uStack_61 = 0x32;
          local_64 = 0x50;
          uStack_62 = 0x44;
          crt_stdio_c_fseek_FUN_005ffacc(in_stack_0000003c,0,0);
          crt_stdio_c_fwrite_FUN_005fdc00(local_60,0x60,1,in_stack_0000003c);
          crt_stdio_c_fwrite_FUN_005fdc00
                    (in_stack_00000014,0x14,*(SIZE_T *)(in_stack_00000070 + 4),in_stack_0000003c);
          crt_stdio_c_fwrite_FUN_005fdc00
                    (in_stack_0000001c,1,(SIZE_T)in_stack_0000002c,in_stack_0000003c);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    (in_stack_0000003c,"..\\engine\\fileio.cpp",0x8c3);
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (in_stack_00000014,"..\\engine\\fileio.cpp",0x8c8);
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (in_stack_00000028,"..\\engine\\fileio.cpp",0x8ca);
          g_AuditRecordCount = 0;
          if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460
                      (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
            g_AuditRecordsArray = (CPodAuditRecord *)0x0;
          }
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,acStack_20c);
          if (g_CDemonPodPtr != (CDemonPod *)0x0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Remounting all pods...");
            engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
            (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
          }
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_a0c,"Successfully built %s\n\n%d files totaling %d bytes\n\n%d files added\n%d files removed\n%d files changed\n\nTotal pod size %d bytes");
          do {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_fc4);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(auStack_fc4 + 4),"Catalog the pod");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(auStack_fc4 + 8),"View audit trail");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(auStack_fc4 + 0xc),"Verify CRC");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(auStack_fc4 + 0x10),"OK");
            iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              ((CPickList *)auStack_fb0,acStack_9f4,3,0);
            if (iVar4 == 0) {
              engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460
                        (in_stack_000000a4,acStack_1d8);
            }
            else if (iVar4 == 1) {
              engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
                        (in_stack_000000a4,acStack_1d8);
            }
            else {
              if (iVar4 != 2) {
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          ((CPickList *)(auStack_fb0 + 4),0,in_stack_ffffe880,in_stack_ffffe884,
                           in_stack_ffffe888,in_stack_ffffe88c,in_stack_ffffe890);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          ((CPickList *)(auStack_13c4 + 0x74),0,in_stack_ffffe884,in_stack_ffffe888,
                           in_stack_ffffe88c,in_stack_ffffe890,in_stack_ffffe894);
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffe888);
                return;
              }
              engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90
                        (in_stack_000000bc,acStack_1d8);
            }
            in_stack_ffffe880 = 0;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)auStack_fa8,0,in_stack_ffffe884,in_stack_ffffe888,
                       in_stack_ffffe88c,in_stack_ffffe890,in_stack_ffffe894);
          } while( true );
        }
        in_stack_ffffe814 = (CFileManager *)(acStack_244 + 4);
        in_stack_ffffe810 = "Can't create %s";
        in_stack_00000030 = (FILE *)0x0;
LAB_004b629d:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar14);
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_150,"Couldn't build %s because the following files don't exist on the hard disk");
        shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                  ((CPickList *)(auStack_13d0 + 8),acStack_14c,-1,0);
      }
      g_AuditRecordCount = 0;
      if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
        g_AuditRecordsArray = (CPodAuditRecord *)0x0;
      }
      if (in_stack_00000028 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  (in_stack_00000028,"..\\engine\\fileio.cpp",0x85b);
      }
      if (in_stack_00000030 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  (in_stack_00000030,"..\\engine\\fileio.cpp",0x85c);
      }
      if (unaff_EBP != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EBP,"..\\engine\\fileio.cpp",0x85d);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_13c4,0,(uint)in_stack_ffffe810,(uint)in_stack_ffffe814,
                 in_stack_ffffe818,(uint)in_stack_ffffe81c,(uint)in_stack_ffffe820);
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffe814);
      return;
    }
  }
  return;
}


// Assembly code:
// 004b5a50: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// 004b5a51: PUSH ESI
// 004b5a52: PUSH EDI
// 004b5a53: PUSH EBP
// 004b5a54: SUB ESP,0x1828
// 004b5a5a: MOV ESI,dword ptr [ESP + 0x1840]
//   XREF to: Stack[0x8] (READ)
// 004b5a61: MOV EBX,dword ptr [ESP + 0x1844]
//   XREF to: Stack[0xc] (READ)
// 004b5a68: PUSH 0x60
// 004b5a6a: XOR EDX,EDX
// 004b5a6c: LEA EAX,[ESP + 0x1774]
//   XREF to: Stack[-0xc8] (DATA)
// 004b5a73: MOV dword ptr [ESP + 0x181c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004b5a7a: PUSH EDX
// 004b5a7b: MOV dword ptr [ESP + 0x1828],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004b5a82: MOV dword ptr [ESP + 0x17f0],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 004b5a89: PUSH EAX
// 004b5a8a: MOV dword ptr [ESP + 0x17f8],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004b5a91: MOV dword ptr [ESP + 0x17fc],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004b5a98: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b5a9d: ADD ESP,0xc
// 004b5aa0: PUSH 0x62770c
//   XREF to: 0062770c (DATA)
// 004b5aa5: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b5aab: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b5aac: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b5ab1: ADD ESP,0x8
// 004b5ab4: MOV ECX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b5abb: PUSH ECX
// 004b5abc: CALL engine_fileio.cpp_CFileManager_load_FUN_004b6c00
//   XREF to: 004b6c00 (UNCONDITIONAL_CALL)
// 004b5ac1: ADD ESP,0x4
// 004b5ac4: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b5acb: CMP dword ptr [EAX + 0x4],0x1
// 004b5acf: JL 0x004b5b07
//   XREF to: 004b5b07 (CONDITIONAL_JUMP)
// 004b5ad1: TEST ESI,ESI
// 004b5ad3: JNZ 0x004b5b1c
//   XREF to: 004b5b1c (CONDITIONAL_JUMP)
// 004b5ad5: PUSH ESI
// 004b5ad6: LEA EAX,[ESP + 0x15ac]
//   XREF to: Stack[-0x290] (DATA)
// 004b5add: PUSH EAX
// 004b5ade: PUSH 0x62772c
//   XREF to: 0062772c (DATA)
// 004b5ae3: PUSH ESI
// 004b5ae4: PUSH 0x627730
//   XREF to: 00627730 (DATA)
// 004b5ae9: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b5aef: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b5af0: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 004b5af5: ADD ESP,0x18
// 004b5af8: TEST EAX,EAX
// 004b5afa: JNZ 0x004b5b3d
//   XREF to: 004b5b3d (CONDITIONAL_JUMP)
// 004b5afc: ADD ESP,0x1828
//   Label: LAB_004b5afc
// 004b5b02: POP EBP
// 004b5b03: POP EDI
// 004b5b04: POP ESI
// 004b5b05: POP EBX
// 004b5b06: RET
// 004b5b07: PUSH 0x627721
//   Label: LAB_004b5b07
//   XREF to: 00627721 (DATA)
// 004b5b0c: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 004b5b11: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b5b12: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b5b17: ADD ESP,0x8
// 004b5b1a: JMP 0x004b5afc
//   XREF to: 004b5afc (UNCONDITIONAL_JUMP)
// 004b5b1c: LEA EDI,[ESP + 0x15a8]
//   Label: LAB_004b5b1c
//   XREF to: Stack[-0x290] (DATA)
// 004b5b23: PUSH EDI
// 004b5b24: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5b24
// 004b5b26: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x290] (DATA)
// 004b5b28: CMP AL,0x0
// 004b5b2a: JZ 0x004b5b3c
//   XREF to: 004b5b3c (CONDITIONAL_JUMP)
// 004b5b2c: MOV AL,byte ptr [ESI + 0x1]
// 004b5b2f: ADD ESI,0x2
// 004b5b32: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x28f] (WRITE)
// 004b5b35: ADD EDI,0x2
// 004b5b38: CMP AL,0x0
// 004b5b3a: JNZ 0x004b5b24
//   XREF to: 004b5b24 (CONDITIONAL_JUMP)
// 004b5b3c: POP EDI
//   Label: LAB_004b5b3c
// 004b5b3d: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b5b3d
//   XREF to: Stack[-0x290] (DATA)
// 004b5b44: PUSH EAX
// 004b5b45: PUSH 0x0
// 004b5b47: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b5b4c: ADD ESP,0x8
// 004b5b4f: TEST EAX,EAX
// 004b5b51: JL 0x004b5b5b
//   XREF to: 004b5b5b (CONDITIONAL_JUMP)
// 004b5b53: TEST AL,0x8
// 004b5b55: JNZ 0x004b6355
//   XREF to: 004b6355 (CONDITIONAL_JUMP)
// 004b5b5b: TEST EBX,EBX
//   Label: LAB_004b5b5b
// 004b5b5d: JZ 0x004b637c
//   XREF to: 004b637c (CONDITIONAL_JUMP)
// 004b5b63: LEA EDI,[ESP + 0x1778]
//   XREF to: Stack[-0xc0] (DATA)
// 004b5b6a: MOV ESI,EBX
// 004b5b6c: PUSH EDI
// 004b5b6d: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5b6d
// 004b5b6f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xc0] (DATA)
// 004b5b71: CMP AL,0x0
// 004b5b73: JZ 0x004b5b85
//   XREF to: 004b5b85 (CONDITIONAL_JUMP)
// 004b5b75: MOV AL,byte ptr [ESI + 0x1]
// 004b5b78: ADD ESI,0x2
// 004b5b7b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xbf] (WRITE)
// 004b5b7e: ADD EDI,0x2
// 004b5b81: CMP AL,0x0
// 004b5b83: JNZ 0x004b5b6d
//   XREF to: 004b5b6d (CONDITIONAL_JUMP)
// 004b5b85: POP EDI
//   Label: LAB_004b5b85
// 004b5b86: XOR EDX,EDX
//   Label: LAB_004b5b86
// 004b5b88: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5b8e: MOV dword ptr [0x02d12d30],EDX
//   XREF to: 02d12d30 (WRITE)
// 004b5b94: TEST ECX,ECX
// 004b5b96: JZ 0x004b5bb3
//   XREF to: 004b5bb3 (CONDITIONAL_JUMP)
// 004b5b98: PUSH 0x79a
// 004b5b9d: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004b5ba2: PUSH ECX
// 004b5ba3: XOR ESI,ESI
// 004b5ba5: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b5baa: ADD ESP,0xc
// 004b5bad: MOV dword ptr [0x02d12d34],ESI
//   XREF to: 02d12d34 (WRITE)
// 004b5bb3: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   Label: LAB_004b5bb3
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004b5bb8: TEST EAX,EAX
// 004b5bba: JZ 0x004b5afc
//   XREF to: 004b5afc (CONDITIONAL_JUMP)
// 004b5bc0: MOV ESI,0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b5bc5: MOV EDI,0x2d12990
//   XREF to: 02d12990 (DATA)
// 004b5bca: PUSH EDI
//   XREF to: 02d12990 (DATA)
// 004b5bcb: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5bcb
//   XREF to: 02d12bd0 (READ)
//   XREF to: 02d12bd2 (READ)
// 004b5bcd: MOV byte ptr [EDI],AL
//   XREF to: 02d12990 (WRITE)
//   XREF to: 02d12992 (WRITE)
// 004b5bcf: CMP AL,0x0
// 004b5bd1: JZ 0x004b5be3
//   XREF to: 004b5be3 (CONDITIONAL_JUMP)
// 004b5bd3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d12bd1 (READ)
//   XREF to: 02d12bd3 (READ)
// 004b5bd6: ADD ESI,0x2
// 004b5bd9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12991 (WRITE)
//   XREF to: 02d12993 (WRITE)
// 004b5bdc: ADD EDI,0x2
// 004b5bdf: CMP AL,0x0
// 004b5be1: JNZ 0x004b5bcb
//   XREF to: 004b5bcb (CONDITIONAL_JUMP)
// 004b5be3: POP EDI
//   Label: LAB_004b5be3
// 004b5be4: PUSH 0x2d129b0
//   XREF to: 02d129b0 (DATA)
// 004b5be9: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 004b5bee: ADD ESP,0x4
// 004b5bf1: MOV EAX,ESP
// 004b5bf3: PUSH EAX
// 004b5bf4: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b5bf9: ADD ESP,0x4
// 004b5bfc: LEA EAX,[ESP + 0x15a8]
//   XREF to: Stack[-0x290] (DATA)
// 004b5c03: PUSH EAX
// 004b5c04: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b5c08: PUSH EAX
// 004b5c09: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b5c0e: ADD ESP,0x8
// 004b5c11: TEST EAX,EAX
// 004b5c13: JZ 0x004b5f97
//   XREF to: 004b5f97 (CONDITIONAL_JUMP)
// 004b5c19: MOV EAX,dword ptr [ESP + 0x41c]
//   XREF to: Stack[-0x141c] (READ)
// 004b5c20: XOR EBX,EBX
// 004b5c22: MOV dword ptr [ESP + 0x17cc],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004b5c29: TEST EAX,EAX
// 004b5c2b: JLE 0x004b5d30
//   XREF to: 004b5d30 (CONDITIONAL_JUMP)
// 004b5c31: PUSH EBX
//   Label: LAB_004b5c31
// 004b5c32: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b5c36: PUSH EAX
// 004b5c37: LEA ESI,[ESP + 0x1340]
//   XREF to: Stack[-0x500] (DATA)
// 004b5c3e: CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   XREF to: 00550590 (UNCONDITIONAL_CALL)
// 004b5c43: MOV EBP,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b5c49: INC EBP
// 004b5c4a: MOV dword ptr [0x02d12d30],EBP
//   XREF to: 02d12d30 (WRITE)
// 004b5c50: IMUL EAX,EBP,0x138
// 004b5c56: ADD ESP,0x8
// 004b5c59: LEA EDI,[ESP + 0x1470]
//   XREF to: Stack[-0x3c8] (DATA)
// 004b5c60: PUSH 0x7a1
// 004b5c65: MOV ECX,0x4e
// 004b5c6a: LEA ESI,[ESP + 0x133c]
//   XREF to: Stack[-0x500] (DATA)
// 004b5c71: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004b5c76: MOVSD.REP ES:EDI,ESI
// 004b5c78: PUSH EAX
// 004b5c79: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5c7f: PUSH ECX
// 004b5c80: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b5c85: ADD ESP,0x10
// 004b5c88: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004b5c8d: TEST EAX,EAX
// 004b5c8f: JNZ 0x004b5cb4
//   XREF to: 004b5cb4 (CONDITIONAL_JUMP)
// 004b5c91: MOV ESI,0x6276d5
//   XREF to: 006276d5 (DATA)
// 004b5c96: MOV EDI,0x7a2
// 004b5c9b: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004b5ca0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004b5ca6: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b5cac: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b5cb1: ADD ESP,0x4
// 004b5cb4: MOV EAX,[0x02d12d30]
//   Label: LAB_004b5cb4
//   XREF to: 02d12d30 (READ)
// 004b5cb9: DEC EAX
// 004b5cba: IMUL EDX,EAX,0x138
// 004b5cc0: PUSH 0x100
// 004b5cc5: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5cca: MOV ECX,0x4e
// 004b5ccf: ADD EAX,EDX
// 004b5cd1: PUSH 0x0
// 004b5cd3: MOV EDI,EAX
// 004b5cd5: ADD EAX,0x28
// 004b5cd8: LEA ESI,[ESP + 0x1478]
//   XREF to: Stack[-0x3c8] (DATA)
// 004b5cdf: PUSH EAX
// 004b5ce0: MOVSD.REP ES:EDI,ESI
// 004b5ce2: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b5ce7: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b5cec: DEC EAX
// 004b5ced: IMUL EAX,EAX,0x138
// 004b5cf3: MOV EDI,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5cf9: LEA ESI,[ESP + 0x14a4]
//   XREF to: Stack[-0x3a0] (DATA)
// 004b5d00: ADD EDI,EAX
// 004b5d02: ADD ESP,0xc
// 004b5d05: ADD EDI,0x28
// 004b5d08: INC EBX
// 004b5d09: PUSH EDI
// 004b5d0a: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5d0a
//   XREF to: Stack[-0x3a0] (DATA)
// 004b5d0c: MOV byte ptr [EDI],AL
// 004b5d0e: CMP AL,0x0
// 004b5d10: JZ 0x004b5d22
//   XREF to: 004b5d22 (CONDITIONAL_JUMP)
// 004b5d12: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x39f] (READ)
// 004b5d15: ADD ESI,0x2
// 004b5d18: MOV byte ptr [EDI + 0x1],AL
// 004b5d1b: ADD EDI,0x2
// 004b5d1e: CMP AL,0x0
// 004b5d20: JNZ 0x004b5d0a
//   XREF to: 004b5d0a (CONDITIONAL_JUMP)
// 004b5d22: POP EDI
//   Label: LAB_004b5d22
// 004b5d23: CMP EBX,dword ptr [ESP + 0x17cc]
//   XREF to: Stack[-0x6c] (READ)
// 004b5d2a: JL 0x004b5c31
//   XREF to: 004b5c31 (CONDITIONAL_JUMP)
// 004b5d30: CMP dword ptr [ESP],0x2
//   Label: LAB_004b5d30
//   XREF to: Stack[-0x1838] (DATA)
// 004b5d34: JGE 0x004b5d90
//   XREF to: 004b5d90 (CONDITIONAL_JUMP)
// 004b5d36: PUSH 0x62778d
//   XREF to: 0062778d (DATA)
// 004b5d3b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b5d41: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b5d42: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b5d47: ADD ESP,0x8
// 004b5d4a: MOV EDI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x1428] (READ)
// 004b5d51: XOR ESI,ESI
// 004b5d53: TEST EDI,EDI
// 004b5d55: JLE 0x004b5d90
//   XREF to: 004b5d90 (CONDITIONAL_JUMP)
// 004b5d57: XOR EBX,EBX
// 004b5d59: PUSH ESI
//   Label: LAB_004b5d59
// 004b5d5a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b5d5e: PUSH EAX
// 004b5d5f: CALL engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
//   XREF to: 005507f0 (UNCONDITIONAL_CALL)
// 004b5d64: ADD ESP,0x8
// 004b5d67: MOV EDX,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x1424] (READ)
// 004b5d6e: MOV dword ptr [EDX + EBX*0x1 + 0x10],EAX
// 004b5d72: INC ESI
// 004b5d73: MOV EBP,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x1428] (READ)
// 004b5d7a: ADD EBX,0x14
// 004b5d7d: CMP ESI,EBP
// 004b5d7f: JL 0x004b5d59
//   XREF to: 004b5d59 (CONDITIONAL_JUMP)
// 004b5d81: LEA EAX,[EAX]
// 004b5d87: LEA EDX,[EDX]
// 004b5d8d: LEA EAX,[EAX]
// 004b5d90: PUSH 0x6277c6
//   Label: LAB_004b5d90
//   XREF to: 006277c6 (DATA)
// 004b5d95: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b5d9a: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b5d9b: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b5da0: ADD ESP,0x8
// 004b5da3: XOR EDX,EDX
// 004b5da5: MOV ECX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x1428] (READ)
// 004b5dac: MOV dword ptr [ESP + 0x17f8],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004b5db3: TEST ECX,ECX
// 004b5db5: JLE 0x004b5f97
//   XREF to: 004b5f97 (CONDITIONAL_JUMP)
// 004b5dbb: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b5dc2: ADD EAX,0x8
// 004b5dc5: MOV dword ptr [ESP + 0x180c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b5dcc: MOV dword ptr [ESP + 0x17d4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004b5dd3: MOV EAX,dword ptr [ESP + 0x183c]
//   Label: LAB_004b5dd3
//   XREF to: Stack[0x4] (READ)
// 004b5dda: MOV EDX,dword ptr [EAX + 0x4]
// 004b5ddd: XOR EBX,EBX
// 004b5ddf: TEST EDX,EDX
// 004b5de1: JLE 0x004b5e0d
//   XREF to: 004b5e0d (CONDITIONAL_JUMP)
// 004b5de3: MOV ESI,dword ptr [ESP + 0x17d4]
//   XREF to: Stack[-0x64] (READ)
// 004b5dea: MOV EBP,dword ptr [ESP + 0x180c]
//   XREF to: Stack[-0x2c] (READ)
// 004b5df1: MOV EAX,dword ptr [ESP + 0x414]
//   Label: LAB_004b5df1
//   XREF to: Stack[-0x1424] (READ)
// 004b5df8: PUSH ESI
// 004b5df9: MOV EDI,dword ptr [EAX + EBP*0x1]
// 004b5dfc: PUSH EDI
// 004b5dfd: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b5e02: ADD ESP,0x8
// 004b5e05: TEST EAX,EAX
// 004b5e07: JNZ 0x004b63ad
//   XREF to: 004b63ad (CONDITIONAL_JUMP)
// 004b5e0d: MOV EAX,dword ptr [ESP + 0x183c]
//   Label: LAB_004b5e0d
//   XREF to: Stack[0x4] (READ)
// 004b5e14: CMP EBX,dword ptr [EAX + 0x4]
// 004b5e17: JL 0x004b5f68
//   XREF to: 004b5f68 (CONDITIONAL_JUMP)
// 004b5e1d: MOV EAX,0x1
// 004b5e22: MOV ESI,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x1424] (READ)
// 004b5e29: MOV EDX,dword ptr [ESP + 0x180c]
//   XREF to: Stack[-0x2c] (READ)
// 004b5e30: MOV EDI,0x2d129b8
//   XREF to: 02d129b8 (DATA)
// 004b5e35: ADD ESI,EDX
// 004b5e37: MOV ECX,0x4e
// 004b5e3c: XOR EBX,EBX
// 004b5e3e: MOV ESI,dword ptr [ESI]
// 004b5e40: MOV [0x02d129b4],EAX
//   XREF to: 02d129b4 (WRITE)
// 004b5e45: PUSH EDI
//   XREF to: 02d129b8 (DATA)
// 004b5e46: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5e46
// 004b5e48: MOV byte ptr [EDI],AL
//   XREF to: 02d129b8 (WRITE)
//   XREF to: 02d129ba (WRITE)
// 004b5e4a: CMP AL,0x0
// 004b5e4c: JZ 0x004b5e5e
//   XREF to: 004b5e5e (CONDITIONAL_JUMP)
// 004b5e4e: MOV AL,byte ptr [ESI + 0x1]
// 004b5e51: ADD ESI,0x2
// 004b5e54: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d129b9 (WRITE)
//   XREF to: 02d129bb (WRITE)
// 004b5e57: ADD EDI,0x2
// 004b5e5a: CMP AL,0x0
// 004b5e5c: JNZ 0x004b5e46
//   XREF to: 004b5e46 (CONDITIONAL_JUMP)
// 004b5e5e: POP EDI
//   Label: LAB_004b5e5e
// 004b5e5f: MOV EAX,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x1424] (READ)
// 004b5e66: LEA EDI,[ESP + 0xf90]
//   XREF to: Stack[-0x8a8] (DATA)
// 004b5e6d: MOV ESI,0x2d12990
//   XREF to: 02d12990 (DATA)
// 004b5e72: ADD EAX,EDX
// 004b5e74: MOV dword ptr [0x02d12ac0],EBX
//   XREF to: 02d12ac0 (WRITE)
// 004b5e7a: MOV dword ptr [0x02d12ac4],EBX
//   XREF to: 02d12ac4 (WRITE)
// 004b5e80: MOV EDX,dword ptr [EAX + 0xc]
// 004b5e83: MOV EAX,dword ptr [EAX + 0x4]
// 004b5e86: MOV dword ptr [0x02d12ab8],EDX
//   XREF to: 02d12ab8 (WRITE)
// 004b5e8c: MOV [0x02d12abc],EAX
//   XREF to: 02d12abc (WRITE)
// 004b5e91: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d12990 (READ)
//   XREF to: 02d12994 (READ)
// 004b5e93: MOV EDI,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b5e99: INC EDI
// 004b5e9a: MOV dword ptr [0x02d12d30],EDI
//   XREF to: 02d12d30 (WRITE)
// 004b5ea0: IMUL EAX,EDI,0x138
// 004b5ea6: PUSH 0x7a1
// 004b5eab: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004b5eb0: PUSH EAX
// 004b5eb1: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5eb6: PUSH EAX
// 004b5eb7: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b5ebc: ADD ESP,0x10
// 004b5ebf: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004b5ec4: TEST EAX,EAX
// 004b5ec6: JNZ 0x004b5eeb
//   XREF to: 004b5eeb (CONDITIONAL_JUMP)
// 004b5ec8: MOV EDX,0x6276d5
//   XREF to: 006276d5 (PARAM)
// 004b5ecd: MOV ECX,0x7a2
// 004b5ed2: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004b5ed7: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b5edd: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b5ee3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b5ee8: ADD ESP,0x4
// 004b5eeb: MOV EAX,[0x02d12d30]
//   Label: LAB_004b5eeb
//   XREF to: 02d12d30 (READ)
// 004b5ef0: DEC EAX
// 004b5ef1: IMUL EDX,EAX,0x138
// 004b5ef7: PUSH 0x100
// 004b5efc: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5f01: MOV ECX,0x4e
// 004b5f06: ADD EAX,EDX
// 004b5f08: PUSH 0x0
// 004b5f0a: MOV EDI,EAX
// 004b5f0c: ADD EAX,0x28
// 004b5f0f: LEA ESI,[ESP + 0xf98]
//   XREF to: Stack[-0x8a8] (DATA)
// 004b5f16: PUSH EAX
// 004b5f17: MOVSD.REP ES:EDI,ESI
// 004b5f19: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b5f1e: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b5f23: DEC EAX
// 004b5f24: IMUL EAX,EAX,0x138
// 004b5f2a: LEA ESI,[ESP + 0xfc4]
//   XREF to: Stack[-0x880] (DATA)
// 004b5f31: ADD ESP,0xc
// 004b5f34: MOV EDI,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5f3a: MOV EBX,dword ptr [ESP + 0x17ec]
//   XREF to: Stack[-0x4c] (READ)
// 004b5f41: ADD EDI,EAX
// 004b5f43: INC EBX
// 004b5f44: ADD EDI,0x28
// 004b5f47: MOV dword ptr [ESP + 0x17ec],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 004b5f4e: PUSH EDI
// 004b5f4f: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5f4f
//   XREF to: Stack[-0x880] (DATA)
// 004b5f51: MOV byte ptr [EDI],AL
// 004b5f53: CMP AL,0x0
// 004b5f55: JZ 0x004b5f67
//   XREF to: 004b5f67 (CONDITIONAL_JUMP)
// 004b5f57: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x87f] (READ)
// 004b5f5a: ADD ESI,0x2
// 004b5f5d: MOV byte ptr [EDI + 0x1],AL
// 004b5f60: ADD EDI,0x2
// 004b5f63: CMP AL,0x0
// 004b5f65: JNZ 0x004b5f4f
//   XREF to: 004b5f4f (CONDITIONAL_JUMP)
// 004b5f67: POP EDI
//   Label: LAB_004b5f67
// 004b5f68: MOV EBX,dword ptr [ESP + 0x180c]
//   Label: LAB_004b5f68
//   XREF to: Stack[-0x2c] (READ)
// 004b5f6f: MOV ESI,dword ptr [ESP + 0x17f8]
//   XREF to: Stack[-0x40] (READ)
// 004b5f76: MOV EDI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x1428] (READ)
// 004b5f7d: ADD EBX,0x14
// 004b5f80: INC ESI
// 004b5f81: MOV dword ptr [ESP + 0x180c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b5f88: MOV dword ptr [ESP + 0x17f8],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 004b5f8f: CMP ESI,EDI
// 004b5f91: JL 0x004b5dd3
//   XREF to: 004b5dd3 (CONDITIONAL_JUMP)
// 004b5f97: PUSH 0x825
//   Label: LAB_004b5f97
// 004b5f9c: PUSH 0x6277f4
//   XREF to: 006277f4 (DATA)
// 004b5fa1: MOV EAX,dword ptr [ESP + 0x1844]
//   XREF to: Stack[0x4] (READ)
// 004b5fa8: PUSH 0x14
// 004b5faa: MOV ESI,dword ptr [EAX + 0x4]
// 004b5fad: PUSH ESI
// 004b5fae: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 004b5fb3: ADD ESP,0x10
// 004b5fb6: MOV dword ptr [ESP + 0x17e0],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004b5fbd: TEST EAX,EAX
// 004b5fbf: JNZ 0x004b5fe4
//   XREF to: 004b5fe4 (CONDITIONAL_JUMP)
// 004b5fc1: MOV EDI,0x627809
//   XREF to: 00627809 (DATA)
// 004b5fc6: MOV EBP,0x826
// 004b5fcb: PUSH 0x62781e
//   XREF to: 0062781e (DATA)
// 004b5fd0: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004b5fd6: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004b5fdc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b5fe1: ADD ESP,0x4
// 004b5fe4: XOR EAX,EAX
//   Label: LAB_004b5fe4
// 004b5fe6: MOV dword ptr [ESP + 0x17f4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004b5fed: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b5ff4: MOV EDX,dword ptr [EAX + 0x4]
// 004b5ff7: XOR ESI,ESI
// 004b5ff9: TEST EDX,EDX
// 004b5ffb: JLE 0x004b6040
//   XREF to: 004b6040 (CONDITIONAL_JUMP)
// 004b5ffd: LEA EBX,[EAX + 0x8]
// 004b6000: MOV EDI,EBX
//   Label: LAB_004b6000
// 004b6002: SUB ECX,ECX
// 004b6004: DEC ECX
// 004b6005: XOR EAX,EAX
// 004b6007: SCASB.REPNE ES:EDI
// 004b6009: NOT ECX
// 004b600b: DEC ECX
// 004b600c: INC ESI
// 004b600d: MOV EDI,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x44] (READ)
// 004b6014: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b601b: INC ECX
// 004b601c: ADD EBX,0x80
// 004b6022: ADD EDI,ECX
// 004b6024: MOV EBP,dword ptr [EAX + 0x4]
// 004b6027: MOV dword ptr [ESP + 0x17f4],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 004b602e: CMP ESI,EBP
// 004b6030: JL 0x004b6000
//   XREF to: 004b6000 (CONDITIONAL_JUMP)
// 004b6032: LEA EAX,[EAX]
// 004b6038: LEA EDX,[EDX]
// 004b603e: MOV EAX,EAX
// 004b6040: PUSH 0x82e
//   Label: LAB_004b6040
// 004b6045: PUSH 0x62782d
//   XREF to: 0062782d (DATA)
// 004b604a: MOV EAX,dword ptr [ESP + 0x17fc]
//   XREF to: Stack[-0x44] (READ)
// 004b6051: PUSH EAX
// 004b6052: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004b6057: ADD ESP,0xc
// 004b605a: MOV dword ptr [ESP + 0x17e4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004b6061: TEST EAX,EAX
// 004b6063: JNZ 0x004b6088
//   XREF to: 004b6088 (CONDITIONAL_JUMP)
// 004b6065: MOV EDX,0x627842
//   XREF to: 00627842 (PARAM)
// 004b606a: MOV ECX,0x82f
// 004b606f: PUSH 0x627857
//   XREF to: 00627857 (DATA)
// 004b6074: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b607a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b6080: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b6085: ADD ESP,0x4
// 004b6088: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b6088
//   XREF to: Stack[-0x290] (DATA)
// 004b608f: PUSH EAX
// 004b6090: PUSH 0x627866
//   XREF to: 00627866 (DATA)
// 004b6095: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b609b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b609c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b60a1: ADD ESP,0xc
// 004b60a4: MOV EDX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b60ab: MOV EDX,dword ptr [EDX + 0x4]
// 004b60ae: LEA EAX,[EDX*0x4 + 0x0]
// 004b60b5: ADD EAX,EDX
// 004b60b7: SHL EAX,0x2
// 004b60ba: MOV EDX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x44] (READ)
// 004b60c1: ADD EAX,0x60
// 004b60c4: XOR ESI,ESI
// 004b60c6: ADD EDX,EAX
// 004b60c8: LEA EAX,[ESP + 0x42c]
//   XREF to: Stack[-0x140c] (DATA)
// 004b60cf: MOV dword ptr [ESP + 0x1808],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004b60d6: PUSH EAX
// 004b60d7: MOV dword ptr [ESP + 0x17dc],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 004b60de: MOV dword ptr [ESP + 0x1804],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004b60e5: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b60ea: ADD ESP,0x4
// 004b60ed: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b60f4: MOV EBP,dword ptr [EAX + 0x4]
// 004b60f7: MOV dword ptr [ESP + 0x17fc],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 004b60fe: TEST EBP,EBP
// 004b6100: JLE 0x004b61fd
//   XREF to: 004b61fd (CONDITIONAL_JUMP)
// 004b6106: MOV EBP,dword ptr [ESP + 0x17e0]
//   XREF to: Stack[-0x58] (READ)
// 004b610d: LEA EBX,[EAX + 0x8]
// 004b6110: LEA EDI,[ESP + 0xb7c]
//   Label: LAB_004b6110
//   XREF to: Stack[-0xcbc] (DATA)
// 004b6117: MOV ESI,EBX
// 004b6119: PUSH EDI
// 004b611a: MOV AL,byte ptr [ESI]
//   Label: LAB_004b611a
// 004b611c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xcbc] (DATA)
// 004b611e: CMP AL,0x0
// 004b6120: JZ 0x004b6132
//   XREF to: 004b6132 (CONDITIONAL_JUMP)
// 004b6122: MOV AL,byte ptr [ESI + 0x1]
// 004b6125: ADD ESI,0x2
// 004b6128: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xcbb] (WRITE)
// 004b612b: ADD EDI,0x2
// 004b612e: CMP AL,0x0
// 004b6130: JNZ 0x004b611a
//   XREF to: 004b611a (CONDITIONAL_JUMP)
// 004b6132: POP EDI
//   Label: LAB_004b6132
// 004b6133: LEA EAX,[ESP + 0xb7c]
//   XREF to: Stack[-0xcbc] (DATA)
// 004b613a: PUSH EAX
// 004b613b: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b6140: ADD ESP,0x4
// 004b6143: TEST EAX,EAX
// 004b6145: JZ 0x004b63cb
//   XREF to: 004b63cb (CONDITIONAL_JUMP)
// 004b614b: MOV EAX,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0x30] (READ)
// 004b6152: MOV dword ptr [EBP],EAX
// 004b6155: MOV EAX,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0x38] (READ)
// 004b615c: MOV dword ptr [EBP + 0x8],EAX
// 004b615f: MOV EAX,dword ptr [ESP + 0xd80]
//   XREF to: Stack[-0xab8] (READ)
// 004b6166: MOV dword ptr [EBP + 0x4],EAX
// 004b6169: MOV EAX,dword ptr [ESP + 0xd88]
//   XREF to: Stack[-0xab0] (READ)
// 004b6170: MOV EDI,dword ptr [ESP + 0x17e4]
//   XREF to: Stack[-0x54] (READ)
// 004b6177: MOV dword ptr [EBP + 0xc],EAX
// 004b617a: MOV EAX,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0x30] (READ)
// 004b6181: MOV ESI,EBX
// 004b6183: ADD EDI,EAX
// 004b6185: MOV EDX,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0x38] (READ)
// 004b618c: PUSH EDI
// 004b618d: MOV AL,byte ptr [ESI]
//   Label: LAB_004b618d
// 004b618f: MOV byte ptr [EDI],AL
// 004b6191: CMP AL,0x0
// 004b6193: JZ 0x004b61a5
//   XREF to: 004b61a5 (CONDITIONAL_JUMP)
// 004b6195: MOV AL,byte ptr [ESI + 0x1]
// 004b6198: ADD ESI,0x2
// 004b619b: MOV byte ptr [EDI + 0x1],AL
// 004b619e: ADD EDI,0x2
// 004b61a1: CMP AL,0x0
// 004b61a3: JNZ 0x004b618d
//   XREF to: 004b618d (CONDITIONAL_JUMP)
// 004b61a5: POP EDI
//   Label: LAB_004b61a5
// 004b61a6: MOV EAX,dword ptr [ESP + 0xd80]
//   XREF to: Stack[-0xab8] (READ)
// 004b61ad: MOV ESI,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0x30] (READ)
// 004b61b4: MOV EDI,EBX
// 004b61b6: ADD EDX,EAX
// 004b61b8: SUB ECX,ECX
// 004b61ba: DEC ECX
// 004b61bb: XOR EAX,EAX
// 004b61bd: SCASB.REPNE ES:EDI
// 004b61bf: NOT ECX
// 004b61c1: DEC ECX
// 004b61c2: INC ECX
// 004b61c3: ADD ESI,ECX
// 004b61c5: MOV dword ptr [ESP + 0x1800],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004b61cc: MOV dword ptr [ESP + 0x1808],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004b61d3: MOV EAX,dword ptr [ESP + 0x17fc]
//   Label: LAB_004b61d3
//   XREF to: Stack[-0x3c] (READ)
// 004b61da: MOV EDX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b61e1: ADD EBX,0x80
// 004b61e7: ADD EBP,0x14
// 004b61ea: INC EAX
// 004b61eb: MOV ECX,dword ptr [EDX + 0x4]
// 004b61ee: MOV dword ptr [ESP + 0x17fc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004b61f5: CMP EAX,ECX
// 004b61f7: JL 0x004b6110
//   XREF to: 004b6110 (CONDITIONAL_JUMP)
// 004b61fd: CMP dword ptr [ESP + 0x42c],0x0
//   Label: LAB_004b61fd
//   XREF to: Stack[-0x140c] (READ)
// 004b6205: JNZ 0x004b63e8
//   XREF to: 004b63e8 (CONDITIONAL_JUMP)
// 004b620b: MOV EAX,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0x30] (READ)
// 004b6212: CMP EAX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x44] (READ)
// 004b6219: JZ 0x004b623e
//   XREF to: 004b623e (CONDITIONAL_JUMP)
// 004b621b: MOV EDI,0x627902
//   XREF to: 00627902 (DATA)
// 004b6220: MOV EBP,0x861
// 004b6225: PUSH 0x627917
//   XREF to: 00627917 (DATA)
// 004b622a: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004b6230: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004b6236: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b623b: ADD ESP,0x4
// 004b623e: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b623e
//   XREF to: Stack[-0x290] (DATA)
// 004b6245: PUSH EAX
// 004b6246: PUSH 0x627923
//   XREF to: 00627923 (DATA)
// 004b624b: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b6250: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b6251: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b6256: ADD ESP,0xc
// 004b6259: PUSH 0x866
// 004b625e: PUSH 0x627932
//   XREF to: 00627932 (DATA)
// 004b6263: PUSH 0x627947
//   XREF to: 00627947 (DATA)
// 004b6268: PUSH 0x0
// 004b626a: LEA EAX,[ESP + 0x15b8]
//   XREF to: Stack[-0x290] (DATA)
// 004b6271: PUSH EAX
// 004b6272: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b6277: ADD ESP,0x14
// 004b627a: MOV dword ptr [ESP + 0x1818],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004b6281: TEST EAX,EAX
// 004b6283: JNZ 0x004b6426
//   XREF to: 004b6426 (CONDITIONAL_JUMP)
// 004b6289: LEA EAX,[ESP + 0x15a8]
//   XREF to: Stack[-0x290] (DATA)
// 004b6290: PUSH EAX
// 004b6291: PUSH 0x62794a
//   XREF to: 0062794a (DATA)
// 004b6296: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b629c: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b629d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004b629d
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b62a2: ADD ESP,0xc
// 004b62a5: XOR EBP,EBP
//   Label: LAB_004b62a5
// 004b62a7: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b62ac: MOV dword ptr [0x02d12d30],EBP
//   XREF to: 02d12d30 (WRITE)
// 004b62b2: TEST EAX,EAX
// 004b62b4: JZ 0x004b62cf
//   XREF to: 004b62cf (CONDITIONAL_JUMP)
// 004b62b6: PUSH 0x79a
// 004b62bb: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004b62c0: PUSH EAX
// 004b62c1: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b62c6: ADD ESP,0xc
// 004b62c9: MOV dword ptr [0x02d12d34],EBP
//   XREF to: 02d12d34 (WRITE)
// 004b62cf: MOV EBX,dword ptr [ESP + 0x1818]
//   Label: LAB_004b62cf
//   XREF to: Stack[-0x20] (READ)
// 004b62d6: TEST EBX,EBX
// 004b62d8: JZ 0x004b62ed
//   XREF to: 004b62ed (CONDITIONAL_JUMP)
// 004b62da: PUSH 0x85b
// 004b62df: PUSH 0x6278c3
//   XREF to: 006278c3 (DATA)
// 004b62e4: PUSH EBX
// 004b62e5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b62ea: ADD ESP,0xc
// 004b62ed: MOV EDI,dword ptr [ESP + 0x1820]
//   Label: LAB_004b62ed
//   XREF to: Stack[-0x18] (READ)
// 004b62f4: TEST EDI,EDI
// 004b62f6: JZ 0x004b630b
//   XREF to: 004b630b (CONDITIONAL_JUMP)
// 004b62f8: PUSH 0x85c
// 004b62fd: PUSH 0x6278d8
//   XREF to: 006278d8 (DATA)
// 004b6302: PUSH EDI
// 004b6303: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b6308: ADD ESP,0xc
// 004b630b: MOV EAX,dword ptr [ESP + 0x17e0]
//   Label: LAB_004b630b
//   XREF to: Stack[-0x58] (READ)
// 004b6312: TEST EAX,EAX
// 004b6314: JZ 0x004b6329
//   XREF to: 004b6329 (CONDITIONAL_JUMP)
// 004b6316: PUSH 0x85d
// 004b631b: PUSH 0x6278ed
//   XREF to: 006278ed (DATA)
// 004b6320: PUSH EAX
// 004b6321: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b6326: ADD ESP,0xc
// 004b6329: PUSH 0x0
//   Label: LAB_004b6329
// 004b632b: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x140c] (DATA)
// 004b6332: PUSH EAX
// 004b6333: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b6338: ADD ESP,0x8
// 004b633b: PUSH 0x0
// 004b633d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b6341: PUSH EAX
// 004b6342: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b6347: ADD ESP,0x8
// 004b634a: ADD ESP,0x1828
// 004b6350: POP EBP
// 004b6351: POP EDI
// 004b6352: POP ESI
// 004b6353: POP EBX
// 004b6354: RET
// 004b6355: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b6355
//   XREF to: Stack[-0x290] (DATA)
// 004b635c: PUSH EAX
// 004b635d: PUSH 0x62774c
//   XREF to: 0062774c (DATA)
// 004b6362: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b6368: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b6369: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b636e: ADD ESP,0xc
// 004b6371: ADD ESP,0x1828
// 004b6377: POP EBP
// 004b6378: POP EDI
// 004b6379: POP ESI
// 004b637a: POP EBX
// 004b637b: RET
// 004b637c: PUSH EBX
//   Label: LAB_004b637c
// 004b637d: PUSH 0x50
// 004b637f: LEA EAX,[ESP + 0x1780]
//   XREF to: Stack[-0xc0] (DATA)
// 004b6386: PUSH EAX
// 004b6387: PUSH 0x62777b
//   XREF to: 0062777b (DATA)
// 004b638c: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b6391: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b6392: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004b6397: ADD ESP,0x14
// 004b639a: TEST EAX,EAX
// 004b639c: JNZ 0x004b5b86
//   XREF to: 004b5b86 (CONDITIONAL_JUMP)
// 004b63a2: ADD ESP,0x1828
// 004b63a8: POP EBP
// 004b63a9: POP EDI
// 004b63aa: POP ESI
// 004b63ab: POP EBX
// 004b63ac: RET
// 004b63ad: MOV EAX,dword ptr [ESP + 0x183c]
//   Label: LAB_004b63ad
//   XREF to: Stack[0x4] (READ)
// 004b63b4: INC EBX
// 004b63b5: MOV ECX,dword ptr [EAX + 0x4]
// 004b63b8: ADD ESI,0x80
// 004b63be: CMP EBX,ECX
// 004b63c0: JL 0x004b5df1
//   XREF to: 004b5df1 (CONDITIONAL_JUMP)
// 004b63c6: JMP 0x004b5e0d
//   XREF to: 004b5e0d (UNCONDITIONAL_JUMP)
// 004b63cb: LEA EAX,[ESP + 0xb7c]
//   Label: LAB_004b63cb
//   XREF to: Stack[-0xcbc] (DATA)
// 004b63d2: PUSH EAX
// 004b63d3: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x140c] (DATA)
// 004b63da: PUSH EAX
// 004b63db: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b63e0: ADD ESP,0x8
// 004b63e3: JMP 0x004b61d3
//   XREF to: 004b61d3 (UNCONDITIONAL_JUMP)
// 004b63e8: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b63e8
//   XREF to: Stack[-0x290] (DATA)
// 004b63ef: PUSH EAX
// 004b63f0: PUSH 0x627878
//   XREF to: 00627878 (DATA)
// 004b63f5: LEA EAX,[ESP + 0x16b0]
//   XREF to: Stack[-0x190] (DATA)
// 004b63fc: PUSH EAX
// 004b63fd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b6402: ADD ESP,0xc
// 004b6405: PUSH 0x0
// 004b6407: PUSH -0x1
// 004b6409: LEA EAX,[ESP + 0x16b0]
//   XREF to: Stack[-0x190] (DATA)
// 004b6410: PUSH EAX
// 004b6411: LEA EAX,[ESP + 0x438]
//   XREF to: Stack[-0x140c] (DATA)
// 004b6418: PUSH EAX
// 004b6419: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b641e: ADD ESP,0x10
// 004b6421: JMP 0x004b62a5
//   XREF to: 004b62a5 (UNCONDITIONAL_JUMP)
// 004b6426: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b6426
//   XREF to: Stack[-0x290] (DATA)
// 004b642d: PUSH EAX
// 004b642e: PUSH 0x62795a
//   XREF to: 0062795a (DATA)
// 004b6433: LEA EAX,[ESP + 0xd98]
//   XREF to: Stack[-0xaa8] (DATA)
// 004b643a: PUSH EAX
// 004b643b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b6440: ADD ESP,0xc
// 004b6443: LEA EAX,[ESP + 0xd90]
//   XREF to: Stack[-0xaa8] (DATA)
// 004b644a: PUSH EAX
// 004b644b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b6451: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b6452: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004b6457: ADD ESP,0x8
// 004b645a: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b6461: XOR ECX,ECX
// 004b6463: MOV EBX,dword ptr [EAX + 0x4]
// 004b6466: MOV dword ptr [ESP + 0x1804],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004b646d: TEST EBX,EBX
// 004b646f: JLE 0x004b68d8
//   XREF to: 004b68d8 (CONDITIONAL_JUMP)
// 004b6475: ADD EAX,0x8
// 004b6478: MOV EDX,dword ptr [ESP + 0x17d8]
//   XREF to: Stack[-0x60] (READ)
// 004b647f: MOV dword ptr [ESP + 0x1814],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004b6486: MOV EAX,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0x38] (READ)
// 004b648d: SUB EAX,EDX
// 004b648f: MOV dword ptr [ESP + 0x17d0],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004b6496: MOV EAX,dword ptr [ESP + 0x1814]
//   XREF to: Stack[-0x24] (READ)
// 004b649d: MOV dword ptr [ESP + 0x17dc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004b64a4: MOV EAX,dword ptr [ESP + 0x17e0]
//   XREF to: Stack[-0x58] (READ)
// 004b64ab: MOV dword ptr [ESP + 0x1810],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004b64b2: MOV EAX,dword ptr [ESP + 0x17d0]
//   Label: LAB_004b64b2
//   XREF to: Stack[-0x68] (READ)
// 004b64b9: MOV dword ptr [ESP + 0x1824],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b64c0: FILD dword ptr [ESP + 0x1824]
//   XREF to: Stack[-0x14] (READ)
// 004b64c7: SUB ESP,0x4
// 004b64ca: MOV EAX,dword ptr [ESP + 0x1814]
//   XREF to: Stack[-0x28] (READ)
// 004b64d1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x183c] (DATA)
// 004b64d4: MOV ECX,dword ptr [ESP + 0x17dc]
//   XREF to: Stack[-0x60] (READ)
// 004b64db: MOV EAX,dword ptr [EAX + 0x8]
// 004b64de: SUB EAX,ECX
// 004b64e0: MOV dword ptr [ESP + 0x1828],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b64e7: FILD dword ptr [ESP + 0x1828]
//   XREF to: Stack[-0x14] (READ)
// 004b64ee: SUB ESP,0x4
// 004b64f1: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b64f7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1840] (DATA)
// 004b64fa: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b64fb: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004b6500: ADD ESP,0xc
// 004b6503: MOV EAX,dword ptr [ESP + 0x1810]
//   XREF to: Stack[-0x28] (READ)
// 004b650a: PUSH 0x0
// 004b650c: MOV ESI,dword ptr [EAX + 0x8]
// 004b650f: PUSH ESI
// 004b6510: MOV EDI,dword ptr [ESP + 0x1820]
//   XREF to: Stack[-0x20] (READ)
// 004b6517: PUSH EDI
// 004b6518: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b651d: ADD ESP,0xc
// 004b6520: PUSH 0x876
// 004b6525: PUSH 0x627969
//   XREF to: 00627969 (DATA)
// 004b652a: PUSH 0x62797e
//   XREF to: 0062797e (DATA)
// 004b652f: PUSH 0x0
// 004b6531: MOV EBP,dword ptr [ESP + 0x17ec]
//   XREF to: Stack[-0x5c] (READ)
// 004b6538: PUSH EBP
// 004b6539: MOV EDI,dword ptr [ESP + 0x1818]
//   XREF to: Stack[-0x34] (READ)
// 004b6540: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b6545: ADD ESP,0x14
// 004b6548: SHL EDI,0x7
// 004b654b: MOV dword ptr [ESP + 0x1820],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b6552: TEST EAX,EAX
// 004b6554: JZ 0x004b65d1
//   XREF to: 004b65d1 (CONDITIONAL_JUMP)
// 004b655a: MOV EAX,dword ptr [ESP + 0x1810]
//   XREF to: Stack[-0x28] (READ)
// 004b6561: XOR ESI,ESI
// 004b6563: MOV EBP,EAX
// 004b6565: MOV dword ptr [EAX + 0x10],0xffffffff
// 004b656c: MOV EAX,dword ptr [ESP + 0x1814]
//   Label: LAB_004b656c
//   XREF to: Stack[-0x24] (READ)
// 004b6573: ADD EAX,EDI
// 004b6575: MOV dword ptr [ESP + 0x181c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b657c: CMP ESI,dword ptr [EBP + 0x4]
// 004b657f: JGE 0x004b6615
//   XREF to: 004b6615 (CONDITIONAL_JUMP)
// 004b6585: MOV EAX,dword ptr [ESP + 0x1820]
//   XREF to: Stack[-0x18] (READ)
// 004b658c: PUSH EAX
// 004b658d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004b6592: MOV EBX,EAX
// 004b6594: ADD ESP,0x4
// 004b6597: CMP EAX,-0x1
// 004b659a: JZ 0x004b65e3
//   XREF to: 004b65e3 (CONDITIONAL_JUMP)
// 004b65a0: AND EAX,0xff
// 004b65a5: PUSH EAX
// 004b65a6: MOV EDX,dword ptr [EBP + 0x10]
// 004b65a9: PUSH EDX
// 004b65aa: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 004b65af: ADD ESP,0x8
// 004b65b2: MOV ECX,dword ptr [ESP + 0x1818]
//   XREF to: Stack[-0x20] (READ)
// 004b65b9: PUSH ECX
// 004b65ba: PUSH EBX
// 004b65bb: MOV dword ptr [EBP + 0x10],EAX
// 004b65be: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004b65c3: ADD ESP,0x8
// 004b65c6: CMP EAX,EBX
// 004b65c8: JNZ 0x004b65fc
//   XREF to: 004b65fc (CONDITIONAL_JUMP)
// 004b65ce: INC ESI
// 004b65cf: JMP 0x004b656c
//   XREF to: 004b656c (UNCONDITIONAL_JUMP)
// 004b65d1: PUSH EBP
//   Label: LAB_004b65d1
// 004b65d2: PUSH 0x627981
//   XREF to: 00627981 (DATA)
// 004b65d7: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b65dd: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b65de: JMP 0x004b629d
//   XREF to: 004b629d (UNCONDITIONAL_JUMP)
// 004b65e3: MOV ESI,dword ptr [ESP + 0x181c]
//   Label: LAB_004b65e3
//   XREF to: Stack[-0x1c] (READ)
// 004b65ea: PUSH ESI
// 004b65eb: PUSH 0x62798f
//   XREF to: 0062798f (DATA)
// 004b65f0: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b65f6: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b65f7: JMP 0x004b629d
//   XREF to: 004b629d (UNCONDITIONAL_JUMP)
// 004b65fc: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b65fc
//   XREF to: Stack[-0x290] (DATA)
// 004b6603: PUSH EAX
// 004b6604: PUSH 0x6279a0
//   XREF to: 006279a0 (DATA)
// 004b6609: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b660f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b6610: JMP 0x004b629d
//   XREF to: 004b629d (UNCONDITIONAL_JUMP)
// 004b6615: PUSH 0x88e
//   Label: LAB_004b6615
// 004b661a: PUSH 0x6279b1
//   XREF to: 006279b1 (DATA)
// 004b661f: MOV EDX,dword ptr [ESP + 0x1828]
//   XREF to: Stack[-0x18] (READ)
// 004b6626: PUSH EDX
// 004b6627: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b662c: ADD ESP,0xc
// 004b662f: MOV EDI,0x2d129b8
//   XREF to: 02d129b8 (DATA)
// 004b6634: MOV ESI,dword ptr [ESP + 0x181c]
//   XREF to: Stack[-0x1c] (READ)
// 004b663b: PUSH EDI
//   XREF to: 02d129b8 (DATA)
// 004b663c: MOV AL,byte ptr [ESI]
//   Label: LAB_004b663c
// 004b663e: MOV byte ptr [EDI],AL
//   XREF to: 02d129b8 (WRITE)
//   XREF to: 02d129ba (WRITE)
// 004b6640: CMP AL,0x0
// 004b6642: JZ 0x004b6654
//   XREF to: 004b6654 (CONDITIONAL_JUMP)
// 004b6644: MOV AL,byte ptr [ESI + 0x1]
// 004b6647: ADD ESI,0x2
// 004b664a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d129b9 (WRITE)
//   XREF to: 02d129bb (WRITE)
// 004b664d: ADD EDI,0x2
// 004b6650: CMP AL,0x0
// 004b6652: JNZ 0x004b663c
//   XREF to: 004b663c (CONDITIONAL_JUMP)
// 004b6654: POP EDI
//   Label: LAB_004b6654
// 004b6655: MOV EAX,dword ptr [EBP + 0xc]
// 004b6658: MOV ECX,dword ptr [ESP + 0x181c]
//   XREF to: Stack[-0x1c] (READ)
// 004b665f: MOV [0x02d12ac0],EAX
//   XREF to: 02d12ac0 (WRITE)
// 004b6664: MOV EAX,dword ptr [EBP + 0x4]
// 004b6667: PUSH ECX
// 004b6668: MOV [0x02d12ac4],EAX
//   XREF to: 02d12ac4 (WRITE)
// 004b666d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b6671: PUSH EAX
// 004b6672: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 004b6677: MOV EBX,EAX
// 004b6679: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b667e: INC EAX
// 004b667f: IMUL EDX,EAX,0x138
// 004b6685: ADD ESP,0x8
// 004b6688: TEST EBX,EBX
// 004b668a: JL 0x004b67a3
//   XREF to: 004b67a3 (CONDITIONAL_JUMP)
// 004b6690: IMUL EBX,EBX,0x14
// 004b6693: ADD EBX,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x1424] (READ)
// 004b669a: MOV ECX,dword ptr [EBP + 0x10]
// 004b669d: CMP ECX,dword ptr [EBX + 0x10]
// 004b66a0: JZ 0x004b6892
//   XREF to: 004b6892 (CONDITIONAL_JUMP)
// 004b66a6: MOV EBP,0x2
// 004b66ab: LEA EDI,[ESP + 0x10c8]
//   XREF to: Stack[-0x770] (DATA)
// 004b66b2: PUSH 0x7a1
// 004b66b7: MOV ESI,0x2d12990
//   XREF to: 02d12990 (DATA)
// 004b66bc: MOV [0x02d12d30],EAX
//   XREF to: 02d12d30 (WRITE)
// 004b66c1: MOV ECX,dword ptr [EBX + 0xc]
// 004b66c4: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004b66c9: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b66ce: MOV dword ptr [0x02d12ab8],ECX
//   XREF to: 02d12ab8 (WRITE)
// 004b66d4: MOV ECX,dword ptr [EBX + 0x4]
// 004b66d7: PUSH EDX
// 004b66d8: MOV dword ptr [0x02d12abc],ECX
//   XREF to: 02d12abc (WRITE)
// 004b66de: MOV ECX,0x4e
// 004b66e3: MOV dword ptr [0x02d129b4],EBP
//   XREF to: 02d129b4 (WRITE)
// 004b66e9: PUSH EAX
// 004b66ea: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d12990 (READ)
//   XREF to: 02d12994 (READ)
// 004b66ec: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b66f1: ADD ESP,0x10
// 004b66f4: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004b66f9: TEST EAX,EAX
// 004b66fb: JNZ 0x004b6720
//   XREF to: 004b6720 (CONDITIONAL_JUMP)
// 004b66fd: MOV EDX,0x6276d5
//   XREF to: 006276d5 (PARAM)
// 004b6702: MOV ECX,0x7a2
// 004b6707: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004b670c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b6712: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b6718: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b671d: ADD ESP,0x4
// 004b6720: MOV EAX,[0x02d12d30]
//   Label: LAB_004b6720
//   XREF to: 02d12d30 (READ)
// 004b6725: DEC EAX
// 004b6726: IMUL EAX,EAX,0x138
// 004b672c: PUSH 0x100
// 004b6731: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b6737: MOV ECX,0x4e
// 004b673c: ADD EAX,EDX
// 004b673e: PUSH 0x0
// 004b6740: MOV EDI,EAX
// 004b6742: ADD EAX,0x28
// 004b6745: LEA ESI,[ESP + 0x10d0]
//   XREF to: Stack[-0x770] (DATA)
// 004b674c: PUSH EAX
// 004b674d: MOVSD.REP ES:EDI,ESI
// 004b674f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b6754: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b6759: DEC EAX
// 004b675a: IMUL EAX,EAX,0x138
// 004b6760: LEA ESI,[ESP + 0x10fc]
//   XREF to: Stack[-0x748] (DATA)
// 004b6767: ADD ESP,0xc
// 004b676a: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b6770: MOV EBX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x48] (READ)
// 004b6777: ADD EAX,EDX
// 004b6779: INC EBX
// 004b677a: LEA EDI,[EAX + 0x28]
// 004b677d: MOV dword ptr [ESP + 0x17f0],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 004b6784: PUSH EDI
// 004b6785: MOV AL,byte ptr [ESI]
//   Label: LAB_004b6785
//   XREF to: Stack[-0x748] (DATA)
// 004b6787: MOV byte ptr [EDI],AL
// 004b6789: CMP AL,0x0
// 004b678b: JZ 0x004b679d
//   XREF to: 004b679d (CONDITIONAL_JUMP)
// 004b678d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x747] (READ)
// 004b6790: ADD ESI,0x2
// 004b6793: MOV byte ptr [EDI + 0x1],AL
// 004b6796: ADD EDI,0x2
// 004b6799: CMP AL,0x0
// 004b679b: JNZ 0x004b6785
//   XREF to: 004b6785 (CONDITIONAL_JUMP)
// 004b679d: POP EDI
//   Label: LAB_004b679d
// 004b679e: JMP 0x004b6892
//   XREF to: 004b6892 (UNCONDITIONAL_JUMP)
// 004b67a3: MOV ECX,0x4e
//   Label: LAB_004b67a3
// 004b67a8: LEA EDI,[ESP + 0x1200]
//   XREF to: Stack[-0x638] (DATA)
// 004b67af: PUSH 0x7a1
// 004b67b4: MOV [0x02d12d30],EAX
//   XREF to: 02d12d30 (WRITE)
// 004b67b9: XOR ESI,ESI
// 004b67bb: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004b67c0: MOV EAX,[0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b67c5: MOV dword ptr [0x02d129b4],ESI
//   XREF to: 02d129b4 (WRITE)
// 004b67cb: MOV dword ptr [0x02d12ab8],ESI
//   XREF to: 02d12ab8 (WRITE)
// 004b67d1: PUSH EDX
// 004b67d2: MOV dword ptr [0x02d12abc],ESI
//   XREF to: 02d12abc (WRITE)
// 004b67d8: MOV ESI,0x2d12990
//   XREF to: 02d12990 (DATA)
// 004b67dd: PUSH EAX
// 004b67de: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d12990 (READ)
//   XREF to: 02d12994 (READ)
// 004b67e0: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b67e5: ADD ESP,0x10
// 004b67e8: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004b67ed: TEST EAX,EAX
// 004b67ef: JNZ 0x004b6814
//   XREF to: 004b6814 (CONDITIONAL_JUMP)
// 004b67f1: MOV EDX,0x6276d5
//   XREF to: 006276d5 (PARAM)
// 004b67f6: MOV ECX,0x7a2
// 004b67fb: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004b6800: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b6806: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b680c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b6811: ADD ESP,0x4
// 004b6814: MOV EAX,[0x02d12d30]
//   Label: LAB_004b6814
//   XREF to: 02d12d30 (READ)
// 004b6819: DEC EAX
// 004b681a: IMUL EAX,EAX,0x138
// 004b6820: PUSH 0x100
// 004b6825: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b682b: MOV ECX,0x4e
// 004b6830: ADD EAX,EDX
// 004b6832: PUSH 0x0
// 004b6834: MOV EDI,EAX
// 004b6836: ADD EAX,0x28
// 004b6839: LEA ESI,[ESP + 0x1208]
//   XREF to: Stack[-0x638] (DATA)
// 004b6840: PUSH EAX
// 004b6841: MOVSD.REP ES:EDI,ESI
// 004b6843: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004b6848: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b684d: DEC EAX
// 004b684e: IMUL EAX,EAX,0x138
// 004b6854: LEA ESI,[ESP + 0x1234]
//   XREF to: Stack[-0x610] (DATA)
// 004b685b: ADD ESP,0xc
// 004b685e: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b6864: MOV EBX,dword ptr [ESP + 0x17e8]
//   XREF to: Stack[-0x50] (READ)
// 004b686b: ADD EAX,EDX
// 004b686d: INC EBX
// 004b686e: LEA EDI,[EAX + 0x28]
// 004b6871: MOV dword ptr [ESP + 0x17e8],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 004b6878: PUSH EDI
// 004b6879: MOV AL,byte ptr [ESI]
//   Label: LAB_004b6879
//   XREF to: Stack[-0x610] (DATA)
// 004b687b: MOV byte ptr [EDI],AL
// 004b687d: CMP AL,0x0
// 004b687f: JZ 0x004b6891
//   XREF to: 004b6891 (CONDITIONAL_JUMP)
// 004b6881: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x60f] (READ)
// 004b6884: ADD ESI,0x2
// 004b6887: MOV byte ptr [EDI + 0x1],AL
// 004b688a: ADD EDI,0x2
// 004b688d: CMP AL,0x0
// 004b688f: JNZ 0x004b6879
//   XREF to: 004b6879 (CONDITIONAL_JUMP)
// 004b6891: POP EDI
//   Label: LAB_004b6891
// 004b6892: MOV EDI,dword ptr [ESP + 0x17dc]
//   Label: LAB_004b6892
//   XREF to: Stack[-0x5c] (READ)
// 004b6899: MOV EBP,dword ptr [ESP + 0x1810]
//   XREF to: Stack[-0x28] (READ)
// 004b68a0: MOV EAX,dword ptr [ESP + 0x1804]
//   XREF to: Stack[-0x34] (READ)
// 004b68a7: MOV EDX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b68ae: ADD EDI,0x80
// 004b68b4: ADD EBP,0x14
// 004b68b7: INC EAX
// 004b68b8: MOV ECX,dword ptr [EDX + 0x4]
// 004b68bb: MOV dword ptr [ESP + 0x17dc],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 004b68c2: MOV dword ptr [ESP + 0x1810],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 004b68c9: MOV dword ptr [ESP + 0x1804],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004b68d0: CMP EAX,ECX
// 004b68d2: JL 0x004b64b2
//   XREF to: 004b64b2 (CONDITIONAL_JUMP)
// 004b68d8: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_004b68d8
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b68de: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b68df: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b68e4: ADD ESP,0x4
// 004b68e7: MOV ESI,dword ptr [ESP + 0x1818]
//   XREF to: Stack[-0x20] (READ)
// 004b68ee: PUSH ESI
// 004b68ef: MOV EDI,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b68f5: PUSH EDI
// 004b68f6: PUSH 0x138
// 004b68fb: MOV EBP,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b6901: PUSH EBP
// 004b6902: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004b6907: ADD ESP,0x10
// 004b690a: PUSH ESI
// 004b690b: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 004b6910: MOV DL,0x4f
// 004b6912: MOV CL,0x32
// 004b6914: ADD ESP,0x4
// 004b6917: MOV EBX,EAX
// 004b6919: MOV AH,0x50
// 004b691b: MOV byte ptr [ESP + 0x1771],DL
//   XREF to: Stack[-0xc7] (WRITE)
// 004b6922: MOV byte ptr [ESP + 0x1773],CL
//   XREF to: Stack[-0xc5] (WRITE)
// 004b6929: MOV DH,0x44
// 004b692b: MOV byte ptr [ESP + 0x1770],AH
//   XREF to: Stack[-0xc8] (WRITE)
// 004b6932: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b6939: MOV byte ptr [ESP + 0x1772],DH
//   XREF to: Stack[-0xc6] (WRITE)
// 004b6940: PUSH 0x0
// 004b6942: MOV EAX,dword ptr [EAX + 0x4]
// 004b6945: PUSH 0x0
// 004b6947: MOV dword ptr [ESP + 0x17d0],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004b694e: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004b6953: PUSH ESI
// 004b6954: MOV dword ptr [ESP + 0x17d8],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004b695b: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b6960: ADD ESP,0xc
// 004b6963: PUSH ESI
// 004b6964: PUSH 0x1
// 004b6966: PUSH 0x60
// 004b6968: LEA EAX,[ESP + 0x177c]
//   XREF to: Stack[-0xc8] (DATA)
// 004b696f: PUSH EAX
// 004b6970: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004b6975: ADD ESP,0x10
// 004b6978: MOV EAX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b697f: PUSH ESI
// 004b6980: MOV EDI,dword ptr [EAX + 0x4]
// 004b6983: PUSH EDI
// 004b6984: PUSH 0x14
// 004b6986: MOV EBP,dword ptr [ESP + 0x17ec]
//   XREF to: Stack[-0x58] (READ)
// 004b698d: PUSH EBP
// 004b698e: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004b6993: ADD ESP,0x10
// 004b6996: PUSH ESI
// 004b6997: MOV EDX,dword ptr [ESP + 0x17f8]
//   XREF to: Stack[-0x44] (READ)
// 004b699e: PUSH EDX
// 004b699f: PUSH 0x1
// 004b69a1: MOV ECX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x54] (READ)
// 004b69a8: PUSH ECX
// 004b69a9: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004b69ae: ADD ESP,0x10
// 004b69b1: PUSH 0x8c3
// 004b69b6: PUSH 0x6279c6
//   XREF to: 006279c6 (DATA)
// 004b69bb: PUSH ESI
// 004b69bc: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b69c1: ADD ESP,0xc
// 004b69c4: PUSH 0x8c8
// 004b69c9: PUSH 0x6279db
//   XREF to: 006279db (DATA)
// 004b69ce: PUSH EBP
// 004b69cf: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b69d4: ADD ESP,0xc
// 004b69d7: PUSH 0x8ca
// 004b69dc: PUSH 0x6279f0
//   XREF to: 006279f0 (DATA)
// 004b69e1: MOV EBP,dword ptr [ESP + 0x17ec]
//   XREF to: Stack[-0x54] (READ)
// 004b69e8: PUSH EBP
// 004b69e9: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b69ee: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b69f4: XOR EAX,EAX
// 004b69f6: ADD ESP,0xc
// 004b69f9: MOV [0x02d12d30],EAX
//   XREF to: 02d12d30 (WRITE)
// 004b69fe: TEST EDX,EDX
// 004b6a00: JZ 0x004b6a1d
//   XREF to: 004b6a1d (CONDITIONAL_JUMP)
// 004b6a02: PUSH 0x79a
// 004b6a07: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004b6a0c: PUSH EDX
// 004b6a0d: XOR ESI,ESI
// 004b6a0f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b6a14: ADD ESP,0xc
// 004b6a17: MOV dword ptr [0x02d12d34],ESI
//   XREF to: 02d12d34 (WRITE)
// 004b6a1d: LEA EAX,[ESP + 0x15a8]
//   Label: LAB_004b6a1d
//   XREF to: Stack[-0x290] (DATA)
// 004b6a24: PUSH EAX
// 004b6a25: MOV EDI,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b6a2b: PUSH EDI
//   XREF to: 030e5090 (DATA)
// 004b6a2c: CALL engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
//   XREF to: 00551000 (UNCONDITIONAL_CALL)
// 004b6a31: MOV EBP,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b6a37: ADD ESP,0x8
// 004b6a3a: TEST EBP,EBP
// 004b6a3c: JNZ 0x004b6b4e
//   XREF to: 004b6b4e (CONDITIONAL_JUMP)
// 004b6a42: PUSH EBX
//   Label: LAB_004b6a42
// 004b6a43: MOV ECX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x48] (READ)
// 004b6a4a: PUSH ECX
// 004b6a4b: MOV EBX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x4c] (READ)
// 004b6a52: MOV ESI,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x50] (READ)
// 004b6a59: PUSH EBX
// 004b6a5a: MOV EAX,dword ptr [ESP + 0x180c]
//   XREF to: Stack[-0x38] (READ)
// 004b6a61: MOV EDI,dword ptr [ESP + 0x17e4]
//   XREF to: Stack[-0x60] (READ)
// 004b6a68: PUSH ESI
// 004b6a69: SUB EAX,EDI
// 004b6a6b: PUSH EAX
// 004b6a6c: MOV EAX,dword ptr [ESP + 0x1850]
//   XREF to: Stack[0x4] (READ)
// 004b6a73: MOV EBP,dword ptr [EAX + 0x4]
// 004b6a76: PUSH EBP
// 004b6a77: LEA EAX,[ESP + 0x15c0]
//   XREF to: Stack[-0x290] (DATA)
// 004b6a7e: PUSH EAX
// 004b6a7f: PUSH 0x627a05
//   XREF to: 00627a05 (DATA)
// 004b6a84: LEA EAX,[ESP + 0xdb0]
//   XREF to: Stack[-0xaa8] (DATA)
// 004b6a8b: PUSH EAX
// 004b6a8c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b6a91: ADD ESP,0x24
// 004b6a94: MOV ESI,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b6a9b: MOV EBX,dword ptr [ESP + 0x183c]
//   XREF to: Stack[0x4] (READ)
// 004b6aa2: XOR EDI,EDI
// 004b6aa4: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004b6aa4
//   XREF to: Stack[-0x1064] (DATA)
// 004b6aab: PUSH EAX
// 004b6aac: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b6ab1: ADD ESP,0x4
// 004b6ab4: PUSH 0x627a82
//   XREF to: 00627a82 (DATA)
// 004b6ab9: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6ac0: PUSH EAX
// 004b6ac1: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b6ac6: ADD ESP,0x8
// 004b6ac9: PUSH 0x627a92
//   XREF to: 00627a92 (DATA)
// 004b6ace: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6ad5: PUSH EAX
// 004b6ad6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b6adb: ADD ESP,0x8
// 004b6ade: PUSH 0x627aa3
//   XREF to: 00627aa3 (DATA)
// 004b6ae3: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6aea: PUSH EAX
// 004b6aeb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b6af0: ADD ESP,0x8
// 004b6af3: PUSH 0x627aae
//   XREF to: 00627aae (DATA)
// 004b6af8: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6aff: PUSH EAX
// 004b6b00: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b6b05: ADD ESP,0x8
// 004b6b08: PUSH EDI
// 004b6b09: PUSH 0x3
// 004b6b0b: LEA EAX,[ESP + 0xd98]
//   XREF to: Stack[-0xaa8] (DATA)
// 004b6b12: PUSH EAX
// 004b6b13: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6b1a: PUSH EAX
// 004b6b1b: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b6b20: ADD ESP,0x10
// 004b6b23: TEST EAX,EAX
// 004b6b25: JNZ 0x004b6b87
//   XREF to: 004b6b87 (CONDITIONAL_JUMP)
// 004b6b27: LEA EAX,[ESP + 0x15a8]
//   XREF to: Stack[-0x290] (DATA)
// 004b6b2e: PUSH EAX
// 004b6b2f: PUSH ESI
// 004b6b30: CALL engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
//   XREF to: 004b7460 (UNCONDITIONAL_CALL)
// 004b6b35: ADD ESP,0x8
//   Label: LAB_004b6b35
// 004b6b38: PUSH EDI
// 004b6b39: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6b40: PUSH EAX
// 004b6b41: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b6b46: ADD ESP,0x8
// 004b6b49: JMP 0x004b6aa4
//   XREF to: 004b6aa4 (UNCONDITIONAL_JUMP)
// 004b6b4e: PUSH 0x62759a
//   Label: LAB_004b6b4e
//   XREF to: 0062759a (DATA)
// 004b6b53: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b6b58: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b6b59: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b6b5e: ADD ESP,0x8
// 004b6b61: MOV EDX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004b6b67: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 004b6b68: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004b6b6d: ADD ESP,0x4
// 004b6b70: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004b6b75: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004b6b76: MOV EDX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004b6b7c: CALL dword ptr [EDX + 0x4]
// 004b6b7f: ADD ESP,0x4
// 004b6b82: JMP 0x004b6a42
//   XREF to: 004b6a42 (UNCONDITIONAL_JUMP)
// 004b6b87: CMP EAX,0x1
//   Label: LAB_004b6b87
// 004b6b8a: JNZ 0x004b6b9c
//   XREF to: 004b6b9c (CONDITIONAL_JUMP)
// 004b6b8c: LEA EAX,[ESP + 0x15a8]
//   XREF to: Stack[-0x290] (DATA)
// 004b6b93: PUSH EAX
// 004b6b94: PUSH EBX
// 004b6b95: CALL engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
//   XREF to: 004b7f50 (UNCONDITIONAL_CALL)
// 004b6b9a: JMP 0x004b6b35
//   XREF to: 004b6b35 (UNCONDITIONAL_JUMP)
// 004b6b9c: CMP EAX,0x2
//   Label: LAB_004b6b9c
// 004b6b9f: JNZ 0x004b6bbb
//   XREF to: 004b6bbb (CONDITIONAL_JUMP)
// 004b6ba1: LEA EAX,[ESP + 0x15a8]
//   XREF to: Stack[-0x290] (DATA)
// 004b6ba8: PUSH EAX
// 004b6ba9: MOV ECX,dword ptr [ESP + 0x1840]
//   XREF to: Stack[0x4] (READ)
// 004b6bb0: PUSH ECX
// 004b6bb1: CALL engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
//   XREF to: 004b7c90 (UNCONDITIONAL_CALL)
// 004b6bb6: JMP 0x004b6b35
//   XREF to: 004b6b35 (UNCONDITIONAL_JUMP)
// 004b6bbb: PUSH 0x0
//   Label: LAB_004b6bbb
// 004b6bbd: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x1064] (DATA)
// 004b6bc4: PUSH EAX
// 004b6bc5: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b6bca: ADD ESP,0x8
// 004b6bcd: PUSH 0x0
// 004b6bcf: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x140c] (DATA)
// 004b6bd6: PUSH EAX
// 004b6bd7: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b6bdc: ADD ESP,0x8
// 004b6bdf: PUSH 0x0
// 004b6be1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1838] (DATA)
// 004b6be5: PUSH EAX
// 004b6be6: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b6beb: ADD ESP,0x8
// 004b6bee: ADD ESP,0x1828
// 004b6bf4: POP EBP
// 004b6bf5: POP EDI
// 004b6bf6: POP ESI
// 004b6bf7: POP EBX
// 004b6bf8: RET
