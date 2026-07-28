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
  int iVar4;
  int iVar5;
  CEventList *pCVar6;
  char (*pacVar7) [32];
  char (*local_14) [32];
  
  pSVar3 = &this_ptr->current_events;
  (this_ptr->current_events).count = (this_ptr->events).count;
  pCVar6 = this_ptr;
  for (iVar4 = 800; pacVar7 = pSVar3->names, pCVar6 = (CEventList *)(pCVar6->events).names,
      iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar3 = (SEventNameBlock *)*pacVar7;
    *(uint *)*pacVar7 = *(uint *)*(char (*) [32])pCVar6;
  }
  for (iVar4 = 0; iVar5 = 0x01C775EC, iVar4 != 0; iVar4 = iVar4 + -1) {
    (*pacVar7)[0] = (*(char (*) [32])pCVar6)[0];
    pCVar6 = (CEventList *)(*(char (*) [32])pCVar6 + 1);
    pacVar7 = (char (*) [32])(*pacVar7 + 1);
  }
  (this_ptr->events).count = 0;
  fVar1 = *(float *)(iVar5 + 0x264);
  iVar4 = 0;
  if (0 < (this_ptr->timers).count) {
    pacVar7 = (this_ptr->timers).names;
    local_14 = (this_ptr->timers).names + 1;
    pCVar6 = this_ptr;
    do {
      fVar2 = (pCVar6->timers).durations[0] - fVar1;
      (pCVar6->timers).durations[0] = fVar2;
      if (fVar2 <= 0.0) {
        iVar5 = (this_ptr->timers).count + -1;
        (this_ptr->timers).count = iVar5;
        memmove(pacVar7,local_14,(iVar5 - iVar4) * 0x20);
        memmove
                  ((this_ptr->timers).durations + iVar4,(this_ptr->timers).durations + iVar4 + 1,
                   ((this_ptr->timers).count - iVar4) * 4);
      }
      else {
        pacVar7 = pacVar7 + 1;
        iVar4 = iVar4 + 1;
        local_14 = local_14 + 1;
        pCVar6 = (CEventList *)(pCVar6->events).names;
      }
    } while (iVar4 < (this_ptr->timers).count);
  }
  return;
}
