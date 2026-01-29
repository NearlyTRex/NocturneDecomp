// Name: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// Address: 0060a060
// Address Range: [[0060a060, 0060a0c1]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection *rcs)

#include "nocturne.h"

void __cdecl enter_reentrant_critical_section(ReentrantCriticalSection *rcs)

{
  DWORD DVar1;
  LPCRITICAL_SECTION p_Var2;
  
  DVar1 = (*g_GetCurrentThreadIdFunc)();
  if (DVar1 != rcs->ownerThreadId) {
    if (rcs->initialized == 0) {
      enter_reentrant_critical_section
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
      if (rcs->initialized == 0) {
        p_Var2 = allocate_critical_section();
        rcs->initialized = 1;
        rcs->cs = p_Var2;
      }
      leave_reentrant_critical_section
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
    }
    (*g_EnterCriticalSectionFunc)(rcs->cs);
    rcs->ownerThreadId = DVar1;
  }
  rcs->lockCount = rcs->lockCount + 1;
  return;
}
