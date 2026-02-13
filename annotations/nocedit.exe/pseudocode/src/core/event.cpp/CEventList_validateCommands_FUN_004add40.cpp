// Name: core_event.cpp_CEventList_validateCommands_FUN_004add40
// Address: 004add40
// Address Range: [[004add40, 004add79]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004add40(CEventList *this_ptr,char *commands)

#include "nocturne.h"

char * __cdecl
core_event_cpp_CEventList_validateCommands_FUN_004add40(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    g_EventDryRun = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004aac00(this_ptr,commands);
    g_EventDryRun = 0;
    if (iVar1 == 0) {
      return g_EventErrorMessageBuffer;
    }
  }
  return (char *)0x0;
}
