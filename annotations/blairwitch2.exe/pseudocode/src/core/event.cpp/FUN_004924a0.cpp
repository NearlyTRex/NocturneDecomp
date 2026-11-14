// Name: core_event.cpp_FUN_004924a0
// Address: 004924a0
// Address Range: [[004924a0, 00492564]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004924a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_event_cpp_FUN_004924a0(void)

{
  int iVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 <= in_stack_00000008)) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0x1001;
    core_main_c_FUN_004e4500("CRuleList::remove - invalid index");
  }
  iVar1 = *in_stack_00000004;
  *in_stack_00000004 = iVar1 + -1;
  memmove
            (in_stack_00000004 + in_stack_00000008 * 0x19 + 1,
             in_stack_00000004 + (in_stack_00000008 + 1) * 0x19 + 1,
             ((iVar1 + -1) - in_stack_00000008) * 100);
  memmove
            (in_stack_00000004 + in_stack_00000008 * 0x19 + 0x7e,
             in_stack_00000004 + (in_stack_00000008 + 1) * 0x19 + 0x7e,
             (*in_stack_00000004 - in_stack_00000008) * 100);
  return;
}
