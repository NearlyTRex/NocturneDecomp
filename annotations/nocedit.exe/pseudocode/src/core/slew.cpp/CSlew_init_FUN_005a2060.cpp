// Name: core_slew.cpp_CSlew_init_FUN_005a2060
// Address: 005a2060
// Address Range: [[005a2060, 005a209f]]
// Convention: __cdecl
// Signature: void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr)

{
  (this_ptr->position).z = 0.0;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->position).x = (this_ptr->position).y;
  this_ptr->roll = 0.0;
  this_ptr->yaw = this_ptr->roll;
  this_ptr->pitch = this_ptr->yaw;
  this_ptr->slew_rate = 28.0;
  return;
}
