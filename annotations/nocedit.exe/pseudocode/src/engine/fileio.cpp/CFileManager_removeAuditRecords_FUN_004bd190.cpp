// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager * this_ptr, char * pod_file_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190
          (CFileManager *this_ptr,char *pod_file_path)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  CPodAuditRecord *pCVar4;
  int iVar5;
  int record_index;
  FILE *file;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  CPodAuditRecord *pCVar9;
  char *pcVar10;
  byte bVar11;
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
  tm local_40;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  if (pod_file_path == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to remove audit records",true,local_204);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar10 = local_204;
    do {
      cVar1 = *pod_file_path;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_file_path[1];
      pod_file_path = pod_file_path + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_9d8);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_9d8,local_204);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s!",local_204);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8);
    return;
  }
  if (local_9d8.pod_format_version != 200) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't remove audit records on POD of this version.");
  }
  if (in_stack_0000000c != 0) {
LAB_004bd3c3:
    iVar3 = 0;
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    record_index = 0;
    if (0 < (int)local_9d8.audit_count) {
      do {
        engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_9d8,record_index,local_33c);
        piVar6 = local_33c;
        piVar8 = local_5ac;
        for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        }
        if (local_58c < in_stack_0000000c) {
          iVar3 = iVar3 + 1;
        }
        else {
          piVar6 = local_33c;
          piVar8 = local_474;
          for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
            piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
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
          piVar6 = local_474;
          pCVar9 = pCVar4;
          for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar9->day = *piVar6;
            piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
            pCVar9 = (CPodAuditRecord *)((int)pCVar9 + (uint)bVar11 * -8 + 4);
          }
          crt_memory_c_memset_FUN_005fde40(pCVar4->filename_path,0,0x100);
          pcVar7 = local_44c;
          pcVar10 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
          do {
            cVar1 = *pcVar7;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
        }
        record_index = record_index + 1;
      } while (record_index < (int)local_9d8.audit_count);
    }
    file = (FILE *)0x0;
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No audit records removed");
    }
    else {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_9d8.filename,(char *)0x0,"r+b","..\\engine\\fileio.cpp",
                        0x1170);
      if (file == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't open %s to remove audit records");
      }
      else {
        crt_stdio_c_fread_FUN_005fd990(local_a0,0x60,1,file);
        local_44 = g_AuditRecordCount;
        crt_stdio_c_fseek_FUN_005ffacc(file,0,0);
        crt_stdio_c_fwrite_FUN_005fdc00(local_a0,0x60,1,file);
        crt_stdio_c_fseek_FUN_005ffacc(file,local_9d8.total_file_size,0);
        crt_stdio_c_fwrite_FUN_005fdc00(g_AuditRecordsArray,0x138,g_AuditRecordCount,file);
        g_AuditRecordCount = 0;
        if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
          g_AuditRecordsArray = (CPodAuditRecord *)0x0;
        }
        crt_stdio_c_fflush_FUN_00601540(file);
        if ((file->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x118b);
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,local_204);
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8);
          return;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error accessing %s.  The POD may have been corrupted.",local_9d8.filename);
      }
    }
    if (file != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x1169);
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8);
    return;
  }
  pcVar10 = g_DefaultAuditRecordPath;
  pcVar7 = local_104;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar7 = *(uint *)pcVar10;
    pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
  }
  do {
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Remove audit records earlier than this date (MM/DD/YYYY)",local_104,100,1);
    if (iVar3 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_9d8);
      return;
    }
    iVar3 = crt_stdio_c_sscanf_FUN_0060013c
                      (local_104,"%d %*c %d %*c %d",&local_1c,&local_18,&local_14);
    if (iVar3 == 3) {
      if (local_14 < 0x32) {
        local_14 = local_14 + 2000;
      }
      else if (local_14 < 100) {
        local_14 = local_14 + 0x76c;
      }
      crt_memory_c_memset_FUN_005fde40(&local_40,0,0x24);
      local_40.tm_mday = local_18;
      local_40.tm_mon = local_1c + -1;
      local_40.tm_year = local_14 + -0x76c;
      local_40.tm_hour = 0;
      local_40.tm_isdst = -1;
      local_40.tm_min = 0;
      local_40.tm_sec = 0;
      in_stack_0000000c = crt_time_c_mktime_FUN_00600f80(&local_40);
      if (in_stack_0000000c != 0xffffffff) goto LAB_004bd3c3;
    }
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Please enter a valid date");
  } while( true );
}
