// Name: core_event.cpp_parseIntOrCounter_FUN_0048b910
// Address: 0048b910
// Address Range: [[0048b910, 0048b94d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseIntOrCounter_FUN_0048b910(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseIntOrCounter_FUN_0048b910(char *str)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = sscanf(str,&DAT_005bddc8);
  if (iVar1 == 1) {
    return iStack_4;
  }
  iVar1 = core_event_cpp_CEventList_getCounterValue_FUN_00494d00(0x01C6E360,str);
  return iVar1;
}
