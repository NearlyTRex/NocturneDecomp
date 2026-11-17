// Name: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
// Address: 0047dcd0
// Address Range: [[0047dcd0, 0047dd09]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    g_EventDryRun = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(this_ptr,commands);
    g_EventDryRun = 0;
    if (iVar1 == 0) {
      return g_EventErrorMessageBuffer;
    }
  }
  return (char *)0x0;
}
