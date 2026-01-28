// Name: core_conveyor.cpp_FUN_00442400
// Address: 00442400
// Address Range: [[00442400, 00442490]]
// Convention: unknown
// Signature: float core_conveyor_cpp_FUN_00442400(void)

#include "nocturne.h"

float core_conveyor_cpp_FUN_00442400(void)

{
  double dVar1;
  float in_stack_00000004;
  float in_stack_00000008;
  uint uVar2;
  uint local_18;
  
  local_18 = SUB84((double)in_stack_00000004,0);
  if ((double)in_stack_00000004 < 0.0) {
    uVar2 = (uint)((ulonglong)(double)(-in_stack_00000004 / in_stack_00000008) >> 0x20);
    dVar1 = crt_math_c_floor_FUN_005feb90((double)(-in_stack_00000004 / in_stack_00000008));
    in_stack_00000004 = (float)dVar1 * in_stack_00000008 + (float)(double)CONCAT44(local_18,uVar2);
    if (in_stack_00000004 < 0.0) {
      in_stack_00000004 = in_stack_00000004 + in_stack_00000008;
    }
    return in_stack_00000004;
  }
  uVar2 = (uint)((ulonglong)(double)(in_stack_00000004 / in_stack_00000008) >> 0x20);
  dVar1 = crt_math_c_floor_FUN_005feb90((double)(in_stack_00000004 / in_stack_00000008));
  return (float)(double)CONCAT44(local_18,uVar2) - (float)dVar1 * in_stack_00000008;
}
