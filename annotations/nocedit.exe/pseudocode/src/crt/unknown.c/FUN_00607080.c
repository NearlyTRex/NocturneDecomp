// Name: crt_unknown.c_FUN_00607080
// Address: 00607080
// Address Range: [[00607080, 006070c5]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00607080(void)

#include "nocturne.h"

/* Signature: byte FUN_00607080(uint param_1, uint param_2) */

void crt_unknown_c_FUN_00607080(void)

{
  byte bVar1;
  void *in_stack_00000004;
  byte *in_stack_00000008;
  
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004,0,0x20);
  bVar1 = *in_stack_00000008;
  if (bVar1 == 0) {
    return;
  }
  do {
    in_stack_00000008 = in_stack_00000008 + 1;
    *(byte *)(((int)(uint)bVar1 >> 3) + (int)in_stack_00000004) =
         *(byte *)(((int)(uint)bVar1 >> 3) + (int)in_stack_00000004) | (&DAT_00665f28)[bVar1 & 7];
    bVar1 = *in_stack_00000008;
  } while (bVar1 != 0);
  return;
}
