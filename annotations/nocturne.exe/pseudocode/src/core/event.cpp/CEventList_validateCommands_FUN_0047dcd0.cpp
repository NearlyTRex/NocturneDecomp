// Name: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
// Address: 0047dcd0
// Address Range: [[0047dcd0, 0047dd09]]
// Convention: __cdecl
// Signature: undefined1 * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(uint param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    _DAT_01c08b5c = 1;
    iVar1 = core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(param_1,param_2);
    _DAT_01c08b5c = 0;
    if (iVar1 == 0) {
      return &DAT_01c08b60;
    }
  }
  return (byte *)0x0;
}
