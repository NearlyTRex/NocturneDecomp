// Name: core_event.cpp_CRuleList_remove_FUN_004b17c0
// Address: 004b17c0
// MANUAL RECONSTRUCTION
// Address Range: [[004b17c0, 004b1884]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (this_ptr->list_size <= index)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 3311;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::remove - invalid index");
  }
  iVar1 = this_ptr->list_size + -1;
  this_ptr->list_size = iVar1;
  memmove
            (this_ptr->conditions + index,this_ptr->conditions + index + 1,(iVar1 - index) * sizeof(*this_ptr->conditions));
  memmove
            (this_ptr->events + index,this_ptr->events + index + 1,
             (this_ptr->list_size - index) * sizeof(*this_ptr->events));
  return;
}
