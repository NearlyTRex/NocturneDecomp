// Name: core_event.cpp_CRuleList_remove_FUN_00495c90
// Address: 00495c90
// Address Range: [[00495c90, 00495d54]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_remove_FUN_00495c90(CRuleList *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_remove_FUN_00495c90(CRuleList *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (this_ptr->list_size <= index)) {
    g_CHAR_PTR_01d71de0 = "..\\core\\event.cpp";
    g_INT_01d71de4 = 0x10f8;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CRuleList::remove - invalid index");
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
