// Name: core_event.cpp_parseIntOrCounter_FUN_0047a350
// Address: 0047a350
// Address Range: [[0047a350, 0047a38d]]
// Convention: unknown
// Signature: int core_event_cpp_parseIntOrCounter_FUN_0047a350(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_event_cpp_parseIntOrCounter_FUN_0047a350(void)

{
  int iVar1;
  char *in_stack_00000004;
  uint local_4;
  
  iVar1 = sscanf();
  if (iVar1 == 1) {
    return local_4;
  }
  iVar1 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,in_stack_00000004);
  return iVar1;
}
