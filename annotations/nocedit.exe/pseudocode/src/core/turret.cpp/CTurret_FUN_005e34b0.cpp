// Name: core_turret.cpp_CTurret_FUN_005e34b0
// Address: 005e34b0
// Address Range: [[005e34b0, 005e34cf]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e34b0(CTurret * this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e34b0(CTurret *this_ptr)

{
  uint in_stack_00000008;
  
  if (*(int *)this_ptr->unk4 != 0) {
    return 0;
  }
  *(uint *)this_ptr->unk4 = in_stack_00000008;
  return 1;
}
