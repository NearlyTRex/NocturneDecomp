// Name: core_setutil.cpp_CSlew_copy_FUN_00585240
// Address: 00585240
// Address Range: [[00585240, 0058528d]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_CSlew_copy_FUN_00585240(CSlew *this_ptr,CSlew *other)

#include "nocturne.h"

void __cdecl core_setutil_cpp_CSlew_copy_FUN_00585240(CSlew *this_ptr,CSlew *other)

{
  (this_ptr->position).x = (other->position).x;
  (this_ptr->position).y = (other->position).y;
  (this_ptr->position).z = (other->position).z;
  this_ptr->pitch = other->pitch;
  this_ptr->yaw = other->yaw;
  this_ptr->roll = other->roll;
  this_ptr->slew_rate = other->slew_rate;
  return;
}
