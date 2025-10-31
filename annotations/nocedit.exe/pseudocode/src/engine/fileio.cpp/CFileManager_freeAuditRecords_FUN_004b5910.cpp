// Name: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
// Address: 004b5910
// Address Range: [[004b5910, 004b5940]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910(CFileManager * this_ptr)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_006276ab
//   int g_AuditRecordCount
//   CPodAuditRecord* g_AuditRecordsArray
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

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


// Assembly code:
// 004b5910: XOR EDX,EDX
//   Label: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
// 004b5912: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004b5918: MOV dword ptr [0x02d12d30],EDX
//   XREF to: 02d12d30 (WRITE)
// 004b591e: TEST ECX,ECX
// 004b5920: JNZ 0x004b5923
//   XREF to: 004b5923 (CONDITIONAL_JUMP)
// 004b5922: RET
// 004b5923: PUSH ESI
//   Label: LAB_004b5923
// 004b5924: PUSH 0x79a
// 004b5929: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004b592e: PUSH ECX
// 004b592f: XOR ESI,ESI
// 004b5931: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b5936: ADD ESP,0xc
// 004b5939: MOV dword ptr [0x02d12d34],ESI
//   XREF to: 02d12d34 (WRITE)
// 004b593f: POP ESI
// 004b5940: RET
