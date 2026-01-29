// Name: crt_tls.c_leave_critical_section_by_index_FUN_0060a128
// Address: 0060a128
// Address Range: [[0060a128, 0060a140]]
// Convention: __cdecl
// Signature: void __cdecl crt_tls_c_leave_critical_section_by_index_FUN_0060a128(int sectionIndex)

#include "nocturne.h"

void __cdecl leave_critical_section_by_index(int sectionIndex)

{
  leave_reentrant_critical_section
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (sectionIndex & 0xfU) * 4));
  return;
}
