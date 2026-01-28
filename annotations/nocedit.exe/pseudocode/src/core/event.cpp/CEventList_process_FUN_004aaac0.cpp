// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// Address Range: [[004aaac0, 004aabd4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr)

{
  float fVar1;
  float fVar2;
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  CEventList *pCVar6;
  int *piVar7;
  char *local_14;
  
  this_ptr->current_event_count = this_ptr->event_count;
  piVar7 = this_ptr->current_event_list;
  pCVar6 = this_ptr;
  for (iVar4 = 800; pCVar6 = (CEventList *)pCVar6->event_list, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *(int *)pCVar6;
    piVar7 = piVar7 + 1;
  }
  for (iVar4 = 0; pCVar3 = g_CGamePtr, iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar7 = (char)pCVar6->event_count;
    pCVar6 = (CEventList *)((int)pCVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  this_ptr->event_count = 0;
  fVar1 = pCVar3->delta_time_float;
  iVar4 = 0;
  if (0 < this_ptr->timer_count) {
    piVar7 = &this_ptr->timer_list;
    local_14 = this_ptr->unk5 + 0x1c;
    pCVar6 = this_ptr;
    do {
      fVar2 = *(float *)(pCVar6->unk5 + 0x13c) - fVar1;
      *(float *)(pCVar6->unk5 + 0x13c) = fVar2;
      if (fVar2 <= 0.0) {
        iVar5 = this_ptr->timer_count + -1;
        this_ptr->timer_count = iVar5;
        crt_string_c_memmove_FUN_005fe5e0(piVar7,local_14,(iVar5 - iVar4) * 0x20);
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->unk6 + iVar4 * 4 + -0x2c,this_ptr->unk6 + iVar4 * 4 + -0x28,
                   (this_ptr->timer_count - iVar4) * 4);
      }
      else {
        piVar7 = piVar7 + 8;
        iVar4 = iVar4 + 1;
        local_14 = local_14 + 0x20;
        pCVar6 = (CEventList *)pCVar6->event_list;
      }
    } while (iVar4 < this_ptr->timer_count);
  }
  return;
}
