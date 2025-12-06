// Name: crt_unknown.c_FUN_006107c0
// Address: 006107c0
// Address Range: [[006107c0, 006107ec]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006107c0()

#include "nocturne.h"

short * crt_unknown_c_FUN_006107c0(void)

{
  short sVar1;
  short *in_stack_00000004;
  short in_stack_00000008;
  
  sVar1 = *in_stack_00000004;
  while( true ) {
    if (in_stack_00000008 == sVar1) {
      return in_stack_00000004;
    }
    sVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
    if (sVar1 == 0) break;
    sVar1 = *in_stack_00000004;
  }
  return (short *)0x0;
}
