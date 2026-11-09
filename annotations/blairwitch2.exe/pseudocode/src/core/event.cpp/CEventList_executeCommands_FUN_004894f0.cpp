// Name: core_event.cpp_CEventList_executeCommands_FUN_004894f0
// Address: 004894f0
// Address Range: [[004894f0, 0048950c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004894f0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004894f0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  _DAT_01c3dd0c = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_00489510(this_ptr,commands);
  return iVar1;
}
