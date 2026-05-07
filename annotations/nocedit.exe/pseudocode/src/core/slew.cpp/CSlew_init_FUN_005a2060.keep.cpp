// Name: core_slew.cpp_CSlew_init_FUN_005a2060
// Address: 005a2060
// MANUAL RECONSTRUCTION
// Address Range: [[005a2060, 005a209f]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr)

{
  (this_ptr->position).x = 0.0f;
  (this_ptr->position).y = 0.0f;
  (this_ptr->position).z = 0.0f;
  (this_ptr->orientation).vec.x = 0.0f;
  (this_ptr->orientation).vec.y = 0.0f;
  (this_ptr->orientation).vec.z = 0.0f;
  this_ptr->slew_rate = 28.0;
  return;
}
