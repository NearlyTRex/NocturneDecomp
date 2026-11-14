// Name: core_event.cpp_CEventList_reset_FUN_004a19f0
// Address: 004a19f0
// Address Range: [[004a19f0, 004a1a36]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_reset_FUN_004a19f0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_reset_FUN_004a19f0(CEventList *this_ptr)

{
  (this_ptr->current_events).count = 0;
  (this_ptr->persistent_events).count = 0;
  (this_ptr->timers).count = 0;
  (this_ptr->counters).count = 0;
  (this_ptr->actor_vars).count = 0;
  (this_ptr->sfx_handles).count = 0;
  (this_ptr->events).count = 0;
  return;
}
