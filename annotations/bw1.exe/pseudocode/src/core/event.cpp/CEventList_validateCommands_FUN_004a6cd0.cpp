// Name: core_event.cpp_CEventList_validateCommands_FUN_004a6cd0
// Address: 004a6cd0
// Address Range: [[004a6cd0, 004a6d09]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004a6cd0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    g_EventDryRun = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004a1b90(this_ptr,commands);
    g_EventDryRun = 0;
    if (iVar1 == 0) {
      return g_EventErrorMessageBuffer;
    }
  }
  return (char *)0x0;
}
