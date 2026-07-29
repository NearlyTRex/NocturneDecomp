// Name: core_event.cpp_parseIntOrCounter_FUN_0047a350
// Address: 0047a350
// Address Range: [[0047a350, 0047a38d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseIntOrCounter_FUN_0047a350(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseIntOrCounter_FUN_0047a350(char *str)

{
  int iVar1;
  int local_4;
  
  iVar1 = sscanf(str,"%d");
  if (iVar1 == 1) {
    return local_4;
  }
  iVar1 = core_event_cpp_CEventList_getCounterValue_FUN_004807e0(0x01C03A10,str);
  return iVar1;
}
