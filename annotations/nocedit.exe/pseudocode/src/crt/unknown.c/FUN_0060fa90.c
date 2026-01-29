// Name: crt_unknown.c_FUN_0060fa90
// Address: 0060fa90
// Address Range: [[0060fa90, 0060fab7]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fa90(void)

#include "nocturne.h"

int crt_unknown_c_FUN_0060fa90(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = mbstring_termination_check(in_stack_00000004);
    if (iVar1 != 0) break;
    in_stack_00000004 = mbtowc_next(in_stack_00000004);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
