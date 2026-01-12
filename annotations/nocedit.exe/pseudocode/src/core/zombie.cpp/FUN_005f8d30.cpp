// Name: core_zombie.cpp_FUN_005f8d30
// Address: 005f8d30
// Address Range: [[005f8d30, 005f8d9d]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8d30()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_zombie_cpp_FUN_005f8d30(void)

{
  float fVar1;
  float *in_stack_00000004;
  int in_stack_00000008;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
  fVar1 = _DAT_0065843d;
  *in_stack_00000004 = (fStack_2c + fStack_20) * _DAT_0065843d;
  in_stack_00000004[1] = fVar1 * (fStack_28 + fStack_1c);
  in_stack_00000004[2] = fStack_24 + (float)_DAT_00658445;
  return in_stack_00000004;
}
