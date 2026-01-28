// Name: core_morph.cpp_FUN_0052cd30
// Address: 0052cd30
// Address Range: [[0052cd30, 0052cd48]]
// Convention: unknown
// Signature: void core_morph_cpp_FUN_0052cd30(void)

#include "nocturne.h"

void core_morph_cpp_FUN_0052cd30(void)

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
