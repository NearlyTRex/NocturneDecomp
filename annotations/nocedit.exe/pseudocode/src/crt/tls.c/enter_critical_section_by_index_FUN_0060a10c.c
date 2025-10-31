// Name: crt_tls.c_enter_critical_section_by_index_FUN_0060a10c
// Address: 0060a10c
// Address Range: [[0060a10c, 0060a124]]
// Convention: __cdecl
// Signature: void crt_tls.c_enter_critical_section_by_index_FUN_0060a10c(int sectionIndex)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3b8 [DATA]
// Globals:
//   void* g_TlsDataBase
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void __cdecl crt_tls_c_enter_critical_section_by_index_FUN_0060a10c(int sectionIndex)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (sectionIndex & 0xfU) * 4));
  return;
}


// Assembly code:
// 0060a10c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_tls.c_enter_critical_section_by_index_FUN_0060a10c
//   XREF to: Stack[0x4] (READ)
// 0060a110: AND EAX,0xf
// 0060a113: SHL EAX,0x4
// 0060a116: ADD EAX,0x3f9b8c0
//   XREF to: 03f9b8c0 (DATA)
// 0060a11b: PUSH EAX
// 0060a11c: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a121: ADD ESP,0x4
// 0060a124: RET
