// Name: shape_superopt.cpp_FUN_005c79f0
// Address: 005c79f0
// Address Range: [[005c79f0, 005c7a89]]
// Convention: unknown
// Signature: void shape_superopt_cpp_FUN_005c79f0(void)

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c79f0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  if ((void *)in_stack_00000004[1] != (void *)0x0) {
    free((void *)in_stack_00000004[1]);
  }
  in_stack_00000004[1] = 0;
  uVar2 = 0;
  if (in_stack_00000004[2] != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      iVar3 = iVar3 + 8;
      uVar2 = uVar2 + 1;
      shape_memdbg_cpp_free_FUN_005fe659(*(void **)(iVar1 + in_stack_00000004[3]));
    } while (uVar2 < (uint)in_stack_00000004[2]);
  }
  in_stack_00000004[2] = 0;
  if ((void *)in_stack_00000004[3] != (void *)0x0) {
    free((void *)in_stack_00000004[3]);
  }
  in_stack_00000004[3] = 0;
  in_stack_00000004[0xb] = 0;
  shape_memdbg_cpp_free_FUN_005fe659((void *)in_stack_00000004[0xc]);
  in_stack_00000004[0xc] = 0;
  return;
}
