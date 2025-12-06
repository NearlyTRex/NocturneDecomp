// Name: core_event.cpp_FUN_004aa3c0
// Address: 004aa3c0
// Address Range: [[004aa3c0, 004aa3fd]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa3c0()

#include "nocturne.h"

int core_event_cpp_FUN_004aa3c0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  char *in_stack_00000004;
  
  iVar1 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000004,"%d",&stack0xfffffffc);
  if (iVar1 == 1) {
    return unaff_retaddr;
  }
  iVar1 = core_event_cpp_CEventList_FUN_004b0830(g_CEventListPtr);
  return iVar1;
}
