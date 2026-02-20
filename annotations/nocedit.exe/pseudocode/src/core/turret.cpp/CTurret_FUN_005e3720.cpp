// Name: core_turret.cpp_CTurret_FUN_005e3720
// Address: 005e3720
// Address Range: [[005e3720, 005e3745]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_FUN_005e3720(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e3720(CTurret *this_ptr)

{
  float *in_stack_00000008;
  
  *in_stack_00000008 = (this_ptr->barrel_tip_pos).x;
  in_stack_00000008[1] = (this_ptr->barrel_tip_pos).y;
  in_stack_00000008[2] = (this_ptr->barrel_tip_pos).z;
  return (int)in_stack_00000008;
}
