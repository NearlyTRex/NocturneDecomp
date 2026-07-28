// Name: core_fire.cpp_CTrail_process_FUN_00489310
// Address: 00489310
// Address Range: [[00489310, 0048935a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_process_FUN_00489310(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_process_FUN_00489310(CTrail *this_ptr)

{
  if (0.0 < this_ptr->lifetime) {
    this_ptr->lifetime = this_ptr->lifetime - *(float *)(0x01C775EC + 0x264);
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
