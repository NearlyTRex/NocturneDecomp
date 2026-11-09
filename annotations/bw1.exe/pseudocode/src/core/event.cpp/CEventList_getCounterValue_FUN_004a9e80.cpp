// Name: core_event.cpp_CEventList_getCounterValue_FUN_004a9e80
// Address: 004a9e80
// Address Range: [[004a9e80, 004a9eaa]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList *this_ptr,char *str)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_findCounter_FUN_004a9fa0(this_ptr,str);
  if (-1 < iVar1) {
    return *(int *)(this_ptr + iVar1 * 4 + 0x34c0);
  }
  return 0;
}
