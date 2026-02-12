// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190 (CFileManager *this_ptr,char *pod_file_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190
          (CFileManager *this_ptr,char *pod_file_path)

{
  char cVar1;
  int iVar2;
  CPodAuditRecord *pCVar3;
  int iVar4;
  int record_index;
  _FILE *file;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  CPodAuditRecord *pCVar8;
  char *pcVar9;
  byte bVar10;
  uint in_stack_0000000c;
  CPodFile local_9d8;
  int local_5ac [8];
  uint local_58c;
  int local_474 [10];
  char local_44c [272];
  int local_33c [78];
  char local_204 [256];
  char local_104 [100];
  byte local_a0 [92];
  int local_44;
  _tm local_40;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  if (pod_file_path == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to remove audit records",0x6293c5,local_204);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    pcVar9 = local_204;
    do {
      cVar1 = *pod_file_path;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_file_path[1];
      pod_file_path = pod_file_path + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_9d8);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_9d8,local_204);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s!",local_204);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
    return;
  }
  if (local_9d8.pod_format_version != 200) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't remove audit records on POD of this version.");
  }
  if (in_stack_0000000c != 0) {
LAB_004bd3c3:
    iVar2 = 0;
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    record_index = 0;
    if (0 < local_9d8.audit_count) {
      do {
        engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_9d8,record_index,local_33c);
        piVar5 = local_33c;
        piVar7 = local_5ac;
        for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar5;
          piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
          piVar7 = piVar7 + (uint)bVar10 * -2 + 1;
        }
        if (local_58c < in_stack_0000000c) {
          iVar2 = iVar2 + 1;
        }
        else {
          piVar5 = local_33c;
          piVar7 = local_474;
          for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = *piVar5;
            piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
            piVar7 = piVar7 + (uint)bVar10 * -2 + 1;
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
          pCVar3 = g_AuditRecordsArray + g_AuditRecordCount + -1;
          piVar5 = local_474;
          pCVar8 = pCVar3;
          for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->day = *piVar5;
            piVar5 = piVar5 + (uint)bVar10 * -2 + 1;
            pCVar8 = (CPodAuditRecord *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
          }
          memset(pCVar3->filename_path,0,0x100);
          pcVar6 = local_44c;
          pcVar9 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
          do {
            cVar1 = *pcVar6;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        record_index = record_index + 1;
      } while (record_index < local_9d8.audit_count);
    }
    file = (_FILE *)0x0;
    if (iVar2 == 0) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No audit records removed");
    }
    else {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_9d8.filename,(char *)0x0,"r+b","..\\engine\\fileio.cpp",
                        0x1170);
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
  pcVar9 = g_DefaultAuditRecordPath;
  pcVar6 = local_104;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar9;
    pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
    pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
  }
  do {
    iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Remove audit records earlier than this date (MM/DD/YYYY)",local_104,100,1);
    if (iVar2 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8,0);
      return;
    }
    iVar2 = sscanf
                      (local_104,"%d %*c %d %*c %d",&local_1c,&local_18,&local_14);
    if (iVar2 == 3) {
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
      in_stack_0000000c = _mktime(&local_40);
      if (in_stack_0000000c != 0xffffffff) goto LAB_004bd3c3;
    }
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Please enter a valid date");
  } while( true );
}
