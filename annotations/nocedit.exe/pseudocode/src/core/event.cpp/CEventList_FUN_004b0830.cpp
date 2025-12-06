// Name: core_event.cpp_CEventList_FUN_004b0830
// Address: 004b0830
// Address Range: [[004b0830, 004b085a]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0830(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0830(CEventList *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = core_event_cpp_CEventList_FUN_004b0950(this_ptr);
  if (-1 < iVar1) {
    return *(int *)(iVar1 * 4 + in_stack_00000008 + 0x34c0);
  }
  return 0;
}
