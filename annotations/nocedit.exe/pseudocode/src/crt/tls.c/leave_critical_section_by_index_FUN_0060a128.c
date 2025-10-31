// Name: crt_tls.c_leave_critical_section_by_index_FUN_0060a128
// Address: 0060a128
// Address Range: [[0060a128, 0060a140]]
// Convention: __cdecl
// Signature: void crt_tls.c_leave_critical_section_by_index_FUN_0060a128(int sectionIndex)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3bd [DATA]
// Globals:
//   void* g_TlsDataBase
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_tls_c_leave_critical_section_by_index_FUN_0060a128(int sectionIndex)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (sectionIndex & 0xfU) * 4));
  return;
}


// Assembly code:
// 0060a128: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_tls.c_leave_critical_section_by_index_FUN_0060a128
//   XREF to: Stack[0x4] (READ)
// 0060a12c: AND EAX,0xf
// 0060a12f: SHL EAX,0x4
// 0060a132: ADD EAX,0x3f9b8c0
//   XREF to: 03f9b8c0 (DATA)
// 0060a137: PUSH EAX
// 0060a138: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a13d: ADD ESP,0x4
// 0060a140: RET
