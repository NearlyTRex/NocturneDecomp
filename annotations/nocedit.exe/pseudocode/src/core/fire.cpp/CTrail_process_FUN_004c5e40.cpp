// Name: core_fire.cpp_CTrail_process_FUN_004c5e40
// Address: 004c5e40
// Address Range: [[004c5e40, 004c5e8a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_process_FUN_004c5e40(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_process_FUN_004c5e40(CTrail *this_ptr)

{
  if (0.0 < this_ptr->lifetime) {
    this_ptr->lifetime = this_ptr->lifetime - g_CGamePtr->delta_time_float;
    if (0.0 <= this_ptr->lifetime) {
      this_ptr->current_alpha =
           (1.0 - (this_ptr->initial_lifetime - this_ptr->lifetime) / this_ptr->initial_lifetime) *
           this_ptr->initial_alpha;
      return;
    }
    this_ptr->lifetime = 0.0;
  }
  return;
}
