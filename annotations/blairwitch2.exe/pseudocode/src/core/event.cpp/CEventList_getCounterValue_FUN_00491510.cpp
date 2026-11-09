// Name: core_event.cpp_CEventList_getCounterValue_FUN_00491510
// Address: 00491510
// Address Range: [[00491510, 0049153a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_00491510(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_00491510(CEventList *this_ptr,char *str)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_findCounter_FUN_00491630(this_ptr,str);
  if (-1 < iVar1) {
    return *(int *)(this_ptr + iVar1 * 4 + 0x34c0);
  }
  return 0;
}
