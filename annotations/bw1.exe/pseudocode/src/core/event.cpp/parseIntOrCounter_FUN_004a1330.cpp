// Name: core_event.cpp_parseIntOrCounter_FUN_004a1330
// Address: 004a1330
// Address Range: [[004a1330, 004a136d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseIntOrCounter_FUN_004a1330(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseIntOrCounter_FUN_004a1330(char *str)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = sscanf(str,&DAT_005dcbd4);
  if (iVar1 == 1) {
    return iStack_4;
  }
  iVar1 = core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(0x01C51D80,str);
  return iVar1;
}
