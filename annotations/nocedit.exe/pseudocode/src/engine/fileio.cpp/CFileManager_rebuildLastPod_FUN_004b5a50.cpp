// Name: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
// Address Range: [[004b5a50, 004b6bf8]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)

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
  uint *puVar9;
  int unaff_ESI;
  SVersionControlSession *pSVar10;
  streambuf **str2;
  char *pcVar11;
  FILE *pFVar12;
  int *piVar13;
  char *pcVar14;
  uint *puVar15;
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
  byte auStack_13d0 [12];
  byte auStack_13c4 [1024];
  byte auStack_fc4 [20];
  byte auStack_fb0 [8];
  byte auStack_fa8 [813];
  char acStack_c7b [511];
  int iStack_a7c;
  uint uStack_a74;
  char acStack_a58 [4];
  char acStack_a54 [72];
  char acStack_a0c [24];
  char acStack_9f4 [368];
  int iStack_884;
  uint local_880 [10];
  char acStack_858 [308];
  uint auStack_724 [2];
  int aiStack_71c [11];
  char acStack_6f0 [260];
  uint auStack_5ec [2];
  int aiStack_5e4 [11];
  char acStack_5b8 [212];
  uint auStack_4e4 [3];
  byte auStack_4d8 [300];
  uint auStack_3ac [2];
  int aiStack_3a4 [11];
  char acStack_378 [244];
  char acStack_284 [8];
  byte auStack_27c [16];
  char acStack_26c [40];
  char acStack_244 [56];
  char acStack_20c [52];
  char acStack_1d8 [136];
  char acStack_150 [4];
  char acStack_14c [132];
  byte local_c8 [28];
  char acStack_ac [72];
  byte local_64;
  byte uStack_63;
  byte uStack_62;
  byte uStack_61;
  byte local_60 [16];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  streambuf **local_3c;
  void *local_2c;
  int local_24;
  void *local_20;
  uint *local_18;
  int local_14;
  
  bVar18 = 0;
  local_20 = (void *)0x0;
  local_18 = (uint *)0x0;
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
                         SUB41 /* extract 2-byte value */(acStack_284,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
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
        local_18 = (uint *)0x0;
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
                *puVar9 = *(uint *)pcVar14;
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
            local_18 = (uint *)((int)local_18 + 1);
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
              *(uint *)((int)in_stack_0000001c + 0x10) = 0xffffffff;
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
                  *puVar9 = *(uint *)pcVar14;
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
                  *puVar9 = *(uint *)pcVar14;
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
