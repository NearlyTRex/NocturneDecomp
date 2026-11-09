// Name: core_event.cpp_CEventList_getCounterValue_FUN_00494d00
// Address: 00494d00
// Address Range: [[00494d00, 00494d2a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_00494d00(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_00494d00(CEventList *this_ptr,char *str)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_findCounter_FUN_00494e20(this_ptr,str);
  if (-1 < iVar1) {
    return *(int *)(this_ptr + iVar1 * 4 + 0x34c0);
  }
  return 0;
}
