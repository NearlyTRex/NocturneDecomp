// Name: core_dest.cpp_FUN_0046fcc0
// Address: 0046fcc0
// Address Range: [[0046fcc0, 0046fd4b]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046fcc0()

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_FUN_0046fcc0(uint param_1, uint param_2)
    */

uint * core_dest_cpp_FUN_0046fcc0(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x158) == 0) {
    *in_stack_00000008 = 0xbf800000;
    in_stack_00000008[1] = 0xbdcccccd;
    in_stack_00000008[2] = 0xbf800000;
    in_stack_00000008[3] = 0x3f800000;
    in_stack_00000008[4] = 0x40066666;
    in_stack_00000008[5] = 0x3f800000;
    return in_stack_00000008;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x158) + 0x154) + 0x14))();
  return in_stack_00000008;
}
