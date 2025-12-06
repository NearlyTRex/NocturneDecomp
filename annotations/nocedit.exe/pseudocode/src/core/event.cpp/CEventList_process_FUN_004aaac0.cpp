// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// Address Range: [[004aaac0, 004aabd4]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_process_FUN_004aaac0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

{
  float fVar1;
  CGame *pCVar2;
  float n;
  int iVar3;
  int iVar4;
  CEventList *pCVar5;
  CEvent *pCVar6;
  int *dest;
  char *local_14;
  
  this_ptr->current_event_count = this_ptr->event_count;
  pCVar6 = this_ptr->current_event_list;
  pCVar5 = this_ptr;
  for (iVar3 = 800; pCVar5 = (CEventList *)pCVar5->event_list, iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar6 = *(uint *)&((CEvent *)pCVar5)->field_0x0;
    pCVar6 = pCVar6 + 4;
  }
  for (iVar3 = 0; pCVar2 = g_CGamePtr, iVar3 != 0; iVar3 = iVar3 + -1) {
    *pCVar6 = (CEvent)((CEvent *)pCVar5)->field_0x0;
    pCVar5 = (CEventList *)((int)pCVar5 + 1);
    pCVar6 = pCVar6 + 1;
  }
  this_ptr->event_count = 0;
  n = pCVar2->delta_time_float;
  iVar3 = 0;
  if (0 < this_ptr->timer_count) {
    dest = &this_ptr->timer_list;
    local_14 = this_ptr->field14_0x3218 + 0x1c;
    pCVar5 = this_ptr;
    do {
      fVar1 = *(float *)(pCVar5->field14_0x3218 + 0x13c) - n;
      *(float *)(pCVar5->field14_0x3218 + 0x13c) = fVar1;
      if (fVar1 <= 0.0) {
        iVar4 = this_ptr->timer_count + -1;
        this_ptr->timer_count = iVar4;
        crt_string_c_memmove_FUN_005fe5e0(dest,local_14,(iVar4 - iVar3) * 0x20);
        n = (float)((this_ptr->timer_count - iVar3) * 4);
        crt_string_c_memmove_FUN_005fe5e0(local_14 + iVar3 * 4,local_14 + iVar3 * 4 + 4,(SIZE_T)n);
      }
      else {
        dest = dest + 8;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0x20;
        pCVar5 = (CEventList *)pCVar5->event_list;
      }
    } while (iVar3 < this_ptr->timer_count);
  }
  return;
}
