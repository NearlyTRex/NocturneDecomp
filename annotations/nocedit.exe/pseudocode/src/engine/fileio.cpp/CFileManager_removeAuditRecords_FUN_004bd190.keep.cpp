// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// MANUAL RECONSTRUCTION
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp)

{
  int iVar2;
  int iVar3;
  CPodAuditRecord *pCVar3;
  int record_index;
  _FILE *file;
  CPodFile local_9d8;
  CPodAuditRecord local_5ac;
  CPodAuditRecord local_474;
  CPodAuditRecord local_33c;
  char local_204 [256];
  char local_104 [100];
  SPod2Header local_a0;
  _tm local_40;
  int local_1c;
  int local_18;
  int local_14;
  int local_44;

  if (pod_file_path == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to remove audit records","*.pod",
                       local_204,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    strcpy(local_204,pod_file_path);
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
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    record_index = 0;
    if (0 < local_9d8.audit_count) {
      do {
        local_5ac = local_33c;
        if ((uint)local_5ac.timestamp < (uint)cutoff_timestamp) {
          iVar3 = iVar3 + 1;
        }
        else {
          local_474 = local_33c;
          g_AuditRecordCount = g_AuditRecordCount + 1;
          g_AuditRecordsArray =
               (CPodAuditRecord *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (g_AuditRecordsArray,g_AuditRecordCount * sizeof(CPodAuditRecord),
                          "..\\engine\\fileio.cpp",0x7a1);
          if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            g_CurrentLineNumber = 0x7a2;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
          }
          pCVar3 = g_AuditRecordsArray + g_AuditRecordCount + -1;
          *pCVar3 = local_474;
          memset(pCVar3->filename,0,0x100);
          strcpy(g_AuditRecordsArray[g_AuditRecordCount + -1].filename,local_474.filename);
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
                        0x1170);
      if (file == (_FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't open %s to remove audit records",local_9d8.filename); // NOTE: original binary is missing this argument (bug)
      }
      else {
        _fread(&local_a0,sizeof(SPod2Header),1,file);
        local_44 = g_AuditRecordCount;
        _fseek(file,0,0);
        _fwrite(&local_a0,sizeof(SPod2Header),1,file);
        _fseek(file,local_9d8.total_file_size,0);
        _fwrite(g_AuditRecordsArray,0x138,g_AuditRecordCount,file);
        g_AuditRecordCount = 0;
        if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
          g_AuditRecordsArray = (CPodAuditRecord *)0x0;
        }
        _fflush(file);
        if ((file->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x118b);
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,local_204);
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
          return;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error accessing %s.  The POD may have been corrupted.",local_9d8.filename);
      }
    }
    if (file != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x1169);
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
    return;
  }
  memcpy(local_104,g_DefaultAuditRecordPath,sizeof(local_104));
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
