// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// Address Range: [[004aaac0, 004aabd4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

{
  int iVar5;
  int iVar1;
  int iVar6;
  CEventList *pCVar2;
  CEventList *pCVar7;
  char (*pacVar8) [32];
  char (*local_14) [32];
  CGame *pCVar4;
  float fVar2;
  SEventNameBlock *pSVar3;
  float fVar1;
  
  pSVar3 = &this_ptr->current_events;
  (this_ptr->current_events).count = (this_ptr->events).count;
  pCVar2 = this_ptr;
  for (iVar5 = 800; pSVar3 = (SEventNameBlock *)pSVar3->names,
      pCVar2 = (CEventList *)(pCVar2->events).names, iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)*(char (*) [32])pSVar3 = *(uint *)*(char (*) [32])pCVar2;
  }
  for (iVar1 = 0; pCVar4 = g_CGamePtr, iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(char (*) [32])pSVar3)[0] = (*(char (*) [32])pCVar2)[0];
    pCVar2 = (CEventList *)(*(char (*) [32])pCVar2 + 1);
    pSVar3 = (SEventNameBlock *)(*(char (*) [32])pSVar3 + 1);
  }
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
                  ((this_ptr->timers).durations + iVar1,
                   (void *)((int)((this_ptr->counters).names + -2) + 0x18 + iVar1 * 4),
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
