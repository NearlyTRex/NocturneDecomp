// Name: core_event.cpp_FUN_004aae0e
// Address: 004aae0e
// Address Range: [[004aae0e, 004aaed4]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004aae0e(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_004aae0e(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\core\\event.cpp";
    _DAT_01d1d404 = 0x1046;
    core_main_c_FUN_005030e0("CRuleList::remove - invalid index");
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  memmove
            (param_1 + param_2 * 0x19 + 1,param_1 + (param_2 + 1) * 0x19 + 1,
             ((iVar1 + -1) - param_2) * 100);
  memmove
            (param_1 + param_2 * 0x19 + 0x7e,param_1 + (param_2 + 1) * 0x19 + 0x7e,
             (*param_1 - param_2) * 100);
  return;
}
