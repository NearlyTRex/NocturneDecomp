// Name: core_event.cpp_CEventList_validateCommands_FUN_004a6cd0
// Address: 004a6cd0
// Address Range: [[004a6cd0, 004a6d09]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    _DAT_01c56ecc = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004a1b90(this_ptr,commands);
    _DAT_01c56ecc = 0;
    if (iVar1 == 0) {
      return &DAT_01c56ed0;
    }
  }
  return (char *)0x0;
}
