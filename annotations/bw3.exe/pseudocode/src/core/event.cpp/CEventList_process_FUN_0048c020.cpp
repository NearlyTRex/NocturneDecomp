// Name: core_event.cpp_CEventList_process_FUN_0048c020
// Address: 0048c020
// Address Range: [[0048c020, 0048c148]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_process_FUN_0048c020(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_process_FUN_0048c020(CEventList *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  CGame *pCVar4;
  CEventList *pCVar5;
  int iVar6;
  CEventList *pCVar7;
  CEventList *local_14;
  
  *(uint *)(this_ptr + 0xc84) = *(uint *)this_ptr;
  pCVar5 = this_ptr + 0xc88;
  pCVar7 = this_ptr;
  for (iVar6 = 800; pCVar7 = pCVar7 + 4, iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pCVar5 = *(uint *)pCVar7;
    pCVar5 = pCVar5 + 4;
  }
  for (iVar6 = 0; pCVar4 = g_CGamePtr, iVar6 != 0; iVar6 = iVar6 + -1) {
    *pCVar5 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    pCVar5 = pCVar5 + 1;
  }
  *(uint *)this_ptr = 0;
  fVar1 = pCVar4->delta_time_float;
  iVar6 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    pCVar5 = this_ptr + 0x3214;
    local_14 = this_ptr + 0x3234;
    pCVar7 = this_ptr;
    do {
      fVar3 = *(float *)(pCVar7 + 0x3354) - fVar1;
      *(float *)(pCVar7 + 0x3354) = fVar3;
      if (0.0 < fVar3) {
        pCVar5 = pCVar5 + 0x20;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x20;
        pCVar7 = pCVar7 + 4;
      }
      else {
        iVar2 = *(int *)(this_ptr + 0x3210);
        *(int *)(this_ptr + 0x3210) = iVar2 + -1;
        memmove(pCVar5,local_14,((iVar2 + -1) - iVar6) * 0x20);
        memmove
                  (this_ptr + iVar6 * 4 + 0x3354,this_ptr + iVar6 * 4 + 0x3358,
                   (*(int *)(this_ptr + 0x3210) - iVar6) * 4);
      }
    } while (iVar6 < *(int *)(this_ptr + 0x3210));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280(this_ptr);
  return;
}
