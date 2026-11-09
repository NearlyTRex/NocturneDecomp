// Name: core_event.cpp_CEventList_validateCommands_FUN_0048e3e0
// Address: 0048e3e0
// Address Range: [[0048e3e0, 0048e419]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0048e3e0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0048e3e0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    _DAT_01c3dd0c = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_00489510(this_ptr,commands);
    _DAT_01c3dd0c = 0;
    if (iVar1 == 0) {
      return &DAT_01c3dd10;
    }
  }
  return (char *)0x0;
}
