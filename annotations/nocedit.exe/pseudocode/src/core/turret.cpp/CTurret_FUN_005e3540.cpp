// Name: core_turret.cpp_CTurret_FUN_005e3540
// Address: 005e3540
// Address Range: [[005e3540, 005e355b]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e3540(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3540(CTurret *this_ptr)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->unk4) {
    return;
  }
  this_ptr->unk4[0] = '\0';
  this_ptr->unk4[1] = '\0';
  this_ptr->unk4[2] = '\0';
  this_ptr->unk4[3] = '\0';
  return;
}
