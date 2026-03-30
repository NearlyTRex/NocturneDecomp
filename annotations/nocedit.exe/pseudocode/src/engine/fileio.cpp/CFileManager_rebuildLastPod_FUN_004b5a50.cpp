// Name: engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
// Address: 004b5a50
// Address Range: [[004b5a50, 004b6bf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name)

{
  char cVar2;
  int iVar2;
  uint uVar3;
  int iVar3;
  CPodAuditRecord *pCVar4;
  uint uVar4;
  int iVar5;
  CPodAuditRecord *pCVar5;
  SIZE_T *ptr;
  void *ptr_00;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar7;
  SIZE_T SVar8;
  char (*pacVar10) [128];
  char (*pacVar9) [128];
  SIZE_T *pSVar10;
  SVersionControlSession *pSVar11;
  char (*pacVar12) [128];
  char (*pacVar11) [128];
  uint *puVar13;
  uint *puVar12;
  char *pcVar14;
  char *pcVar13;
  uint *puVar15;
  char *pcVar16;
  char *pcVar15;
  SFoundFileInfo *pSVar17;
  CPodAuditRecord *pCVar18;
  CPodAuditRecord *pCVar16;
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
  char cVar1;
  _FILE *file_handle;
  
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
      pcVar13 = local_290;
      do {
        cVar2 = *pod_filename;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pod_filename[1];
        pod_filename = pod_filename + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
    }
    uVar3 = engine_dosio_c_getFileSizeWithFinder_FUN_00481960((char *)0x0,local_290);
    if ((-1 < (int)uVar3) && ((uVar3 & 8) != 0)) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s exists and is read only.  Cannot build POD.",local_290);
      return;
    }
    if (volume_name == (char *)0x0) {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter volume name",local_c0,0x50,0);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      pcVar14 = local_c0;
      do {
        cVar1 = *volume_name;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = volume_name[1];
        volume_name = volume_name + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
    if (iVar3 != 0) {
      pSVar11 = &g_VersionControlSession;
      pcVar13 = g_WorkingDirectoryPath;
      do {
        cVar2 = pSVar11->primary_username[0];
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pSVar11->primary_username[1];
        pSVar11 = (SVersionControlSession *)(pSVar11->primary_username + 2);
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      _time(&g_PodCreationTime);
      engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_1838);
      iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_1838,local_290);
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < local_1838.audit_count) {
          do {
            engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_1838,iVar3,local_500);
            g_AuditRecordCount = g_AuditRecordCount + 1;
            puVar12 = local_500;
            puVar15 = local_3c8;
            for (iVar8 = 0x4e; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
              *puVar15 = *puVar12;
              puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
              puVar15 = puVar15;
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
            puVar12 = local_3c8;
            pCVar16 = pCVar4;
            for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(uint *)pCVar16->user_path = *puVar12;
              puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
              pCVar16 = (CPodAuditRecord *)((int)pCVar16 + (uint)bVar19 * -8 + 4);
            }
            memset(pCVar4->filename,0,0x100);
            pcVar13 = local_3a0;
            pcVar16 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
            iVar3 = iVar3 + 1;
            do {
              cVar2 = *pcVar13;
              *pcVar16 = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar16[1] = cVar2;
              pcVar16 = pcVar16 + 2;
            } while (cVar2 != '\0');
          } while (iVar3 < local_1838.audit_count);
        }
        if (local_1838.pod_format_version < 2) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Upgrading version 1 Pod...Computing individual file CRCs");
          iVar3 = 0;
          if (0 < local_1838.file_count) {
            iVar7 = 0;
            do {
              uVar4 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(&local_1838,iVar3);
              *(uint *)((int)&(local_1838.directory_entries)->checksum + iVar7) = uVar4;
              iVar3 = iVar3 + 1;
              iVar7 = iVar7 + 0x14;
            } while (iVar3 < local_1838.file_count);
          }
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Generating audit records for deleted files...");
        local_40 = 0;
        if (0 < local_1838.file_count) {
          local_2c = 0;
          do {
            iVar3 = 0;
            pacVar10 = this_ptr->file_entries;
            if (0 < this_ptr->tracked_file_count) {
              do {
                iVar5 = _stricmp
                                  (*(char **)((int)&(local_1838.directory_entries)->name + local_2c)
                                   ,*pacVar10);
                if (iVar5 == 0) break;
                iVar3 = iVar3 + 1;
                pacVar10 = pacVar10 + 1;
              } while (iVar3 < this_ptr->tracked_file_count);
            }
            if (this_ptr->tracked_file_count <= iVar3) {
              pcVar15 = g_CurrentFilenameBuffer;
              iVar3 = 0x4e;
              pcVar13 = *(char **)((int)&(local_1838.directory_entries)->name + local_2c);
              g_AuditOperationType = 1;
              do {
                cVar2 = *pcVar13;
                *pcVar15 = cVar2;
                if (cVar2 == '\0') break;
                cVar2 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar15[1] = cVar2;
                pcVar15 = pcVar15 + 2;
              } while (cVar2 != '\0');
              g_CurrentFileOffset = 0;
              g_CurrentFileCompressedSize = 0;
              g_CurrentFileTimestamp =
                   *(int *)((int)&(local_1838.directory_entries)->timestamp + local_2c);
              g_CurrentFileSize = *(int *)((int)&(local_1838.directory_entries)->size + local_2c);
              pcVar13 = g_WorkingDirectoryPath;
              puVar12 = local_8a8;
              for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar12 = *(uint *)pcVar13;
                pcVar13 = pcVar13 + ((uint)bVar19 * -2 + 1) * 4;
                puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
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
              pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
              puVar12 = local_8a8;
              pCVar16 = pCVar5;
              for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(uint *)pCVar16->user_path = *puVar12;
                puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
                pCVar16 = (CPodAuditRecord *)((int)pCVar16 + (uint)bVar19 * -8 + 4);
              }
              memset(pCVar5->filename,0,0x100);
              pcVar13 = local_880;
              local_4c = local_4c + 1;
              pcVar15 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
              do {
                cVar2 = *pcVar13;
                *pcVar15 = cVar2;
                if (cVar2 == '\0') break;
                cVar2 = pcVar13[1];
                pcVar13 = pcVar13 + 2;
                pcVar15[1] = cVar2;
                pcVar15 = pcVar15 + 2;
              } while (cVar2 != '\0');
            }
            local_2c = local_2c + 0x14;
            local_40 = local_40 + 1;
          } while (local_40 < local_1838.file_count);
        }
      }
      ptr = (SIZE_T *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                      (this_ptr->tracked_file_count,0x14,"..\\engine\\fileio.cpp",0x825);
      if (ptr == (SIZE_T *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x826;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      local_44 = 0;
      iVar3 = 0;
      if (0 < this_ptr->tracked_file_count) {
        pacVar10 = this_ptr->file_entries;
        do {
          uVar4 = 0xffffffff;
          pacVar11 = pacVar10;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar13 = *pacVar11;
            pacVar11 = (char (*) [128])((int)pacVar11 + (uint)bVar19 * -2 + 1);
          } while (*pcVar13 != '\0');
          iVar3 = iVar3 + 1;
          pacVar10 = pacVar10 + 1;
          local_44 = local_44 + ~uVar4;
        } while (iVar3 < this_ptr->tracked_file_count);
      }
      ptr_00 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (local_44,"..\\engine\\fileio.cpp",0x82e);
      if (ptr_00 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0x82f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Checking files...",local_290);
      SVar8 = local_44 + this_ptr->tracked_file_count * 0x14 + 0x60;
      local_30 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_140c);
      local_3c = 0;
      local_38 = SVar8;
      if (0 < this_ptr->tracked_file_count) {
        pacVar9 = this_ptr->file_entries;
        pSVar10 = ptr;
        do {
          pSVar17 = &local_cbc;
          pcVar13 = *pacVar9;
          do {
            cVar2 = *pcVar13;
            pSVar17->found_path[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pSVar17->found_path[1] = cVar2;
            pSVar17 = (SFoundFileInfo *)(pSVar17->found_path + 2);
          } while (cVar2 != '\0');
          iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_cbc);
          if (iVar3 == 0) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_140c.base,local_cbc.found_path);
          }
          else {
            *pSVar10 = local_30;
            pSVar10[2] = local_38;
            pSVar10[1] = local_cbc.file_size;
            pSVar10[3] = local_cbc.timestamp;
            pcVar13 = (char *)((int)ptr_00 + local_30);
            pacVar12 = pacVar9;
            do {
              cVar2 = (*pacVar12)[0];
              *pcVar13 = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = (*pacVar12)[1];
              pacVar12 = (char (*) [128])(*pacVar12 + 2);
              pcVar13[1] = cVar2;
              pcVar13 = pcVar13 + 2;
            } while (cVar2 != '\0');
            local_38 = local_38 + local_cbc.file_size;
            uVar4 = 0xffffffff;
            pacVar10 = pacVar9;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar13 = *pacVar10;
              pacVar10 = (char (*) [128])((int)pacVar10 + (uint)bVar19 * -2 + 1);
            } while (*pcVar13 != '\0');
            local_30 = local_30 + ~uVar4;
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
                  (g_CEditorToolsPtr,"Creating %s...",local_290);
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
            local_28 = ptr;
            do {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)(local_28[2] - SVar8),
                         (float)(int)(local_38 - SVar8));
              _fseek(local_20,local_28[2],0);
              local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (*local_5c,(char *)0x0,"rb","..\\engine\\fileio.cpp"
                                    ,0x876);
              if (local_18 == (_FILE *)0x0) {
                pcVar13 = "Can't open %s";
                goto LAB_004b629d;
              }
              local_28[4] = 0xffffffff;
              for (iVar3 = 0; pacVar10 = this_ptr->file_entries + local_34, iVar3 < (int)local_28[1]
                  ; iVar3 = iVar3 + 1) {
                iVar7 = _fgetc(local_18);
                if (iVar7 == -1) {
                  pcVar13 = "Error reading %s";
                  local_5c = pacVar10;
                  goto LAB_004b629d;
                }
                uVar4 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(local_28[4],(uchar)iVar7);
                local_28[4] = uVar4;
                iVar6 = _fputc(iVar7,local_20);
                if (iVar6 != iVar7) {
                  pcVar13 = "Error writing %s";
                  local_5c = (char (*) [128])local_290;
                  goto LAB_004b629d;
                }
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0x88e);
              pcVar13 = g_CurrentFilenameBuffer;
              pacVar11 = pacVar10;
              do {
                cVar2 = (*pacVar11)[0];
                *pcVar13 = cVar2;
                if (cVar2 == '\0') break;
                cVar2 = (*pacVar11)[1];
                pacVar11 = (char (*) [128])(*pacVar11 + 2);
                pcVar13[1] = cVar2;
                pcVar13 = pcVar13 + 2;
              } while (cVar2 != '\0');
              g_CurrentFileOffset = local_28[3];
              g_CurrentFileCompressedSize = local_28[1];
              iVar3 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(&local_1838,*pacVar10);
              iVar7 = g_AuditRecordCount + 1;
              if (iVar3 < 0) {
                g_AuditOperationType = 0;
                g_CurrentFileTimestamp = 0;
                g_CurrentFileSize = 0;
                pcVar13 = g_WorkingDirectoryPath;
                puVar12 = local_638;
                for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar12 = *(uint *)pcVar13;
                  pcVar13 = pcVar13 + ((uint)bVar19 * -2 + 1) * 4;
                  puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
                }
                g_AuditRecordCount = iVar7;
                g_AuditRecordsArray =
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar7 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                puVar12 = local_638;
                pCVar16 = pCVar5;
                for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(uint *)pCVar16->user_path = *puVar12;
                  puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
                  pCVar16 = (CPodAuditRecord *)((int)pCVar16 + (uint)bVar19 * -8 + 4);
                }
                memset(pCVar5->filename,0,0x100);
                pcVar15 = local_610;
                local_50 = local_50 + 1;
                pcVar13 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
                do {
                  cVar2 = *pcVar15;
                  *pcVar13 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar15[1];
                  pcVar15 = pcVar15 + 2;
                  pcVar13[1] = cVar2;
                  pcVar13 = pcVar13 + 2;
                } while (cVar2 != '\0');
              }
              else if (local_28[4] != local_1838.directory_entries[iVar3].checksum) {
                g_CurrentFileTimestamp = local_1838.directory_entries[iVar3].timestamp;
                g_CurrentFileSize = local_1838.directory_entries[iVar3].size;
                g_AuditOperationType = 2;
                pcVar13 = g_WorkingDirectoryPath;
                puVar12 = local_770;
                for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar12 = *(uint *)pcVar13;
                  pcVar13 = pcVar13 + ((uint)bVar19 * -2 + 1) * 4;
                  puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
                }
                g_AuditRecordCount = iVar7;
                g_AuditRecordsArray =
                     shape_memdbg_cpp_debugRealloc_FUN_0050f540
                               (g_AuditRecordsArray,iVar7 * 0x138,"..\\engine\\fileio.cpp",0x7a1
                               );
                if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
                  g_CurrentFilename = "..\\engine\\fileio.cpp";
                  g_CurrentLineNumber = 0x7a2;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
                }
                pCVar16 = g_AuditRecordsArray + g_AuditRecordCount + -1;
                puVar13 = local_770;
                pCVar18 = pCVar16;
                for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  pCVar18 = (CPodAuditRecord *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
                  puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
                  *(uint *)pCVar18->user_path = *puVar13;
                  puVar13 = puVar13;
                  pCVar18 = pCVar18;
                }
                memset(pCVar16->filename,0,0x100);
                pcVar15 = local_748;
                local_48 = local_48 + 1;
                pcVar13 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
                do {
                  cVar2 = *pcVar15;
                  *pcVar13 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar15[1];
                  pcVar15 = pcVar15 + 2;
                  pcVar13[1] = cVar2;
                  pcVar13 = pcVar13 + 2;
                } while (cVar2 != '\0');
              }
              local_5c = local_5c + 1;
              local_28 = local_28 + 5;
              local_34 = local_34 + 1;
            } while (local_34 < this_ptr->tracked_file_count);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          _fwrite(g_AuditRecordsArray,0x138,g_AuditRecordCount,local_20);
          lVar7 = _ftell(local_20);
          local_c7 = 0x4f;
          local_c5 = 0x32;
          local_c8 = 0x50;
          local_c6 = 0x44;
          _fseek(local_20,0,0);
          _fwrite(&local_c8,0x60,1,local_20);
          _fwrite(ptr,0x14,this_ptr->tracked_file_count,local_20);
          _fwrite(ptr_00,1,local_44,local_20);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\engine\\fileio.cpp",0x8c3);
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\engine\\fileio.cpp",0x8c8);
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr_00,"..\\engine\\fileio.cpp",0x8ca);
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
                     this_ptr->tracked_file_count,local_38 - SVar8,local_50,local_4c,local_48,lVar7)
          ;
          do {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1064);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&local_1064.base,"Catalog the pod");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&local_1064.base,"View audit trail");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1064.base,"Verify CRC");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1064.base,"OK");
            iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              (&local_1064,local_aa8,3,0);
            if (iVar3 == 0) {
              engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(this_ptr,local_290);
            }
            else if (iVar3 == 1) {
              engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(this_ptr,local_290);
            }
            else {
              if (iVar3 != 2) {
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
        pcVar13 = "Can't create %s";
        local_5c = (char (*) [128])local_290;
LAB_004b629d:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar13,local_5c);
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
      if (ptr != (SIZE_T *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\engine\\fileio.cpp",0x85d);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_140c,0);
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1838,0);
      return;
    }
  }
  return;
}
