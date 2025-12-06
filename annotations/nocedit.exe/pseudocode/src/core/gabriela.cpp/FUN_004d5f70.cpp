// Name: core_gabriela.cpp_FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fd2]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5f70()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5f70(uint param_1) */

int core_gabriela_cpp_FUN_004d5f70(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (((((*(byte *)(in_stack_00000004 + 0x1fbd4) & 2) == 0) ||
       (*(float *)(in_stack_00000004 + 0x1fbdc) < 1.0)) ||
      (*(float *)(in_stack_00000004 + 0x1fc10) < 1.0)) ||
     (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fa68) + 0x154) + 0xfc))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return iVar1;
}
