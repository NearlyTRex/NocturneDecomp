// Name: core_event.cpp_CEventList_FUN_004b0c40
// Address: 004b0c40
// Address Range: [[004b0c40, 004b0c76]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004b0c40(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0c40(CEventList *this_ptr)

{
  int iVar1;
  
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  iVar1 = core_event_cpp_CEventList_FUN_004b0d60(this_ptr);
  if (-1 < iVar1) {
    return this_ptr[1].event_list[iVar1 * 0x48];
  }
  return 0;
}
