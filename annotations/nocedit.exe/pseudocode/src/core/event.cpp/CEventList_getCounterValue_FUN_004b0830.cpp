// Name: core_event.cpp_CEventList_getCounterValue_FUN_004b0830
// Address: 004b0830
// Address Range: [[004b0830, 004b085a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004b0830(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004b0830(CEventList *this_ptr,char *str)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_findCounter_FUN_004b0950(this_ptr,str);
  if (-1 < iVar1) {
    return (this_ptr->counters).values[iVar1];
  }
  return 0;
}
