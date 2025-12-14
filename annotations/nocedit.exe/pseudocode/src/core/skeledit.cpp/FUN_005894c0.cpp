// Name: core_skeledit.cpp_FUN_005894c0
// Address: 005894c0
// Address Range: [[005894c0, 005894f1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005894c0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_005894c0(void)

{
  int iVar1;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  do {
    if (in_stack_00000010 < 1) {
      return;
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    in_stack_00000010 = in_stack_00000010 + -1;
  } while( true );
}
