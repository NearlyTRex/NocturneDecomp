// Name: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// Address: 004b5950
// MANUAL RECONSTRUCTION
// Address Range: [[004b5950, 004b5a44]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path)

{
  CPodAuditRecord *pCVar2;

  g_AuditRecordCount = g_AuditRecordCount + 1;
  g_AuditRecordsArray =
       (CPodAuditRecord *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_AuditRecordsArray,g_AuditRecordCount * 0x138,"..\\engine\\fileio.cpp",0x7a1)
  ;
  if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
  }
  pCVar2 = g_AuditRecordsArray + g_AuditRecordCount + -1;
  memcpy(pCVar2, audit_data, 0x138);
  memset(pCVar2->filename,0,0x100);
  strcpy(pCVar2->filename, filename_path);
  return;
}
