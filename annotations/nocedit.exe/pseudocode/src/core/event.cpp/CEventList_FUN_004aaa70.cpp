// Name: core_event.cpp_CEventList_FUN_004aaa70
// Address: 004aaa70
// Address Range: [[004aaa70, 004aaab6]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004aaa70(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004aaa70(CEventList *this_ptr)

{
  this_ptr->current_event_count = 0;
  this_ptr->persistent_event_count = 0;
  this_ptr->timer_count = 0;
  this_ptr->counter_count = 0;
  this_ptr->actor_var_count = 0;
  this_ptr[1].event_count = 0;
  this_ptr->event_count = 0;
  return;
}
