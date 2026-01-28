// Name: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
// Address: 004b5910
// Address Range: [[004b5910, 004b5940]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_freeAuditRecords_FUN_004b5910(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_freeAuditRecords_FUN_004b5910(CFileManager *this_ptr)

{
  g_AuditRecordCount = 0;
  if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
  g_AuditRecordsArray = (CPodAuditRecord *)0x0;
  return;
}
