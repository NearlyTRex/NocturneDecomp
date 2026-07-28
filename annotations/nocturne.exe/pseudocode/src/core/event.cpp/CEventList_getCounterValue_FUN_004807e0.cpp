// Name: core_event.cpp_CEventList_getCounterValue_FUN_004807e0
// Address: 004807e0
// Address Range: [[004807e0, 0048080a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004807e0(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004807e0(CEventList *this_ptr,char *str)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_findCounter_FUN_00480900(this_ptr,str);
  if (-1 < iVar1) {
    return (this_ptr->counters).values[iVar1];
  }
  return 0;
}
