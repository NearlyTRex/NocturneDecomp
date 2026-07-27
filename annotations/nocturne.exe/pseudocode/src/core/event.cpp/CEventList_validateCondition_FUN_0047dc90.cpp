// Name: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
// Address: 0047dc90
// Address Range: [[0047dc90, 0047dcc9]]
// Convention: __cdecl
// Signature: undefined * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(uint param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    _DAT_01c08b5c = 1;
    iVar1 = core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(param_1,param_2);
    _DAT_01c08b5c = 0;
    if (iVar1 < 0) {
      return &DAT_01c08b60;
    }
  }
  return (byte *)0x0;
}
