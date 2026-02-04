// Name: core_turret.cpp_CTurret_FUN_005e3720
// Address: 005e3720
// Address Range: [[005e3720, 005e3745]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_FUN_005e3720(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e3720(CTurret *this_ptr)

{
  uint *in_stack_00000008;
  
  *in_stack_00000008 = *(uint *)this_ptr->unk5;
  in_stack_00000008[1] = *(uint *)(this_ptr->unk5 + 4);
  in_stack_00000008[2] = *(uint *)(this_ptr->unk5 + 8);
  return (int)in_stack_00000008;
}
