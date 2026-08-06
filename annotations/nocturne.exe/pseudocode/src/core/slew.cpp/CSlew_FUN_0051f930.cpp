// Name: core_slew.cpp_CSlew_FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051f970]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_FUN_0051f930(CSlew *this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_FUN_0051f930(CSlew *this_ptr)

{
  (this_ptr->position).z = 0.0;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->position).x = (this_ptr->position).y;
  (this_ptr->orientation).vec.z = 0.0;
  (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.z;
  (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.y;
  this_ptr->slew_rate = 28.0;
  return;
}
