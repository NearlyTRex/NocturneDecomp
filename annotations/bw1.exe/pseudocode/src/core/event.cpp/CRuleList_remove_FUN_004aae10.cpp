// Name: core_event.cpp_CRuleList_remove_FUN_004aae10
// Address: 004aae10
// Address Range: [[004aae10, 004aaed4]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_remove_FUN_004aae10(CRuleList *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_remove_FUN_004aae10(CRuleList *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (this_ptr->list_size <= index)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 4166;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CRuleList::remove - invalid index");
  }
  iVar1 = this_ptr->list_size + -1;
  this_ptr->list_size = iVar1;
  memmove
            (this_ptr->conditions + index,this_ptr->conditions + index + 1,(iVar1 - index) * 100);
  memmove
            (this_ptr->events + index,this_ptr->events + index + 1,
             (this_ptr->list_size - index) * 100);
  return;
}
