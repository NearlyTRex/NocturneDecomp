// Name: core_event.cpp_CEventList_FUN_004b0830
// Address: 004b0830
// Address Range: [[004b0830, 004b085a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004b0830(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0830(CEventList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_FUN_004b0950(this_ptr);
  if (-1 < iVar1) {
    return *(int *)(this_ptr->variablesVarName1 + iVar1 * 4 + -0x2c);
  }
  return 0;
}
