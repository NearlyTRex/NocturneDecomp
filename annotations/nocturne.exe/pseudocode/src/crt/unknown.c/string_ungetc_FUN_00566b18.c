// Name: crt_unknown.c_string_ungetc_FUN_00566b18
// Address: 00566b18
// Address Range: [[00566b18, 00566b1f]]
// Convention: unknown
// Signature: void crt_unknown_c_string_ungetc_FUN_00566b18(undefined4 param_1,int param_2)

#include "nocturne.h"

void string_ungetc(uint param_1,int param_2)

{
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  return;
}
