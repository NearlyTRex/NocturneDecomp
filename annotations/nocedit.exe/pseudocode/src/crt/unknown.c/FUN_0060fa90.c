// Name: crt_unknown.c_FUN_0060fa90
// Address: 0060fa90
// Address Range: [[0060fa90, 0060fab7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fa90()

#include "nocturne.h"

int crt_unknown_c_FUN_0060fa90(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(in_stack_00000004);
    if (iVar1 != 0) break;
    in_stack_00000004 = crt_string_c_mbtowc_next_FUN_00605a70(in_stack_00000004);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
