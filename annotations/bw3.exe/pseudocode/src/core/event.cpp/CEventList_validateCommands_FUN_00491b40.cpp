// Name: core_event.cpp_CEventList_validateCommands_FUN_00491b40
// Address: 00491b40
// Address Range: [[00491b40, 00491b79]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_00491b40(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_00491b40(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    _DAT_01c734ac = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0048c170(this_ptr,commands);
    _DAT_01c734ac = 0;
    if (iVar1 == 0) {
      return &DAT_01c734b0;
    }
  }
  return (char *)0x0;
}
