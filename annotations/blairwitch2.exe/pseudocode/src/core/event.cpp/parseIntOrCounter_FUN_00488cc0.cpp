// Name: core_event.cpp_parseIntOrCounter_FUN_00488cc0
// Address: 00488cc0
// Address Range: [[00488cc0, 00488cfd]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseIntOrCounter_FUN_00488cc0(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseIntOrCounter_FUN_00488cc0(char *str)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = sscanf(str,&DAT_005d2e3b);
  if (iVar1 == 1) {
    return iStack_4;
  }
  iVar1 = core_event_cpp_CEventList_getCounterValue_FUN_00491510(0x01C38BC0,str);
  return iVar1;
}
