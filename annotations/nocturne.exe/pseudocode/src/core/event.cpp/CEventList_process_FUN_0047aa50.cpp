// Name: core_event.cpp_CEventList_process_FUN_0047aa50
// Address: 0047aa50
// Address Range: [[0047aa50, 0047ab64]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_process_FUN_0047aa50(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_0047aa50(CEventList *this_ptr)

{
  float fVar1;
  float fVar2;
  SEventNameBlock *pSVar3;
  CGame *pCVar4;
  int iVar5;
  int iVar6;
  CEventList *pCVar7;
  char (*pacVar8) [32];
  char (*local_14) [32];
  
  pSVar3 = &this_ptr->current_events;
  (this_ptr->current_events).count = (this_ptr->events).count;
  pCVar7 = this_ptr;
  for (iVar5 = 800; pacVar8 = pSVar3->names, pCVar7 = (CEventList *)(pCVar7->events).names,
      iVar5 != 0; iVar5 = iVar5 + -1) {
    pSVar3 = (SEventNameBlock *)*pacVar8;
    *(uint *)*pacVar8 = *(uint *)*(char (*) [32])pCVar7;
  }
  for (iVar5 = 0; pCVar4 = g_CGame_PTR_005b9354, iVar5 != 0; iVar5 = iVar5 + -1) {
    (*pacVar8)[0] = (*(char (*) [32])pCVar7)[0];
    pCVar7 = (CEventList *)(*(char (*) [32])pCVar7 + 1);
    pacVar8 = (char (*) [32])(*pacVar8 + 1);
  }
  (this_ptr->events).count = 0;
  fVar1 = pCVar4->delta_time_float;
  iVar5 = 0;
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
        memmove(pacVar8,local_14,(iVar6 - iVar5) * 0x20);
        memmove
                  ((this_ptr->timers).durations + iVar5,(this_ptr->timers).durations + iVar5 + 1,
                   ((this_ptr->timers).count - iVar5) * 4);
      }
      else {
        pacVar8 = pacVar8 + 1;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
        pCVar7 = (CEventList *)(pCVar7->events).names;
      }
    } while (iVar5 < (this_ptr->timers).count);
  }
  return;
}
