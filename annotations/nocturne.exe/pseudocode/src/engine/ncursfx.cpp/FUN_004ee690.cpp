// Name: engine_ncursfx.cpp_FUN_004ee690
// Address: 004ee690
// Address Range: [[004ee690, 004ee6b8]]
// Convention: unknown
// Signature: undefined4 engine_ncursfx_cpp_FUN_004ee690(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_ncursfx_cpp_FUN_004ee690(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if (((_DAT_01bd1d94 & in_stack_00000008) != 0) && (*(int *)(in_stack_00000004 + 0x25c) == 0)) {
    *(uint *)(in_stack_00000004 + 0x25c) = 1;
    return 0;
  }
  return 0;
}
