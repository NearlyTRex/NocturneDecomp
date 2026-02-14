// Name: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
// Address: 0060a04c
// Address Range: [[0060a04c, 0060a05e]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c(ReentrantCriticalSection *rcs)

#include "nocturne.h"

void __cdecl reset_reentrant_critical_section_state(ReentrantCriticalSection *rcs)

{
  rcs->ownerThreadId = 0;
  rcs->lockCount = 0;
  return;
}
