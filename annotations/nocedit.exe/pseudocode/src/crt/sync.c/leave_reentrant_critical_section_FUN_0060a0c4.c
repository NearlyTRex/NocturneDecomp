// Name: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
// Address: 0060a0c4
// Address Range: [[0060a0c4, 0060a0ea]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection *rcs)

#include "nocturne.h"

void __cdecl crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(ReentrantCriticalSection *rcs)

{
  int iVar1;
  
  if (rcs->lockCount != 0) {
    iVar1 = rcs->lockCount + -1;
    rcs->lockCount = iVar1;
    if (iVar1 == 0) {
      rcs->ownerThreadId = 0;
      (*g_LeaveCriticalSectionFunc)(rcs->cs);
    }
  }
  return;
}
