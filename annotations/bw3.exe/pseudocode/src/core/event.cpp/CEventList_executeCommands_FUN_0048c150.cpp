// Name: core_event.cpp_CEventList_executeCommands_FUN_0048c150
// Address: 0048c150
// Address Range: [[0048c150, 0048c16c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0048c150(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0048c150(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  _DAT_01c734ac = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0048c170(this_ptr,commands);
  return iVar1;
}
