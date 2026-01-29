// Name: core_event.cpp_FUN_004aa3c0
// Address: 004aa3c0
// Address Range: [[004aa3c0, 004aa3fd]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_004aa3c0(void)

#include "nocturne.h"

int core_event_cpp_FUN_004aa3c0(void)

{
  int iVar1;
  char *in_stack_00000004;
  int local_4;
  
  iVar1 = sscanf(in_stack_00000004,"%d",&local_4);
  if (iVar1 == 1) {
    return local_4;
  }
  iVar1 = core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  return iVar1;
}
