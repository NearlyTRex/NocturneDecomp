// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp)

{
  char cVar2;
  int iVar2;
  int iVar3;
  CPodAuditRecord *pCVar3;
  int iVar4;
  int iVar5;
  int record_index;
  _FILE *file;
  CPodAuditRecord *pCVar6;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar7;
  CPodAuditRecord *pCVar8;
  char *pcVar9;
  byte bVar10;
  CPodFile local_9d8;
  uint local_5ac [8];
  uint local_58c;
  uint local_474 [10];
  char local_44c [272];
  CPodAuditRecord local_33c;
  char local_204 [256];
  char local_104 [100];
  byte local_a0 [92];
  int local_44;
  _tm local_40;
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar10 = 0;
  if (pod_file_path == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to remove audit records","*.pod",
                       local_204,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    pcVar7 = local_204;
    do {
      cVar2 = *pod_file_path;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pod_file_path[1];
      pod_file_path = pod_file_path + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_9d8);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_9d8,local_204);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s!",local_204);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
    return;
  }
  if (local_9d8.pod_format_version != 200) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't remove audit records on POD of this version.");
  }
  if (cutoff_timestamp != 0) {
LAB_004bd3c3:
    iVar3 = 0;
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",1946);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    record_index = 0;
    if (0 < local_9d8.audit_count) {
      do {
        engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_9d8,record_index,&local_33c);
        pCVar6 = &local_33c;
        puVar9 = local_5ac;
        for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *(uint *)pCVar6->user_path;
          pCVar6 = (CPodAuditRecord *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        if (local_58c < (uint)cutoff_timestamp) {
          iVar3 = iVar3 + 1;
        }
        else {
          pCVar6 = &local_33c;
          puVar7 = local_474;
          for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            *puVar7 = *(uint *)pCVar6->user_path;
            pCVar6 = (CPodAuditRecord *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
            puVar7 = puVar7;
          }
          g_AuditRecordCount = g_AuditRecordCount + 1;
          g_AuditRecordsArray =
               shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                          "..\\engine\\fileio.cpp",1953);
          if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            g_CurrentLineNumber = 1954;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
          }
          pCVar3 = g_AuditRecordsArray + g_AuditRecordCount + -1;
          puVar5 = local_474;
          pCVar8 = pCVar3;
          for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar8 = (CPodAuditRecord *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
            puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
            *(uint *)pCVar8->user_path = *puVar5;
            puVar5 = puVar5;
            pCVar8 = pCVar8;
          }
          memset(pCVar3->filename,0,0x100);
          pcVar6 = local_44c;
          pcVar9 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename;
          do {
            cVar1 = *pcVar6;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
        }
        record_index = record_index + 1;
      } while (record_index < local_9d8.audit_count);
    }
    file = (_FILE *)0x0;
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No audit records removed");
    }
    else {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_9d8.filename,(char *)0x0,"r+b","..\\engine\\fileio.cpp",
                        4464);
      if (file == (_FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't open %s to remove audit records");
      }
      else {
        _fread(local_a0,0x60,1,file);
        local_44 = g_AuditRecordCount;
        _fseek(file,0,0);
        _fwrite(local_a0,0x60,1,file);
        _fseek(file,local_9d8.total_file_size,0);
        _fwrite(g_AuditRecordsArray,0x138,g_AuditRecordCount,file);
        g_AuditRecordCount = 0;
        if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (g_AuditRecordsArray,"..\\engine\\fileio.cpp",1946);
          g_AuditRecordsArray = (CPodAuditRecord *)0x0;
        }
        _fflush(file);
        if ((file->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",4491);
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,local_204);
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
          return;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error accessing %s.  The POD may have been corrupted.",local_9d8.filename);
      }
    }
    if (file != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",4457);
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",1946);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
    return;
  }
  pcVar7 = g_DefaultAuditRecordPath;
  pcVar8 = local_104;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar8 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
    pcVar8 = pcVar8 + (uint)bVar10 * -8 + 4;
  }
  do {
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Remove audit records earlier than this date (MM/DD/YYYY)",local_104,100,1);
    if (iVar3 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
      return;
    }
    iVar3 = sscanf
                      (local_104,"%d %*c %d %*c %d",&local_1c,&local_18,&local_14);
    if (iVar3 == 3) {
      if (local_14 < 0x32) {
        local_14 = local_14 + 2000;
      }
      else if (local_14 < 100) {
        local_14 = local_14 + 0x76c;
      }
      memset(&local_40,0,0x24);
      local_40.tm_mday = local_18;
      local_40.tm_mon = local_1c + -1;
      local_40.tm_year = local_14 + -0x76c;
      local_40.tm_hour = 0;
      local_40.tm_isdst = -1;
      local_40.tm_min = 0;
      local_40.tm_sec = 0;
      cutoff_timestamp = _mktime(&local_40);
      if (cutoff_timestamp != -1) goto LAB_004bd3c3;
    }
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Please enter a valid date");
  } while( true );
}
