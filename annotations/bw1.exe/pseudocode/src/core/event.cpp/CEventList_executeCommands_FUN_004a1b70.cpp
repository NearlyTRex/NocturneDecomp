// Name: core_event.cpp_CEventList_executeCommands_FUN_004a1b70
// Address: 004a1b70
// Address Range: [[004a1b70, 004a1b8c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004a1b70(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004a1b70(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  _DAT_01c56ecc = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_004a1b90(this_ptr,commands);
  return iVar1;
}
