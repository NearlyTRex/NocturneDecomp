// Name: core_slew.cpp_CSlew_init_FUN_00549380
// Address: 00549380
// Address Range: [[00549380, 005493c0]]
// Convention: __cdecl
// Signature: undefined8 __cdecl core_slew_cpp_CSlew_init_FUN_00549380(CSlew *this_ptr)

#include "nocturne.h"

ulonglong __cdecl core_slew_cpp_CSlew_init_FUN_00549380(CSlew *this_ptr)

{
  (this_ptr->position).z = 0.0;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->position).x = (this_ptr->position).y;
  (this_ptr->orientation).vec.z = 0.0;
  (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.z;
  (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.y;
  this_ptr->slew_rate = 28.0;
  return CONCAT44(this_ptr,&this_ptr->orientation);
}
