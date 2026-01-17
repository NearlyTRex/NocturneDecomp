// Name: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// Address: 0060a060
// Address Range: [[0060a060, 0060a0c1]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection * rcs)

#include "nocturne.h"

void __cdecl crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(ReentrantCriticalSection *rcs)

{
  DWORD DVar1;
  LPCRITICAL_SECTION p_Var2;
  
  DVar1 = (*g_GetCurrentThreadIdFunc)();
  if (DVar1 != rcs->ownerThreadId) {
    if (rcs->initialized == 0) {
      crt_sync_c_enter_reentrant_critical_section_FUN_0060a060
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
      if (rcs->initialized == 0) {
        p_Var2 = crt_sync_c_allocate_critical_section_FUN_00609f24();
        rcs->initialized = 1;
        rcs->cs = p_Var2;
      }
      crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4
                ((ReentrantCriticalSection *)&g_GlobalInitLock);
    }
    (*g_EnterCriticalSectionFunc)(rcs->cs);
    rcs->ownerThreadId = DVar1;
  }
  rcs->lockCount = rcs->lockCount + 1;
  return;
}
