// Name: core_event.cpp_FUN_004b18e0
// Address: 004b18e0
// Address Range: [[004b18e0, 004b1924]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004b18e0(int *param_1)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004b18e0(int *param_1)

{
  int iVar1;
  
  iVar1 = core_event_cpp_FUN_004b1890(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  return 1;
}
