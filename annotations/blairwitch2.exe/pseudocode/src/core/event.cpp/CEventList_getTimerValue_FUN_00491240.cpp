// Name: core_event.cpp_CEventList_getTimerValue_FUN_00491240
// Address: 00491240
// Address Range: [[00491240, 00491272]]
// Convention: __cdecl
// Signature: float __cdecl core_event_cpp_CEventList_getTimerValue_FUN_00491240(CEventList *this_ptr,int timer_index)

#include "nocturne.h"

float __cdecl core_event_cpp_CEventList_getTimerValue_FUN_00491240(CEventList *this_ptr,int timer_index)

{
  if (timer_index == -1) {
    return -1.0;
  }
  return (this_ptr->timers).durations[timer_index];
}
