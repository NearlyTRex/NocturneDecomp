// Name: core_event.cpp_FUN_00495c90
// Address: 00495c90
// Address Range: [[00495c90, 00495d54]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_00495c90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_event_cpp_FUN_00495c90(void)

{
  int iVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 <= in_stack_00000008)) {
    _DAT_01d71de0 = "..\\core\\event.cpp";
    _DAT_01d71de4 = 0x10f8;
    core_main_c_FUN_004e4330("CRuleList::remove - invalid index");
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
