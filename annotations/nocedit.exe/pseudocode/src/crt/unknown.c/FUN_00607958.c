// Name: crt_unknown.c_FUN_00607958
// Address: 00607958
// Address Range: [[00607958, 006079b0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607958()

#include "nocturne.h"

/* Signature: byte FUN_00607958(uint param_1, uint param_2, uint param_3) */

uint crt_unknown_c_FUN_00607958(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(int *)(in_stack_00000004 + 0x20) == 0) && (*(int *)(in_stack_00000008 + 0x20) == 0)) {
    if (*(int *)(in_stack_00000008 + 0x10) < *(int *)(in_stack_00000004 + 0x10)) {
      return 1;
    }
    if (*(int *)(in_stack_00000004 + 0x10) < *(int *)(in_stack_00000008 + 0x10)) {
      return 0;
    }
  }
  iVar1 = crt_unknown_c_FUN_00607858();
  iVar2 = crt_unknown_c_FUN_00607858();
  if (iVar1 <= iVar2) {
    return 0;
  }
  return 1;
}
