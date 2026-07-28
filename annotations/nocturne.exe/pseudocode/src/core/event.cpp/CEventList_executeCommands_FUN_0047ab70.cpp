// Name: core_event.cpp_CEventList_executeCommands_FUN_0047ab70
// Address: 0047ab70
// Address Range: [[0047ab70, 0047ab8c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0047ab70(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0047ab70(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  _DAT_01c08b5c = 0;
  iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(this_ptr,commands);
  return iVar1;
}
