// Name: core_cloth.cpp_FUN_0043c2d0
// Address: 0043c2d0
// Address Range: [[0043c2d0, 0043c316]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c2d0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043c2d0(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6) */

void core_cloth_cpp_FUN_0043c2d0(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_FUN_0043ab80();
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}
