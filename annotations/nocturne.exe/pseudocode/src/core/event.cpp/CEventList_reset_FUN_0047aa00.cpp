// Name: core_event.cpp_CEventList_reset_FUN_0047aa00
// Address: 0047aa00
// Address Range: [[0047aa00, 0047aa46]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_reset_FUN_0047aa00(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_reset_FUN_0047aa00(CEventList *this_ptr)

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
