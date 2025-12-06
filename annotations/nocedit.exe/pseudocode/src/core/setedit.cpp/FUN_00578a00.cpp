// Name: core_setedit.cpp_FUN_00578a00
// Address: 00578a00
// Address Range: [[00578a00, 00578a18]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578a00()

#include "nocturne.h"

void core_setedit_cpp_FUN_00578a00(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000004);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
