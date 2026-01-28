// Name: core_event.cpp_CRuleList_remove_FUN_004b17c0
// Address: 004b17c0
// Address Range: [[004b17c0, 004b1884]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (this_ptr->list_size <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::remove - invalid index");
  }
  iVar1 = this_ptr->list_size + -1;
  this_ptr->list_size = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr + in_stack_00000008 * 0x19 + 1,this_ptr + (in_stack_00000008 + 1) * 0x19 + 1,
             (iVar1 - in_stack_00000008) * 100);
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr + in_stack_00000008 * 0x19 + 0x7e,
             this_ptr + (in_stack_00000008 + 1) * 0x19 + 0x7e,
             (this_ptr->list_size - in_stack_00000008) * 100);
  return;
}
