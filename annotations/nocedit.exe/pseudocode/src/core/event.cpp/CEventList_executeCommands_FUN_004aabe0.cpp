// Name: core_event.cpp_CEventList_executeCommands_FUN_004aabe0
// Address: 004aabe0
// Address Range: [[004aabe0, 004aabfc]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004aabe0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004aabe0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  g_EventDryRun = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004aac00(this_ptr,commands);
  return iVar1;
}
