// Name: core_tvbat.cpp_FUN_005e5100
// Address: 005e5100
// Address Range: [[005e5100, 005e512e]]
// Convention: unknown
// Signature: int core_tvbat_cpp_FUN_005e5100(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_tvbat.cpp_FUN_005e5100(uint param_1) */

int core_tvbat_cpp_FUN_005e5100(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(in_stack_00000004 + 0xc078);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
