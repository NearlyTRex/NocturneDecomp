// Name: crt_tls.c_enter_critical_section_by_index_FUN_0060a10c
// Address: 0060a10c
// Address Range: [[0060a10c, 0060a124]]
// Convention: __cdecl
// Signature: void crt_tls.c_enter_critical_section_by_index_FUN_0060a10c(int sectionIndex)

#include "nocturne.h"

void __cdecl crt_tls_c_enter_critical_section_by_index_FUN_0060a10c(int sectionIndex)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (sectionIndex & 0xfU) * 4));
  return;
}
