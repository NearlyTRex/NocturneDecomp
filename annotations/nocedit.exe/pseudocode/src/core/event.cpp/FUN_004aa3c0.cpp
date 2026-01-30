// Name: core_event.cpp_FUN_004aa3c0
// Address: 004aa3c0
// Address Range: [[004aa3c0, 004aa3fd]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004aa3c0(char *param_1)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004aa3c0(char *param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = sscanf(param_1,"%d",&local_4);
  if (iVar1 == 1) {
    return local_4;
  }
  iVar1 = core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  return iVar1;
}
