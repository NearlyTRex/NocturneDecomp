// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// Address Range: [[004aaac0, 004aabd4]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_process_FUN_004aaac0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

{
  float fVar1;
  float fVar2;
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  CEventList *pCVar6;
  CEvent *pCVar7;
  int *dest;
  char *local_14;
  
  this_ptr->current_event_count = this_ptr->event_count;
  pCVar7 = this_ptr->current_event_list;
  pCVar6 = this_ptr;
  for (iVar4 = 800; pCVar6 = (CEventList *)pCVar6->event_list, iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pCVar7 = *(uint *)&((CEvent *)pCVar6)->field_0x0;
    pCVar7 = pCVar7 + 4;
  }
  for (iVar4 = 0; pCVar3 = g_CGamePtr, iVar4 != 0; iVar4 = iVar4 + -1) {
    *pCVar7 = (CEvent)((CEvent *)pCVar6)->field_0x0;
    pCVar6 = (CEventList *)((int)pCVar6 + 1);
    pCVar7 = pCVar7 + 1;
  }
  this_ptr->event_count = 0;
  fVar1 = pCVar3->delta_time_float;
  iVar4 = 0;
  if (0 < this_ptr->timer_count) {
    dest = &this_ptr->timer_list;
    local_14 = this_ptr->field14_0x3218 + 0x1c;
    pCVar6 = this_ptr;
    do {
      fVar2 = *(float *)(pCVar6->field14_0x3218 + 0x13c) - fVar1;
      *(float *)(pCVar6->field14_0x3218 + 0x13c) = fVar2;
      if (fVar2 <= 0.0) {
        iVar5 = this_ptr->timer_count + -1;
        this_ptr->timer_count = iVar5;
        crt_string_c_memmove_FUN_005fe5e0(dest,local_14,(iVar5 - iVar4) * 0x20);
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->field16_0x3380 + iVar4 * 4 + -0x2c,
                   this_ptr->field16_0x3380 + iVar4 * 4 + -0x28,(this_ptr->timer_count - iVar4) * 4)
        ;
      }
      else {
        dest = dest + 8;
        iVar4 = iVar4 + 1;
        local_14 = local_14 + 0x20;
        pCVar6 = (CEventList *)pCVar6->event_list;
      }
    } while (iVar4 < this_ptr->timer_count);
  }
  return;
}
