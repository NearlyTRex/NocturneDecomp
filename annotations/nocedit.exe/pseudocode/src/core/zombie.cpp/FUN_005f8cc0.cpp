// Name: core_zombie.cpp_FUN_005f8cc0
// Address: 005f8cc0
// Address Range: [[005f8cc0, 005f8d24]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8cc0()

#include "nocturne.h"

float core_zombie_cpp_FUN_005f8cc0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    return 1.0;
  }
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  return (*(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 8)) * (float)0.5 + 1.0;
}
