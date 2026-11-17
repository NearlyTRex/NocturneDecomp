// Name: core_event.cpp_CEventList_executeCommands_FUN_004a1b70
// Address: 004a1b70
// Address Range: [[004a1b70, 004a1b8c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004a1b70(CEventList *this_ptr,char *commands)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004a1b70(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  g_EventDryRun = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004a1b90(this_ptr,commands);
  return iVar1;
}
