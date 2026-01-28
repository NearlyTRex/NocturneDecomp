// Name: core_cloth.cpp_FUN_0043c290
// Address: 0043c290
// Address Range: [[0043c290, 0043c2ce]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c290(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043c290(uint param_1, uint param_2,
   uint param_3, uint param_4) */

void core_cloth_cpp_FUN_0043c290(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_FUN_00439710();
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}
