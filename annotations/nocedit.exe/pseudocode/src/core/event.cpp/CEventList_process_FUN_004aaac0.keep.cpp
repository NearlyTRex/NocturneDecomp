// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// MANUAL RECONSTRUCTION
// Address Range: [[004aaac0, 004aabd4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

{
  int iVar1;
  int iVar6;
  CEventList *pCVar7;
  char (*pacVar8) [32];
  char (*local_14) [32];
  CGame *pCVar4;
  float fVar2;
  float fVar1;

  this_ptr->current_events = this_ptr->events;
  pCVar4 = g_CGamePtr;
  (this_ptr->events).count = 0;
  fVar1 = pCVar4->delta_time_float;
  iVar1 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar8 = (this_ptr->timers).names;
    local_14 = (this_ptr->timers).names + 1;
    pCVar7 = this_ptr;
    do {
      fVar2 = (pCVar7->timers).durations[0] - fVar1;
      (pCVar7->timers).durations[0] = fVar2;
      if (fVar2 <= 0.0) {
        iVar6 = (this_ptr->timers).count + -1;
        (this_ptr->timers).count = iVar6;
        memmove(pacVar8,local_14,(iVar6 - iVar1) * 0x20);
        memmove
                  ((this_ptr->timers).durations + iVar1,(this_ptr->timers).durations + iVar1 + 1,
                   ((this_ptr->timers).count - iVar1) * 4);
      }
      else {
        pacVar8 = pacVar8 + 1;
        iVar1 = iVar1 + 1;
        local_14 = local_14 + 1;
        pCVar7 = (CEventList *)(pCVar7->events).names;
      }
    } while (iVar1 < (this_ptr->timers).count);
  }
  return;
}
