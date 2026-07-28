// Name: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
// Address: 0047dcd0
// Address Range: [[0047dcd0, 0047dd09]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList *this_ptr,char *commands)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList *this_ptr,char *commands)

{
  int iVar1;
  
  if (*commands != '\0') {
    _DAT_01c08b5c = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(this_ptr,commands);
    _DAT_01c08b5c = 0;
    if (iVar1 == 0) {
      return &DAT_01c08b60;
    }
  }
  return (char *)0x0;
}
