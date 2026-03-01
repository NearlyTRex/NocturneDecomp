// Name: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
// Address Range: [[004b5a50, 004b6bf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name)

{
  char cVar1;
  _FILE *file_handle;
  int iVar2;
  uint uVar3;
  CPodAuditRecord *pCVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  char (*pacVar9) [128];
  SIZE_T *pSVar10;
  SVersionControlSession *pSVar11;
  char (*pacVar12) [128];
  uint *puVar13;
  char *pcVar14;
  uint *puVar15;
  char *pcVar16;
  SFoundFileInfo *pSVar17;
  CPodAuditRecord *pCVar18;
  byte bVar19;
  CPodFile local_1838;
  CPickList local_140c;
  CPickList local_1064;
  SFoundFileInfo local_cbc;
  char local_aa8 [512];
  uint local_8a8 [10];
  char local_880 [272];
  uint local_770 [10];
  char local_748 [272];
  uint local_638 [10];
  char local_610 [272];
  uint local_500 [78];
  uint local_3c8 [10];
  char local_3a0 [272];
  char local_290 [256];
  char local_190 [200];
  byte local_c8;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  char local_c0 [80];
  int local_70;
  int local_6c;
  int local_68;
  char (*local_64) [128];
  SIZE_T local_60;
  char (*local_5c) [128];
  SIZE_T *local_58;
  void *local_54;
  int local_50;
  int local_4c;
  int local_48;
  SIZE_T local_44;
  int local_40;
  int local_3c;
  SIZE_T local_38;
  int local_34;
  SIZE_T local_30;
  int local_2c;
  SIZE_T *local_28;
  char (*local_24) [128];
  _FILE *local_20;
  char (*local_1c) [128];
  _FILE *local_18;
  int local_14;
  
  bVar19 = 0;
  local_20 = (_FILE *)0x0;
  local_18 = (_FILE *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  memset(&local_c8,0,0x60);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Sorting file list...");
  engine_fileio_cpp_CFileManager_load_FUN_004b6c00(this_ptr);
  if (this_ptr->tracked_file_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,"No files!!");
  }
  else {
    if (pod_filename == (char *)0x0) {
      iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Enter name of .POD to build",(char *)0x0,
                         "pod",local_290,0);
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      pcVar14 = local_290;
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
    uVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_290);
    if ((-1 < (int)uVar3) && ((uVar3 & 8) != 0)) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s exists and is read only.  Cannot build POD.",local_290);
      return;
    }
    if (volume_name == (char *)0x0) {
      iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter volume name",local_c0,0x50,0);
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      pcVar14 = local_c0;
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
    iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
    if (iVar2 != 0) {
      pSVar11 = &g_VersionControlSession;
      pcVar14 = g_WorkingDirectoryPath;
      do {
        cVar1 = pSVar11->primary_username[0];
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar11->primary_username[1];
        pSVar11 = (SVersionControlSession *)(pSVar11->primary_username + 2);
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      _time(&g_PodCreationTime);
      engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_1838);
      iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_1838,local_290);
      if (iVar2 != 0) {
        iVar2 = 0;
        local_6c = local_1838.audit_count;
        if (0 < local_1838.audit_count) {
          do {
            engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_1838,iVar2,local_500);
            g_AuditRecordCount = g_AuditRecordCount + 1;
            puVar13 = local_500;
            puVar15 = local_3c8;
            for (iVar8 = 0x4e; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
            }
            g_AuditRecordsArray =
                 shape_memdbg_cpp_debugRealloc_FUN_0050f540
                           (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                            "..\\engine\\fileio.cpp",0x7a1);
            if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
              g_CurrentFilename = "..\\engine\\fileio.cpp";
              g_CurrentLineNumber = 0x7a2;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
            }
            pCVar4 = g_AuditRecordsArray + g_AuditRecordCount + -1;
            puVar13 = local_3c8;
            pCVar18 = pCVar4;
            for (iVar8 = 0x4e; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(uint *)pCVar18->user_path = *puVar13;
              puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
              pCVar18 = (CPodAuditRecord *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
            }
            memset(pCVar4->filename,0,0x100);
            pcVar14 = local_3a0;
            pcVar16 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
            iVar2 = iVar2 + 1;
            do {
              cVar1 = *pcVar14;
              *pcVar16 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar16[1] = cVar1;
              pcVar16 = pcVar16 + 2;
            } while (cVar1 != '\0');
          } while (iVar2 < local_6c);
        }
        if (local_1838.pod_format_version < 2) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Upgrading version 1 Pod...Computing individual file CRCs");
          iVar2 = 0;
          if (0 < local_1838.file_count) {
            iVar8 = 0;
            do {
              uVar3 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(&local_1838,iVar2);
              *(uint *)((int)&(local_1838.directory_entries)->checksum + iVar8) = uVar3;
              iVar2 = iVar2 + 1;
              iVar8 = iVar8 + 0x14;
            } while (iVar2 < local_1838.file_count);
          }
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Generating audit records for deleted files...");
        local_40 = 0;
        if (0 < local_1838.file_count) {
          local_64 = this_ptr->file_entries;
          local_2c = 0;
          do {
            iVar2 = local_2c;
            iVar8 = 0;
            pacVar9 = local_64;
            if (0 < this_ptr->tracked_file_count) {
              do {
                iVar5 = _stricmp
                                  (*(char **)((int)&(local_1838.directory_entries)->name_or_offset +
                                             iVar2),*pacVar9);
                if (iVar5 == 0) break;
                iVar8 = iVar8 + 1;
                pacVar9 = pacVar9 + 1;
              } while (iVar8 < this_ptr->tracked_file_count);
            }
            if (this_ptr->tracked_file_count <= iVar8) {
              pcVar16 = g_CurrentFilenameBuffer;
              iVar2 = 0x4e;
              pcVar14 = *(char **)((int)&(local_1838.directory_entries)->name_or_offset + local_2c);
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
              g_CurrentFileTimestamp =
                   *(int *)((int)&(local_1838.directory_entries)->timestamp + local_2c);
              g_CurrentFileSize = *(int *)((int)&(local_1838.directory_entries)->size + local_2c);
              pcVar14 = g_WorkingDirectoryPath;
              puVar13 = local_8a8;
              for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar13 = *(uint *)pcVar14;
                pcVar14 = pcVar14 + ((uint)bVar19 * -2 + 1) * 4;
                puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
              }
              g_AuditRecordCount = g_AuditRecordCount + 1;
              g_AuditRecordsArray =
                   shape_memdbg_cpp_debugRealloc_FUN_0050f540
                             (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                              "..\\engine\\fileio.cpp",0x7a1);
              if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                g_CurrentFilename = "..\\engine\\fileio.cpp";
                g_CurrentLineNumber = 0x7a2;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
              }
              pCVar4 = g_AuditRecordsArray + g_AuditRecordCount + -1;
              puVar13 = local_8a8;
              pCVar18 = pCVar4;
              for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(uint *)pCVar18->user_path = *puVar13;
                puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                pCVar18 = (CPodAuditRecord *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
              }
              memset(pCVar4->filename,0,0x100);
              pcVar14 = local_880;
              pcVar16 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
              local_4c = local_4c + 1;
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
            local_2c = local_2c + 0x14;
            local_40 = local_40 + 1;
          } while (local_40 < local_1838.file_count);
        }
      }
      local_58 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                           (this_ptr->tracked_file_count,0x14,"..\\engine\\fileio.cpp",0x825);
      if (local_58 == (SIZE_T *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x826;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      local_44 = 0;
      iVar2 = 0;
      if (0 < this_ptr->tracked_file_count) {
        pacVar9 = this_ptr->file_entries;
        do {
          uVar3 = 0xffffffff;
          pacVar12 = pacVar9;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar14 = *pacVar12;
            pacVar12 = (char (*) [128])((int)pacVar12 + (uint)bVar19 * -2 + 1);
          } while (*pcVar14 != '\0');
          iVar2 = iVar2 + 1;
          pacVar9 = pacVar9 + 1;
          local_44 = local_44 + ~uVar3;
        } while (iVar2 < this_ptr->tracked_file_count);
      }
      local_54 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (local_44,"..\\engine\\fileio.cpp",0x82e);
      if (local_54 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x82f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Checking files...");
      local_60 = local_44 + this_ptr->tracked_file_count * 0x14 + 0x60;
      local_30 = 0;
      local_38 = local_60;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_140c);
      local_3c = 0;
      if (0 < this_ptr->tracked_file_count) {
        pacVar9 = this_ptr->file_entries;
        pSVar10 = local_58;
        do {
          pSVar17 = &local_cbc;
          pacVar12 = pacVar9;
          do {
            cVar1 = (*pacVar12)[0];
            pSVar17->found_path[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = (*pacVar12)[1];
            pacVar12 = (char (*) [128])(*pacVar12 + 2);
            pSVar17->found_path[1] = cVar1;
            pSVar17 = (SFoundFileInfo *)(pSVar17->found_path + 2);
          } while (cVar1 != '\0');
          iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_cbc);
          if (iVar2 == 0) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_140c.base,local_cbc.found_path);
          }
          else {
            *pSVar10 = local_30;
            pSVar10[2] = local_38;
            pSVar10[1] = local_cbc.file_size;
            pSVar10[3] = local_cbc.timestamp;
            pcVar14 = (char *)((int)local_54 + local_30);
            pacVar12 = pacVar9;
            do {
              cVar1 = (*pacVar12)[0];
              *pcVar14 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar12)[1];
              pacVar12 = (char (*) [128])(*pacVar12 + 2);
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            local_38 = local_38 + local_cbc.file_size;
            uVar3 = 0xffffffff;
            pacVar12 = pacVar9;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar14 = *pacVar12;
              pacVar12 = (char (*) [128])((int)pacVar12 + (uint)bVar19 * -2 + 1);
            } while (*pcVar14 != '\0');
            local_30 = local_30 + ~uVar3;
          }
          pacVar9 = pacVar9 + 1;
          pSVar10 = pSVar10 + 5;
          local_3c = local_3c + 1;
        } while (local_3c < this_ptr->tracked_file_count);
      }
      if (local_140c.base.item_count == 0) {
        if (local_30 != local_44) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x861;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Creating %s...");
        local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_290,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x866
                             );
        if (local_20 != (_FILE *)0x0) {
          _sprintf(local_aa8,"Building %s...",local_290);
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,local_aa8);
          local_34 = 0;
          if (0 < this_ptr->tracked_file_count) {
            local_5c = this_ptr->file_entries;
            local_68 = local_38 - local_60;
            local_28 = local_58;
            local_24 = local_5c;
            do {
              local_14 = local_28[2] - local_60;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_14,(float)local_68);
              _fseek(local_20,local_28[2],0);
              iVar2 = local_34;
              pacVar9 = local_5c;
              local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (*local_5c,(char *)0x0,"rb","..\\engine\\fileio.cpp"
                                    ,0x876);
              pSVar10 = local_28;
              if (local_18 == (_FILE *)0x0) {
                pcVar14 = "Can't open %s";
                goto LAB_004b629d;
              }
              local_28[4] = 0xffffffff;
              for (iVar8 = 0; local_1c = local_24 + iVar2, iVar8 < (int)pSVar10[1];
                  iVar8 = iVar8 + 1) {
                iVar5 = _fgetc(local_18);
                if (iVar5 == -1) {
                  pcVar14 = "Error reading %s";
                  pacVar9 = local_1c;
                  goto LAB_004b629d;
                }
                uVar3 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(pSVar10[4],(uchar)iVar5);
                pSVar10[4] = uVar3;
                iVar6 = _fputc(iVar5,local_20);
                if (iVar6 != iVar5) {
                  pcVar14 = "Error writing %s";
                  pacVar9 = (char (*) [128])local_290;
                  goto LAB_004b629d;
                }
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0x88e);
              pcVar14 = g_CurrentFilenameBuffer;
              pacVar9 = local_1c;
              do {
                cVar1 = (*pacVar9)[0];
                *pcVar14 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = (*pacVar9)[1];
                pacVar9 = (char (*) [128])(*pacVar9 + 2);
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
              g_CurrentFileOffset = pSVar10[3];
              g_CurrentFileCompressedSize = pSVar10[1];
              iVar2 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(&local_1838,*local_1c);
              iVar8 = g_AuditRecordCount + 1;
              if (iVar2 < 0) {
                g_AuditOperationType = 0;
                g_CurrentFileTimestamp = 0;
                g_CurrentFileSize = 0;
                pcVar14 = g_WorkingDirectoryPath;
                puVar13 = local_638;
                for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar13 = *(uint *)pcVar14;
                  pcVar14 = pcVar14 + ((uint)bVar19 * -2 + 1) * 4;
                  puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                }
                g_AuditRecordCount = iVar8;
                g_AuditRecordsArray =
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar8 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar4 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                puVar13 = local_638;
                pCVar18 = pCVar4;
                for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(uint *)pCVar18->user_path = *puVar13;
                  puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                  pCVar18 = (CPodAuditRecord *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
                }
                memset(pCVar4->filename,0,0x100);
                pcVar16 = local_610;
                pcVar14 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
                local_50 = local_50 + 1;
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
              else if (pSVar10[4] != local_1838.directory_entries[iVar2].checksum) {
                g_CurrentFileTimestamp = local_1838.directory_entries[iVar2].timestamp;
                g_CurrentFileSize = local_1838.directory_entries[iVar2].size;
                g_AuditOperationType = 2;
                pcVar14 = g_WorkingDirectoryPath;
                puVar13 = local_770;
                for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar13 = *(uint *)pcVar14;
                  pcVar14 = pcVar14 + ((uint)bVar19 * -2 + 1) * 4;
                  puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                }
                g_AuditRecordCount = iVar8;
                g_AuditRecordsArray =
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar8 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar4 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                puVar13 = local_770;
                pCVar18 = pCVar4;
                for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(uint *)pCVar18->user_path = *puVar13;
                  puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                  pCVar18 = (CPodAuditRecord *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
                }
                memset(pCVar4->filename,0,0x100);
                pcVar16 = local_748;
                pcVar14 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
                local_48 = local_48 + 1;
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
              local_5c = local_5c + 1;
              local_28 = local_28 + 5;
              local_34 = local_34 + 1;
            } while (local_34 < this_ptr->tracked_file_count);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          file_handle = local_20;
          _fwrite(g_AuditRecordsArray,0x138,g_AuditRecordCount,local_20);
          lVar7 = _ftell(file_handle);
          local_c7 = 0x4f;
          local_c5 = 0x32;
          local_c8 = 0x50;
          local_c6 = 0x44;
          local_70 = this_ptr->tracked_file_count;
          local_6c = g_AuditRecordCount;
          _fseek(file_handle,0,0);
          _fwrite(&local_c8,0x60,1,file_handle);
          pSVar10 = local_58;
          _fwrite(local_58,0x14,this_ptr->tracked_file_count,file_handle);
          _fwrite(local_54,1,local_44,file_handle);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\engine\\fileio.cpp",0x8c3);
          shape_memdbg_cpp_debugFree_FUN_0050f460(pSVar10,"..\\engine\\fileio.cpp",0x8c8);
          shape_memdbg_cpp_debugFree_FUN_0050f460(local_54,"..\\engine\\fileio.cpp",0x8ca);
          g_AuditRecordCount = 0;
          if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460
                      (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
            g_AuditRecordsArray = (CPodAuditRecord *)0x0;
          }
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,local_290);
          if (g_CDemonPodPtr != (CDemonPod *)0x0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Remounting all pods...");
            engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
            (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
          }
          _sprintf
                    (local_aa8,"Successfully built %s\n\n%d files totaling %d bytes\n\n%d files added\n%d files removed\n%d files changed\n\nTotal pod size %d bytes",local_290,
                     this_ptr->tracked_file_count,local_38 - local_60,local_50,local_4c,local_48,
                     lVar7);
          do {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1064);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&local_1064.base,"Catalog the pod");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&local_1064.base,"View audit trail");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1064.base,"Verify CRC");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1064.base,"OK");
            iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              (&local_1064,local_aa8,3,0);
            if (iVar2 == 0) {
              engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(this_ptr,local_290);
            }
            else if (iVar2 == 1) {
              engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(this_ptr,local_290);
            }
            else {
              if (iVar2 != 2) {
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1064,0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_140c,0);
                engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1838,0);
                return;
              }
              engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(this_ptr,local_290);
            }
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1064,0);
          } while( true );
        }
        pcVar14 = "Can't create %s";
        pacVar9 = (char (*) [128])local_290;
LAB_004b629d:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar14,pacVar9);
      }
      else {
        _sprintf(local_190,"Couldn't build %s because the following files don't exist on the hard disk",local_290);
        shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                  (&local_140c,local_190,-1,0);
      }
      g_AuditRecordCount = 0;
      if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
        g_AuditRecordsArray = (CPodAuditRecord *)0x0;
      }
      if (local_20 != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\fileio.cpp",0x85b);
      }
      if (local_18 != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0x85c);
      }
      if (local_58 != (SIZE_T *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_58,"..\\engine\\fileio.cpp",0x85d);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_140c,0);
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1838,0);
      return;
    }
  }
  return;
}
