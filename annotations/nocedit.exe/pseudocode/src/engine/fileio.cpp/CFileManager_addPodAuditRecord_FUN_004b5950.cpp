// Name: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
// Address: 004b5950
// Address Range: [[004b5950, 004b5a44]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager * this_ptr, CPodAuditRecord * audit_data, char * filename_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950
          (CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path)

{
  char cVar1;
  CPodAuditRecord *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char **ppcVar4;
  char *pcVar5;
  CPodAuditRecord *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  g_AuditRecordCount = g_AuditRecordCount + 1;
  g_AuditRecordsArray =
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_AuditRecordsArray,g_AuditRecordCount * 0x138,"..\\engine\\fileio.cpp",0x7a1)
  ;
  if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
  }
  pCVar2 = g_AuditRecordsArray + g_AuditRecordCount + -1;
  ppcVar4 = &filename_path;
  pCVar6 = pCVar2;
  for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->day = (int)*ppcVar4;
    ppcVar4 = ppcVar4 + (uint)bVar8 * -2 + 1;
    pCVar6 = (CPodAuditRecord *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  crt_memory_c_memset_FUN_005fde40(pCVar2->filename_path,0,0x100);
  pcVar5 = &stack0x00000038;
  pcVar7 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return;
}
