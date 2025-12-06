// Name: core_turret.cpp_CTurret_FUN_005e3540
// Address: 005e3540
// Address Range: [[005e3540, 005e355b]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3540(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3540(CTurret *this_ptr)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->field12_0x85c) {
    return;
  }
  this_ptr->field12_0x85c[0] = '\0';
  this_ptr->field12_0x85c[1] = '\0';
  this_ptr->field12_0x85c[2] = '\0';
  this_ptr->field12_0x85c[3] = '\0';
  return;
}
