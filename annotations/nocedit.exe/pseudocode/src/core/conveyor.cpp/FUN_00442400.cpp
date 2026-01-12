// Name: core_conveyor.cpp_FUN_00442400
// Address: 00442400
// Address Range: [[00442400, 00442490]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00442400()

#include "nocturne.h"

float core_conveyor_cpp_FUN_00442400(void)

{
  double dVar1;
  float in_stack_00000004;
  float in_stack_00000008;
  uint uStack_14;
  uint local_10;
  
  uStack_14 = SUB84 /* extract 2-byte value */((double)in_stack_00000004,0);
  if ((double)in_stack_00000004 < 0.0) {
    dVar1 = crt_math_c_floor_FUN_005feb90((double)(-in_stack_00000004 / in_stack_00000008));
    local_10 = SUB84 /* extract 2-byte value */(dVar1,0);
    in_stack_00000004 =
         (float)dVar1 * in_stack_00000008 + (float)(double)CONCAT44 /* combine 2-byte values */(local_10,uStack_14);
    if (in_stack_00000004 < 0.0) {
      in_stack_00000004 = in_stack_00000004 + in_stack_00000008;
    }
    return in_stack_00000004;
  }
  dVar1 = crt_math_c_floor_FUN_005feb90((double)(in_stack_00000004 / in_stack_00000008));
  local_10 = SUB84 /* extract 2-byte value */(dVar1,0);
  return (float)(double)CONCAT44 /* combine 2-byte values */(local_10,uStack_14) - (float)dVar1 * in_stack_00000008;
}
